/*
 * XREFs of NtAlpcCreateSectionView @ 0x140556558
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1404D03B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x1404D9E8C (AlpcpDeleteView.c)
 *     AlpcpCreateSectionView @ 0x140556764 (AlpcpCreateSectionView.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v7; // rcx
  NTSTATUS SectionView; // ebx
  PVOID v9; // r15
  void *v10; // r14
  ULONG_PTR v11; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v7 = a3;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 31) = *(_BYTE *)(v7 + 31);
    v14 = *(_OWORD *)a3;
    v15 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v14 = *(_OWORD *)a3;
    v15 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v14 || !*((_QWORD *)&v15 + 1) || (_QWORD)v15 )
  {
LABEL_22:
    SectionView = -1073741811;
  }
  else
  {
    SectionView = ObReferenceObjectByHandle(
                    Handle,
                    1u,
                    AlpcPortObjectType,
                    KeGetCurrentThread()->PreviousMode,
                    Object,
                    0LL);
    if ( SectionView >= 0 )
    {
      v9 = Object[0];
      v10 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, SDWORD2(v14), AlpcSectionType);
      Object[1] = v10;
      if ( v10 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v10, v9, (ULONG_PTR)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v11 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v11 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v11);
          }
          else
          {
            v11 = BugCheckParameter2;
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
            *(_QWORD *)(a3 + 24) = *(_QWORD *)(v11 + 48);
          }
          AlpcpDereferenceBlobEx(v11, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v10, 1);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v9);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)SectionView;
}

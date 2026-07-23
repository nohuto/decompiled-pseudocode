/*
 * XREFs of NtAlpcCreateSectionView @ 0x140460B14
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpCreateSectionView @ 0x1404610D4 (AlpcpCreateSectionView.c)
 *     AlpcpDeleteView @ 0x1404618AC (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x140462188 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v7; // rcx
  int SectionView; // ebx
  PVOID v9; // r15
  void *v10; // r14
  ULONG_PTR v11; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  _ALPC_DATA_VIEW_ATTR v14; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v7 = (__int64)ViewAttributes;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 31) = *(_BYTE *)(v7 + 31);
    v14 = *ViewAttributes;
  }
  else
  {
    v14 = *ViewAttributes;
  }
  if ( v14.Flags || !v14.ViewSize || v14.ViewBase )
  {
LABEL_23:
    SectionView = -1073741811;
  }
  else
  {
    SectionView = ObReferenceObjectByHandle(
                    PortHandle,
                    1u,
                    AlpcPortObjectType,
                    KeGetCurrentThread()->PreviousMode,
                    Object,
                    0LL);
    if ( SectionView >= 0 )
    {
      v9 = Object[0];
      v10 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, v14.SectionHandle, &AlpcSectionType);
      Object[1] = v10;
      if ( v10 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v10, (ULONG_PTR)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          if ( PreviousMode )
          {
            v11 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v11 + 48);
            if ( SectionView < 0 )
              AlpcpDeleteView(v11);
          }
          else
          {
            v11 = BugCheckParameter2;
            ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
            ViewAttributes->ViewSize = *(_QWORD *)(v11 + 48);
          }
          AlpcpDereferenceBlobEx(v11);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v10);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v9);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return SectionView;
}

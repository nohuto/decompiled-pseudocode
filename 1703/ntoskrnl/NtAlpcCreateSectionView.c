/*
 * XREFs of NtAlpcCreateSectionView @ 0x140436258
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     AlpcpDeleteView @ 0x14047BCF4 (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CEE0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  int SectionView; // ebx
  PVOID v8; // r15
  void *v9; // r14
  ULONG_PTR v10; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  _ALPC_DATA_VIEW_ATTR v13; // [rsp+40h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
    goto LABEL_19;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)ViewAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ViewAttributes < 0x7FFFFFFF0000LL )
      v6 = (__int64)ViewAttributes;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 31) = *(_BYTE *)(v6 + 31);
    v13 = *ViewAttributes;
  }
  else
  {
    v13 = *ViewAttributes;
  }
  if ( v13.Flags || !v13.ViewSize || v13.ViewBase )
  {
LABEL_19:
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
      v8 = Object[0];
      v9 = (void *)AlpcReferenceBlobByHandle(*((_QWORD *)Object[0] + 2) + 40LL, v13.SectionHandle, &AlpcSectionType);
      Object[1] = v9;
      if ( v9 )
      {
        SectionView = AlpcpCreateSectionView((ULONG_PTR)v9, (ULONG_PTR)&BugCheckParameter2);
        if ( SectionView >= 0 )
        {
          v10 = BugCheckParameter2;
          ViewAttributes->ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
          ViewAttributes->ViewSize = *(_QWORD *)(v10 + 48);
          AlpcpDereferenceBlobEx(v10);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v9);
      }
      else
      {
        SectionView = -1073741816;
      }
      ObfDereferenceObject(v8);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return SectionView;
}

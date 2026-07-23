/*
 * XREFs of NtAlpcCreatePortSection @ 0x1404366D8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     AlpcpDeleteBlob @ 0x14047CC60 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int Section; // ebx
  PVOID v13; // rsi
  ULONG_PTR v14; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFBFFFF) != 0 || (Flags & 0x40000) != 0 && SectionHandle )
  {
    Section = -1073741811;
  }
  else
  {
    if ( PreviousMode )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)AlpcSectionHandle < 0x7FFFFFFF0000LL )
        v11 = (__int64)AlpcSectionHandle;
      *(_QWORD *)v11 = *(_QWORD *)v11;
      if ( (unsigned __int64)ActualSectionSize < 0x7FFFFFFF0000LL )
        v10 = (__int64)ActualSectionSize;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    Section = ObReferenceObjectByHandle(
                PortHandle,
                1u,
                AlpcPortObjectType,
                KeGetCurrentThread()->PreviousMode,
                &Object,
                0LL);
    if ( Section >= 0 )
    {
      v13 = Object;
      Section = AlpcpCreateSection(Object, SectionSize, (__int64)&BugCheckParameter2);
      if ( Section >= 0 )
      {
        v14 = BugCheckParameter2;
        *AlpcSectionHandle = *(HANDLE *)(BugCheckParameter2 + 24);
        *ActualSectionSize = *(_QWORD *)(v14 + 8);
        AlpcpDereferenceBlobEx(v14);
      }
      ObfDereferenceObject(v13);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return Section;
}

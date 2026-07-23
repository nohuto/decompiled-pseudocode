/*
 * XREFs of NtRemoveIoCompletionEx @ 0x140527090
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  __int64 v7; // rdi
  PLARGE_INTEGER v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *v12; // r14
  NTSTATUS v13; // ebx
  __int64 v15; // rcx
  SIZE_T v16; // rdx
  PLIST_ENTRY *PoolWithTagPriority; // rax
  bool v18; // zf
  int v19; // eax
  ULONG v20; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v21; // [rsp+48h] [rbp-F0h]
  LARGE_INTEGER v22; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = Count;
  v10 = Timeout;
  v20 = 0;
  if ( !Count || Count > 0x7FFFFFF )
    return -1073741811;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(IoCompletionInformation, 32LL * Count, 8u);
    v15 = (__int64)NumEntriesRemoved;
    if ( (unsigned __int64)NumEntriesRemoved >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( Timeout )
    {
      v21 = &v22;
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v10 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
      v22 = *v10;
    }
    goto LABEL_20;
  }
  if ( !Timeout )
LABEL_20:
    v10 = v21;
  if ( (unsigned int)v7 > 0x10 )
  {
    v16 = 8 * v7;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (PLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                             NonPagedPoolNx,
                                             v16,
                                             0x20206F49u,
                                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (PLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x20206F49u);
    v12 = (PLIST_ENTRY *)P;
    v18 = PoolWithTagPriority == 0LL;
    if ( PoolWithTagPriority )
      v12 = PoolWithTagPriority;
    v19 = 16;
    if ( !v18 )
      v19 = v7;
    LODWORD(v7) = v19;
  }
  else
  {
    v12 = (PLIST_ENTRY *)P;
  }
  v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (__int64)IoCompletionInformation,
            v12,
            v7,
            &v20,
            PreviousMode,
            v10,
            Alertable);
    ObfDereferenceObject(Object);
  }
  if ( v12 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(v12, 0);
  if ( v13 >= 0 )
    *NumEntriesRemoved = v20;
  return v13;
}

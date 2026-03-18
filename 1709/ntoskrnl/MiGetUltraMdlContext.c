/*
 * XREFs of MiGetUltraMdlContext @ 0x140234AAC
 * Callers:
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x1400CF098 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400CF880 (MiCreateUltraThreadContextHelper.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  PSLIST_ENTRY result; // rax
  PVOID PoolWithTag; // rax
  void *v5; // rbx
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v1 = __rdtsc() >> 4;
  v2 = 8LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  do
  {
    LODWORD(v1) = v1 & 7;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140389080 + ((v2 + (unsigned int)v1) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
    ++v0;
  }
  while ( v0 < 8 );
  if ( (unsigned int)dword_140389078 >= 0x80 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6D55694Du);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x28uLL);
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)v5 + 8, 3u, 0) )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v6 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140389038, &LockHandle);
  if ( (unsigned int)dword_140389078 >= 0x80 )
    v6 = 1;
  else
    ++dword_140389078;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v6 )
  {
    MiDeleteUltraMapContext((__int64)v5 + 8, 3u);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)v5;
}

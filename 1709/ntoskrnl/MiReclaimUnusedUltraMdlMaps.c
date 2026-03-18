/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x1400F0FD4
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x1400CF098 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

unsigned __int64 MiReclaimUnusedUltraMdlMaps()
{
  unsigned __int64 result; // rax
  int v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbx
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // r13
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v1 = 0;
  v2 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v3 = 0;
      v4 = (unsigned __int64)v2 << 9;
      do
      {
        while ( *(_WORD *)(v4 + qword_140389080) > 2u )
        {
          v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140389080 + ((8LL * v2 + v3) << 6)));
          v6 = v5;
          if ( !v5 )
            break;
          ++v1;
          MiDeleteUltraMapContext((__int64)(&v5->Next + 1), 3u);
          ExFreePoolWithTag(v6, 0);
        }
        ++v3;
        v4 += 64LL;
      }
      while ( v3 < 8 );
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
    if ( v1 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140389038, &LockHandle);
      dword_140389078 -= v1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
    }
  }
  return result;
}

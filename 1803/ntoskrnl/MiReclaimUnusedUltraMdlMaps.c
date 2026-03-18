/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x140081174
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x14013A5FC (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

unsigned __int64 MiReclaimUnusedUltraMdlMaps()
{
  unsigned __int64 result; // rax
  int v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // ebp
  unsigned __int64 v4; // rbx
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // r15
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
        while ( *(_WORD *)(v4 + qword_1403CC330) > 2u )
        {
          v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_1403CC330 + ((8LL * v2 + v3) << 6)));
          v6 = v5;
          if ( !v5 )
            break;
          ++v1;
          MiDeleteUltraMapContext(&v5->Next + 1, 3LL);
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
      KeAcquireInStackQueuedSpinLock(&qword_1403CC2E8, &LockHandle);
      dword_1403CC328 -= v1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
    }
  }
  return result;
}

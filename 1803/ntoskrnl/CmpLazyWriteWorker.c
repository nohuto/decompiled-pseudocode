/*
 * XREFs of CmpLazyWriteWorker @ 0x14017ECA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CmpCompleteLazyWrite @ 0x1400CD934 (CmpCompleteLazyWrite.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpDiskFullWarning @ 0x1406FBB78 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  unsigned __int64 v2; // rbx
  char v3; // bl
  char v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KxReleaseSpinLock(&Timer[2].DueTime.QuadPart);
    __writecr8(v2);
    v3 = ((__int64 (__fastcall *)(char *, char *))Timer[2].TimerListEntry.Flink)(&v4, &v5);
    if ( BYTE2(NlsMbCodePageTag) && Timer == &CmpLazyWriterData )
    {
      if ( v4 )
        CmpDiskFullWarning();
      else
        BYTE2(NlsMbCodePageTag) = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v5 & -(__int64)(v3 != 0)));
  }
}

/*
 * XREFs of CmpLazyWriteWorker @ 0x140151BE0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CmpCompleteLazyWrite @ 0x14012C128 (CmpCompleteLazyWrite.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDiskFullWarning @ 0x140694480 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  unsigned __int64 v2; // rbx
  char v3; // bl
  __int64 *v4; // rdx
  char v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KxReleaseSpinLock(&Timer[2].DueTime.QuadPart);
    __writecr8(v2);
    v3 = ((__int64 (__fastcall *)(char *, char *))Timer[2].TimerListEntry.Flink)(&v5, &v6);
    if ( BYTE2(NlsMbCodePageTag) && Timer == &CmpLazyWriterData )
    {
      if ( v5 )
        CmpDiskFullWarning();
      else
        BYTE2(NlsMbCodePageTag) = 0;
    }
    if ( v3 )
      v4 = (__int64 *)&v6;
    else
      v4 = 0LL;
    CmpCompleteLazyWrite(Timer, v4);
  }
}

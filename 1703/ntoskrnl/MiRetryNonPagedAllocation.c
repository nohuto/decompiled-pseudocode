/*
 * XREFs of MiRetryNonPagedAllocation @ 0x14010EB88
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  unsigned int v0; // ebx
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned __int64)qword_140381880 >= 0xA0 )
    return 1LL;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140381468, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140381440, &LockHandle);
    if ( (unsigned __int64)qword_140381880 >= 0xA0 )
      break;
    if ( i == 1 )
    {
      if ( byte_14036BD2C == 1 )
      {
        if ( dword_14036BD28 == dword_140381480 )
          goto LABEL_22;
        byte_14036BD2C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_14036BD2C )
        {
          dword_14036BD28 = dword_140381480;
          byte_14036BD2C = 1;
        }
        goto LABEL_22;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_140381468);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( byte_14036BD2C == 1 )
    byte_14036BD2C = 0;
  v0 = 1;
LABEL_22:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v0;
}

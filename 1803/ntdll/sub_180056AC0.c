/*
 * XREFs of sub_180056AC0 @ 0x180056AC0
 * Callers:
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 * Callees:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180058580 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 *     ZwSetWnfProcessNotificationEvent @ 0x18009E010 (ZwSetWnfProcessNotificationEvent.c)
 */

__int64 sub_180056AC0()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)sub_180049F90, Context, 0LL);
    if ( v0 >= 0 )
    {
      v0 = ZwSetWnfProcessNotificationEvent(Context);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(WaitReturn, Context, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( Context )
    ZwClose(Context);
  return (unsigned int)v0;
}

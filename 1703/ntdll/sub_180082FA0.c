/*
 * XREFs of sub_180082FA0 @ 0x180082FA0
 * Callers:
 *     sub_180082ED0 @ 0x180082ED0 (sub_180082ED0.c)
 * Callees:
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 *     ZwSetWnfProcessNotificationEvent @ 0x1800A87B0 (ZwSetWnfProcessNotificationEvent.c)
 */

__int64 sub_180082FA0()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)sub_180012AB0, Context, 0LL);
    if ( v0 >= 0 )
    {
      TpSetWaitEx(WaitReturn, Context, 0LL, 0LL);
      v0 = ZwSetWnfProcessNotificationEvent(Context);
      if ( v0 >= 0 )
        return (unsigned int)v0;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( Context )
    ZwClose(Context);
  return (unsigned int)v0;
}

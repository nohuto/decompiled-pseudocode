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
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&v3, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v4, sub_180049F90, v3, 0LL);
    if ( v0 >= 0 )
    {
      v0 = ZwSetWnfProcessNotificationEvent(v3);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v4, v3, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v4 )
      TpReleaseWait();
  }
  if ( v3 )
    ZwClose(v3);
  return (unsigned int)v0;
}

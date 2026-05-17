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
    v0 = TpAllocWait(&v4, (__int64)sub_180012AB0, v3, 0LL);
    if ( v0 >= 0 )
    {
      TpSetWaitEx(v4, v3, 0LL, 0LL);
      v0 = ZwSetWnfProcessNotificationEvent(v3);
      if ( v0 >= 0 )
        return (unsigned int)v0;
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( v3 )
    ZwClose(v3);
  return (unsigned int)v0;
}

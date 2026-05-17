/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x180081420
 * Callers:
 *     RtlpInitializeWnf @ 0x180081350 (RtlpInitializeWnf.c)
 * Callees:
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180011BA0 (TpReleaseWait.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A35D0 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v4, (__int64)RtlpWnfNotificationThread, (int)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v4, (__int64)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}

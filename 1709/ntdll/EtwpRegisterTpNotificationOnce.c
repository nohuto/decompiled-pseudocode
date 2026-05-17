/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x180013070
 * Callers:
 *     <none>
 * Callees:
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180011BA0 (TpReleaseWait.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 */

__int64 EtwpRegisterTpNotificationOnce()
{
  char v1; // [rsp+20h] [rbp-30h]
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp-10h] BYREF
  int v4; // [rsp+78h] [rbp+28h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v3, (__int64)EtwpNotificationThread, (int)Handle, 0LL) >= 0 )
    {
      TpSetWaitEx(v3, (__int64)Handle, 0LL, 0LL);
      v4 = (int)Handle;
      if ( (int)NtTraceControl(27LL, &v4, 4LL) >= 0 )
        return 1LL;
    }
    if ( v3 )
      TpReleaseWait(v3);
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}

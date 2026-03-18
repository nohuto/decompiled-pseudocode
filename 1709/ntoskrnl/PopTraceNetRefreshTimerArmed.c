/*
 * XREFs of PopTraceNetRefreshTimerArmed @ 0x140706314
 * Callers:
 *     PopNetArmRefreshTimer @ 0x140707990 (PopNetArmRefreshTimer.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopTraceNetRefreshTimerArmed(unsigned __int64 a1)
{
  REGHANDLE v2; // rbx
  unsigned __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED) )
    {
      UserData.Reserved = 0;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v3;
      v3 = a1 / 0xA;
      EtwWrite(v2, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED, 0LL, 1u, &UserData);
    }
  }
}

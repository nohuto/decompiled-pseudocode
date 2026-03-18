/*
 * XREFs of PopNotifyConsoleDisplayBurst @ 0x1406D48F0
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406D9278 (TtmNotifySessionDisplayBurst.c)
 */

__int64 PopNotifyConsoleDisplayBurst()
{
  __int64 result; // rax
  int v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+28h] [rbp-20h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  if ( PsWin32CalloutsEstablished )
  {
    result = MEMORY[0xFFFFF780000002D8];
    v1 = MEMORY[0xFFFFF780000002D8];
    if ( MEMORY[0xFFFFF780000002D8] != -1 )
    {
      if ( TtmpEnabled == 1 )
      {
        return TtmNotifySessionDisplayBurst(MEMORY[0xFFFFF780000002D8], 25LL);
      }
      else
      {
        v2 = 10;
        v3 = 25LL;
        return PopInvokeWin32Callout(3u, (__int64)&v2, 1u, &v1);
      }
    }
  }
  return result;
}

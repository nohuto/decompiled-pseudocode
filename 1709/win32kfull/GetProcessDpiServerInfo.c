/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C0108FBC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v1 == *(_WORD *)(gpsi + 9974LL) )
    return GetSessionDpiServerInfo(gpsi, v1, v2);
  else
    return GetDPIServerInfoForDpi((unsigned __int16)v1, v1, v2);
}

/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C00DA5C0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 * Callees:
 *     Template_q @ 0x1C00DBC78 (Template_q.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}

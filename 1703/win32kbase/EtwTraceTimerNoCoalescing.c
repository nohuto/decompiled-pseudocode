/*
 * XREFs of EtwTraceTimerNoCoalescing @ 0x1C00DA6F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_szzqqq @ 0x1C00DDDF8 (Template_szzqqq.c)
 */

__int64 __fastcall EtwTraceTimerNoCoalescing(int a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return Template_szzqqq(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}

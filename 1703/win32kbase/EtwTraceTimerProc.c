/*
 * XREFs of EtwTraceTimerProc @ 0x1C007D260
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqqq @ 0x1C00DC4D4 (Template_pqqqq.c)
 */

__int64 __fastcall EtwTraceTimerProc(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return Template_pqqqq(
             a1,
             (unsigned int)&TimerProcCoalescing,
             a3,
             *(_QWORD *)(a1 + 88),
             *(_DWORD *)(a1 + 96),
             *(_DWORD *)(a1 + 52),
             *(_DWORD *)(a1 + 44),
             *(_DWORD *)(a1 + 48));
  return result;
}

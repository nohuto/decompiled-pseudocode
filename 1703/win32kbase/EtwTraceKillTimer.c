/*
 * XREFs of EtwTraceKillTimer @ 0x1C007FC10
 * Callers:
 *     <none>
 * Callees:
 *     Template_xq @ 0x1C00DE128 (Template_xq.c)
 */

__int64 __fastcall EtwTraceKillTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return Template_xq(a1, &TimerKillTimer, a3, *(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 96));
  return result;
}

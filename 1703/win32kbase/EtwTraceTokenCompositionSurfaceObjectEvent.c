/*
 * XREFs of EtwTraceTokenCompositionSurfaceObjectEvent @ 0x1C00072A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqxxx @ 0x1C00DC2E0 (Template_ppqxxx.c)
 */

__int64 __fastcall EtwTraceTokenCompositionSurfaceObjectEvent(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return Template_ppqxxx(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}

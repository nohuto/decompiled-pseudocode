/*
 * XREFs of EtwTraceTransformAgeDecay @ 0x1C00DAED0
 * Callers:
 *     <none>
 * Callees:
 *     Template_px @ 0x1C00DC680 (Template_px.c)
 */

__int64 __fastcall EtwTraceTransformAgeDecay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return Template_px(a1, a2, a3, a1, a2);
  return result;
}

/*
 * XREFs of EtwTraceTransformAgeDecay @ 0x1C00E1A20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px @ 0x1C00E31A8 (McTemplateK0px.c)
 */

__int64 __fastcall EtwTraceTransformAgeDecay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0px(a1, a2, a3, a1, a2);
  return result;
}

/*
 * XREFs of sub_180003FBC @ 0x180003FBC
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003FFC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800040C0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

char __fastcall sub_180003FBC(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( g_fDisableInstrumentationBreaks )
    return 0;
  v3 = 0;
  if ( RegGetHKLMDword(a1, a2, &v3) )
    return v3 == 0;
  else
    return sub_180003FB8();
}

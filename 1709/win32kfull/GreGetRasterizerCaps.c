/*
 * XREFs of GreGetRasterizerCaps @ 0x1C0293A7C
 * Callers:
 *     NtGdiGetRasterizerCaps @ 0x1C028A7D0 (NtGdiGetRasterizerCaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRasterizerCaps(_WORD *a1)
{
  __int16 v1; // r8
  __int64 result; // rax
  __int16 v3; // dx

  HIBYTE(v1) = 0;
  if ( a1 )
  {
    *a1 = 6;
    v3 = gppdevTrueType != 0LL ? 2 : 0;
    a1[1] = v3;
    LOBYTE(v1) = gcTrueTypeFonts != 0;
    a1[1] = v3 | v1;
    result = 1LL;
    a1[2] = gusLanguageID;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  return result;
}

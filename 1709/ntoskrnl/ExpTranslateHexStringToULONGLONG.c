/*
 * XREFs of ExpTranslateHexStringToULONGLONG @ 0x14075B1B4
 * Callers:
 *     ExpParseSignatureName @ 0x1407597CC (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x1401602D0 (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToULONGLONG(wint_t *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  wint_t *v5; // r14
  unsigned int i; // esi
  wint_t v8; // dx
  __int64 v9; // rbx

  v2 = -1LL;
  v4 = 0LL;
  v5 = a1;
  do
    ++v2;
  while ( a1[v2] );
  if ( (unsigned int)v2 > 0x10 )
    return 3221225485LL;
  for ( i = 0; i < (unsigned int)v2; ++v5 )
  {
    v8 = towlower(*v5);
    if ( (unsigned __int16)(v8 - 48) > 9u )
    {
      if ( (unsigned __int16)(v8 - 97) > 5u )
        return 3221225485LL;
      v9 = 16 * v4 - 87;
    }
    else
    {
      v9 = 16 * v4 - 48;
    }
    ++i;
    v4 = v8 + v9;
  }
  *a2 = v4;
  return 0LL;
}

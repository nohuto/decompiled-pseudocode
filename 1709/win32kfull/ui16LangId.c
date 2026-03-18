/*
 * XREFs of ui16LangId @ 0x1C022B294
 * Callers:
 *     bLoadTTF @ 0x1C022910C (bLoadTTF.c)
 *     bVerifyTTF @ 0x1C022A460 (bVerifyTTF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ui16LangId(__int16 a1, unsigned __int16 a2)
{
  if ( a1 != 3 )
    return (unsigned __int16)word_1C02ED040[a2 & 0x1F];
  return a2;
}

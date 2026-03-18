/*
 * XREFs of ui16LangId @ 0x1C0229D38
 * Callers:
 *     bLoadTTF @ 0x1C0227B94 (bLoadTTF.c)
 *     bVerifyTTF @ 0x1C0228EE8 (bVerifyTTF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ui16LangId(__int16 a1, unsigned __int16 a2)
{
  if ( a1 == 3 )
    return a2;
  else
    return word_1C02F03E0[a2 & 0x1F];
}

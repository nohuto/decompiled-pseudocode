/*
 * XREFs of FindCharPosition @ 0x1C0239328
 * Callers:
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindCharPosition(_WORD *a1, __int16 a2)
{
  __int64 result; // rax

  result = 0LL;
  while ( *a1 && *a1 != a2 )
  {
    ++a1;
    result = (unsigned int)(result + 1);
  }
  return result;
}

/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x140488428
 * Callers:
 *     PiDqActionDataGetChangedProperties @ 0x14045AAE8 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404BD990 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140698274 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PiDqPnPGetObjectProperty @ 0x140487420 (PiDqPnPGetObjectProperty.c)
 *     PnpFreeDevProperty @ 0x1404B9E2C (PnpFreeDevProperty.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyInBestLocale(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PCWSTR a6,
        _OWORD *a7)
{
  __int64 v12; // rax
  __int64 result; // rax

  memset(a7, 0, 0x30uLL);
  while ( *a6 )
  {
    result = PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, a6, a7);
    if ( (int)result < 0 || *((_DWORD *)a7 + 8) )
      return result;
    PnpFreeDevProperty(a7, 1483763280LL);
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    a6 += v12 + 1;
  }
  return PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, 0LL, a7);
}

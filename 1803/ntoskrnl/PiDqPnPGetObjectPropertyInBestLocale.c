/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x14050265C
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x14050D84C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E8B2C (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14072A3E8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PiDqPnPGetObjectProperty @ 0x1405046A0 (PiDqPnPGetObjectProperty.c)
 *     PnpFreeDevProperty @ 0x14050AC68 (PnpFreeDevProperty.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyInBestLocale(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        const wchar_t *a6,
        void *a7)
{
  __int64 v12; // rax
  __int64 result; // rax

  memset(a7, 0, 0x30uLL);
  while ( *a6 )
  {
    result = PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, a6, (__int64)a7);
    if ( (int)result < 0 || *((_DWORD *)a7 + 8) )
      return result;
    PnpFreeDevProperty(a7, 1483763280LL);
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    a6 += v12 + 1;
  }
  return PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, 0LL, (__int64)a7);
}

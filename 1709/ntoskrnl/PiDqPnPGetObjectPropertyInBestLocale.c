/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x140524FB4
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x14052E168 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E6D68 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406C3CF4 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PiDqPnPGetObjectProperty @ 0x140524D78 (PiDqPnPGetObjectProperty.c)
 *     PnpFreeDevProperty @ 0x140526C84 (PnpFreeDevProperty.c)
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

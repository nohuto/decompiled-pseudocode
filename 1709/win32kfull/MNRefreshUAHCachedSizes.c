/*
 * XREFs of MNRefreshUAHCachedSizes @ 0x1C011DCA0
 * Callers:
 *     MNClearCachedPopupSizes @ 0x1C011DC24 (MNClearCachedPopupSizes.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 * Callees:
 *     MNUpdateUAHMaxPopupWidths @ 0x1C011DCEC (MNUpdateUAHMaxPopupWidths.c)
 */

__int64 __fastcall MNRefreshUAHCachedSizes(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  __int64 v3; // r11

  result = 0LL;
  v2 = 0;
  *(_QWORD *)(a1 + 148) = 0LL;
  v3 = a1;
  for ( *(_QWORD *)(a1 + 156) = 0LL; v2 < *(_DWORD *)(v3 + 68); ++v2 )
    result = MNUpdateUAHMaxPopupWidths(v3, *(_QWORD *)(v3 + 96) + 152LL * v2);
  return result;
}

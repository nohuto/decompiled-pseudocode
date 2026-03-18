/*
 * XREFs of MNRefreshUAHCachedSizes @ 0x1C0113C14
 * Callers:
 *     MNClearCachedPopupSizes @ 0x1C0113B9C (MNClearCachedPopupSizes.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 * Callees:
 *     MNUpdateUAHMaxPopupWidths @ 0x1C0113C58 (MNUpdateUAHMaxPopupWidths.c)
 */

__int64 __fastcall MNRefreshUAHCachedSizes(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r11d
  int v3; // r11d

  result = 0LL;
  v2 = 0;
  *(_QWORD *)(a1 + 148) = 0LL;
  for ( *(_QWORD *)(a1 + 156) = 0LL; v2 < *(_DWORD *)(a1 + 68); v2 = v3 + 1 )
    result = MNUpdateUAHMaxPopupWidths(a1, *(_QWORD *)(a1 + 96) + 152LL * v2);
  return result;
}

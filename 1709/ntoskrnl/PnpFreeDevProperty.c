/*
 * XREFs of PnpFreeDevProperty @ 0x140526C84
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140524FB4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x1405BB7F0 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E6D68 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevProperty(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}

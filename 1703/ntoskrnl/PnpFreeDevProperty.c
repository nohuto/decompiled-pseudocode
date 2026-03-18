/*
 * XREFs of PnpFreeDevProperty @ 0x1404B9E2C
 * Callers:
 *     PiDqActionDataGetChangedProperties @ 0x14045AAE8 (PiDqActionDataGetChangedProperties.c)
 *     PnpCopyDevProperty @ 0x1404605B8 (PnpCopyDevProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140488428 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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

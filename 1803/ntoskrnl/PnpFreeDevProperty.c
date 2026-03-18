/*
 * XREFs of PnpFreeDevProperty @ 0x14050AC68
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14050265C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E8B2C (PiDqActionDataGetChangedProperties.c)
 *     PnpCopyDevProperty @ 0x140642C84 (PnpCopyDevProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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

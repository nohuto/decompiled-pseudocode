/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0118DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0118E20 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 */

void xxxUnlatchStickyKeys(void)
{
  int v0; // edx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, __int64); // rax
  bool v2; // zf

  if ( gLatchBits )
  {
    v0 = 0;
    for ( i = (__int64 (__fastcall **)(struct tagKE *, unsigned int, __int64))off_1C015F070; *i != xxxStickyKeys; ++i )
    {
      if ( (unsigned int)++v0 >= 5 )
        return;
    }
    xxxUpdateModifierState((unsigned __int8)gLockBits, v0 + 1);
    v2 = gLatchBits == 0;
    gLatchBits = 0;
    if ( !v2 )
      ApiSetEditionPostAccessibility(1LL);
  }
}

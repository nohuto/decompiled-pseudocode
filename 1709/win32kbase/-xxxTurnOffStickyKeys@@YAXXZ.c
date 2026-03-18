/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0118CC0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C005F450 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0117EA0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187D0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0118E20 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 */

void xxxTurnOffStickyKeys(void)
{
  int v0; // edx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, __int64); // rax

  v0 = 0;
  for ( i = (__int64 (__fastcall **)(struct tagKE *, unsigned int, __int64))off_1C015F070; *i != xxxStickyKeys; ++i )
  {
    if ( (unsigned int)++v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0 + 1);
  dword_1C018F8E4 &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibility(1LL);
}

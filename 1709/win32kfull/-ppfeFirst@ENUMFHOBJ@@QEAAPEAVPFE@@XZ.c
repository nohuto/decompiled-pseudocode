/*
 * XREFs of ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0270768
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00AC820 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02707E0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0270990 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall ENUMFHOBJ::ppfeFirst(ENUMFHOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  *((_QWORD *)this + 3) = v2;
  if ( v2 )
    *((_QWORD *)this + 2) = *(_QWORD *)(v2 + 8);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    return *(struct PFE **)(v3 + 8);
  return (struct PFE *)v1;
}

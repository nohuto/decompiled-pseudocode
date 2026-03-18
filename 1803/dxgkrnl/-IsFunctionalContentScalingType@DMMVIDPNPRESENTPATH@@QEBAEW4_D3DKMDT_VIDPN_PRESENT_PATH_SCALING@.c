/*
 * XREFs of ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000691C
 * Callers:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000628C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006688 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0222EF0 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF290 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(DMMVIDPNPRESENTPATH *this, int a2)
{
  if ( a2 <= 0 )
    return 0;
  if ( a2 <= 3 )
    return 1;
  if ( a2 != 4 && a2 != 5 )
    return a2 == 255;
  return DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
}

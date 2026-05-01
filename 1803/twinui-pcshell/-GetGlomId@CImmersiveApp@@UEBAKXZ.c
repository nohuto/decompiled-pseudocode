/*
 * XREFs of ?GetGlomId@CImmersiveApp@@UEBAKXZ @ 0x1800499E0
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006FE70 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetGlomId(CImmersiveApp *this)
{
  return *((unsigned int *)this + 110);
}

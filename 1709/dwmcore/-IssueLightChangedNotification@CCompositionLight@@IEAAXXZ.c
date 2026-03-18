/*
 * XREFs of ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800B12EC
 * Callers:
 *     ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A08D0 (-SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1800A092C (-SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1800A0964 (-SetOffset@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A09CC (-SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1800A0A28 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x1800A0A50 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A0A90 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800A0D04 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIO.c)
 *     ?SetColor@CCompositionAmbientLight@@AEAAXMMMM@Z @ 0x1800B11F4 (-SetColor@CCompositionAmbientLight@@AEAAXMMMM@Z.c)
 *     ?SetIntensity@CCompositionAmbientLight@@AEAAXM@Z @ 0x18015A06C (-SetIntensity@CCompositionAmbientLight@@AEAAXM@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18015ADE8 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSI.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x18015AE98 (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18015AF1C (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 *     ?SetIntensity@CCompositionDistantLight@@AEAAXM@Z @ 0x18015AFAC (-SetIntensity@CCompositionDistantLight@@AEAAXM@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18015C1BC (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITI.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015C26C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x18015C2A4 (-SetColor@CCompositionPointLight@@AEAAXMMMM@Z.c)
 *     ?SetIntensity@CCompositionPointLight@@AEAAXM@Z @ 0x18015C328 (-SetIntensity@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x18015C360 (-SetOffset@CCompositionPointLight@@AEAAXMMM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x18015D93C (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x18015D974 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA04 (-SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOuterConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA3C (-SetOuterConeIntensity@CCompositionSpotLight@@AEAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionLight::IssueLightChangedNotification(CCompositionLight *this)
{
  char v1; // al
  CCompositionLight *v2; // r8

  v1 = *((_BYTE *)this + 153);
  v2 = this;
  if ( v1 )
    v2 = 0LL;
  (*(void (__fastcall **)(CCompositionLight *, _QWORD, CCompositionLight *))(*(_QWORD *)this + 64LL))(
    this,
    v1 != 0 ? 1 : 11,
    v2);
}

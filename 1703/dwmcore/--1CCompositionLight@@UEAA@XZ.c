/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x1801722BC
 * Callers:
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x180172300 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x180173200 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x180173370 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x180173710 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180173C00 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x180173070 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(void **this)
{
  *this = &CCompositionLight::`vftable';
  CCompositionLight::RemoveAllTargets((CCompositionLight *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  *this = &CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}

/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x1800B1520
 * Callers:
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x1800A0670 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1800B1180 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x18015ABA0 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x18015B130 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x18015BF60 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800B1318 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(void **this)
{
  *this = &CCompositionLight::`vftable';
  CCompositionLight::RemoveAllTargets((unsigned __int64)this, 0);
  CCompositionLight::RemoveAllTargets((unsigned __int64)this, 1);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 14);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  *this = &CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}

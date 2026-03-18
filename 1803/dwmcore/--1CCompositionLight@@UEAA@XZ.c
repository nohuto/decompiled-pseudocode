/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x18002A5B8
 * Callers:
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x18002A760 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1800C3810 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x180183E50 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x180184290 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x180185160 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x18002A378 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  *(_QWORD *)this = &CCompositionLight::`vftable';
  CCompositionLight::RemoveAllTargets((__int64)this, 0);
  CCompositionLight::RemoveAllTargets((__int64)this, 1u);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 112);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}

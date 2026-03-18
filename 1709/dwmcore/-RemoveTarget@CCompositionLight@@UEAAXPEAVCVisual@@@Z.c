/*
 * XREFs of ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18015BE10
 * Callers:
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x18015D910 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B16E0 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveTarget(CCompositionLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 9, (__int64 *)&v3);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 14, (__int64 *)&v3);
}

/*
 * XREFs of ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180174230
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionSpotLight::RemoveTarget(CCompositionSpotLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 9, (__int64 *)&v3);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 25, (__int64 *)&v4);
}

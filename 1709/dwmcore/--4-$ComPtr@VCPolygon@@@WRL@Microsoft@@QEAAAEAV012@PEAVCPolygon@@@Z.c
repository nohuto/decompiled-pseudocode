/*
 * XREFs of ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x18017DC80
 * Callers:
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18014B088 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18017E634 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CPolygon>::operator=(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v4)(_QWORD); // rcx

  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v4 = (void (__fastcall ***)(_QWORD))*a1;
    *a1 = a2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}

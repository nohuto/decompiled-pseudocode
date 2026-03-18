/*
 * XREFs of _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01CEED4
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01D3010 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01D3630 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}

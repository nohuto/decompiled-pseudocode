/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800494C0
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800805FC (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1800827C4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x180215000 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  __int64 v1; // rax
  CD2DBitmapCache *v2; // rcx
  void (*v3)(void); // rax

  v1 = *((_QWORD *)this + 30);
  if ( v1 )
    *(_BYTE *)(v1 + 205) = 0;
  **((_DWORD **)this + 21) = 0;
  *((_BYTE *)this + 160) = 1;
  v2 = (CBitmapRealization *)((char *)this - 128);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 40LL);
  if ( (char *)v3 == (char *)CD2DBitmapCache::MarkFullInvalid )
    CD2DBitmapCache::MarkFullInvalid(v2);
  else
    v3();
}

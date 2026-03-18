/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180036D60
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800765A0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1801B6430 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  __int64 v1; // rax
  CD2DBitmapCache *v2; // rcx
  void (*v3)(void); // rax

  v1 = *((_QWORD *)this + 44);
  if ( v1 )
    *(_BYTE *)(v1 + 229) = 0;
  **((_DWORD **)this + 35) = 0;
  *((_BYTE *)this + 272) = 1;
  v2 = (CBitmapRealization *)((char *)this + 16);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 48LL);
  if ( (char *)v3 == (char *)CD2DBitmapCache::MarkFullInvalid )
    CD2DBitmapCache::MarkFullInvalid(v2);
  else
    v3();
}

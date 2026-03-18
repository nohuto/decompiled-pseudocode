/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x18002AFD0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1801D3130 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
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

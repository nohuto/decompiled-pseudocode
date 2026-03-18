/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18002B020
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800880B0 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1801D2C70 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x18008A770 (-AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(CBitmapRealization *this, const struct CRegion *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  CD2DBitmapCache *v6; // rcx
  __int64 (__fastcall *v7)(CD2DBitmapCache *__hidden, const struct CRegion *); // rax
  int v9; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 160)
    || (v9 = FastRegion::CRegion::Union((CBitmapRealization *)((char *)this + 168), a2), v2 = v9, v9 >= 0) )
  {
    v5 = *((_QWORD *)this + 30);
    if ( v5 )
      *(_BYTE *)(v5 + 205) = 0;
    v6 = (CBitmapRealization *)((char *)this - 128);
    v7 = *(__int64 (__fastcall **)(CD2DBitmapCache *__hidden, const struct CRegion *))(*((_QWORD *)this - 16) + 32LL);
    if ( v7 == CD2DBitmapCache::AddInvalidRegion )
      CD2DBitmapCache::AddInvalidRegion(v6, a2);
    else
      v7(v6, a2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x5Eu);
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 128LL))(this);
  }
  return v2;
}

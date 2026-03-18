/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180036DB0
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800765A0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1801B5F50 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x18007A570 (-AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(CBitmapRealization *this, const struct CRegion *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  CD2DBitmapCache *v6; // rcx
  __int64 (__fastcall *v7)(CD2DBitmapCache *__hidden, const struct CRegion *); // rax
  int v9; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 272)
    || (v9 = FastRegion::CRegion::Union((CBitmapRealization *)((char *)this + 280), a2), v2 = v9, v9 >= 0) )
  {
    v5 = *((_QWORD *)this + 44);
    if ( v5 )
      *(_BYTE *)(v5 + 229) = 0;
    v6 = (CBitmapRealization *)((char *)this + 16);
    v7 = *(__int64 (__fastcall **)(CD2DBitmapCache *__hidden, const struct CRegion *))(*((_QWORD *)this + 2) + 40LL);
    if ( v7 == CD2DBitmapCache::AddInvalidRegion )
      CD2DBitmapCache::AddInvalidRegion(v6, a2);
    else
      v7(v6, a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA7u);
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 64LL))(this);
  }
  return v2;
}

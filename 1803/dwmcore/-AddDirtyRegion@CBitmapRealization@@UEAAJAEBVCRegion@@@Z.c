/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800805FC (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800815F0 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180214B40 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x1800779A0 (-AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007F3BC (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180080354 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(
        CBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  unsigned int v2; // ebx
  const struct FastRegion::Internal::CRgnData *v5; // rdi
  const struct FastRegion::Internal::CRgnData **v6; // rbx
  const struct FastRegion::Internal::CRgnData *v7; // rbp
  int v8; // eax
  SIZE_T v9; // r8
  FastRegion::Internal::CRgnData *v10; // rcx
  int v11; // edi
  __int64 v12; // rax
  CD2DBitmapCache *v13; // rcx
  int (*v14)(CD2DBitmapCache *__hidden, const struct CRegion *); // rax
  FastRegion::Internal::CRgnData *v16; // rax
  int v17; // [rsp+30h] [rbp-138h] BYREF
  void *lpMem; // [rsp+38h] [rbp-130h]
  _BYTE v19[256]; // [rsp+40h] [rbp-128h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 160) )
    goto LABEL_8;
  v5 = *a2;
  v6 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 168);
  if ( !*(_DWORD *)*a2 )
  {
    v2 = 0;
    goto LABEL_8;
  }
  v7 = *v6;
  if ( *(_DWORD *)*v6 )
  {
    v8 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v6, *a2);
    v9 = v8;
    v10 = (FastRegion::Internal::CRgnData *)v19;
    lpMem = v19;
    v17 = v8;
    if ( (unsigned __int64)v8 > 0x100 )
    {
      if ( !v8 )
        v9 = 1LL;
      v16 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v9);
      v10 = v16;
      if ( !v16 )
      {
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v17);
        v2 = -2147024882;
        v11 = -2147024882;
        goto LABEL_20;
      }
      v5 = *a2;
      v7 = *v6;
      lpMem = v16;
    }
    FastRegion::Internal::CRgnData::Union(v10, v7, v5);
    v11 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)v6, (struct FastRegion::Internal::CWorkBuffer *)&v17);
    if ( v19 != lpMem )
      operator delete(lpMem);
  }
  else
  {
    v11 = FastRegion::CRegion::Copy((CBitmapRealization *)((char *)this + 168), (const struct CRegion *)a2);
  }
  v2 = v11;
  if ( v11 < 0 )
  {
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5Eu);
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 128LL))(this);
    return v2;
  }
LABEL_8:
  v12 = *((_QWORD *)this + 30);
  if ( v12 )
    *(_BYTE *)(v12 + 205) = 0;
  v13 = (CBitmapRealization *)((char *)this - 128);
  v14 = *(int (**)(CD2DBitmapCache *__hidden, const struct CRegion *))(*((_QWORD *)this - 16) + 32LL);
  if ( v14 == CD2DBitmapCache::AddInvalidRegion )
    CD2DBitmapCache::AddInvalidRegion(v13, (const struct CRegion *)a2);
  else
    ((void (__fastcall *)(CD2DBitmapCache *, const struct FastRegion::Internal::CRgnData **))v14)(v13, a2);
  return v2;
}

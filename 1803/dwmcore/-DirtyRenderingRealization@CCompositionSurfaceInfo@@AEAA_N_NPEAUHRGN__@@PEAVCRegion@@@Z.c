/*
 * XREFs of ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800805FC
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800807D8 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800455E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800494C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18007D794 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18007E100 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceInfo::DirtyRenderingRealization(
        CCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // di
  CDxHandleBitmapRealization *v9; // rcx
  void (__fastcall *v10)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  unsigned int *v11; // r8
  LONG bottom; // r10d
  _DWORD *v13; // r8
  LONG left; // r9d
  LONG top; // r11d
  LONG right; // edi
  __int64 v17; // rdx
  CBitmapRealization *v18; // rcx
  void (*v19)(void); // rax
  CBitmapRealization *v21; // rcx
  __int64 (__fastcall *v22)(CBitmapRealization *, const struct FastRegion::Internal::CRgnData **); // rax
  unsigned int v23; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-1Ch] BYREF
  struct tagRECT v25; // [rsp+28h] [rbp-18h] BYREF

  v4 = 0;
  if ( a3 )
  {
    v9 = (CDxHandleBitmapRealization *)(*((_QWORD *)this + 15) + 144LL);
    v10 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)v9 + 32LL);
    if ( v10 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize(v9, &v23, &v24);
    else
      v10(v9, &v23, &v24);
    if ( a3 == (HRGN)1 )
    {
      v25.left = 0;
      v25.top = 0;
      v25.right = v23;
      v25.bottom = v24;
      CRegion::SetRectangle(a4, (const struct MilRectU *)&v25);
    }
    else
    {
      CRegion::SetHRGN(a4, a3, v11);
      FastRegion::CRegion::GetBoundingRect(a4, &v25);
      bottom = -1;
      v13 = *(_DWORD **)a4;
      left = -1;
      top = -1;
      if ( v25.left >= 0 )
        left = v25.left;
      right = -1;
      if ( v25.top >= 0 )
        top = v25.top;
      if ( v25.right >= 0 )
        right = v25.right;
      if ( v25.bottom >= 0 )
        bottom = v25.bottom;
      if ( !*v13
        || (v17 = (__int64)&v13[2 * *v13 + 1],
            (unsigned int)((v17 + *(int *)(v17 + 4) - (__int64)(int)v13[4] - (__int64)(v13 + 3)) >> 3) != 1)
        || left
        || top
        || right != v23
        || bottom != v24 )
      {
        *((_BYTE *)this + 196) = 1;
      }
    }
    v4 = 1;
  }
  if ( a3 == (HRGN)1 || a2 && *((_DWORD *)this + 26) > 1u )
  {
    v18 = (CBitmapRealization *)(*((_QWORD *)this + 15) + 144LL);
    v19 = *(void (**)(void))(*(_QWORD *)v18 + 128LL);
    if ( (char *)v19 == (char *)CBitmapRealization::MarkFullDirty )
      CBitmapRealization::MarkFullDirty(v18);
    else
      v19();
  }
  else if ( v4 )
  {
    v21 = (CBitmapRealization *)(*((_QWORD *)this + 15) + 144LL);
    v22 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v21 + 120LL);
    if ( v22 == CBitmapRealization::AddDirtyRegion )
      CBitmapRealization::AddDirtyRegion(v21, (const struct FastRegion::Internal::CRgnData **)a4);
    else
      v22(v21, (const struct FastRegion::Internal::CRgnData **)a4);
  }
  return v4;
}

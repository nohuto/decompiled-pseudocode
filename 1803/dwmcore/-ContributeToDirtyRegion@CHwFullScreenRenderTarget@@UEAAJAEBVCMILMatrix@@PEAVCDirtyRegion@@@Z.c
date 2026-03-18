/*
 * XREFs of ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x18007C100
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800602F0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ @ 0x18013D5A4 (-NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1801F1DD4 (-ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRe.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1802190B0 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ContributeToDirtyRegion(
        CHwFullScreenRenderTarget *this,
        const struct CMILMatrix *a2,
        struct CDirtyRegion *a3)
{
  CComputeScribbleRenderer *v5; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  const struct CMILMatrix *v11; // rsi
  __int64 v12; // rcx
  int v13[2]; // [rsp+20h] [rbp-88h] BYREF
  int v14; // [rsp+28h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = (CComputeScribbleRenderer *)*((_QWORD *)this + 44);
  if ( !v5 )
    return 0LL;
  v14 = 0;
  *(_QWORD *)v13 = &v14;
  v8 = CComputeScribbleRenderer::PreRender(v5, (struct CRegion *)v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (const struct CMILMatrix *)&CMILMatrix::Identity;
    if ( !*((_BYTE *)this + 16) )
      v11 = a2;
    v8 = CHwFullScreenRenderTarget::ContributeRegionToDirty((const struct CRegion *)v13, v11, a3);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( CHwFullScreenRenderTarget::NeedsCopyFrontToBack((CHwFullScreenRenderTarget *)((char *)this - 216)) )
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 44) + 32LL);
        if ( v12 )
        {
          if ( *(_BYTE *)(v12 + 208) )
          {
            v8 = CHwFullScreenRenderTarget::ContributeRegionToDirty(
                   (CHwFullScreenRenderTarget *)((char *)this + 208),
                   v11,
                   a3);
            v9 = v8;
            if ( v8 < 0 )
            {
              v10 = 192LL;
              goto LABEL_17;
            }
            if ( *((_DWORD *)this + 20) == 3 )
            {
              v8 = CHwFullScreenRenderTarget::ContributeRegionToDirty(
                     (CHwFullScreenRenderTarget *)((char *)this + 280),
                     v11,
                     a3);
              v9 = v8;
              if ( v8 < 0 )
              {
                v10 = 196LL;
                goto LABEL_17;
              }
            }
            *((_BYTE *)this + 200) = 1;
          }
        }
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v13);
      return 0LL;
    }
    v10 = 185LL;
  }
  else
  {
    v10 = 180LL;
  }
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)v8,
    v13[0]);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v13);
  return v9;
}

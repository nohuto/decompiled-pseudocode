/*
 * XREFs of ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x1800B8CB4
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028E40 (-IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetSwapChainTransformForDirtyRects(struct ISwapChainContent *this, struct CMILMatrix *a2)
{
  char v3; // bl
  __int64 (*v5)(void); // rax
  char IsYUV; // al
  bool v7; // zf
  __int64 v8; // rax
  char (__fastcall *v9)(__int64, __int64, _QWORD *); // rax
  CCompositionSurfaceInfo *v12; // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  int (__fastcall ***v14)(struct CBitmapRealization *, GUID *, __int64 *); // rcx
  int (__fastcall **v15)(struct CBitmapRealization *, GUID *, __int64 *); // rax
  _BYTE *v16; // rdx
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  char v18[16]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-30h] BYREF
  char v20[16]; // [rsp+68h] [rbp-20h] BYREF

  v3 = 0;
  v5 = *(__int64 (**)(void))(*(_QWORD *)this + 152LL);
  if ( (char *)v5 == (char *)CCompositionSurfaceBitmap::IsYUV )
    IsYUV = CCompositionSurfaceBitmap::IsYUV(this);
  else
    IsYUV = v5();
  v7 = IsYUV == 0;
  v8 = *(_QWORD *)this;
  if ( v7 )
  {
    v9 = *(char (__fastcall **)(__int64, __int64, _QWORD *))(v8 + 64);
    if ( v9 == CCompositionSurfaceBitmap::GetTransform )
      return CCompositionSurfaceBitmap::GetTransform((__int64)this, (__int64)a2, 0LL);
    else
      return v9((__int64)this, (__int64)a2, 0LL);
  }
  else
  {
    v12 = (CCompositionSurfaceInfo *)(*(__int64 (__fastcall **)(struct ISwapChainContent *))(v8 + 200))(this);
    if ( v12 )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12);
      v14 = (int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))((char *)RenderingRealizationNoRef
                                                                                 + 144);
      if ( !RenderingRealizationNoRef )
        v14 = 0LL;
      if ( v14 )
      {
        v15 = *v14;
        v17 = 0LL;
        if ( (*v15)((struct CBitmapRealization *)v14, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v17) >= 0 )
        {
          v16 = v19;
          LOBYTE(v16) = 1;
          v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *, struct CMILMatrix *, char *, _BYTE *, char *))(*(_QWORD *)v17 + 24LL))(
                 v17,
                 v16,
                 a2,
                 v20,
                 v19,
                 v18);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
  }
  return v3;
}

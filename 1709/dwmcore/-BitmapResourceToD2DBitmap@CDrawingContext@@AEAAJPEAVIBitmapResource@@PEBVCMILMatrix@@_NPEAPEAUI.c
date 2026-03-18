/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800373D8
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18003F820 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18013DBE0 (-ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18011ABE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180191B54 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        char a4,
        struct ID2D1Bitmap1 **a5)
{
  unsigned int v5; // ebx
  int (__fastcall ***v9)(struct IBitmapResource *, GUID *, __int64 *); // rdx
  __int64 v10; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // eax
  int D2DBitmapFromBitmapSource; // eax
  struct IBitmapSource *v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v21[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  int v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+64h] [rbp-1Ch]
  BOOL v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+70h] [rbp-10h]

  v5 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  *a5 = 0LL;
  if ( a2 && !CDrawingContext::IsBounding(this) )
  {
    if ( (**v9)(a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v19) >= 0 )
    {
      LOBYTE(v12) = CDrawingContext::IsNormalDesktopRender(this);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v13 + 176))(v14, 0LL, v12);
    }
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v20) < 0 )
    {
      v15 = *((_QWORD *)this + 49);
      v26 = 0LL;
      v22 = v15;
      v23 = *((_DWORD *)this + 100);
      v24 = *((_DWORD *)this + 101);
      v25 = a4 != 0;
      v16 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapSource **, __int64 *))(*(_QWORD *)a2 + 72LL))(
              a2,
              &v18,
              &v22);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x22DFu);
        goto LABEL_9;
      }
      if ( v18 )
      {
        (*(void (__fastcall **)(struct IBitmapSource *, _DWORD *))(*(_QWORD *)v18 + 24LL))(v18, v21);
        D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                      v18,
                                      (const struct PixelFormatInfo *)v21,
                                      (const struct BitmapSourceInfo *)&v22,
                                      a5);
        v5 = D2DBitmapFromBitmapSource;
        if ( D2DBitmapFromBitmapSource < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0x22EBu);
          goto LABEL_9;
        }
      }
    }
    else
    {
      LOBYTE(v10) = a4;
      (*(void (__fastcall **)(__int64, char *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v20 + 136LL))(
        v20,
        (char *)this + 392,
        0LL,
        v10,
        a5);
    }
    if ( *a5 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*a5 + 32LL))(*a5, v21);
      v22 = 0LL;
      v23 = v21[0];
      v24 = v21[1];
      CDrawingContext::RecordBitmapContentInfo(this, a2, v19, &v22, 0LL);
    }
  }
LABEL_9:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v18);
  ReleaseInterfaceNoNULL<CManipulationManager>(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v5;
}

/*
 * XREFs of ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180149490
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A52C0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
        CDirectFlipInfo *this,
        struct IRenderTargetBitmap **a2)
{
  CCompositionSurfaceInfo *v3; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 *v6; // rcx
  struct CBitmapRealization *v7; // rdi
  __int64 v8; // rdx
  signed int v9; // eax
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax
  signed int RenderTargetBitmapFromTexture; // eax
  int v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  int v18[2]; // [rsp+58h] [rbp-28h]
  int v19[4]; // [rsp+60h] [rbp-20h] BYREF
  struct _LUID v20; // [rsp+70h] [rbp-10h] BYREF

  v16 = 0LL;
  v3 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  v17 = 0LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v3);
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v15 = 0;
  v7 = RenderingRealizationNoRef;
  v18[1] = 0;
  v19[2] = 0;
  v8 = *v6;
  v18[0] = 1;
  v19[0] = 87;
  v19[1] = 3;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *))(v8 + 88))(v6, &v20, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x209u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, &v16, 0LL);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x20Bu);
    }
    else
    {
      v12 = (**v16)(v16, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v17);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x20Du);
      }
      else
      {
        RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                          (int)&qword_18026EEE8,
                                          v18[0],
                                          0,
                                          (int)v19,
                                          v20,
                                          v15,
                                          v17,
                                          (__int64)a2);
        v10 = RenderTargetBitmapFromTexture;
        if ( RenderTargetBitmapFromTexture < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmapFromTexture, 0x217u);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v16);
  ReleaseInterfaceNoNULL<CManipulationManager>(v17);
  return v10;
}

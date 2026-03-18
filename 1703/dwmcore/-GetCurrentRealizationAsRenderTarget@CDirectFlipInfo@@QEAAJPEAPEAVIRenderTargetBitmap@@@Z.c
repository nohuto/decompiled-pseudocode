/*
 * XREFs of ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015527C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180135BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
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
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int RenderTargetBitmapFromTexture; // eax
  int v16; // [rsp+58h] [rbp+17h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+68h] [rbp+27h] BYREF
  int v19[2]; // [rsp+70h] [rbp+2Fh]
  int v20[4]; // [rsp+78h] [rbp+37h] BYREF
  struct _LUID v21; // [rsp+88h] [rbp+47h] BYREF

  v17 = 0LL;
  v3 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  v18 = 0LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v3);
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v16 = 0;
  v7 = RenderingRealizationNoRef;
  v19[1] = 0;
  v20[2] = 0;
  v8 = *v6;
  v19[0] = 1;
  v20[0] = 87;
  v20[1] = 3;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *, _QWORD))(v8 + 104))(v6, &v21, &v16, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x205u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &v17, 0LL);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x207u);
    }
    else
    {
      v12 = (**v17)(v17, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v18);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x209u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 24LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL));
        RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                          (__int64)&qword_18023E818,
                                          *(__int64 *)v19,
                                          0LL,
                                          (__int64)v20,
                                          (struct _GUID *)(v13 + 324),
                                          v21,
                                          v16,
                                          (struct ID3D11Texture2D *)v18,
                                          a2);
        v10 = RenderTargetBitmapFromTexture;
        if ( RenderTargetBitmapFromTexture < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmapFromTexture, 0x214u);
      }
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v17);
  ReleaseInterfaceNoNULL<CD2DPencil>(v18);
  return v10;
}

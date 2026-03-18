/*
 * XREFs of ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x1801A0AC4
 * Callers:
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800704C0 (-GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?GetHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A0CE0 (-GetHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180079250 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::EnsureHDRIntermediateTargetBitmap(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // esi
  _QWORD *v2; // rdi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  char v7; // al
  int RenderTargetBitmap; // eax
  __int64 v9; // rax
  CMILPoolResource *v10; // rcx
  void (__fastcall ***v11)(_QWORD); // rdi
  const char *v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+48h] [rbp-30h]
  _DWORD v15[4]; // [rsp+50h] [rbp-28h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    v4 = *(_QWORD *)this;
    v15[0] = 10;
    v5 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(v4 + 32))(this);
    v15[2] = 1;
    v15[1] = v5;
    v13 = "HDR intermediate target bitmap";
    v6 = *(_QWORD *)this;
    v14 = 30;
    v7 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(v6 + 168))(this);
    RenderTargetBitmap = CD3DDeviceLevel1::CreateRenderTargetBitmap(
                           *((_QWORD *)this + 23),
                           (__int64)&v13,
                           *((_DWORD *)this + 56),
                           *((_DWORD *)this + 57),
                           *((_DWORD *)this + 29),
                           (__int64)v15,
                           v7,
                           v2);
    v1 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x322u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 120LL))(*v2);
      v10 = (CMILPoolResource *)*((_QWORD *)this + 21);
      v11 = (void (__fastcall ***)(_QWORD))v9;
      if ( v10 )
        CMILPoolResource::Release(v10);
      *((_QWORD *)this + 21) = v11;
      if ( v11 )
        (**v11)(v11);
    }
  }
  return v1;
}

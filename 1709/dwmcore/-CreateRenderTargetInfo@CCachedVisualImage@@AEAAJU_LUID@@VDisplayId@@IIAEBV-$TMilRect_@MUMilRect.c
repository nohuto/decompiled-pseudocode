/*
 * XREFs of ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x18008E2A4
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18001B188 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@W4Enum@MilStretch@@@Z @ 0x18008AF34 (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTarget.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800BE0D4 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CreateRenderTargetInfo(
        _DWORD *a1,
        struct _LUID a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int128 *a6,
        int a7,
        __int64 a8)
{
  unsigned int v12; // r14d
  struct CRenderTargetBitmap *v13; // rsi
  int v14; // eax
  bool v15; // zf
  int v16; // ecx
  BOOL v17; // eax
  char v18; // al
  signed int RenderTargetBitmap; // eax
  signed int v20; // eax
  struct CRenderTargetBitmap *v22; // [rsp+70h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v23[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v24; // [rsp+88h] [rbp-21h]
  const char *v25; // [rsp+90h] [rbp-19h] BYREF
  int v26; // [rsp+98h] [rbp-11h]
  _DWORD v27[4]; // [rsp+A0h] [rbp-9h] BYREF

  v24 = a8;
  v23[0] = 0LL;
  v22 = 0LL;
  v12 = -2003292287;
  v13 = 0LL;
  if ( a4 && a5 )
  {
    v14 = a1[51];
    v15 = a1[53] == 2;
    v16 = 3;
    v27[0] = v14;
    v17 = v15;
    v23[1] = (struct IRenderTargetBitmap *)1;
    v15 = a1[52] == 0;
    v27[2] = v17;
    if ( !v15 )
      v16 = 1;
    v25 = "DWM Cached Visual Image";
    v27[1] = v16;
    v26 = 23;
    v18 = CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, a2);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_18026EEE8,
                           (__int64)&v25,
                           a4,
                           a5,
                           1LL,
                           0,
                           (__int64)v27,
                           1,
                           a2,
                           a3,
                           v18,
                           0,
                           1,
                           v23);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201E04, 1u, RenderTargetBitmap, 0x4CAu);
    }
    else
    {
      v20 = CRenderTargetBitmap::Create(v23[0], &v22);
      v12 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201E04, 1u, v20, 0x4CDu);
        v13 = v22;
      }
      else
      {
        v13 = v22;
        CCachedVisualImage::RenderTargetBitmapInfo::Construct(v24, a6, (__int64)a1, (__int64)v22, a7);
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(struct CRenderTargetBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v23[0]);
  return v12;
}

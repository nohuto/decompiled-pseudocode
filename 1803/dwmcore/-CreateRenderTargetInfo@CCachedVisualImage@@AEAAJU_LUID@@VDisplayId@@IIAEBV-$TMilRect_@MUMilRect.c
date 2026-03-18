/*
 * XREFs of ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800B4578
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x1800B3E5C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180088C74 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@W4Enum@MilStretch@@@Z @ 0x1800B686C (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTarget.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800C65E0 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CreateRenderTargetInfo(
        _DWORD *a1,
        struct _LUID a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
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
  int RenderTargetBitmap; // eax
  int v20; // eax
  struct CRenderTargetBitmap *v22; // [rsp+70h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v23[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v24; // [rsp+88h] [rbp-21h]
  int v25[2]; // [rsp+90h] [rbp-19h] BYREF
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
    *(_QWORD *)v25 = "DWM Cached Visual Image";
    v27[1] = v16;
    v26 = 23;
    v18 = CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, a2);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_1802D6728,
                           (__int64)v25,
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276970, 1u, RenderTargetBitmap, 0x4C5u);
    }
    else
    {
      v20 = CRenderTargetBitmap::Create(v23[0], &v22);
      v12 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276970, 1u, v20, 0x4C8u);
        v13 = v22;
      }
      else
      {
        v13 = v22;
        CCachedVisualImage::RenderTargetBitmapInfo::Construct(v24, a6, a1, v22, a7);
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(struct CRenderTargetBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v23[0]);
  return v12;
}

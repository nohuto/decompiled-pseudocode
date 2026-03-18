/*
 * XREFs of ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047A70 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180043400 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@W4Enum@MilStretch@@@Z @ 0x180046D7C (-Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTarget.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180048688 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z @ 0x18004B1C0 (--$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800C6A10 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::CreateNewRenderTarget(
        __int64 a1,
        struct _LUID a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int128 *a6,
        int a7,
        __int64 *a8)
{
  unsigned int v12; // esi
  __int64 v13; // rsi
  char v14; // al
  int RenderTargetBitmap; // eax
  int v16; // eax
  int v17; // eax
  struct CRenderTargetBitmap *v19; // [rsp+80h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v20[2]; // [rsp+88h] [rbp-31h] BYREF
  int v21[2]; // [rsp+98h] [rbp-21h] BYREF
  int v22; // [rsp+A0h] [rbp-19h]
  _DWORD v23[4]; // [rsp+A8h] [rbp-11h] BYREF

  v20[0] = 0LL;
  v19 = 0LL;
  *a8 = 0LL;
  v12 = 0;
  if ( a4 && a5 )
  {
    v20[1] = (struct IRenderTargetBitmap *)1;
    CCachedVisualImage::ChoosePixelFormat((CCachedVisualImage *)a1);
    v23[0] = *(_DWORD *)(a1 + 148);
    v23[1] = *(_DWORD *)(a1 + 152) != 0 ? 1 : 3;
    v13 = *(_QWORD *)(a1 + 32);
    v23[2] = *(_DWORD *)(a1 + 156) == 2;
    v22 = 23;
    *(_QWORD *)v21 = "DWM Cached Visual Image";
    v14 = CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, a2);
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_18023E818,
                           (__int64)v21,
                           a4,
                           a5,
                           1LL,
                           0,
                           (struct PixelFormatInfo *)v23,
                           1,
                           (struct _GUID *)(v13 + 324),
                           a2,
                           a3,
                           v14,
                           0,
                           1,
                           (void **)v20);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x4C0u);
    }
    else
    {
      v16 = CRenderTargetBitmap::Create(v20[0], &v19);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x4C3u);
      }
      else
      {
        v17 = DynArrayImpl<1>::AddMultiple(a1 + 184, 48LL, 1LL, a8);
        v12 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x4C8u);
        else
          CCachedVisualImage::RenderTargetBitmapInfo::Construct(*a8, a6, a1, (__int64)v19, a7);
      }
    }
  }
  ReleaseInterfaceNoNULL<CRenderTargetBitmap>(v19);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v20[0]);
  return v12;
}

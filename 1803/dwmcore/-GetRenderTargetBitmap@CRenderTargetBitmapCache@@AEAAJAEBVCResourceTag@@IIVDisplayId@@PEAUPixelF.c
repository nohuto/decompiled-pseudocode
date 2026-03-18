/*
 * XREFs of ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180013458 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180017E6C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180078930 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078DDC (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B9954 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9BAC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800B9DF0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::GetRenderTargetBitmap(
        CRenderTargetBitmapCache *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        bool a8,
        char a9,
        void **a10)
{
  int MatchingBitmap; // eax
  unsigned int v15; // edi
  CHwTextureRenderTarget *v16; // rbx
  __int64 v17; // rcx
  int Interface; // eax
  int v20; // eax
  CHwTextureRenderTarget *v21[2]; // [rsp+40h] [rbp-38h] BYREF

  v21[0] = 0LL;
  MatchingBitmap = CRenderTargetBitmapCache::FindMatchingBitmap(a1, a3, a4, a6, a7, a8, v21);
  v15 = MatchingBitmap;
  if ( MatchingBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MatchingBitmap, 0x9Eu);
    goto LABEL_17;
  }
  v16 = v21[0];
  if ( !v21[0] )
  {
    v20 = CScratchRenderTargetBitmap::Create(
            a3,
            a4,
            (struct CD3DDeviceLevel1 *)(((unsigned __int64)a1 - 536) & -(__int64)(a1 != 0LL)),
            a5,
            a6,
            a7,
            v21);
    v15 = v20;
    if ( v20 >= 0 )
    {
      v16 = v21[0];
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xB1u);
LABEL_17:
    v16 = v21[0];
    goto LABEL_9;
  }
  CHwTextureRenderTarget::UpdatePixelFormatInfo(v21[0], a6);
  *((_DWORD *)v16 + 29) = a5;
LABEL_4:
  v17 = *((_QWORD *)v16 + 31);
  *((_BYTE *)v16 + 297) = a9;
  if ( v17 )
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(**(_QWORD **)(v17 + 120) + 40LL))(
      *(_QWORD *)(v17 + 120),
      &WKPDID_D3DDebugObjectName,
      *(unsigned int *)(a2 + 8),
      *(_QWORD *)a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CHwTextureRenderTarget *)((char *)v16 + 160),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a10);
  v15 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Interface, 0xBEu);
  }
  else if ( *((_BYTE *)v16 + 297) )
  {
    ++*((_DWORD *)a1 + 10);
  }
LABEL_9:
  if ( v16 )
    CScratchRenderTargetBitmap::Release(v16);
  return v15;
}

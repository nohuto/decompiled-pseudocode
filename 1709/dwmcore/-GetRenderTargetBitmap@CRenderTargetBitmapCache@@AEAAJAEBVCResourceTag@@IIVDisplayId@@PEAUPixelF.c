/*
 * XREFs of ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x18008CE70
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AE28 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18008BBC0 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18008FF50 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090284 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800BC078 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  signed int MatchingBitmap; // eax
  unsigned int v15; // edi
  CHwTextureRenderTarget *v16; // rbx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int Interface; // eax
  int v21; // [rsp+28h] [rbp-50h]
  CHwTextureRenderTarget *v22[2]; // [rsp+40h] [rbp-38h] BYREF

  v22[0] = 0LL;
  MatchingBitmap = CRenderTargetBitmapCache::FindMatchingBitmap(a1, a3, a4, a6, a7, a8, v22);
  v15 = MatchingBitmap;
  if ( MatchingBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, MatchingBitmap, 0x9Eu);
    goto LABEL_17;
  }
  v16 = v22[0];
  if ( v22[0] )
  {
    CHwTextureRenderTarget::UpdatePixelFormatInfo(v22[0], a6);
    *((_DWORD *)v16 + 29) = a5;
    goto LABEL_5;
  }
  LOBYTE(v21) = a7;
  v17 = CScratchRenderTargetBitmap::Create(
          a3,
          a4,
          ((unsigned __int64)a1 - 536) & -(__int64)(a1 != 0LL),
          a5,
          a6,
          v21,
          v22);
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xB1u);
LABEL_17:
    v16 = v22[0];
    goto LABEL_10;
  }
  v16 = v22[0];
LABEL_5:
  v18 = *((_QWORD *)v16 + 28);
  *((_BYTE *)v16 + 273) = a9;
  if ( v18 )
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(**(_QWORD **)(v18 + 120) + 40LL))(
      *(_QWORD *)(v18 + 120),
      &WKPDID_D3DDebugObjectName,
      *(unsigned int *)(a2 + 8),
      *(_QWORD *)a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CHwTextureRenderTarget *)((char *)v16 + 144),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a10);
  v15 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Interface, 0xBEu);
  }
  else if ( *((_BYTE *)v16 + 273) )
  {
    ++*((_DWORD *)a1 + 10);
  }
LABEL_10:
  if ( v16 )
    CScratchRenderTargetBitmap::Release(v16);
  return v15;
}

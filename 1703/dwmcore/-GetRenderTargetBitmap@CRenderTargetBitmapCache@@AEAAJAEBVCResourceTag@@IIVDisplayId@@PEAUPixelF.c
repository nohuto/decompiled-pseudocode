/*
 * XREFs of ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF94 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x180006370 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180020D64 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049090 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180049690 (-UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800497D0 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  CScratchRenderTargetBitmap *v16; // rbx
  __int64 v17; // rcx
  int Interface; // eax
  int v20; // eax
  int v21; // [rsp+28h] [rbp-50h]
  CScratchRenderTargetBitmap *v22[2]; // [rsp+40h] [rbp-38h] BYREF

  v22[0] = 0LL;
  MatchingBitmap = CRenderTargetBitmapCache::FindMatchingBitmap(a1, a3, a4, a6, a7, a8, v22);
  v15 = MatchingBitmap;
  if ( MatchingBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MatchingBitmap, 0x99u);
    goto LABEL_17;
  }
  v16 = v22[0];
  if ( !v22[0] )
  {
    LOBYTE(v21) = a7;
    v20 = CScratchRenderTargetBitmap::Create(
            a3,
            a4,
            ((unsigned __int64)a1 - 552) & -(__int64)(a1 != 0LL),
            a5,
            a6,
            v21,
            v22);
    v15 = v20;
    if ( v20 >= 0 )
    {
      v16 = v22[0];
      goto LABEL_4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB0u);
LABEL_17:
    v16 = v22[0];
    goto LABEL_9;
  }
  CHwTextureRenderTarget::UpdatePixelFormatInfo(v22[0], a6);
  CHwTextureRenderTarget::UpdateDisplayId(v16, a5);
LABEL_4:
  v17 = *((_QWORD *)v16 + 26);
  *((_BYTE *)v16 + 257) = a9;
  if ( v17 )
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(**(_QWORD **)(v17 + 128) + 40LL))(
      *(_QWORD *)(v17 + 128),
      &WKPDID_D3DDebugObjectName,
      *(unsigned int *)(a2 + 8),
      *(_QWORD *)a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CScratchRenderTargetBitmap *)((char *)v16 + 128),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a10);
  v15 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Interface, 0xC1u);
  }
  else if ( *((_BYTE *)v16 + 257) )
  {
    ++*((_DWORD *)a1 + 10);
  }
LABEL_9:
  if ( v16 )
    CScratchRenderTargetBitmap::Release(v16);
  return v15;
}

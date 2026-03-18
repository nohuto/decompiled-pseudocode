/*
 * XREFs of ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801A2F0C
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801A30A0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801A34CC (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801C0558 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::FillGradientTexture(__int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int Gradient; // eax
  int v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v8 = CHwVidMemTextureManager::ReCreateAndLockSysMemSurface(
         (CHwVidMemTextureManager *)(a1 + 128),
         (struct LOCKED_RECT *)&v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xFDu);
  }
  else
  {
    if ( v12 >= 4 * *(_DWORD *)(a1 + 108) )
    {
      Gradient = CGradientTextureGenerator::GenerateGradientTexture<unsigned int>(
                   *(_QWORD *)a2,
                   *(_QWORD *)(a2 + 32),
                   *(_DWORD *)(a2 + 24),
                   a3,
                   a4,
                   a1 + 112,
                   *(_DWORD *)(a1 + 108),
                   v13);
      v9 = Gradient;
      if ( Gradient < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Gradient, 0x10Fu);
    }
    else
    {
      v9 = -2003304446;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304446, 0x103u);
    }
    CD3DDeviceLevel1::Unmap(
      *(CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 16LL) + 128LL),
      *(struct ID3D11Resource **)(*(_QWORD *)(a1 + 136) + 136LL));
  }
  return v9;
}

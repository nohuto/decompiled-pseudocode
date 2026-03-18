/*
 * XREFs of ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801BC7F0
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801BC990 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801BCDD0 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801D91C8 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::FillGradientTexture(__int64 a1, __int64 a2, int a3, int a4)
{
  signed int v8; // eax
  unsigned int v9; // ebx
  signed int Gradient; // eax
  int v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v8 = CHwVidMemTextureManager::ReCreateAndLockSysMemSurface(
         (CHwVidMemTextureManager *)(a1 + 136),
         (struct LOCKED_RECT *)&v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xFDu);
  }
  else
  {
    if ( v12 >= 4 * *(_DWORD *)(a1 + 116) )
    {
      Gradient = CGradientTextureGenerator::GenerateGradientTexture<unsigned int>(
                   *(_QWORD *)a2,
                   *(_QWORD *)(a2 + 32),
                   *(_DWORD *)(a2 + 24),
                   a3,
                   a4,
                   a1 + 120,
                   *(_DWORD *)(a1 + 116),
                   v13);
      v9 = Gradient;
      if ( Gradient < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Gradient, 0x10Fu);
    }
    else
    {
      v9 = -2003304446;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980002, 0x103u);
    }
    CD3DDeviceLevel1::Unmap(
      *(CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) + 80LL),
      *(struct ID3D11Resource **)(*(_QWORD *)(a1 + 144) + 128LL));
  }
  return v9;
}

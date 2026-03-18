/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B76C4
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C80C8 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001BC64 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180076954 (-GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x1800BABA8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x1800CB640 (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        CDisplay *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        bool *a7)
{
  int v7; // eax
  bool v9; // bp
  bool v13; // al
  int v14; // r14d
  int v15; // eax
  bool v16; // cc
  enum DXGI_FORMAT DefaultSRGBFormat; // eax
  int v18; // ebp
  bool v19; // zf
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  int v24; // ecx

  v7 = *((_DWORD *)this + 75);
  *(_DWORD *)(a4 + 8) = 0;
  v9 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  *(_DWORD *)(a4 + 20) = v7;
  *(_DWORD *)(a4 + 24) = *((_DWORD *)this + 76);
  v13 = (a2 & 0x2000) != 0 && *((_BYTE *)this + 316);
  *a7 = v13;
  v14 = a2 & 0x4000;
  if ( (a2 & 0x4000) != 0 )
  {
    if ( ((*((_DWORD *)this + 78) - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
      v24 = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
    }
    else
    {
      v15 = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
      v24 = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
    }
    *(_DWORD *)a4 = v24;
  }
  else
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 24) - *((_DWORD *)this + 22);
    v15 = *((_DWORD *)this + 25) - *((_DWORD *)this + 23);
  }
  *(_DWORD *)(a4 + 4) = v15;
  v16 = *(_DWORD *)(a3 + 756) < 45056;
  *(_QWORD *)(a4 + 8) = *((_QWORD *)this + 36);
  if ( v16 && !CDXGIAdapterLimited::IsXboxAdapter(*(CDXGIAdapterLimited **)(a3 + 712)) )
    goto LABEL_31;
  DefaultSRGBFormat = *((_DWORD *)this + 74);
  if ( DefaultSRGBFormat != DXGI_FORMAT_R16G16B16A16_FLOAT
    && DefaultSRGBFormat != DXGI_FORMAT_R10G10B10A2_UNORM
    && DefaultSRGBFormat != DXGI_FORMAT_R8G8B8A8_UNORM )
  {
    v9 = DefaultSRGBFormat != DXGI_FORMAT_B8G8R8A8_UNORM;
  }
  if ( v9 )
  {
LABEL_31:
    v18 = 0;
    DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  }
  else
  {
    v18 = *((_DWORD *)this + 77);
    if ( v14 )
    {
      if ( v18 )
      {
        v18 = 1;
        DefaultSRGBFormat = DXGI_FORMAT_R16G16B16A16_FLOAT;
      }
      else
      {
        DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
        v18 = *((_DWORD *)this + 77);
      }
    }
  }
  *(_DWORD *)(a4 + 16) = DefaultSRGBFormat;
  *a5 = v18;
  if ( v18 )
    *a7 = 0;
  *(_DWORD *)(a4 + 32) = 0;
  v19 = *((_BYTE *)this + 232) == 0;
  *(_DWORD *)(a4 + 28) = 1;
  if ( !v19 || v14 )
  {
    *(_DWORD *)(a4 + 60) = 1;
    *(_DWORD *)(a4 + 40) = 1;
  }
  else if ( (a2 & 0x400) != 0 )
  {
    v20 = *((_DWORD *)this + 80);
    *(_DWORD *)(a4 + 60) = 1;
    if ( !v20 )
      v20 = (CDisplay::ShouldTripleBuffer(this) != 0) + 2;
    *(_DWORD *)(a4 + 40) = v20;
  }
  else
  {
    *(_DWORD *)(a4 + 40) = 1;
    *(_DWORD *)(a4 + 60) = (a2 & 8) != 0;
  }
  v21 = *(_DWORD *)(a4 + 16);
  v22 = *(_DWORD *)(a4 + 40);
  *(_DWORD *)(a4 + 64) = 0;
  *(_DWORD *)(a4 + 36) = 96;
  *(_DWORD *)(a4 + 36) |= CD3DDeviceLevel1::GetOptionalDisplaySwapChainBufferUsageFlags(
                            (CD3DDeviceLevel1 *)a3,
                            v22,
                            v21);
  if ( !v14 )
    *(_DWORD *)(a4 + 64) |= 1u;
  *a6 = ((a2 >> 2) & 1) == 0;
  return 0LL;
}

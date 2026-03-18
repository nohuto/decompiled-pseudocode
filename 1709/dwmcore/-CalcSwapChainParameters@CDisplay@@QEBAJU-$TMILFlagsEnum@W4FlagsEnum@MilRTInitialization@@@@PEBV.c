/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180191118
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1801AE008 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x18001FF60 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x1800753AC (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x180077D44 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180078184 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SupportsD3D12PostPresentProcessing@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1801A8468 (-SupportsD3D12PostPresentProcessing@CD3DDeviceLevel1@@QEBA_NXZ.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        CDisplay *this,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        int *a6,
        _BYTE *a7)
{
  int v8; // eax
  _BYTE *v12; // r14
  int v13; // eax
  bool v14; // cc
  int DefaultSRGBFormat; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  char CanUseSwapChainBuffersAsShaderInput; // al
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  int v25; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(a4 + 20) = *((_DWORD *)this + 70);
  v8 = *((_DWORD *)this + 71);
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)(a4 + 24) = v8;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  if ( (a2 & 0x2000) != 0 && *((_BYTE *)this + 296) )
  {
    v12 = a7;
    *a7 = 1;
  }
  else
  {
    v12 = a7;
    *a7 = 0;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( ((*((_DWORD *)this + 73) - 2) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)a4 = *((_DWORD *)this + 26) - *((_DWORD *)this + 24);
      v13 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
    }
    else
    {
      *(_DWORD *)a4 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
      v13 = *((_DWORD *)this + 26) - *((_DWORD *)this + 24);
    }
  }
  else
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
    v13 = *((_DWORD *)this + 19) - *((_DWORD *)this + 17);
  }
  v14 = *(_DWORD *)(a3 + 756) < 45056;
  *(_DWORD *)(a4 + 4) = v13;
  *(_QWORD *)(a4 + 8) = *(_QWORD *)((char *)this + 268);
  if ( v14 && !CDXGIAdapterLimited::IsXboxAdapter(*(const wchar_t **)(a3 + 712))
    || (DefaultSRGBFormat = *((_DWORD *)this + 69), DefaultSRGBFormat != 10)
    && DefaultSRGBFormat != 24
    && DefaultSRGBFormat != 28
    && DefaultSRGBFormat != 87 )
  {
    *(_DWORD *)(a4 + 16) = CDisplay::GetDefaultSRGBFormat();
    *a5 = 0;
    goto LABEL_24;
  }
  if ( (a2 & 0x4000) == 0 )
    goto LABEL_20;
  if ( !*((_DWORD *)this + 72) )
  {
    DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
LABEL_20:
    v16 = a5;
    *(_DWORD *)(a4 + 16) = DefaultSRGBFormat;
    *v16 = *((_DWORD *)this + 72);
    goto LABEL_22;
  }
  v16 = a5;
  *(_DWORD *)(a4 + 16) = 10;
  *v16 = 1;
LABEL_22:
  if ( *v16 )
    *v12 = 0;
LABEL_24:
  *(_QWORD *)(a4 + 28) = 1LL;
  if ( *((_BYTE *)this + 208) || (a2 & 0x4000) != 0 )
    goto LABEL_32;
  if ( (a2 & 0x400) == 0 )
  {
    if ( (a2 & 8) == 0 )
    {
      *(_DWORD *)(a4 + 60) = 0;
LABEL_33:
      *(_DWORD *)(a4 + 40) = 1;
      goto LABEL_34;
    }
LABEL_32:
    *(_DWORD *)(a4 + 60) = 1;
    goto LABEL_33;
  }
  v17 = *((_DWORD *)this + 75);
  *(_DWORD *)(a4 + 60) = 1;
  if ( v17 )
    *(_DWORD *)(a4 + 40) = v17;
  else
    *(_DWORD *)(a4 + 40) = (CDisplay::ShouldTripleBuffer(this) != 0) + 2;
LABEL_34:
  *(_DWORD *)(a4 + 64) = 0;
  *(_DWORD *)(a4 + 36) = 96;
  CanUseSwapChainBuffersAsShaderInput = CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput((CD3DDeviceLevel1 *)a3);
  v19 = *(_DWORD *)(a4 + 36);
  if ( CanUseSwapChainBuffersAsShaderInput )
    v19 = 112;
  *(_DWORD *)(a4 + 36) = v19;
  if ( CD3DDeviceLevel1::SupportsD3D12PostPresentProcessing((CD3DDeviceLevel1 *)a3) )
  {
    v20 = *(_QWORD *)(a3 + 648);
    v21 = *(unsigned int *)(a4 + 16);
    *(_DWORD *)(a4 + 36) |= 0x2000080u;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v20 + 232LL))(v20, v21, &v25);
    v23 = 0;
    if ( v22 >= 0 )
      v23 = v25;
    if ( (v23 & 0x2000000) != 0 )
      *(_DWORD *)(a4 + 36) |= 0x400u;
  }
  if ( (a2 & 0x4000) == 0 )
    *(_DWORD *)(a4 + 64) |= 1u;
  *a6 = ((unsigned __int8)~(_BYTE)a2 >> 2) & 1;
  return 0LL;
}

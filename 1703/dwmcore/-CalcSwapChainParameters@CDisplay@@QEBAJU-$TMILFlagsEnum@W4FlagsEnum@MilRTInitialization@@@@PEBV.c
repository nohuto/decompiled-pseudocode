/*
 * XREFs of ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B7A48
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C93E0 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTIn.c)
 * Callees:
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x180079884 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800B79F0 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800B8108 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 */

__int64 __fastcall CDisplay::CalcSwapChainParameters(
        CDisplay *this,
        __int16 a2,
        CD3DDeviceLevel1 *a3,
        __int64 a4,
        _DWORD *a5,
        int *a6,
        char *a7)
{
  char v11; // cl
  char *v12; // r8
  int v13; // esi
  int v14; // eax
  bool v15; // cc
  char v16; // al
  int v17; // eax
  int v18; // ecx
  char v19; // al
  struct _LUID *v20; // rcx
  __int64 v21; // r9
  char CanUseSwapChainBuffersAsShaderInput; // al
  int v23; // ecx
  bool v24; // zf
  int v25; // eax
  unsigned __int8 v26; // bl

  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  v11 = 0;
  *(_DWORD *)(a4 + 20) = *((_DWORD *)this + 69);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)this + 70);
  if ( (a2 & 0x2000) != 0 && *((_BYTE *)this + 292) )
  {
    v12 = a7;
    *a7 = 1;
  }
  else
  {
    v12 = a7;
    *a7 = 0;
  }
  v13 = a2 & 0x4000;
  if ( (a2 & 0x4000) != 0 )
  {
    if ( ((*((_DWORD *)this + 72) - 2) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)a4 = *((_DWORD *)this + 26) - *((_DWORD *)this + 24);
      v14 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
    }
    else
    {
      *(_DWORD *)a4 = *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
      v14 = *((_DWORD *)this + 26) - *((_DWORD *)this + 24);
    }
    v11 = 1;
  }
  else
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
    v14 = *((_DWORD *)this + 19) - *((_DWORD *)this + 17);
  }
  v15 = *((_DWORD *)a3 + 185) < 45056;
  *(_DWORD *)(a4 + 4) = v14;
  *(_QWORD *)(a4 + 8) = *((_QWORD *)this + 33);
  v16 = v11;
  if ( v15 )
    v16 = 1;
  if ( !v16 && ((v17 = *((_DWORD *)this + 68), v17 == 87) || v17 == 10 || v17 == 24) )
  {
    v18 = *((_DWORD *)this + 71);
    *(_DWORD *)(a4 + 16) = v17;
    *a5 = v18;
    v19 = *v12;
    if ( v18 )
      v19 = 0;
    *v12 = v19;
  }
  else
  {
    *(_DWORD *)(a4 + 16) = 87;
    *a5 = 0;
  }
  *(_QWORD *)(a4 + 28) = 1LL;
  if ( CDisplay::IsOffscreenRenderTarget(this) || (a2 & 0x4000) != 0 )
    goto LABEL_21;
  if ( (a2 & 0x400) != 0 )
  {
    *(_DWORD *)(v21 + 60) = 1;
    *(_DWORD *)(a4 + 40) = (CDisplay::ShouldTripleBuffer(v20) != 0) + 2;
    goto LABEL_16;
  }
  if ( (a2 & 8) != 0 )
LABEL_21:
    *(_DWORD *)(v21 + 60) = 1;
  else
    *(_DWORD *)(v21 + 60) = 0;
  *(_DWORD *)(v21 + 40) = 1;
LABEL_16:
  *(_DWORD *)(a4 + 64) = 0;
  *(_DWORD *)(a4 + 36) = 96;
  CanUseSwapChainBuffersAsShaderInput = CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(a3);
  v23 = *(_DWORD *)(a4 + 36);
  v24 = CanUseSwapChainBuffersAsShaderInput == 0;
  v25 = 0;
  v26 = ~(_BYTE)a2;
  if ( !v24 )
    v23 = 112;
  if ( !v13 )
    v25 = 1;
  *(_DWORD *)(a4 + 36) = v23;
  *(_DWORD *)(a4 + 64) = v25;
  *a6 = (v26 >> 2) & 1;
  return 0LL;
}

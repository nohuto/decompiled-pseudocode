/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800CD48C
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800BADC8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800CD6C0 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@@Z @ 0x1800CEBA0 (--0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Tex.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800CEE04 (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct CDisplay *a4,
        struct CDWMOffScreenSwapChain **a5)
{
  __int128 v7; // xmm0
  HANDLE v8; // r12
  CDWMOffScreenSwapChain *v9; // rdi
  char v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  CDWMOffScreenSwapChain *v15; // rax
  CDWMOffScreenSwapChain *v16; // rax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(CDWMOffScreenSwapChain *, struct CD3DResourceManager *); // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  struct ID3D11Texture2D *v24; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  struct CDisplay *v26; // [rsp+50h] [rbp-B0h]
  struct CDWMOffScreenSwapChain **v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  _DWORD v30[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+94h] [rbp-6Ch]
  int v32; // [rsp+9Ch] [rbp-64h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  WCHAR Name[64]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v27 = a5;
  *(_QWORD *)&v25 = "DWM Offscreen SwapChain";
  DWORD2(v25) = 23;
  v7 = v25;
  *a5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v30[0] = a2->BufferDesc.Width;
  v10 = 0;
  v30[1] = a2->BufferDesc.Height;
  v30[4] = a2->BufferDesc.Format;
  v11 = *((_QWORD *)a1 + 16);
  v35 = v7;
  v30[2] = 1;
  v30[3] = 1;
  v31 = 1LL;
  v32 = 0;
  v33 = 40LL;
  v12 = *(__int64 **)(v11 + 624);
  v26 = a4;
  v24 = 0LL;
  BYTE8(v25) = 0;
  *(_QWORD *)&v25 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 16) + 632LL) & 4) != 0 )
  {
    v20 = *v12;
    v29 = 0LL;
    v28 = 2;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v20 + 24))(v12, &v28);
    v14 = v13;
    if ( v13 < 0 )
    {
      v22 = 149;
      goto LABEL_30;
    }
    v10 = 1;
    v34 = 2;
    BYTE8(v25) = 1;
  }
  else
  {
    v34 = 0;
  }
  v13 = CD3DDeviceLevel1::CreateTexture(
          *((CD3DDeviceLevel1 **)a1 + 16),
          (const struct DWM_TEXTURE2D_DESC *)v30,
          0LL,
          &v24);
  v14 = v13;
  if ( v13 < 0 )
  {
    v22 = 160;
    goto LABEL_30;
  }
  if ( v10 )
  {
    v21 = *v12;
    v28 = 3;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v21 + 24))(v12, &v28);
    v14 = v13;
    if ( v13 < 0 )
    {
      v22 = 170;
      goto LABEL_30;
    }
    BYTE8(v25) = 0;
    v13 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v29);
    v14 = v13;
    if ( v13 < 0 )
    {
      v22 = 176;
      goto LABEL_30;
    }
    v8 = OpenFileMappingW(0xF001Fu, 0, Name);
  }
  v15 = (CDWMOffScreenSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x1F0uLL);
  if ( !v15 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v16 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v15, a2, a3, v24);
  v9 = v16;
  if ( !v16 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC0u);
    goto LABEL_12;
  }
  (**(void (__fastcall ***)(CDWMOffScreenSwapChain *))v16)(v16);
  *((_QWORD *)v9 + 48) = v8;
  *((_QWORD *)v9 + 38) = *((_QWORD *)a1 + 16);
  v8 = 0LL;
  v17 = *(_QWORD *)v9;
  *(_OWORD *)((char *)v9 + 312) = *(_OWORD *)&a2->BufferDesc.Width;
  v18 = *(__int64 (__fastcall **)(CDWMOffScreenSwapChain *, struct CD3DResourceManager *))(v17 + 248);
  *(_OWORD *)((char *)v9 + 328) = *(_OWORD *)&a2->BufferDesc.Format;
  *(_OWORD *)((char *)v9 + 344) = *(_OWORD *)&a2->SampleDesc.Quality;
  *(_OWORD *)((char *)v9 + 360) = *(_OWORD *)&a2->OutputWindow;
  *((_QWORD *)v9 + 47) = *(_QWORD *)&a2->Flags;
  v13 = v18(v9, a1);
  v14 = v13;
  if ( v13 < 0 )
  {
    v22 = 203;
  }
  else
  {
    v13 = CDWMOffScreenSwapChain::InitForGdiBlt(v9, a2, v26);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *v27 = v9;
      v9 = 0LL;
      goto LABEL_12;
    }
    v22 = 204;
  }
LABEL_30:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v22);
LABEL_12:
  ReleaseInterface<IBitmapLock>(&v24);
  if ( v9 )
    (*(void (__fastcall **)(CDWMOffScreenSwapChain *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v8 )
    CloseHandle(v8);
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v25);
  return v14;
}

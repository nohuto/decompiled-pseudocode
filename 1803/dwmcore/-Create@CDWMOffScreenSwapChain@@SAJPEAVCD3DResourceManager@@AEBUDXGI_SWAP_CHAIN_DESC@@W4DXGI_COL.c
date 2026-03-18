/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800D74F8
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180075470 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800767F0 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D191C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800D76E0 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1800D8D50 (--0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPA.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800D8DFC (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        struct CD3DResourceManager *a1,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct CDisplay *a4,
        struct CDWMOffScreenSwapChain **a5)
{
  HANDLE v7; // r14
  UINT Width; // eax
  char v9; // r15
  CDWMOffScreenSwapChain *v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  CDWMOffScreenSwapChain *v15; // rcx
  CDWMOffScreenSwapChain *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-E0h]
  struct ID3D11Texture2D *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+40h] [rbp-C0h] BYREF
  struct CDisplay *v24; // [rsp+50h] [rbp-B0h]
  struct CDWMOffScreenSwapChain **v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  _DWORD v28[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+94h] [rbp-6Ch]
  int v30; // [rsp+9Ch] [rbp-64h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  WCHAR Name[64]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v25 = a5;
  DWORD2(v23) = 23;
  v30 = 0;
  *a5 = 0LL;
  v7 = 0LL;
  Width = a2->BufferDesc.Width;
  v9 = 1;
  *(_QWORD *)&v23 = "DWM Offscreen SwapChain";
  v10 = 0LL;
  v11 = *((_QWORD *)a1 + 10);
  v28[0] = Width;
  v28[1] = a2->BufferDesc.Height;
  v28[4] = a2->BufferDesc.Format;
  v33 = v23;
  v28[2] = 1;
  v28[3] = 1;
  v29 = 1LL;
  v31 = 40LL;
  v12 = *(__int64 **)(v11 + 632);
  v24 = a4;
  v22 = 0LL;
  BYTE8(v23) = 0;
  *(_QWORD *)&v23 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
    v11 = *((_QWORD *)a1 + 10);
  }
  if ( (*(_BYTE *)(v11 + 640) & 4) != 0 )
  {
    v18 = *v12;
    v27 = 0LL;
    v26 = 2;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v18 + 24))(v12, &v26);
    v14 = v13;
    if ( v13 < 0 )
    {
      v20 = 169;
      goto LABEL_30;
    }
    v11 = *((_QWORD *)a1 + 10);
    BYTE8(v23) = 1;
    v32 = 2;
  }
  else
  {
    v32 = 0;
    v9 = 0;
  }
  v13 = CD3DDeviceLevel1::CreateTexture((CD3DDeviceLevel1 *)v11, (const struct DWM_TEXTURE2D_DESC *)v28, 0LL, &v22);
  v14 = v13;
  if ( v13 < 0 )
  {
    v20 = 180;
    goto LABEL_30;
  }
  if ( v9 )
  {
    v19 = *v12;
    v26 = 3;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v19 + 24))(v12, &v26);
    v14 = v13;
    if ( v13 < 0 )
    {
      v20 = 190;
      goto LABEL_30;
    }
    BYTE8(v23) = 0;
    v13 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v27);
    v14 = v13;
    if ( v13 < 0 )
    {
      v20 = 196;
      goto LABEL_30;
    }
    v7 = OpenFileMappingW(0xF001Fu, 0, Name);
  }
  v15 = (CDWMOffScreenSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x230uLL);
  if ( !v15 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v16 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v15, *((struct CD3DDeviceLevel1 **)a1 + 10), a2, a3, v22, v7);
  v10 = v16;
  if ( !v16 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD5u);
    goto LABEL_12;
  }
  (**(void (__fastcall ***)(CDWMOffScreenSwapChain *))v16)(v16);
  v7 = 0LL;
  v13 = (*(__int64 (__fastcall **)(CDWMOffScreenSwapChain *, struct CD3DResourceManager *))(*(_QWORD *)v10 + 280LL))(
          v10,
          a1);
  v14 = v13;
  if ( v13 < 0 )
  {
    v20 = 221;
  }
  else
  {
    v13 = CDWMOffScreenSwapChain::InitForGdiBlt(v10, a2, v24);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *v25 = v10;
      v10 = 0LL;
      goto LABEL_12;
    }
    v20 = 222;
  }
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v20);
LABEL_12:
  ReleaseInterface<IBitmapLock>((__int64 *)&v22);
  if ( v10 )
    (*(void (__fastcall **)(CDWMOffScreenSwapChain *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v7 )
    CloseHandle(v7);
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v23);
  return v14;
}

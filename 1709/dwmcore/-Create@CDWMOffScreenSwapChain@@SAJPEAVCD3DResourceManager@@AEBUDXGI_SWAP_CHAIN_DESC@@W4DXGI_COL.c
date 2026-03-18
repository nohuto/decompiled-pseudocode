/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1801B12BC
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1801A693C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800045B8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180021D30 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1801B0E10 (--0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPA.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1801B0F58 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1801B1698 (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        struct CD3DResourceManager *a1,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct CDisplay *a4,
        struct CDWMOffScreenSwapChain **a5)
{
  __int128 v7; // xmm0
  HANDLE v8; // r14
  CDWMOffScreenSwapChain *v9; // rdi
  char v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rax
  signed int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  CDWMOffScreenSwapChain *v17; // rcx
  CDWMOffScreenSwapChain *v18; // rax
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
  const void *retaddr; // [rsp+198h] [rbp+98h]

  v25 = a5;
  *(_QWORD *)&v23 = "DWM Offscreen SwapChain";
  DWORD2(v23) = 23;
  v7 = v23;
  *a5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v28[0] = a2->BufferDesc.Width;
  v10 = 0;
  v28[1] = a2->BufferDesc.Height;
  v28[4] = a2->BufferDesc.Format;
  v11 = *((_QWORD *)a1 + 10);
  v33 = v7;
  v28[2] = 1;
  v28[3] = 1;
  v29 = 1LL;
  v30 = 0;
  v31 = 40LL;
  v12 = *(__int64 **)(v11 + 632);
  v24 = a4;
  v22 = 0LL;
  BYTE8(v23) = 0;
  *(_QWORD *)&v23 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 10) + 640LL) & 4) != 0 )
  {
    v13 = *v12;
    v27 = 0LL;
    v26 = 2;
    v14 = (*(__int64 (__fastcall **)(__int64 *, int *))(v13 + 24))(v12, &v26);
    v15 = v14;
    if ( v14 < 0 )
    {
      v20 = 169;
      goto LABEL_25;
    }
    v10 = 1;
    v32 = 2;
    BYTE8(v23) = 1;
  }
  else
  {
    v32 = 0;
  }
  v14 = CD3DDeviceLevel1::CreateTexture(
          *((CD3DDeviceLevel1 **)a1 + 10),
          (const struct DWM_TEXTURE2D_DESC *)v28,
          0LL,
          &v22);
  v15 = v14;
  if ( v14 < 0 )
  {
    v20 = 180;
    goto LABEL_25;
  }
  if ( v10 )
  {
    v16 = *v12;
    v26 = 3;
    v14 = (*(__int64 (__fastcall **)(__int64 *, int *))(v16 + 24))(v12, &v26);
    v15 = v14;
    if ( v14 < 0 )
    {
      v20 = 190;
      goto LABEL_25;
    }
    BYTE8(v23) = 0;
    v14 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v27);
    v15 = v14;
    if ( v14 < 0 )
    {
      v20 = 196;
      goto LABEL_25;
    }
    v8 = OpenFileMappingW(0xF001Fu, 0, Name);
  }
  v17 = (CDWMOffScreenSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x220uLL);
  if ( !v17 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v18 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v17, *((struct CD3DDeviceLevel1 **)a1 + 10), a2, a3, v22, v8);
  v9 = v18;
  if ( !v18 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xD5u);
    goto LABEL_26;
  }
  (**(void (__fastcall ***)(CDWMOffScreenSwapChain *))v18)(v18);
  v8 = 0LL;
  v14 = (*(__int64 (__fastcall **)(CDWMOffScreenSwapChain *, struct CD3DResourceManager *))(*(_QWORD *)v9 + 256LL))(
          v9,
          a1);
  v15 = v14;
  if ( v14 < 0 )
  {
    v20 = 221;
  }
  else
  {
    v14 = CDWMOffScreenSwapChain::InitForGdiBlt(v9, a2, v24);
    v15 = v14;
    if ( v14 >= 0 )
    {
      *v25 = v9;
      v9 = 0LL;
      goto LABEL_26;
    }
    v20 = 222;
  }
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v20);
LABEL_26:
  ReleaseInterface<IBitmapLock>((__int64 *)&v22);
  if ( v9 )
    (*(void (__fastcall **)(CDWMOffScreenSwapChain *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v8 )
    CloseHandle(v8);
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v23);
  return v15;
}

/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1801A693C
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8790 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B97A0 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180077994 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x18007843C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x1800811E4 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1801B0184 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1801B12BC (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801B21C8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        __int16 a4,
        CDisplay *a5,
        struct CDWMSwapChain **a6)
{
  int v9; // esi
  signed int v10; // eax
  __int64 v11; // rdi
  signed int v12; // eax
  __int64 v13; // rsi
  BOOL Windowed; // eax
  signed int v15; // eax
  struct CDWMSwapChain *v16; // rsi
  signed int v17; // eax
  struct CDWMSwapChain *v18; // rsi
  int v19; // eax
  int v20; // eax
  char v21; // al
  unsigned int v22; // edx
  DWORD v23; // r9d
  __int64 v24; // rbx
  signed int v25; // eax
  __int64 v26; // rdi
  signed int v27; // eax
  UINT Width; // eax
  __int64 v29; // rdi
  signed int v30; // eax
  signed int v31; // eax
  unsigned int v32; // ebx
  unsigned int v34; // [rsp+20h] [rbp-A9h]
  __int64 v35; // [rsp+40h] [rbp-89h] BYREF
  struct IDXGISwapChainDWM1 *v36; // [rsp+48h] [rbp-81h] BYREF
  __int64 v37; // [rsp+50h] [rbp-79h] BYREF
  struct CDWMSwapChain *v38; // [rsp+58h] [rbp-71h] BYREF
  __int64 v39; // [rsp+60h] [rbp-69h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v40; // [rsp+68h] [rbp-61h]
  UINT v41; // [rsp+70h] [rbp-59h] BYREF
  UINT Height; // [rsp+74h] [rbp-55h]
  DXGI_FORMAT Format; // [rsp+78h] [rbp-51h]
  int v44; // [rsp+7Ch] [rbp-4Dh]
  DXGI_SAMPLE_DESC SampleDesc; // [rsp+80h] [rbp-49h]
  DXGI_USAGE BufferUsage; // [rsp+88h] [rbp-41h]
  UINT BufferCount; // [rsp+8Ch] [rbp-3Dh]
  int v48; // [rsp+90h] [rbp-39h]
  DXGI_SWAP_EFFECT SwapEffect; // [rsp+94h] [rbp-35h]
  int v50; // [rsp+98h] [rbp-31h]
  UINT Flags; // [rsp+9Ch] [rbp-2Dh]
  DXGI_RATIONAL RefreshRate; // [rsp+C0h] [rbp-9h] BYREF
  DXGI_MODE_SCANLINE_ORDER ScanlineOrdering; // [rsp+C8h] [rbp-1h]
  DXGI_MODE_SCALING Scaling; // [rsp+CCh] [rbp+3h]
  BOOL v55; // [rsp+D0h] [rbp+7h]

  v40 = a3;
  v39 = 0LL;
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 222);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x5FCu);
    goto LABEL_55;
  }
  if ( (a4 & 0x4000) != 0 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(&v39, *((_QWORD *)a5 + 4));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    v24 = v39;
    v25 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v39 + 48LL))(
            v39,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v35);
    v9 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0x699u);
    }
    else
    {
      v26 = v35;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      v27 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v26 + 48LL))(
              v26,
              &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
              &v37);
      v9 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x69Au);
      }
      else
      {
        Width = a2->BufferDesc.Width;
        v44 = 0;
        v48 = 0;
        v29 = v37;
        v41 = Width;
        Height = a2->BufferDesc.Height;
        Format = a2->BufferDesc.Format;
        SampleDesc = a2->SampleDesc;
        BufferUsage = a2->BufferUsage;
        BufferCount = a2->BufferCount;
        SwapEffect = a2->SwapEffect;
        Flags = a2->Flags;
        v50 = 3;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
        v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, UINT *, __int64, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v29 + 32LL))(
                v29,
                *((_QWORD *)this + 81),
                &v41,
                v24,
                &v36);
        v9 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x6A4u);
        }
        else
        {
          v31 = CDWMSwapChainDDA::Create(
                  (CD3DDeviceLevel1 *)((char *)this + 896),
                  v36,
                  v40,
                  *(struct _LUID *)((char *)a5 + 224),
                  *((_DWORD *)a5 + 58),
                  &v38);
          v9 = v31;
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0x6AEu);
          else
            *a6 = v38;
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    goto LABEL_55;
  }
  if ( a5 && *((_BYTE *)a5 + 208) )
  {
    v10 = CDWMOffScreenSwapChain::Create((CD3DDeviceLevel1 *)((char *)this + 896), a2, a3, a5, &v38);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x686u);
    else
      *a6 = v38;
    goto LABEL_55;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>(&v39, *((_QWORD *)a5 + 4));
  v35 = 0LL;
  v36 = 0LL;
  v11 = v39;
  do
  {
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v37);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x614u);
      goto LABEL_42;
    }
    v13 = v37;
    v38 = 0LL;
    if ( (a4 & 0x2000) != 0 )
    {
      v41 = a2->BufferDesc.Width;
      Height = a2->BufferDesc.Height;
      Format = a2->BufferDesc.Format;
      SampleDesc = a2->SampleDesc;
      BufferUsage = a2->BufferUsage;
      BufferCount = a2->BufferCount;
      SwapEffect = a2->SwapEffect;
      Flags = a2->Flags;
      RefreshRate = a2->BufferDesc.RefreshRate;
      ScanlineOrdering = a2->BufferDesc.ScanlineOrdering;
      Scaling = a2->BufferDesc.Scaling;
      Windowed = a2->Windowed;
      v48 = 0;
      v55 = Windowed;
      v44 = 1;
      v50 = 3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
      v15 = (*(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v13 + 48LL))(
              v13,
              &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
              &v38);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v16 = v38;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
        v9 = (*(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, UINT *, DXGI_RATIONAL *, __int64, __int64 *))(*(_QWORD *)v16 + 24LL))(
               v16,
               *((_QWORD *)this + 81),
               &v41,
               &RefreshRate,
               v11,
               &v35);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x628u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
LABEL_42:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      goto LABEL_43;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
    v17 = (*(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v13 + 48LL))(
            v13,
            &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
            &v38);
    v9 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x633u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
      goto LABEL_42;
    }
    v18 = v38;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    v9 = (*(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, __int64, __int64 *))(*(_QWORD *)v18 + 24LL))(
           v18,
           *((_QWORD *)this + 81),
           a2,
           v11,
           &v35);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), v9) );
  if ( v9 < 0 )
  {
    v34 = 1599;
    v23 = v9;
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(__int64, UINT *))(*(_QWORD *)v35 + 80LL))(v35, &v41);
    v9 = v19;
    if ( v19 < 0 )
    {
      v34 = 1604;
    }
    else
    {
      v20 = v44;
      if ( (Format != a2->BufferDesc.RefreshRate.Numerator || v44 != a2->BufferDesc.RefreshRate.Denominator)
        && (Format || v44 != 1) )
      {
        *((_DWORD *)a5 + 67) = Format;
        *((_DWORD *)a5 + 68) = v20;
      }
      if ( SampleDesc.Quality != a2->BufferDesc.ScanlineOrdering )
        *((_DWORD *)a5 + 70) = SampleDesc.Quality;
      if ( (v41 != a2->BufferDesc.Width || Height != a2->BufferDesc.Height) && (v41 || Height) )
      {
        v9 = 142213127;
        goto LABEL_43;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
      v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGISwapChainDWM1 **))v35)(
              v35,
              &GUID_8f0f30db_446a_4282_9fa2_28f75c1f39ad,
              &v36);
      v9 = v19;
      if ( v19 < 0 )
      {
        v34 = 1638;
      }
      else
      {
        v21 = CDisplay::NeedsDesktopMoves(a5);
        v19 = CDWMSwapChain::Create(
                (CD3DDeviceLevel1 *)((char *)this + 896),
                v36,
                v40,
                *(struct _LUID *)((char *)a5 + 224),
                v22,
                v21,
                (a4 & 0x2000) != 0,
                &v38);
        v9 = v19;
        if ( v19 >= 0 )
        {
          *a6 = v38;
          goto LABEL_43;
        }
        v34 = 1651;
      }
    }
    v23 = v19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, v34);
LABEL_43:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
LABEL_55:
  v32 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  return v32;
}

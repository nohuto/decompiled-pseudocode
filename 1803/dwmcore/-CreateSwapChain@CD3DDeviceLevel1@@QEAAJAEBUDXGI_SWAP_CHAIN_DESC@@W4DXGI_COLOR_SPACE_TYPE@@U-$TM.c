/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180075470
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007CA60 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F3010 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180021C20 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z @ 0x1800B73EC (-GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1800C8A48 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800D74F8 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801EADA4 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        __int16 a4,
        struct _LUID *a5,
        struct CDWMSwapChainDDA *a6)
{
  int v9; // esi
  int v10; // eax
  struct IDXGIOutput *v11; // rdi
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  struct CDWMSwapChain *v15; // rsi
  int v16; // eax
  LONG v17; // eax
  bool v18; // al
  unsigned int v19; // edx
  unsigned int v20; // ebx
  int v22; // r9d
  BOOL Windowed; // eax
  int v24; // eax
  struct CDWMSwapChain *v25; // rsi
  int v26; // r9d
  int DXGIOutput; // eax
  struct IDXGIOutput *v28; // rbx
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  UINT Width; // eax
  struct IDXGISwapChainDWM1 *v33; // rdi
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+20h] [rbp-B9h]
  unsigned int v37; // [rsp+20h] [rbp-B9h]
  struct IDXGISwapChainDWM1 *v38; // [rsp+40h] [rbp-99h] BYREF
  struct IDXGISwapChainDWM1 *v39; // [rsp+48h] [rbp-91h] BYREF
  __int64 v40; // [rsp+50h] [rbp-89h] BYREF
  struct CDWMSwapChain *v41; // [rsp+58h] [rbp-81h] BYREF
  struct IDXGIOutput *v42; // [rsp+60h] [rbp-79h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v43; // [rsp+68h] [rbp-71h]
  struct CDWMSwapChainDDA *v44; // [rsp+70h] [rbp-69h] BYREF
  UINT v45; // [rsp+80h] [rbp-59h] BYREF
  UINT Height; // [rsp+84h] [rbp-55h]
  DXGI_FORMAT Format; // [rsp+88h] [rbp-51h]
  int v48; // [rsp+8Ch] [rbp-4Dh]
  DXGI_SAMPLE_DESC SampleDesc; // [rsp+90h] [rbp-49h]
  DXGI_USAGE BufferUsage; // [rsp+98h] [rbp-41h]
  UINT BufferCount; // [rsp+9Ch] [rbp-3Dh]
  int v52; // [rsp+A0h] [rbp-39h]
  DXGI_SWAP_EFFECT SwapEffect; // [rsp+A4h] [rbp-35h]
  int v54; // [rsp+A8h] [rbp-31h]
  UINT Flags; // [rsp+ACh] [rbp-2Dh]
  DXGI_RATIONAL RefreshRate; // [rsp+D0h] [rbp-9h] BYREF
  DXGI_MODE_SCANLINE_ORDER ScanlineOrdering; // [rsp+D8h] [rbp-1h]
  DXGI_MODE_SCALING Scaling; // [rsp+DCh] [rbp+3h]
  BOOL v59; // [rsp+E0h] [rbp+7h]

  v43 = a3;
  v44 = a6;
  *(_QWORD *)a6 = 0LL;
  v9 = *((_DWORD *)this + 222);
  v42 = 0LL;
  if ( v9 < 0 )
  {
    v36 = 1558;
    v22 = v9;
    goto LABEL_61;
  }
  if ( (a4 & 0x4000) != 0 )
  {
    v40 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v42);
    DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a5, &v42);
    v9 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, DXGIOutput, 0x6AFu);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
      v28 = v42;
      v29 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))v42->lpVtbl->GetParent)(
              v42,
              &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
              &v40);
      v9 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v29, 0x6B1u);
      }
      else
      {
        v30 = v40;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
        v31 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v30 + 48LL))(
                v30,
                &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
                &v39);
        v9 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v31, 0x6B2u);
        }
        else
        {
          Width = a2->BufferDesc.Width;
          v48 = 0;
          v52 = 0;
          v33 = v39;
          v45 = Width;
          Height = a2->BufferDesc.Height;
          Format = a2->BufferDesc.Format;
          SampleDesc = a2->SampleDesc;
          BufferUsage = a2->BufferUsage;
          BufferCount = a2->BufferCount;
          SwapEffect = a2->SwapEffect;
          Flags = a2->Flags;
          v54 = 3;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
          v34 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, UINT *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v33 + 32LL))(
                  v33,
                  *((_QWORD *)this + 81),
                  &v45,
                  v28,
                  &v38);
          v9 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v34, 0x6BCu);
          }
          else
          {
            v35 = CDWMSwapChainDDA::Create(
                    (CD3DDeviceLevel1 *)((char *)this + 896),
                    v38,
                    v43,
                    a5[31],
                    a5[32].LowPart,
                    &v44);
            v9 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v35, 0x6C6u);
            else
              *(_QWORD *)a6 = v44;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    goto LABEL_24;
  }
  if ( a5 && LOBYTE(a5[29].LowPart) )
  {
    v10 = CDWMOffScreenSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)this + 896),
            a2,
            a3,
            (const struct CDisplay *)a5,
            &v41);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)a6 = v41;
      goto LABEL_24;
    }
    v36 = 1695;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v42);
  v10 = CDisplay::GetDXGIOutput((CDisplay *)a5, &v42);
  v9 = v10;
  if ( v10 < 0 )
  {
    v36 = 1573;
LABEL_29:
    v22 = v10;
LABEL_61:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v22, v36);
    goto LABEL_24;
  }
  v38 = 0LL;
  v39 = 0LL;
  v11 = v42;
  do
  {
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))v11->lpVtbl->GetParent)(
            v11,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v40);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v12, 0x62Du);
      goto LABEL_47;
    }
    v13 = v40;
    v41 = 0LL;
    if ( (a4 & 0x2000) != 0 )
    {
      v45 = a2->BufferDesc.Width;
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
      v52 = 0;
      v59 = Windowed;
      v48 = 1;
      v54 = 3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
      v24 = (*(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v13 + 48LL))(
              v13,
              &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
              &v41);
      v9 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v24, 0x641u);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
LABEL_47:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
        goto LABEL_23;
      }
      v25 = v41;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
      v9 = (*(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, UINT *, DXGI_RATIONAL *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v25 + 24LL))(
             v25,
             *((_QWORD *)this + 81),
             &v45,
             &RefreshRate,
             v11,
             &v38);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
      v14 = (*(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v13 + 48LL))(
              v13,
              &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
              &v41);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v14, 0x64Cu);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
        goto LABEL_47;
      }
      v15 = v41;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
      v9 = (*(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v15 + 24LL))(
             v15,
             *((_QWORD *)this + 81),
             a2,
             v11,
             &v38);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), v9) );
  if ( v9 < 0 )
  {
    v37 = 1624;
    v26 = v9;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, UINT *))(*(_QWORD *)v38 + 80LL))(v38, &v45);
    v9 = v16;
    if ( v16 < 0 )
    {
      v37 = 1629;
    }
    else
    {
      v17 = v48;
      if ( (Format != a2->BufferDesc.RefreshRate.Numerator || v48 != a2->BufferDesc.RefreshRate.Denominator)
        && (Format || v48 != 1) )
      {
        a5[36].LowPart = Format;
        a5[36].HighPart = v17;
      }
      if ( SampleDesc.Quality != a2->BufferDesc.ScanlineOrdering )
        a5[37].HighPart = SampleDesc.Quality;
      if ( (v45 != a2->BufferDesc.Width || Height != a2->BufferDesc.Height) && (v45 || Height) )
      {
        v9 = 142213127;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
      v16 = (**(__int64 (__fastcall ***)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM1 **))v38)(
              v38,
              &GUID_8f0f30db_446a_4282_9fa2_28f75c1f39ad,
              &v39);
      v9 = v16;
      if ( v16 < 0 )
      {
        v37 = 1663;
      }
      else
      {
        v18 = CDisplay::NeedsDesktopMoves((CDisplay *)a5);
        v16 = CDWMSwapChain::Create(
                (CD3DDeviceLevel1 *)((char *)this + 896),
                v39,
                v43,
                a5[31],
                v19,
                v18,
                (a4 & 0x2000) != 0,
                &v41);
        v9 = v16;
        if ( v16 >= 0 )
        {
          *(_QWORD *)v44 = v41;
          goto LABEL_23;
        }
        v37 = 1676;
      }
    }
    v26 = v16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v26, v37);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
LABEL_24:
  v20 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v42);
  return v20;
}

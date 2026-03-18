/*
 * XREFs of ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C58C
 * Callers:
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x18015C990 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1801E4558 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x1801E4648 (-GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::EnsureRenderTarget(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // ebx
  int DefaultD3DDevice; // eax
  int v4; // eax
  CHwCompSwapChainTarget *v5; // rsi
  int v6; // eax
  int v7; // eax
  void *CompSurfHandle; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  CHwCompSwapChainTarget *v12; // [rsp+58h] [rbp+28h] BYREF
  struct CD3DDeviceLevel1 *v13; // [rsp+60h] [rbp+30h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 22) && *((_BYTE *)this + 304) )
  {
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v13);
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v13);
    v1 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD3DDevice, 0xFEu);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      v4 = CHwCompSwapChainTarget::Create(
             v13,
             *((_DWORD *)this + 22),
             *((_DWORD *)this + 23),
             (CRemoteAppRenderTarget *)((char *)this + 96),
             &v12);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x104u);
      }
      else
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
        v5 = v12;
        v6 = (**(__int64 (__fastcall ***)(CHwCompSwapChainTarget *, GUID *, __int64 *))v12)(
               v12,
               &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
               &v11);
        v1 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x106u);
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 24LL))(v11, (char *)this + 80);
          v1 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x107u);
          }
          else
          {
            CompSurfHandle = CHwCompSwapChainTarget::GetCompSurfHandle(v5);
            v12 = 0LL;
            *((_QWORD *)this + 23) = CompSurfHandle;
            v9 = v11;
            v11 = 0LL;
            *((_QWORD *)this + 17) = v9;
            *((_QWORD *)this + 22) = v5;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v13);
  }
  return v1;
}

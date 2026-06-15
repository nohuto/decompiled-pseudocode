/*
 * XREFs of ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x1800E6D14
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E6968 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@PhoneTopology3@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x1800EADA4 (-CreateInstance@PhoneTopology3@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopolog.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::CreatePhoneTopology(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        struct IEndpointCollection *a3)
{
  unsigned int v5; // edi
  struct IUnknown *v6; // rbx
  int v7; // r14d
  struct IUnknown *v9; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  v9 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      PhoneTopology3::CreateInstance(a2, (struct IEndpointCollection *)a2, a3, (struct IPhoneTopology **)&v9);
      v6 = v9;
      if ( v9 )
      {
        if ( !*((_QWORD *)this + 10) )
        {
          if ( *((_DWORD *)this + 70) )
          {
            *((_DWORD *)this + 70) = 0;
            GetTickCount();
          }
          v7 = 1;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 10);
        if ( *((struct IUnknown **)this + 10) != v6 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 10, v6);
      }
      *(_DWORD *)a3 = v7;
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return v5;
}

/*
 * XREFs of ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1800753D4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801DF6A4 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedHandleFence(
        CD3DDeviceLevel1 *this,
        const struct CResourceTag *a2,
        struct ID3D11Fence *a3,
        struct ID3D11Fence **a4,
        void **a5,
        enum D3D11_FENCE_FLAG a6)
{
  __int64 v6; // rcx
  int v8; // ebx
  unsigned int v10; // eax
  struct ID3D11Fence *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v6 = *((_QWORD *)this + 81);
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, struct ID3D11Fence **))(*(_QWORD *)v6 + 544LL))(
         v6,
         0LL,
         a6 | 2u,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v11);
  if ( v8 < 0 )
  {
    v10 = 2168;
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(struct ID3D11Fence *, _QWORD, __int64, _QWORD, void **))v11->lpVtbl->CreateSharedHandle)(
           v11,
           0LL,
           0x10000000LL,
           0LL,
           a5);
    if ( v8 >= 0 )
    {
      *a4 = v11;
      return (unsigned int)v8;
    }
    v10 = 2169;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v10);
  if ( v11 )
    ((void (__fastcall *)(struct ID3D11Fence *))v11->lpVtbl->Release)(v11);
  return (unsigned int)v8;
}

/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800CA4B0
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008909C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ??0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z @ 0x1800761D4 (--0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z.c)
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800CB7A0 (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800D82A0 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        struct CDXGIAdapterLimited *a1,
        struct IMILPoolManager *a2,
        struct CD3DDeviceLevel1 **a3)
{
  volatile signed __int32 *v4; // rdi
  int v7; // eax
  int v8; // ebx
  CD3DDeviceLevel1 *v9; // rax
  CD3DDeviceLevel1 *v10; // rax
  int v11; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  enum D3D_FEATURE_LEVEL v14; // [rsp+60h] [rbp+18h] BYREF
  struct ID3D11Device1 *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  v7 = CD3DDeviceLevel1::CreateD3DDevice(a1, &v15, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v7, 0x182u);
  }
  else
  {
    v9 = (CD3DDeviceLevel1 *)WPF::ProcessHeapImpl::AllocClear(0x720uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v10 = CD3DDeviceLevel1::CD3DDeviceLevel1(v9, a2);
    v4 = (volatile signed __int32 *)v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2147024882, 0x185u);
      goto LABEL_7;
    }
    v11 = CD3DDeviceLevel1::Init(v10, v15, v14, a1);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v11, 0x189u);
    }
    else
    {
      _InterlockedIncrement(v4 + 120);
      *a3 = (struct CD3DDeviceLevel1 *)v4;
      v4 = 0LL;
    }
  }
  if ( v8 < 0 && v4 )
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v4, 1u);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v8;
}

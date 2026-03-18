/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800C7EBC
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042A64 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x180078A74 (--0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180079550 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800C7F94 (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        const struct _GUID *a1,
        struct CDXGIAdapterLimited *a2,
        struct IMILPoolManager *a3,
        struct CD3DDeviceLevel1 **a4)
{
  volatile signed __int32 *v5; // rdi
  int v9; // eax
  int v10; // ebx
  CD3DDeviceLevel1 *v11; // rax
  CD3DDeviceLevel1 *v12; // rax
  int v13; // eax
  struct ID3D11Device1 *v15[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  enum D3D_FEATURE_LEVEL v17; // [rsp+78h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v5 = 0LL;
  *a4 = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)v15);
  v9 = CD3DDeviceLevel1::CreateD3DDevice(a2, v15, &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x139u);
  }
  else
  {
    v11 = (CD3DDeviceLevel1 *)WPF::ProcessHeapImpl::AllocClear(0x7A0uLL);
    if ( !v11 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    v12 = CD3DDeviceLevel1::CD3DDeviceLevel1(v11, a1, a3);
    v5 = (volatile signed __int32 *)v12;
    if ( !v12 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13Cu);
      goto LABEL_7;
    }
    v13 = CD3DDeviceLevel1::Init(v12, v15[0], v17, a2);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x140u);
    }
    else
    {
      _InterlockedIncrement(v5 + 124);
      *a4 = (struct CD3DDeviceLevel1 *)v5;
      v5 = 0LL;
    }
  }
  if ( v10 < 0 && v5 )
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v5, 1);
LABEL_7:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)v15);
  return (unsigned int)v10;
}

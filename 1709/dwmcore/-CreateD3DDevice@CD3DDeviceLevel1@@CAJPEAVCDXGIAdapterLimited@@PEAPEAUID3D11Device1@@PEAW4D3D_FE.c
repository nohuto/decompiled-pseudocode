/*
 * XREFs of ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x180074B78
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180074AB0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x180074A8C (-IsOOM@@YA_NJ@Z.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1800751B8 (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800753CC (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateD3DDevice(
        IDXGIAdapter **a1,
        struct ID3D11Device1 **a2,
        enum D3D_FEATURE_LEVEL *a3)
{
  int MaxFeatureLevel; // eax
  unsigned int v7; // ebx
  UINT v8; // esi
  bool v9; // zf
  D3D_FEATURE_LEVEL *v10; // rax
  __int64 v11; // rbx
  HRESULT v12; // ecx
  D3D_FEATURE_LEVEL v14; // eax
  int v15; // ecx
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-49h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-19h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-9h] BYREF
  int v20; // [rsp+80h] [rbp+17h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  ppDevice = 0LL;
  v19[0] = _mm_load_si128((const __m128i *)&_xmm);
  v20 = 37120;
  v19[1] = _mm_load_si128((const __m128i *)&_xmm);
  MaxFeatureLevel = CDXGIAdapterLimited::GetMaxFeatureLevel((CDXGIAdapterLimited *)a1, &pFeatureLevel);
  v7 = MaxFeatureLevel;
  if ( MaxFeatureLevel < 0 )
  {
    pFeatureLevels = 208;
    goto LABEL_25;
  }
  if ( (int)CCommonRegistryData::m_dwMaxD3DFeatureLevel >= 37120 )
  {
    v14 = pFeatureLevel;
    if ( (int)CCommonRegistryData::m_dwMaxD3DFeatureLevel < pFeatureLevel )
      v14 = CCommonRegistryData::m_dwMaxD3DFeatureLevel;
    pFeatureLevel = v14;
  }
  v8 = 169;
  v9 = !CurrentProcessHasIncreasedPriorityPrivileges();
  v10 = (D3D_FEATURE_LEVEL *)v19;
  if ( !v9 )
    v8 = 4265;
  v11 = 0LL;
  do
  {
    if ( *v10 <= pFeatureLevel )
      break;
    v11 = (unsigned int)(v11 + 1);
    ++v10;
  }
  while ( (unsigned int)v11 < 9 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppDevice);
  v12 = D3D11CreateDevice(
          a1[3],
          D3D_DRIVER_TYPE_UNKNOWN,
          0LL,
          v8,
          (const D3D_FEATURE_LEVEL *)v19 + v11,
          9 - v11,
          7u,
          &ppDevice,
          &pFeatureLevel,
          0LL);
  if ( v12 >= 0 )
  {
    MaxFeatureLevel = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))ppDevice->lpVtbl->QueryInterface)(
                        ppDevice,
                        &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                        a2);
    v7 = MaxFeatureLevel;
    if ( MaxFeatureLevel >= 0 )
    {
      *a3 = pFeatureLevel;
      goto LABEL_10;
    }
    pFeatureLevels = 328;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaxFeatureLevel, pFeatureLevels);
    goto LABEL_10;
  }
  if ( v12 != -2147467262 && v12 != -2005270524 )
  {
    if ( IsOOM(v12) && *((_DWORD *)a1 + 74) == 4318 )
      ModuleFailFastForHRESULT(2291662989LL, retaddr);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x162u);
  }
  v7 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x165u);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppDevice);
  return v7;
}

/*
 * XREFs of ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800CB7A0
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800CA4B0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800CAEB4 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1800CE230 (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800D9C48 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  HRESULT v12; // eax
  D3D_FEATURE_LEVEL v14; // eax
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-49h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-19h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v18[2]; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+80h] [rbp+17h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  ppDevice = 0LL;
  v18[0] = _mm_load_si128((const __m128i *)&_xmm);
  v19 = 37120;
  v18[1] = _mm_load_si128((const __m128i *)&_xmm);
  MaxFeatureLevel = CDXGIAdapterLimited::GetMaxFeatureLevel((CDXGIAdapterLimited *)a1, &pFeatureLevel);
  v7 = MaxFeatureLevel;
  if ( MaxFeatureLevel < 0 )
  {
    pFeatureLevels = 206;
    goto LABEL_24;
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
  v10 = (D3D_FEATURE_LEVEL *)v18;
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
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppDevice);
  v12 = D3D11CreateDevice(
          a1[3],
          D3D_DRIVER_TYPE_UNKNOWN,
          0LL,
          v8,
          (const D3D_FEATURE_LEVEL *)v18 + v11,
          9 - v11,
          7u,
          &ppDevice,
          &pFeatureLevel,
          0LL);
  v7 = v12;
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
    pFeatureLevels = 326;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaxFeatureLevel, pFeatureLevels);
    goto LABEL_10;
  }
  if ( v12 != -2147467262 && v12 != -2005270524 && IsOOM(v12) && *((_DWORD *)a1 + 74) == 4318 )
    ModuleFailFastForHRESULT(2291662989LL, retaddr);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x161u);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppDevice);
  return v7;
}

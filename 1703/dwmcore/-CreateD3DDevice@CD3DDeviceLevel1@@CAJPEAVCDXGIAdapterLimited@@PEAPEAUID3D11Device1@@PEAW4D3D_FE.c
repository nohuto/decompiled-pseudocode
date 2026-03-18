/*
 * XREFs of ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800C7F94
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800C7EBC (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B54AC (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1800C80DC (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C882C (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  __m128i *p_si128; // rax
  __int64 v11; // rbx
  HRESULT v12; // ecx
  int v14; // ecx
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-39h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-9h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-1h] BYREF
  __m128i si128; // [rsp+60h] [rbp+7h] BYREF
  int v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+74h] [rbp+1Bh]
  int v21; // [rsp+78h] [rbp+1Fh]
  void *retaddr; // [rsp+B8h] [rbp+5Fh]

  ppDevice = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = 37632;
  v20 = 37376;
  v21 = 37120;
  MaxFeatureLevel = CDXGIAdapterLimited::GetMaxFeatureLevel((CDXGIAdapterLimited *)a1, &pFeatureLevel);
  v7 = MaxFeatureLevel;
  if ( MaxFeatureLevel < 0 )
  {
    pFeatureLevels = 171;
    goto LABEL_21;
  }
  v8 = 169;
  v9 = !CurrentProcessHasIncreasedPriorityPrivileges();
  p_si128 = &si128;
  if ( !v9 )
    v8 = 4265;
  v11 = 0LL;
  do
  {
    if ( p_si128->m128i_i32[0] == pFeatureLevel )
      break;
    v11 = (unsigned int)(v11 + 1);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  while ( (unsigned int)v11 < 7 );
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&ppDevice);
  v12 = D3D11CreateDevice(
          a1[3],
          D3D_DRIVER_TYPE_UNKNOWN,
          0LL,
          v8,
          (const D3D_FEATURE_LEVEL *)&si128 + v11,
          7 - v11,
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
      goto LABEL_9;
    }
    pFeatureLevels = 254;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MaxFeatureLevel, pFeatureLevels);
    goto LABEL_9;
  }
  if ( v12 != -2147467262 && v12 != -2005270524 )
  {
    if ( IsOOM(v12) && *((_DWORD *)a1 + 74) == 4318 )
    {
      ModuleFailFastForHRESULT(2291662989LL, retaddr);
      __debugbreak();
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x118u);
  }
  v7 = -2003304307;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x11Bu);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&ppDevice);
  return v7;
}

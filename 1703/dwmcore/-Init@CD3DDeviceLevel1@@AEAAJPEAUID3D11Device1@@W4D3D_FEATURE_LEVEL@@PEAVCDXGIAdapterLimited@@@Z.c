/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800C7EBC (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18004AB10 (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800776AC (-ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x180077EB4 (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x180078000 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078188 (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800C780C (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800C7D84 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        enum D3D_FEATURE_LEVEL a3,
        struct CDXGIAdapterLimited *a4)
{
  __int64 result; // rax
  struct IDXGIDeviceDWM **v9; // r14
  struct ID3D11Device1 **v10; // r15
  struct ID3D11Device1 *v11; // rdi
  int v12; // eax
  int v13; // ebx
  bool IsShaderLinkingBlacklistedGpu; // al
  struct IDXGIDeviceDWM *v15; // rcx
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 89) = *((_QWORD *)a4 + 42);
  if ( *((struct CDXGIAdapterLimited **)this + 88) != a4 )
  {
    (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))a4)(a4);
    v19 = *((_QWORD *)this + 88);
    *((_QWORD *)this + 88) = a4;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v19);
  }
  LODWORD(result) = CDirect3DCaps::Initialize(
                      (CD3DDeviceLevel1 *)((char *)this + 720),
                      *(struct _LUID *)((char *)a4 + 336),
                      a2,
                      a3);
  if ( (int)result < 0 )
  {
    v18 = 428;
LABEL_28:
    v17 = result;
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 774) )
  {
    if ( !*((_BYTE *)this + 775) )
      goto LABEL_6;
    *((_DWORD *)this + 196) = 4;
  }
  else
  {
    if ( !*((_BYTE *)this + 775) )
    {
LABEL_6:
      *((_DWORD *)this + 196) = 2;
      goto LABEL_7;
    }
    *((_DWORD *)this + 196) = 5;
  }
LABEL_7:
  v9 = (struct IDXGIDeviceDWM **)((char *)this + 600);
  *((_QWORD *)this + 132) = this;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 600);
  LODWORD(result) = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
                      a2,
                      &GUID_c0c5fda1_8899_4194_b1f6_543c6d2ed314,
                      (char *)this + 600);
  if ( (int)result < 0 )
  {
    v18 = 466;
    goto LABEL_28;
  }
  v10 = (struct ID3D11Device1 **)((char *)this + 640);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 640);
  LODWORD(result) = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
                      a2,
                      &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                      (char *)this + 640);
  if ( (int)result < 0 )
  {
    v18 = 473;
    goto LABEL_28;
  }
  v11 = *v10;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 648);
  ((void (__fastcall *)(struct ID3D11Device1 *, char *))v11->lpVtbl->GetImmediateContext1)(v11, (char *)this + 648);
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this, *v10);
  CD3DDeviceLevel1::CheckD3D11Caps(this, *v10);
  EnterCriticalSection(&g_ResourceCacheIndexManager);
  *((_DWORD *)this + 128) = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  LeaveCriticalSection(&g_ResourceCacheIndexManager);
  v12 = CHwBrushPool::Init((CD3DDeviceLevel1 *)((char *)this + 520), this);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4Eu);
    v18 = 494;
    v17 = v13;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v18);
    goto LABEL_30;
  }
  if ( *((int *)this + 185) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  IsShaderLinkingBlacklistedGpu = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                                    *(_DWORD *)(*((_QWORD *)this + 88) + 296LL),
                                    *(_DWORD *)(*((_QWORD *)this + 88) + 300LL));
  v15 = *v9;
  *((_BYTE *)this + 636) = IsShaderLinkingBlacklistedGpu;
  v16 = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, char *))(*(_QWORD *)v15 + 64LL))(v15, (char *)this + 608);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x200u);
LABEL_30:
    CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(this);
    return 2291662989LL;
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, _QWORD, char *))(*(_QWORD *)*v9 + 72LL))(
                      *v9,
                      0LL,
                      (char *)this + 616);
  if ( (int)result < 0 )
  {
    v18 = 514;
    goto LABEL_28;
  }
  LODWORD(result) = CD2DContext::InitializeD2D(this, *v9);
  if ( (int)result < 0 )
  {
    v18 = 519;
    goto LABEL_28;
  }
  result = CD3DDeviceLevel1::GenerateShaders(this);
  if ( (int)result < 0 )
  {
    v18 = 521;
    goto LABEL_28;
  }
  return result;
}

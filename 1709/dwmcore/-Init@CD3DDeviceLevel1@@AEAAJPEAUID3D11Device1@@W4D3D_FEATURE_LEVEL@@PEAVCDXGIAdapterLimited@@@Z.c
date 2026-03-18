/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180074AB0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800209AC (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020AAC (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x180020C20 (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?DetectShaderLinkingBugAffectedDriver@CD3DDeviceLevel1@@AEAAXXZ @ 0x180020C90 (-DetectShaderLinkingBugAffectedDriver@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020FAC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x180085A24 (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800B7F40 (-Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800BE814 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        enum D3D_FEATURE_LEVEL a3,
        struct CDXGIAdapterLimited *a4)
{
  __int64 v8; // rcx
  int Shaders; // eax
  struct IDXGIDeviceDWM **v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-18h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 91) = *((_QWORD *)a4 + 42);
  if ( *((struct CDXGIAdapterLimited **)this + 89) != a4 )
  {
    (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))a4)(a4);
    v8 = *((_QWORD *)this + 89);
    *((_QWORD *)this + 89) = a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  Shaders = CDirect3DCaps::Initialize(
              (CD3DDeviceLevel1 *)((char *)this + 736),
              *(struct _LUID *)((char *)a4 + 336),
              a2,
              a3);
  if ( Shaders < 0 )
  {
    v19 = 495;
LABEL_36:
    v18 = Shaders;
    goto LABEL_37;
  }
  if ( *((_BYTE *)this + 790) )
  {
    if ( !*((_BYTE *)this + 791) )
      goto LABEL_7;
    *((_DWORD *)this + 200) = 4;
  }
  else
  {
    if ( !*((_BYTE *)this + 791) )
    {
LABEL_7:
      *((_DWORD *)this + 200) = 2;
      goto LABEL_8;
    }
    *((_DWORD *)this + 200) = 5;
  }
LABEL_8:
  v10 = (struct IDXGIDeviceDWM **)((char *)this + 608);
  *((_QWORD *)this + 122) = this;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 76);
  Shaders = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
              a2,
              &GUID_c0c5fda1_8899_4194_b1f6_543c6d2ed314,
              (char *)this + 608);
  if ( Shaders < 0 )
  {
    v19 = 533;
    goto LABEL_36;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 81);
  Shaders = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
              a2,
              &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
              (char *)this + 648);
  if ( Shaders < 0 )
  {
    v19 = 540;
    goto LABEL_36;
  }
  v20 = 0LL;
  v11 = *((_QWORD *)this + 81);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v11 + 320LL))(
    v11,
    &v20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 82);
  v12 = (**v20)(v20, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 656);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x221u);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    return (unsigned int)-2003304307;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this);
  CD3DDeviceLevel1::CheckD3D11Caps(this);
  EnterCriticalSection(&g_ResourceCacheIndexManager);
  *((_DWORD *)this + 124) = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  LeaveCriticalSection(&g_ResourceCacheIndexManager);
  v13 = CHwBrushPool::Init((CD3DDeviceLevel1 *)((char *)this + 504), this);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4Eu);
    v19 = 565;
LABEL_28:
    v18 = v14;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19);
    return (unsigned int)-2003304307;
  }
  if ( *((int *)this + 189) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  CD3DDeviceLevel1::DetectShaderLinkingBugAffectedDriver(this);
  v15 = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, char *))(*(_QWORD *)*v10 + 64LL))(*v10, (char *)this + 616);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x247u);
    return (unsigned int)-2003304307;
  }
  Shaders = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, _QWORD, char *))(*(_QWORD *)*v10 + 72LL))(
              *v10,
              0LL,
              (char *)this + 624);
  if ( Shaders < 0 )
  {
    v19 = 585;
    goto LABEL_36;
  }
  Shaders = CD2DContext::InitializeD2D(this, *v10);
  if ( Shaders < 0 )
  {
    v19 = 590;
    goto LABEL_36;
  }
  Shaders = CD3DDeviceLevel1::GenerateShaders(this);
  if ( Shaders < 0 )
  {
    v19 = 592;
    goto LABEL_36;
  }
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease((char *)this + 104);
  v16 = CHWCallbackRenderer::CSharedDirect3DResources::Create(
          this,
          (struct CHWCallbackRenderer::CSharedDirect3DResources **)this + 13);
  v14 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x42u);
  if ( v14 < 0 )
  {
    v19 = 594;
    goto LABEL_28;
  }
  return (unsigned int)v14;
}

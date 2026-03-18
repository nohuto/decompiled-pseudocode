/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800CA4B0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1800753D4 (-CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075818 (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075918 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075ADC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x180075EA0 (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800968C8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800BF768 (-Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800C06DC (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800C7930 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800CBCC4 (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        enum D3D_FEATURE_LEVEL a3,
        struct CDXGIAdapterLimited *a4)
{
  __int64 v8; // rcx
  int SharedHandleFence; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  char v14; // bl
  const struct CResourceTag *v15; // rdx
  struct ID3D11Fence *v16; // r8
  CMILRefCountBase *v17; // rcx
  int v18; // eax
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 91) = *((_QWORD *)a4 + 42);
  if ( *((struct CDXGIAdapterLimited **)this + 89) != a4 )
  {
    (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))a4)(a4);
    v8 = *((_QWORD *)this + 89);
    *((_QWORD *)this + 89) = a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  SharedHandleFence = CDirect3DCaps::Initialize(
                        (CD3DDeviceLevel1 *)((char *)this + 736),
                        *(struct _LUID *)((char *)a4 + 336),
                        a2,
                        a3);
  if ( SharedHandleFence < 0 )
  {
    v21 = 495;
LABEL_34:
    v20 = SharedHandleFence;
    goto LABEL_35;
  }
  if ( *((_BYTE *)this + 790) && *((_BYTE *)this + 791) )
    *((_DWORD *)this + 200) = 4;
  else
    *((_DWORD *)this + 200) = *((_BYTE *)this + 791) != 0 ? 5 : 2;
  *((_QWORD *)this + 122) = this;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 76);
  SharedHandleFence = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
                        a2,
                        &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
                        (char *)this + 608);
  if ( SharedHandleFence < 0 )
  {
    v21 = 533;
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 81);
  SharedHandleFence = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
                        a2,
                        &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
                        (char *)this + 648);
  if ( SharedHandleFence < 0 )
  {
    v21 = 540;
    goto LABEL_34;
  }
  v22 = 0LL;
  v10 = *((_QWORD *)this + 81);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v10 + 320LL))(
    v10,
    &v22);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 82);
  v11 = (**v22)(v22, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 656);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x221u);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    return (unsigned int)-2003304307;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this);
  CD3DDeviceLevel1::CheckD3D11Caps(this);
  EnterCriticalSection(&g_ResourceCacheIndexManager);
  *((_DWORD *)this + 124) = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  LeaveCriticalSection(&g_ResourceCacheIndexManager);
  v12 = CHwBrushPool::Init((CD3DDeviceLevel1 *)((char *)this + 504), this);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x4Eu);
    v21 = 565;
LABEL_27:
    v20 = v13;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21);
    return (unsigned int)-2003304307;
  }
  if ( *((int *)this + 189) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  *((_BYTE *)this + 644) = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                             *(_DWORD *)(*((_QWORD *)this + 89) + 296LL),
                             *(_DWORD *)(*((_QWORD *)this + 89) + 300LL));
  v14 = *(_BYTE *)(*((_QWORD *)this + 89) + 344LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 78);
  SharedHandleFence = CD3DDeviceLevel1::CreateSharedHandleFence(
                        this,
                        v15,
                        v16,
                        (struct ID3D11Fence **)this + 78,
                        (void **)this + 77,
                        v14 == 0 ? D3D11_FENCE_FLAG_NON_MONITORED : D3D11_FENCE_FLAG_NONE);
  if ( SharedHandleFence < 0 )
  {
    v21 = 586;
    goto LABEL_34;
  }
  SharedHandleFence = CD2DContext::InitializeD2D(this, *((struct IDXGIDeviceDWM **)this + 76));
  if ( SharedHandleFence < 0 )
  {
    v21 = 591;
    goto LABEL_34;
  }
  SharedHandleFence = CD3DDeviceLevel1::GenerateShaders(this);
  if ( SharedHandleFence < 0 )
  {
    v21 = 593;
    goto LABEL_34;
  }
  v17 = (CMILRefCountBase *)*((_QWORD *)this + 13);
  if ( v17 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILRefCountBase::Release(v17);
  }
  v18 = CHWCallbackRenderer::CSharedDirect3DResources::Create(
          this,
          (struct CHWCallbackRenderer::CSharedDirect3DResources **)this + 13);
  v13 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x42u);
  if ( v13 < 0 )
  {
    v21 = 595;
    goto LABEL_27;
  }
  return (unsigned int)v13;
}

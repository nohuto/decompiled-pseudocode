/*
 * XREFs of ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800D7F68
 * Callers:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800D82A0 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800D7E4C (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800D84E8 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800D8564 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800D9784 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x1801DEC30 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801EC04C (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(CD3DDeviceLevel1 *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edx
  CSurfaceShaderComposer *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  int v9; // edi
  void *v10; // rcx
  CMILRefCountBase *v11; // rcx
  CMILRefCountBase *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char *v19; // rdi
  int v20; // edi
  char *v21; // rbp
  CAtlasTexture *v22; // rsi
  CAtlasTexture *v23; // rcx
  void *v24; // rcx

  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 59) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 56);
  CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDeviceLevel1 *)((char *)this + 536));
  v2 = (char *)*((_QWORD *)this + 77);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 77) = 0LL;
  }
  v3 = *((_QWORD *)this + 82);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
  `vector destructor iterator'(
    (char *)this + 1792,
    8LL,
    4LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1784,
    8LL,
    1LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1400,
    8LL,
    48LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11SamplerState>::~ComPtr<ID3D11SamplerState>);
  `vector destructor iterator'(
    (char *)this + 1208,
    8LL,
    24LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1176,
    8LL,
    4LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  v5 = (CSurfaceShaderComposer *)*((_QWORD *)this + 146);
  if ( v5 )
    CSurfaceShaderComposer::`scalar deleting destructor'(v5, v4);
  v6 = (void *)*((_QWORD *)this + 143);
  if ( v6 )
  {
    v20 = 0;
    if ( *((int *)this + 290) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*((_QWORD *)this + 144) + 8LL * v20++));
      while ( v20 < *((_DWORD *)this + 290) );
      v6 = (void *)*((_QWORD *)this + 143);
    }
    operator delete(v6);
    *((_QWORD *)this + 143) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 144);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 144) = 0LL;
  }
  *((_DWORD *)this + 290) = 0;
  v8 = (void *)*((_QWORD *)this + 140);
  if ( v8 )
  {
    v9 = 0;
    if ( *((int *)this + 284) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*((_QWORD *)this + 141) + 16LL * v9++));
      while ( v9 < *((_DWORD *)this + 284) );
      v8 = (void *)*((_QWORD *)this + 140);
    }
    operator delete(v8);
    *((_QWORD *)this + 140) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 141);
  if ( v10 )
  {
    operator delete(v10);
    *((_QWORD *)this + 141) = 0LL;
  }
  *((_DWORD *)this + 284) = 0;
  `vector destructor iterator'(
    (char *)this + 1056,
    8LL,
    8LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 992);
  *((_QWORD *)this + 112) = &CD3DResourceManager::`vftable';
  v11 = (CMILRefCountBase *)*((_QWORD *)this + 110);
  if ( v11 )
  {
    *((_QWORD *)this + 110) = 0LL;
    CMILRefCountBase::Release(v11);
  }
  v12 = (CMILRefCountBase *)*((_QWORD *)this + 109);
  if ( v12 )
  {
    *((_QWORD *)this + 109) = 0LL;
    CMILRefCountBase::Release(v12);
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease((CRenderTargetImageSource **)this + 108);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 107);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 106);
  v13 = (void *)*((_QWORD *)this + 90);
  if ( v13 )
    CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(v13);
  v14 = *((_QWORD *)this + 89);
  if ( v14 )
  {
    *((_QWORD *)this + 89) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v15 = *((_QWORD *)this + 86);
  if ( v15 )
  {
    *((_QWORD *)this + 86) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 85);
  if ( v16 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 84);
  if ( v17 )
  {
    *((_QWORD *)this + 84) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 83);
  if ( v18 )
  {
    *((_QWORD *)this + 83) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 82);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 81);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 79);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 78);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 76);
  v19 = (char *)*((_QWORD *)this + 73);
  if ( v19 )
  {
    v21 = (char *)*((_QWORD *)this + 74);
    if ( v19 != v21 )
    {
      do
      {
        v22 = *(CAtlasTexture **)v19;
        if ( *(_QWORD *)v19 )
        {
          v23 = *(CAtlasTexture **)v19;
          *(_QWORD *)v22 = &CAtlasTexture::`vftable';
          CAtlasTexture::DestroyResources(v23);
          v24 = (void *)*((_QWORD *)v22 + 2);
          if ( v24 )
            operator delete(v24);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v22 + 1);
          operator delete(v22);
        }
        v19 += 8;
      }
      while ( v19 != v21 );
      v19 = (char *)*((_QWORD *)this + 73);
    }
    std::_Deallocate(v19, (__int64)(*((_QWORD *)this + 75) - (_QWORD)v19) >> 3, 8uLL);
    *((_QWORD *)this + 73) = 0LL;
    *((_QWORD *)this + 74) = 0LL;
    *((_QWORD *)this + 75) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 536);
  *((_QWORD *)this + 59) = &CMILRefCountBase::`vftable';
  CD2DContext::~CD2DContext(this);
  CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData((CD3DDeviceLevel1 *)((char *)this + 496));
}

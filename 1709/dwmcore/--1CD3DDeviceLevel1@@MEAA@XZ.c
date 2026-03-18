/*
 * XREFs of ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C
 * Callers:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180021D00 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800202C4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800455D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x18007509C (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18008D224 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(CD3DDeviceLevel1 *this)
{
  char *v2; // r15
  __int64 v3; // rcx
  unsigned int v4; // edx
  CSurfaceShaderComposer *v5; // rcx
  void *v6; // rcx
  int j; // edi
  void *v8; // rcx
  CMILRefCountBase *v9; // rcx
  CMILRefCountBase *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void **v18; // rdi
  int i; // edi
  void **v20; // rbp
  void *v21; // rsi
  CAtlasTexture *v22; // rcx

  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  v2 = (char *)this + 536;
  *((_QWORD *)this + 59) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDeviceLevel1 *)((char *)this + 536));
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  CD3DResourceManager::DestroyAllResources((CD3DDeviceLevel1 *)((char *)this + 896));
  if ( *((_QWORD *)this + 78) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 76) + 40LL))(*((_QWORD *)this + 76));
  v3 = *((_QWORD *)this + 82);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
  `vector destructor iterator'(
    (char *)this + 1784,
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1776,
    8uLL,
    1uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1392,
    8uLL,
    0x30uLL,
    Microsoft::WRL::ComPtr<ID3D11SamplerState>::~ComPtr<ID3D11SamplerState>);
  `vector destructor iterator'(
    (char *)this + 1200,
    8uLL,
    0x18uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1168,
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11InputLayout>::~ComPtr<ID3D11InputLayout>);
  v5 = (CSurfaceShaderComposer *)*((_QWORD *)this + 145);
  if ( v5 )
    CSurfaceShaderComposer::`scalar deleting destructor'(v5, v4);
  if ( *((_QWORD *)this + 142) )
  {
    for ( i = 0; i < *((_DWORD *)this + 288); ++i )
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*((_QWORD *)this + 143) + 8LL * i));
    WPF::ProcessHeapImpl::Free(*((void **)this + 142));
    *((_QWORD *)this + 142) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 143);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)this + 143) = 0LL;
  }
  *((_DWORD *)this + 288) = 0;
  if ( *((_QWORD *)this + 139) )
  {
    for ( j = 0; j < *((_DWORD *)this + 282); ++j )
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*((_QWORD *)this + 140) + 16LL * j));
    WPF::ProcessHeapImpl::Free(*((void **)this + 139));
    *((_QWORD *)this + 139) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 140);
  if ( v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *((_QWORD *)this + 140) = 0LL;
  }
  *((_DWORD *)this + 282) = 0;
  `vector destructor iterator'(
    (char *)this + 1048,
    8uLL,
    8uLL,
    Microsoft::WRL::ComPtr<ID3D11InputLayout>::~ComPtr<ID3D11InputLayout>);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 992);
  *((_QWORD *)this + 112) = &CD3DResourceManager::`vftable';
  v9 = (CMILRefCountBase *)*((_QWORD *)this + 110);
  if ( v9 )
  {
    *((_QWORD *)this + 110) = 0LL;
    CMILRefCountBase::Release(v9);
  }
  v10 = (CMILRefCountBase *)*((_QWORD *)this + 109);
  if ( v10 )
  {
    *((_QWORD *)this + 109) = 0LL;
    CMILRefCountBase::Release(v10);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 108);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 107);
  v11 = *((_QWORD *)this + 106);
  if ( v11 )
  {
    *((_QWORD *)this + 106) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 90);
  if ( v12 )
  {
    *((_QWORD *)this + 90) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 89);
  if ( v13 )
  {
    *((_QWORD *)this + 89) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v14 = *((_QWORD *)this + 86);
  if ( v14 )
  {
    *((_QWORD *)this + 86) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 85);
  if ( v15 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 84);
  if ( v16 )
  {
    *((_QWORD *)this + 84) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 83);
  if ( v17 )
  {
    *((_QWORD *)this + 83) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 82);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 81);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 79);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 76);
  v18 = (void **)*((_QWORD *)this + 73);
  if ( v18 )
  {
    v20 = (void **)*((_QWORD *)this + 74);
    while ( v18 != v20 )
    {
      v21 = *v18;
      if ( *v18 )
      {
        v22 = (CAtlasTexture *)*v18;
        *(_QWORD *)v21 = &CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources(v22);
        WPF::ProcessHeapImpl::Free(*((void **)v21 + 2));
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v21 + 1);
        WPF::ProcessHeapImpl::Free(v21);
      }
      ++v18;
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 73));
    *((_QWORD *)this + 73) = 0LL;
    *((_QWORD *)this + 74) = 0LL;
    *((_QWORD *)this + 75) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v2);
  *((_QWORD *)this + 59) = &CMILRefCountBase::`vftable';
  CD2DContext::~CD2DContext(this);
  CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData((CD3DDeviceLevel1 *)((char *)this + 496));
}

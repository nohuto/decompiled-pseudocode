/*
 * XREFs of ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0
 * Callers:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180079550 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800776AC (-ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800777C4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800AE5D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CMILRefCountBase *v7; // rcx
  CMILRefCountBase *v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rcx
  CMILRefCountBase *v15; // rcx
  CMILRefCountBase *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx

  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 61) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 624);
  v2 = *((_QWORD *)this + 85);
  v3 = 0;
  if ( v2 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *((_QWORD *)this + 84);
  if ( v4 )
  {
    *((_QWORD *)this + 84) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 83);
  if ( v5 )
  {
    *((_QWORD *)this + 83) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 82);
  if ( v6 )
  {
    *((_QWORD *)this + 82) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 840);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease((char *)this + 848);
  v7 = (CMILRefCountBase *)*((_QWORD *)this + 107);
  if ( v7 )
  {
    *((_QWORD *)this + 107) = 0LL;
    CMILRefCountBase::Release(v7);
  }
  v8 = (CMILRefCountBase *)*((_QWORD *)this + 108);
  if ( v8 )
  {
    *((_QWORD *)this + 108) = 0LL;
    CMILRefCountBase::Release(v8);
  }
  CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 58);
  CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(this);
  v9 = *((_QWORD *)this + 81);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 888LL))(v9);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 648);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 88);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 243);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 242);
  if ( *((_QWORD *)this + 239) )
  {
    if ( *((int *)this + 482) > 0 )
    {
      v21 = 0LL;
      do
      {
        v22 = *((_QWORD *)this + 240);
        v23 = *(_QWORD *)(v21 + v22);
        if ( v23 )
        {
          *(_QWORD *)(v21 + v22) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        ++v3;
        v21 += 8LL;
      }
      while ( v3 < *((_DWORD *)this + 482) );
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 239));
    v3 = 0;
    *((_QWORD *)this + 239) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 240);
  if ( v10 )
  {
    WPF::ProcessHeapImpl::Free(v10);
    *((_QWORD *)this + 240) = 0LL;
  }
  *((_DWORD *)this + 482) = 0;
  `vector destructor iterator'(
    (char *)this + 1880,
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1872,
    8uLL,
    1uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1488,
    8uLL,
    0x30uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1296,
    8uLL,
    0x18uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1264,
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 1256);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 156);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 1240);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 1232);
  if ( *((_QWORD *)this + 151) )
  {
    if ( *((int *)this + 306) > 0 )
    {
      v11 = 0LL;
      do
      {
        v12 = *((_QWORD *)this + 152);
        v13 = *(_QWORD *)(v11 + v12);
        if ( v13 )
        {
          *(_QWORD *)(v11 + v12) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        ++v3;
        v11 += 16LL;
      }
      while ( v3 < *((_DWORD *)this + 306) );
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 151));
    *((_QWORD *)this + 151) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 152);
  if ( v14 )
  {
    WPF::ProcessHeapImpl::Free(v14);
    *((_QWORD *)this + 152) = 0LL;
  }
  *((_DWORD *)this + 306) = 0;
  `vector destructor iterator'(
    (char *)this + 1144,
    8uLL,
    8uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 134);
  *((_QWORD *)this + 116) = &CD3DResourceManager::`vftable';
  v15 = (CMILRefCountBase *)*((_QWORD *)this + 108);
  if ( v15 )
  {
    *((_QWORD *)this + 108) = 0LL;
    CMILRefCountBase::Release(v15);
  }
  v16 = (CMILRefCountBase *)*((_QWORD *)this + 107);
  if ( v16 )
  {
    *((_QWORD *)this + 107) = 0LL;
    CMILRefCountBase::Release(v16);
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease((char *)this + 848);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 840);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 832);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 88);
  v17 = *((_QWORD *)this + 85);
  if ( v17 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 84);
  if ( v18 )
  {
    *((_QWORD *)this + 84) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = *((_QWORD *)this + 83);
  if ( v19 )
  {
    *((_QWORD *)this + 83) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *((_QWORD *)this + 82);
  if ( v20 )
  {
    *((_QWORD *)this + 82) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 648);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 640);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 624);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 600);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 69);
  *((_QWORD *)this + 61) = &CMILRefCountBase::`vftable';
  CD2DContext::~CD2DContext(this);
  CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData((CD3DDeviceLevel1 *)((char *)this + 512));
}

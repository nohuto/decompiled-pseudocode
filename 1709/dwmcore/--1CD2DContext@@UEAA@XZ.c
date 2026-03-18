/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800455D4
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1801A5EC0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800462D0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 320);
  v2 = *((_QWORD *)this + 39);
  if ( v2 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 256);
  CCallbackRendererManager::DestroyDeviceResources((CD2DContext *)((char *)this + 8));
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease((char *)this + 104);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 72);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 8);
}

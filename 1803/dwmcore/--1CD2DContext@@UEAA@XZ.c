/*
 * XREFs of ??1CD2DContext@@UEAA@XZ @ 0x1800D84E8
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800D7F68 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1801DECC0 (--_GCD2DContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800D9358 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::~CD2DContext(CD2DTarget **this)
{
  CD2DTarget *v2; // rcx
  CMILRefCountBase *v3; // rcx

  *this = (CD2DTarget *)&CD2DContext::`vftable';
  CD2DContext::DestroyDeviceResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 40));
  v2 = this[39];
  if ( v2 )
  {
    this[39] = 0LL;
    (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 32));
  CCallbackRendererManager::DestroyDeviceResources((CCallbackRendererManager *)(this + 1));
  v3 = this[13];
  if ( v3 )
  {
    this[13] = 0LL;
    CMILRefCountBase::Release(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 9));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 5));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1));
}

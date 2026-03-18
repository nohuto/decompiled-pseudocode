/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x1801F7A8C
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1801F7B30 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801F8E20 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  CMILCOMBase *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CHolographicManager::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 4) = 0LL;
    ReleaseInterface<CD3DSurface>((__int64 *)this + 5);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 6);
    *((_DWORD *)this + 14) = DisplayId::None;
    *(_QWORD *)((char *)this + 60) = 0LL;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v3 = (void *)*((_QWORD *)this + 27);
  if ( v3 )
    CloseHandle(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}

/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x1800DA3AC
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x1800DA370 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180079010 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &COverlayContext::`vftable';
  if ( !v1 )
  {
    COverlayContext::Reset(this);
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1136);
  FastRegion::CRegion::FreeMemory((void **)this + 133);
  *((_QWORD *)this + 116) = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 928));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 560);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 288);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 256);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 224);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 192);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}

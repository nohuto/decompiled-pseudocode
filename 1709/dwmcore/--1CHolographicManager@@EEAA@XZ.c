/*
 * XREFs of ??1CHolographicManager@@EEAA@XZ @ 0x1801BF978
 * Callers:
 *     ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1801BFAA0 (--_ECHolographicManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801C0D5C (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 */

void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  bool v1; // zf
  CMILCOMBase *v3; // rcx
  void *v4; // rcx

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CHolographicManager::`vftable';
  if ( !v1 )
  {
    v3 = (CMILCOMBase *)*((_QWORD *)this + 4);
    if ( v3 )
    {
      CMILCOMBase::InternalRelease(v3);
      *((_QWORD *)this + 4) = 0LL;
    }
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 5);
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 6);
    *((_DWORD *)this + 14) = DisplayId::None;
    *(_QWORD *)((char *)this + 60) = 0LL;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v4 = (void *)*((_QWORD *)this + 23);
  if ( v4 )
    CloseHandle(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 19);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}

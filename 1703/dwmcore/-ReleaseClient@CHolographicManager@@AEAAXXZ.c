/*
 * XREFs of ?ReleaseClient@CHolographicManager@@AEAAXXZ @ 0x1801A62F0
 * Callers:
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1801A5A90 (--1CHolographicManager@@EEAA@XZ.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 */

void __fastcall CHolographicManager::ReleaseClient(CHolographicManager *this)
{
  CMILCOMBase *v2; // rcx

  if ( *((_QWORD *)this + 4) )
  {
    v2 = (CMILCOMBase *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      CMILCOMBase::InternalRelease(v2);
      *((_QWORD *)this + 4) = 0LL;
    }
    ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 5);
    ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 6);
    *((_DWORD *)this + 14) = DisplayId::None;
    *(_QWORD *)((char *)this + 60) = 0LL;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
}

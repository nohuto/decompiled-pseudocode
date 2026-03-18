/*
 * XREFs of ?ReleaseExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047694
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C004DB90 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C004DF64 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00476EC (-XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ReleaseExpandedResourceAppReference(VIDMM_GLOBAL *this)
{
  char *v1; // rdi

  v1 = (char *)this + 40104;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 40104));
  if ( (*((_DWORD *)this + 10032))-- == 1 )
    VIDMM_GLOBAL::XboxReevaluateAdapterBudgets(this, 0);
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}

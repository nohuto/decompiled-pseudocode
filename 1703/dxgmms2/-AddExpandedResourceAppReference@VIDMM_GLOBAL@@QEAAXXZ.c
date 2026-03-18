/*
 * XREFs of ?AddExpandedResourceAppReference@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0047008
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00476EC (-XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AddExpandedResourceAppReference(VIDMM_GLOBAL *this)
{
  char *v1; // rdi

  v1 = (char *)this + 40104;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 40104));
  if ( ++*((_DWORD *)this + 10032) == 1 )
    VIDMM_GLOBAL::XboxReevaluateAdapterBudgets(this, 1);
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}

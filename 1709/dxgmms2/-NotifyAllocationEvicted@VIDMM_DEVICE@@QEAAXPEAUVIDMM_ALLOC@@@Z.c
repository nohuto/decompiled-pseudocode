/*
 * XREFs of ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00516D4
 * Callers:
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0052274 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0074630 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0050E80 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0052364 (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE ***this, struct VIDMM_ALLOC *a2)
{
  __int64 v3; // r11
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE *v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(a2) )
    VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)this, (__int64 **)v3);
  v4 = (VIDMM_DEVICE *)(v3 + 112);
  v5 = *(VIDMM_DEVICE **)(v3 + 112);
  if ( *((_QWORD *)v5 + 1) != v3 + 112 || (v6 = *(VIDMM_DEVICE ***)(v3 + 120), *v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  v7 = this[21];
  if ( *v7 != (VIDMM_DEVICE *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v4 = this + 20;
  *(_QWORD *)(v3 + 120) = v7;
  *v7 = v4;
  this[21] = (VIDMM_DEVICE **)v4;
}

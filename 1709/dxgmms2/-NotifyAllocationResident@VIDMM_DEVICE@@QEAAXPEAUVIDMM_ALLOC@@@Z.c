/*
 * XREFs of ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00744E0
 * Callers:
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0074558 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 * Callees:
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0052364 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074488 (-IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationResident(VIDMM_DEVICE ***this, __int64 **a2)
{
  __int64 v3; // r11
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE *v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( VidMmiShouldChargeAllocationAgainstBudget(a2) )
    VIDMM_DEVICE::IncrementCurrentUsage((VIDMM_DEVICE *)this, (__int64 **)v3);
  v4 = (VIDMM_DEVICE *)(v3 + 112);
  v5 = *(VIDMM_DEVICE **)(v3 + 112);
  if ( *((_QWORD *)v5 + 1) != v3 + 112 || (v6 = *(VIDMM_DEVICE ***)(v3 + 120), *v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  v7 = this[19];
  if ( *v7 != (VIDMM_DEVICE *)(this + 18) )
    __fastfail(3u);
  *(_QWORD *)v4 = this + 18;
  *(_QWORD *)(v3 + 120) = v7;
  *v7 = v4;
  this[19] = (VIDMM_DEVICE **)v4;
}

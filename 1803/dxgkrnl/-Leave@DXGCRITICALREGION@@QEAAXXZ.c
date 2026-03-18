/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000AECC
 * Callers:
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0023D14 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014DAA0 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C014DC80 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014F2D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01594B8 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 623LL;
    WdLogEvent5_WdAssertion(v2);
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}

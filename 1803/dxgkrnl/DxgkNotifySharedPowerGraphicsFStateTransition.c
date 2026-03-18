/*
 * XREFs of DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0032F24
 * Callers:
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025200 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025FA4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0026A20 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026EF0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C0032810 (-NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsFStateTransition(void *a1, unsigned int a2, unsigned int a3, char a4)
{
  KSPIN_LOCK *Global; // rax

  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(Global, a1, a2, a3, a4);
}

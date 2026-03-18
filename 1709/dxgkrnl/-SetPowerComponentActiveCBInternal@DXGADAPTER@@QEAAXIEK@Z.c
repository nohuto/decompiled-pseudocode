/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F944
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0007E4C (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C00257E0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C0025810 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01716D0 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0172DB4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C019A8C0 (DxgSetPowerComponentActiveCBInternal.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C01A9B58 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F9C4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  _QWORD *v8; // rax

  if ( a2 >= *((_DWORD *)this + 622) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v8[3] = 275LL;
    v8[4] = 23LL;
    v8[5] = this;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  DXGADAPTER::SetPowerComponentActiveCBWorker(this, a2, a3, a4);
}

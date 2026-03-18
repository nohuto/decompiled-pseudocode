/*
 * XREFs of ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0022264
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0002D2C (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C0034590 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C00345B0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C016DF08 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C016F5D4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C0184E00 (DxgSetPowerComponentActiveCBInternal.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C0194F88 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBInternal(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  _QWORD *v8; // rax

  if ( a2 >= *((_DWORD *)this + 616) )
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

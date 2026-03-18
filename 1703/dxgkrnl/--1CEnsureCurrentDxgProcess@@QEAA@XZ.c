/*
 * XREFs of ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001BB8
 * Callers:
 *     ?VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D110 (-VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C002D418 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0095E10 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ @ 0x1C01A1E9C (-NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C00233A0 (-Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ.c)
 */

void __fastcall CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess(CEnsureCurrentDxgProcess *this)
{
  if ( *(_QWORD *)this )
  {
    PsSetThreadProperty(KeGetCurrentThread(), 1917876292LL, 0LL);
    CEnsureCurrentDxgProcess::Destroy(this);
  }
}

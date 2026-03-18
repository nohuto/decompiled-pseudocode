/*
 * XREFs of ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001354
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C007FDE0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192E20 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C01931F8 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 * Callees:
 *     ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C0021740 (-Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ.c)
 */

void __fastcall CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess(CEnsureCurrentDxgProcess *this)
{
  if ( *(_QWORD *)this )
  {
    PsSetThreadProperty(KeGetCurrentThread(), 1917876292LL, 0LL);
    CEnsureCurrentDxgProcess::Destroy(this);
  }
}

/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00232E0
 * Callers:
 *     ?VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D110 (-VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C002D418 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0095E10 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ @ 0x1C01A1E9C (-NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C00233A0 (-Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(CEnsureCurrentDxgProcess *this, struct DXGPROCESS *a2)
{
  int Object; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  Object = ObCreateObject(0LL, g_pDxgkCurrentDxgProcessObjectType, 0LL, 0LL, 0LL, 8, 0, 0, this);
  v7 = Object;
  if ( Object >= 0 )
  {
    **(_QWORD **)this = a2;
    v9 = PsSetThreadProperty(KeGetCurrentThread(), 1917876292LL, *(_QWORD *)this);
    v7 = v9;
    if ( v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = v7;
      *(_QWORD *)(v12 + 32) = 108LL;
      WdLogEvent5_WdError(v12);
      CEnsureCurrentDxgProcess::Destroy(this);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v7;
}

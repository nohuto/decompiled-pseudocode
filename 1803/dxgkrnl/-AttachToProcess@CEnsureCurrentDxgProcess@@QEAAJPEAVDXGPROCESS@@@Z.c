/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00A2DD0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EF60 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C017F324 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C01BD0F0 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ @ 0x1C0028CB8 (-Destroy@CEnsureCurrentDxgProcess@@AEAAXXZ.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(CEnsureCurrentDxgProcess *this, struct DXGPROCESS *a2)
{
  int Object; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax

  Object = ObCreateObject(0LL, g_pDxgkCurrentDxgProcessObjectType, 0LL, 0LL, 0LL, 8, 0, 0, this);
  v6 = Object;
  if ( Object >= 0 )
  {
    **(_QWORD **)this = a2;
    v8 = PsSetThreadProperty(KeGetCurrentThread(), 1917876292LL, *(_QWORD *)this);
    v6 = v8;
    if ( v8 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = v6;
      *(_QWORD *)(v10 + 32) = 95LL;
      WdLogEvent5_WdError(v10);
      CEnsureCurrentDxgProcess::Destroy(this);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}

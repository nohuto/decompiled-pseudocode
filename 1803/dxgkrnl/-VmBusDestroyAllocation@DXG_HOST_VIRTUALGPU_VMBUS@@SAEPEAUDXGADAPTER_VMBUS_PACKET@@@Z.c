/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D3BC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     DxgkDestroyAllocation2 @ 0x1C00E31F0 (DxgkDestroyAllocation2.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  if ( v2 )
  {
    v4 = *(unsigned int *)(v2 + 32);
    if ( (_DWORD)v4 && ((unsigned __int64)*((unsigned int *)a1 + 20) - 44) / v4 < 4 )
    {
      v5 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v5 + 24) = 971LL;
      WdLogEvent5_WdError(v5);
    }
    else
    {
      v7[0] = 0LL;
      v8 = 0LL;
      v7[0] = *(_QWORD *)(v2 + 24);
      v7[1] = v2 + 40;
      HIDWORD(v8) = *(_DWORD *)(v2 + 36);
      LODWORD(v8) = v4;
      DxgkDestroyAllocation2((ULONG64)v7);
    }
  }
  return 0;
}

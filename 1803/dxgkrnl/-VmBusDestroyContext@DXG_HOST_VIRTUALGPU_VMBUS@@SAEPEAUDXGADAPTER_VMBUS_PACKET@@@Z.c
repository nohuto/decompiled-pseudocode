/*
 * XREFs of ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017ED90
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00A0DF8 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyContext(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  _D3DKMT_DESTROYCONTEXT v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v1 )
  {
    v4.hContext = *(_DWORD *)(v1 + 24);
    DxgkDestroyContextImpl(&v4, 0, v2);
  }
  return 0;
}

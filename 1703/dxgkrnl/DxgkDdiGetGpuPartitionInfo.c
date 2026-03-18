/*
 * XREFs of DxgkDdiGetGpuPartitionInfo @ 0x1C0033ACC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiGetGpuPartitionInfo(__int64 a1, struct _DXGKARG_GETGPUPARTITIONINFO *a2, char a3)
{
  return ADAPTER_RENDER::GetGpuPartitionInfo(*(ADAPTER_RENDER **)(a1 + 2288), a2, a3);
}

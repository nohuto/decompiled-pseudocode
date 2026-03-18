/*
 * XREFs of DxgkDdiSetGpuPartitionCount @ 0x1C0033E8C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDdiSetGpuPartitionCount(__int64 a1, struct _DXGKARG_SETGPUPARTITIONCOUNT *a2, char a3)
{
  return ADAPTER_RENDER::SetGpuPartitionCount(*(void ***)(a1 + 2288), a2, a3);
}

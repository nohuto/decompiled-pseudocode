/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C001E8E4
 * Callers:
 *     VidSchTerminateDevice @ 0x1C006BEF0 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[17])(this, a2);
}

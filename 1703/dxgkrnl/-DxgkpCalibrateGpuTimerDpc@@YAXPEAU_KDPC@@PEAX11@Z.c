/*
 * XREFs of ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00252D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkpCalibrateGpuTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_RENDER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_RENDER::PerformClockCalibration(DeferredContext);
}

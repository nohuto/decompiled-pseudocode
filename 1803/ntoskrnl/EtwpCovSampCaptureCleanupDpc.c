/*
 * XREFs of EtwpCovSampCaptureCleanupDpc @ 0x1402B4BA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1402B4BB8 (EtwpCovSampCaptureCleanupLookasides.c)
 */

void __fastcall EtwpCovSampCaptureCleanupDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpCovSampCaptureCleanupLookasides(DeferredContext);
}

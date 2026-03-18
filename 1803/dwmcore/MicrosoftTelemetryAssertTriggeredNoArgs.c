/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18020EFB8
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     PubSebRegisterRpc @ 0x1800CA238 (PubSebRegisterRpc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18020EFCC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}

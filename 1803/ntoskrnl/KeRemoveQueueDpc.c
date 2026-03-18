/*
 * XREFs of KeRemoveQueueDpc @ 0x140006050
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140474F40 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x14060B8E0 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}

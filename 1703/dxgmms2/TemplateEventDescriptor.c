/*
 * XREFs of TemplateEventDescriptor @ 0x1C0028DF8
 * Callers:
 *     VidSchEnableLatencyToleranceTimer @ 0x1C00143B0 (VidSchEnableLatencyToleranceTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0, 0LL);
}

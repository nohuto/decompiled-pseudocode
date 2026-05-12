/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0045AC4
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C001A74C (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0065AB0 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( qword_1C0055370 )
    ExFreePoolWithTag(qword_1C0055370, 0x65546152u);
  if ( qword_1C0055378 )
    ExFreePoolWithTag(qword_1C0055378, 0x65546152u);
  if ( qword_1C0055380 )
    ExFreePoolWithTag(qword_1C0055380, 0x65546152u);
  if ( qword_1C0055398 )
    ExFreePoolWithTag(qword_1C0055398, 0x65546152u);
  if ( qword_1C00553A0 )
    ExFreePoolWithTag(qword_1C00553A0, 0x65546152u);
  if ( qword_1C00553A8 )
    ExFreePoolWithTag(qword_1C00553A8, 0x65546152u);
  if ( qword_1C00553B0 )
    ExFreePoolWithTag(qword_1C00553B0, 0x65546152u);
}

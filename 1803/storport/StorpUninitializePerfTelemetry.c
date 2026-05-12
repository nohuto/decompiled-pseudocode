/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0046E68
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C0043214 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C00676DC (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( qword_1C0056390 )
    ExFreePoolWithTag(qword_1C0056390, 0x65546152u);
  if ( qword_1C0056398 )
    ExFreePoolWithTag(qword_1C0056398, 0x65546152u);
  if ( qword_1C00563A0 )
    ExFreePoolWithTag(qword_1C00563A0, 0x65546152u);
  if ( qword_1C00563B8 )
    ExFreePoolWithTag(qword_1C00563B8, 0x65546152u);
  if ( qword_1C00563C0 )
    ExFreePoolWithTag(qword_1C00563C0, 0x65546152u);
  if ( qword_1C00563C8 )
    ExFreePoolWithTag(qword_1C00563C8, 0x65546152u);
  if ( qword_1C00563D0 )
    ExFreePoolWithTag(qword_1C00563D0, 0x65546152u);
}

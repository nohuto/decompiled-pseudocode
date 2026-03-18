/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C0200B70
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C0036F24 (MonitorCleanupGlobal.c)
 * Callees:
 *     <none>
 */

void MonitorCleanupAdditionalTiming(void)
{
  PVOID v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C0061E18;
    if ( !qword_1C0061E18 )
      break;
    qword_1C0061E18 = *(PVOID *)qword_1C0061E18;
    ExFreePoolWithTag(v0, 0);
  }
}

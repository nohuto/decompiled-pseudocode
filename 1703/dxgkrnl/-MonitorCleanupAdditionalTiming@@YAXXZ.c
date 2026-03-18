/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C01E63F8
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C0045D8C (MonitorCleanupGlobal.c)
 * Callees:
 *     <none>
 */

void MonitorCleanupAdditionalTiming(void)
{
  PVOID v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C0070F18;
    if ( !qword_1C0070F18 )
      break;
    qword_1C0070F18 = *(PVOID *)qword_1C0070F18;
    ExFreePoolWithTag(v0, 0);
  }
}

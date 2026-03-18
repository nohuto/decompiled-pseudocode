/*
 * XREFs of DisableUserkTraceLogging @ 0x1C011CBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  result = EtwUnregister(qword_1C0324870);
  qword_1C0324870 = 0LL;
  dword_1C0324850 = 0;
  return result;
}

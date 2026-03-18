/*
 * XREFs of DisableUserkTraceLogging @ 0x1C01268D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS DisableUserkTraceLogging()
{
  NTSTATUS result; // eax

  result = EtwUnregister(qword_1C0320870);
  qword_1C0320870 = 0LL;
  hProvider = 0;
  return result;
}

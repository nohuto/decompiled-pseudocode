/*
 * XREFs of StorSqmCleanup @ 0x1C0049658
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C00658D0 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C005672A )
  {
    result = EtwUnregister(qword_1C0056730);
    byte_1C005672A = 0;
  }
  return result;
}

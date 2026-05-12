/*
 * XREFs of StorSqmCleanup @ 0x1C00480B8
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0064824 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C0055699 )
  {
    result = EtwUnregister(qword_1C00556C8);
    byte_1C0055699 = 0;
  }
  return result;
}

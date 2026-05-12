/*
 * XREFs of StorSqmCleanup @ 0x1C0048AC0
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0067D64 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS StorSqmCleanup()
{
  NTSTATUS result; // eax

  if ( byte_1C00566C9 )
  {
    result = EtwUnregister(qword_1C00566E8);
    byte_1C00566C9 = 0;
  }
  return result;
}

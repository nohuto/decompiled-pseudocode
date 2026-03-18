/*
 * XREFs of SeAuditingFileEvents @ 0x14072BF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_1403620C4 && AccessGranted
    || byte_1403620C5 && !AccessGranted
    || byte_1403620C6 && AccessGranted
    || byte_1403620C7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}

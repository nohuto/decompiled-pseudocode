/*
 * XREFs of SeAuditingFileEvents @ 0x1406F4480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140348624 && AccessGranted
    || byte_140348625 && !AccessGranted
    || byte_140348626 && AccessGranted
    || byte_140348627 && !AccessGranted )
  {
    return 1;
  }
  return result;
}

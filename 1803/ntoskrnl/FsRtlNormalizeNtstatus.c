/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x140144BF0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}

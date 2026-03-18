/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x1401E79E0
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x1404A6C50 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}

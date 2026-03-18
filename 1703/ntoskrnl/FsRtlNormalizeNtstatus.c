/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x140131DD0
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x140514500 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  if ( FsRtlIsNtstatusExpected(Exception) )
    return Exception;
  return GenericException;
}

/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x1800FD980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlpNtMakeTemporaryKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}

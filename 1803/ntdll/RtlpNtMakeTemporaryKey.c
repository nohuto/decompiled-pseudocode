/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x1800FBF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlpNtMakeTemporaryKey()
{
  return ZwDeleteKey();
}

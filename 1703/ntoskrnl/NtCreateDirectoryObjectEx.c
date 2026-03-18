/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1404423D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 NtCreateDirectoryObjectEx()
{
  return ObpCreateDirectoryObject();
}

/*
 * XREFs of RtlStringFromGUID @ 0x180071790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlStringFromGUID(PGUID Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx(Guid, GuidString, 1u);
}

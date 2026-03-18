/*
 * XREFs of BiZwOpenKey @ 0x14014CF20
 * Callers:
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}

/*
 * XREFs of BiZwDeleteValueKey @ 0x140265F00
 * Callers:
 *     BiDeleteRegistryValue @ 0x1407354B8 (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  return ZwDeleteValueKey(KeyHandle, ValueName);
}

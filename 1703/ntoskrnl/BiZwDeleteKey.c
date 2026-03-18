/*
 * XREFs of BiZwDeleteKey @ 0x14013C154
 * Callers:
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}

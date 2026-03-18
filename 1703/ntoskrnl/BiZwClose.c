/*
 * XREFs of BiZwClose @ 0x14014CF3C
 * Callers:
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiDeleteRegistryValue @ 0x1407354B8 (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwClose(HANDLE Handle)
{
  return ZwClose(Handle);
}

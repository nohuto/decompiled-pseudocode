/*
 * XREFs of ZwCompressKey @ 0x1401A8860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompressKey(HANDLE Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Key);
}

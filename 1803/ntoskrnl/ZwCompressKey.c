/*
 * XREFs of ZwCompressKey @ 0x1401A8860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompressKey(HANDLE Key)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Key, v1, v2);
}

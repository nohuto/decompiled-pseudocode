/*
 * XREFs of ZwSetInformationKey @ 0x140180A80
 * Callers:
 *     CmpDoReDoSetKeyUserFlags @ 0x1406A2044 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x1406A20AC (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}

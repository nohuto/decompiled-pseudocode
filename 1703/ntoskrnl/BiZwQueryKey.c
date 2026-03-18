/*
 * XREFs of BiZwQueryKey @ 0x14014CF58
 * Callers:
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x14058BC84 (BiGetKeyName.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryKey(KeyHandle, KeyInformationClass, KeyInformation, Length, ResultLength);
}

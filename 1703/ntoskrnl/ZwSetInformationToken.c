/*
 * XREFs of ZwSetInformationToken @ 0x140181100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}

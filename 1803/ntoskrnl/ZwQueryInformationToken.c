/*
 * XREFs of ZwQueryInformationToken @ 0x1401A78E0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140519C30 (RtlFormatCurrentUserKeyPath.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass, TokenInformation);
}

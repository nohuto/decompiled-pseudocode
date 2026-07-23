/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1401A9FC0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1406320FC (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1407E4364 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

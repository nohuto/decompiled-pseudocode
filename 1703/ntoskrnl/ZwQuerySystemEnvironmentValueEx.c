/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1401809A0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1405C609C (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x14073739C (BiDeleteEfiVariable.c)
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

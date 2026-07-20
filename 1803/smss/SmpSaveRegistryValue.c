/*
 * XREFs of SmpSaveRegistryValue @ 0x140008534
 * Callers:
 *     SmpConfigureOneTimeExecute @ 0x140008260 (SmpConfigureOneTimeExecute.c)
 *     SmpConfigureSubSystems @ 0x140008430 (SmpConfigureSubSystems.c)
 *     SmpConfigureDosDevices @ 0x140008510 (SmpConfigureDosDevices.c)
 *     SmpConfigureExistingPageFiles @ 0x140008E00 (SmpConfigureExistingPageFiles.c)
 *     SmpConfigureExcludeKnownDlls @ 0x140011E40 (SmpConfigureExcludeKnownDlls.c)
 *     SmpConfigureExecute @ 0x140011EB0 (SmpConfigureExecute.c)
 *     SmpConfigureFileRenames @ 0x140011F00 (SmpConfigureFileRenames.c)
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140008A20 (SmpSaveRegistryValue_U.c)
 */

__int64 __fastcall SmpSaveRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned int a4, __int64 a5)
{
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  if ( a3 )
    RtlInitUnicodeString(&v9, a3);
  return SmpSaveRegistryValue_U(a1, &DestinationString, (unsigned __int64)&v9 & -(__int64)(a3 != 0LL), a4, a5);
}

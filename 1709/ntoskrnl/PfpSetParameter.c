/*
 * XREFs of PfpSetParameter @ 0x1405DC3E8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x1405DC354 (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x14084EFE0 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}

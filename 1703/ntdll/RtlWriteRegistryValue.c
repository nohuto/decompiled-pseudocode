/*
 * XREFs of RtlWriteRegistryValue @ 0x18008F620
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1800EB540 (RtlSetPortableOperatingSystem.c)
 *     sub_1800EB6C0 @ 0x1800EB6C0 (sub_1800EB6C0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 */

NTSTATUS __cdecl RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  result = sub_180056CCC(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}

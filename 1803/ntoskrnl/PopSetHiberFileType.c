/*
 * XREFs of PopSetHiberFileType @ 0x140762908
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x1407627FC (PopSetHiberFileSize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14016EC30 (PopOpenKey.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x1405F06DC (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x140613550 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopSetHiberFileType(int a1, _QWORD *a2)
{
  int v3; // edi
  HANDLE v4; // rbp
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  if ( ((unsigned int)PopHiberFileSizePercent < 0x28 || a1 == 2) && (unsigned int)(a1 - 1) <= 1 )
  {
    v3 = PopHiberFileType;
    PopHiberFileType = a1;
    PopCalculateHiberFileSize(&KeyHandle, 0LL);
    v4 = KeyHandle;
    v5 = PopValidateHiberFileSize((__int64)KeyHandle, 0LL, 0LL);
    if ( v5 < 0
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileType"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileType, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileType = v3;
    }
    else if ( a2 )
    {
      *a2 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}

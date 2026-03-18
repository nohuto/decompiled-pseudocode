/*
 * XREFs of PopSetHiberFileSize @ 0x1406C9BD4
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14014CFC0 (PopOpenKey.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x14057B598 (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x14057CF08 (PopCalculateHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406C9CDC (PopSetHiberFileType.c)
 */

__int64 __fastcall PopSetHiberFileSize(unsigned int a1, _QWORD *a2)
{
  int v3; // edi
  HANDLE v4; // rbp
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  if ( a1 > 0x64 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = PopHiberFileSizePercent;
    PopHiberFileSizePercent = a1;
    PopCalculateHiberFileSize(&KeyHandle, 0LL);
    v4 = KeyHandle;
    v5 = PopValidateHiberFileSize((__int64)KeyHandle, 0LL);
    if ( v5 < 0
      || (unsigned int)PopHiberFileSizePercent >= 0x28 && (v5 = PopSetHiberFileType(2LL, 0LL), v5 < 0)
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileSizePercent"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileSizePercent, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileSizePercent = v3;
    }
    else if ( a2 )
    {
      *a2 = v4;
    }
  }
  return (unsigned int)v5;
}

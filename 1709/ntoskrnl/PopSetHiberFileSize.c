/*
 * XREFs of PopSetHiberFileSize @ 0x1406FC350
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14013A294 (PopOpenKey.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     PopCalculateHiberFileSize @ 0x1406FB2DC (PopCalculateHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406FC45C (PopSetHiberFileType.c)
 *     PopValidateHiberFileSize @ 0x1406FC634 (PopValidateHiberFileSize.c)
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
    v5 = PopValidateHiberFileSize(KeyHandle, 0LL);
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

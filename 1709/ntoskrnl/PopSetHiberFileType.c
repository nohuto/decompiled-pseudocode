/*
 * XREFs of PopSetHiberFileType @ 0x1406FC45C
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x1406FC350 (PopSetHiberFileSize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14013A294 (PopOpenKey.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     PopCalculateHiberFileSize @ 0x1406FB2DC (PopCalculateHiberFileSize.c)
 *     PopValidateHiberFileSize @ 0x1406FC634 (PopValidateHiberFileSize.c)
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
    v5 = PopValidateHiberFileSize(KeyHandle, 0LL);
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

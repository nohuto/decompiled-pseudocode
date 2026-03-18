/*
 * XREFs of BiGetFirmwareType @ 0x14060926C
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x1405EE4C4 (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x140606FFC (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140609238 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_1403D17FD )
    return (unsigned int)dword_14039B804;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_14039B804 = v1;
  result = v1;
  byte_1403D17FD = 1;
  return result;
}

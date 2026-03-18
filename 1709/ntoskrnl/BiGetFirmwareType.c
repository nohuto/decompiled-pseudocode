/*
 * XREFs of BiGetFirmwareType @ 0x1405B0290
 * Callers:
 *     BiGetSystemStorePath @ 0x1405AE5C8 (BiGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1405B025C (BiIsLinkedToFirmwareVariable.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140779704 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_14038D865 )
    return (unsigned int)dword_1403581C0;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_1403581C0 = v1;
  result = v1;
  byte_14038D865 = 1;
  return result;
}

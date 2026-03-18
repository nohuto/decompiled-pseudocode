/*
 * XREFs of BiGetFirmwareType @ 0x14058BE44
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14057B738 (BiExportStoreAlterationsToFirmware.c)
 *     BiGetSystemStorePath @ 0x140589C14 (BiGetSystemStorePath.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14058BE10 (BiIsLinkedToFirmwareVariable.c)
 *     BiBindFirmwareToSystemStore @ 0x140735468 (BiBindFirmwareToSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_14036F14D )
    return (unsigned int)dword_14033FB30;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_14033FB30 = v1;
  result = v1;
  byte_14036F14D = 1;
  return result;
}

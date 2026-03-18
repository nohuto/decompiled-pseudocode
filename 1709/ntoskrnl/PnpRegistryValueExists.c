/*
 * XREFs of PnpRegistryValueExists @ 0x14015BA08
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgMigrateRootDevice @ 0x1406C66B8 (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 */

bool __fastcall PnpRegistryValueExists(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS v2; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = ZwQueryValueKey(a1, a2, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
  return (int)(v2 + 0x80000000) < 0 || v2 == -2147483643;
}

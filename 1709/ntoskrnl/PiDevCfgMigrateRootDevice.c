/*
 * XREFs of PiDevCfgMigrateRootDevice @ 0x1406C66B8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PnpRegistryValueExists @ 0x14015BA08 (PnpRegistryValueExists.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1406C6918 (PiDevCfgOpenDeviceMigrationKey.c)
 */

__int64 __fastcall PiDevCfgMigrateRootDevice(__int64 a1, __int64 a2, void *a3)
{
  int v6; // edi
  int v7; // ebx
  UNICODE_STRING v9; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  P = 0LL;
  LOBYTE(v6) = 0;
  v7 = PiDevCfgOpenDeviceMigrationKey(*(PCWSTR *)(a2 + 8));
  if ( v7 >= 0 )
  {
    if ( IopGetRegistryValue(0LL, L"ConfigFlags", 0, &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
    if ( (v6 & 1) == 0 )
      return (unsigned int)-1073741823;
    v9.Buffer = L"DriverInfName";
    *(_DWORD *)&v9.Length = 1835034;
    if ( PnpRegistryValueExists(0LL, &v9) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)PiDevCfgMigrateDevice(a1, a2, 0LL, 0LL, a3, 0LL);
  }
  return (unsigned int)v7;
}

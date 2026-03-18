/*
 * XREFs of SiIsWinPEBoot @ 0x14057E0DC
 * Callers:
 *     SiGetSystemPartition @ 0x14057DB70 (SiGetSystemPartition.c)
 *     SiGetSystemDisk @ 0x1405D3510 (SiGetSystemDisk.c)
 *     SiGetBiosSystemDisk @ 0x1405D35B4 (SiGetBiosSystemDisk.c)
 * Callees:
 *     wcsstr @ 0x1401606A0 (wcsstr.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SiGetRegistryValue @ 0x14057E148 (SiGetRegistryValue.c)
 */

bool __fastcall SiIsWinPEBoot(int a1, __int64 a2, __int64 a3, int a4)
{
  bool v4; // bl
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( (int)SiGetRegistryValue(
              a1,
              (unsigned int)L"SystemStartOptions",
              (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              a4,
              (__int64)&Str,
              (__int64)&v6) >= 0 )
  {
    v4 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0);
  }
  return v4;
}

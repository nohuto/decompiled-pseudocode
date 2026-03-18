/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x140779A48
 * Callers:
 *     BiBindEfiEntries @ 0x14077A784 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14077BB1C (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 */

bool BiIsPortableWorkspaceBoot()
{
  char v0; // di
  int v1; // ebx
  void *v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)BiOpenKey(0LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT", 0x20019u, &v3) < 0 )
  {
    if ( (int)BiGetRegistryValue(
                0LL,
                L"PortableOperatingSystem",
                (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                4,
                &P,
                &v3) >= 0 )
    {
      v1 = *(_DWORD *)P;
      ExFreePoolWithTag(P, 0x4B444342u);
      return v1 != 0;
    }
  }
  else
  {
    BiCloseKey(v3);
  }
  return v0;
}

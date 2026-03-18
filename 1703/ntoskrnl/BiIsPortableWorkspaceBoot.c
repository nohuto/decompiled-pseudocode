/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x1407355F4
 * Callers:
 *     BiBindEfiEntries @ 0x140736328 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14073753C (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 */

bool BiIsPortableWorkspaceBoot()
{
  char v0; // di
  int v1; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)BiOpenKey(0LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT", 0x20019u, &Handle) < 0 )
  {
    if ( (int)BiGetRegistryValue(
                0LL,
                L"PortableOperatingSystem",
                (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                4,
                &P,
                &Handle) >= 0 )
    {
      v1 = *(_DWORD *)P;
      ExFreePoolWithTag(P, 0x4B444342u);
      return v1 != 0;
    }
  }
  else
  {
    BiCloseKey(Handle);
  }
  return v0;
}

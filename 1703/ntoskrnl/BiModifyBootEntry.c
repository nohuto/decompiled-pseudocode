/*
 * XREFs of BiModifyBootEntry @ 0x1407381C8
 * Callers:
 *     BiUpdateEfiEntry @ 0x140738988 (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x1401800A0 (ZwModifyBootEntry.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS v2; // ebx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = BiAcquirePrivilege(0x16u, (__int64)&v4);
  if ( v2 >= 0 )
  {
    v2 = ZwModifyBootEntry(BootEntry);
    BiReleasePrivilege(&v4);
  }
  return (unsigned int)v2;
}

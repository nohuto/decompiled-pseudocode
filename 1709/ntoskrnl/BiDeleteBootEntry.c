/*
 * XREFs of BiDeleteBootEntry @ 0x14077B8DC
 * Callers:
 *     BiBindEfiEntries @ 0x14077A784 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14077BB1C (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x14017F1E0 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1405B16E8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1405B1738 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(PUNICODE_STRING EntryName)
{
  unsigned int v1; // edi
  UNICODE_STRING *v2; // rdx
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned int)EntryName;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", (unsigned int)EntryName);
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v3 >= 0 )
  {
    v4 = ZwDeleteBootEntry((PUNICODE_STRING)v1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", v1, (unsigned int)v4);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v3;
}

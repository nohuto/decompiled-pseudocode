/*
 * XREFs of BiDeleteBootEntry @ 0x1407E42EC
 * Callers:
 *     BiBindEfiEntries @ 0x1407E316C (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1407E4568 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1401A8E00 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x1406069F8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140606A48 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
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

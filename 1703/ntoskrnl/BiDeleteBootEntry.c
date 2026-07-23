/*
 * XREFs of BiDeleteBootEntry @ 0x140737354
 * Callers:
 *     BiExportBcdObjects @ 0x14073753C (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x14017F840 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(PUNICODE_STRING EntryName)
{
  unsigned int v1; // edi
  UNICODE_STRING *v2; // rdx
  NTSTATUS v3; // ebx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned int)EntryName;
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v3 >= 0 )
  {
    v3 = ZwDeleteBootEntry((PUNICODE_STRING)v1, v2);
    BiReleasePrivilege(&v5);
  }
  return (unsigned int)v3;
}

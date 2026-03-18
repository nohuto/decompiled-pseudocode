/*
 * XREFs of SdbCloseDatabaseRead @ 0x140453518
 * Callers:
 *     SdbReleaseDatabase @ 0x1404533F0 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x1404AF9F8 (SdbInitDatabaseInMemory.c)
 *     SdbpCloseLocalDatabaseEx @ 0x14072D314 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x14072DB9C (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x1404B42DC (AslFileMappingDelete.c)
 *     AslHashFree @ 0x14072F03C (AslHashFree.c)
 */

void __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = *(_QWORD *)(a1 + 1360);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v4 = *(void **)(v1 + 8);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x74705041u);
    v5 = *(void **)(a1 + 1360);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x74705041u);
    *(_QWORD *)(a1 + 1360) = 0LL;
    v6 = *(void **)(a1 + 1368);
    if ( v6 )
    {
      AslHashFree(v6);
      *(_QWORD *)(a1 + 1368) = 0LL;
    }
  }
  v3 = *(_DWORD *)(a1 + 24);
  if ( (v3 & 4) != 0 && (v3 & 1) != 0 )
  {
    v7 = *(void **)(a1 + 8);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 20) = 0;
    }
  }
  AslFileMappingDelete(*(PVOID *)a1);
  ExFreePoolWithTag((PVOID)a1, 0x74705041u);
}

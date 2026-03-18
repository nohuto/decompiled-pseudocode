/*
 * XREFs of SdbCloseDatabaseRead @ 0x1405440E4
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404F5948 (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x140543FBC (SdbReleaseDatabase.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140770650 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1407713B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x140544E28 (AslFileMappingDelete.c)
 *     AslHashFree @ 0x140772C80 (AslHashFree.c)
 */

void __fastcall SdbCloseDatabaseRead(_QWORD *P)
{
  __int64 v1; // rax
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = P[170];
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v4 = *(void **)(v1 + 8);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x74705041u);
    v5 = (void *)P[170];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x74705041u);
    P[170] = 0LL;
    v6 = (void *)P[171];
    if ( v6 )
    {
      AslHashFree(v6);
      P[171] = 0LL;
    }
  }
  v3 = *((_DWORD *)P + 6);
  if ( (v3 & 8) != 0 && (v3 & 1) != 0 )
  {
    v7 = (void *)P[1];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      P[1] = 0LL;
      *((_DWORD *)P + 5) = 0;
    }
  }
  AslFileMappingDelete((PVOID)*P);
  ExFreePoolWithTag(P, 0x74705041u);
}

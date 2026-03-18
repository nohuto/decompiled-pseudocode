/*
 * XREFs of MiDeletePagingFiles @ 0x1406E4640
 * Callers:
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  char **v8; // r14
  __int64 v9; // rbp
  char *v10; // rcx

  v4 = *(_DWORD *)(a1 + 5784);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v8 = (char **)(a1 + 5792);
    v9 = v4;
    do
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( (v10[204] & 0x50) == 0 )
        {
          v6 += *(_QWORD *)v10;
          v5 += 2LL;
        }
        MiDeletePagefile(v10, 1, a3, a4);
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( v5 )
      MiReturnCommit(a1, v5);
  }
  return v6;
}

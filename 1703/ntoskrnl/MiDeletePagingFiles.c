/*
 * XREFs of MiDeletePagingFiles @ 0x1406B79FC
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  char **v7; // r14
  __int64 v8; // rbp
  char *v9; // rcx

  v3 = *(_DWORD *)(a1 + 5592);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    v7 = (char **)(a1 + 5600);
    v8 = v3;
    do
    {
      v9 = *v7;
      if ( *v7 )
      {
        if ( (v9[204] & 0x50) == 0 )
        {
          v5 += *(_QWORD *)v9;
          v4 += 2LL;
        }
        MiDeletePagefile(v9, 1LL, a3);
      }
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( v4 )
      MiReturnCommit(a1, v4);
  }
  return v5;
}

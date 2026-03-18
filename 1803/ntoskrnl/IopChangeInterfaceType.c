/*
 * XREFs of IopChangeInterfaceType @ 0x140725EDC
 * Callers:
 *     IoReportResourceUsageInternal @ 0x140725DB8 (IoReportResourceUsageInternal.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1405DBF20 (PnpDetermineResourceListSize.c)
 */

char __fastcall IopChangeInterfaceType(__int64 a1, unsigned int **a2)
{
  char v2; // bl
  int v5; // r8d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned int *v8; // rdi
  SIZE_T v9; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // rsi
  unsigned int v12; // r8d
  _DWORD *i; // rcx
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 4) = PnpDefaultInterfaceType;
  }
  v5 = *(_DWORD *)(a1 + 28);
  v6 = a1 + 32;
  while ( --v5 >= 0 )
  {
    v7 = v6 + 8;
    v6 += 8 + 32LL * *(unsigned int *)(v6 + 4);
    while ( v7 < v6 )
    {
      if ( *(_BYTE *)(v7 + 1) == 0xF0 && !*(_DWORD *)(v7 + 8) )
      {
        v2 = 1;
        *(_DWORD *)(v7 + 8) = PnpDefaultInterfaceType;
      }
      v7 += 32LL;
    }
  }
  if ( v2 )
  {
    v8 = *a2;
    if ( *a2 )
    {
      v9 = (unsigned int)PnpDetermineResourceListSize(*a2);
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x20207050u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v8, v9);
        v12 = 0;
        for ( i = v11 + 1; v12 < *v8; i = v15 )
        {
          if ( !*i )
            *i = PnpDefaultInterfaceType;
          v14 = i[3];
          v15 = i + 4;
          if ( v14 )
          {
            v16 = v14;
            do
            {
              v17 = 0LL;
              if ( *(_BYTE *)v15 == 5 )
                v17 = (unsigned int)v15[1];
              v15 = (_DWORD *)((char *)v15 + v17 + 20);
              --v16;
            }
            while ( v16 );
          }
          ++v12;
        }
        *a2 = v11;
      }
      else
      {
        return 0;
      }
    }
  }
  return v2;
}

/*
 * XREFs of IopChangeInterfaceType @ 0x1406C048C
 * Callers:
 *     IoReportResourceUsageInternal @ 0x1406C0368 (IoReportResourceUsageInternal.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x14055808C (PnpDetermineResourceListSize.c)
 */

bool __fastcall IopChangeInterfaceType(__int64 a1, unsigned int **a2)
{
  int v4; // r9d
  int v5; // r8d
  unsigned __int64 v6; // rdx
  bool v7; // bl
  unsigned __int64 v8; // rcx
  unsigned int *v9; // rdi
  SIZE_T v10; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // rsi
  unsigned int v13; // r8d
  _DWORD *i; // rcx
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( !a1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
    *(_DWORD *)(a1 + 4) = PnpDefaultInterfaceType;
  v5 = *(_DWORD *)(a1 + 28);
  v6 = a1 + 32;
  v7 = v4 == 0;
  while ( --v5 >= 0 )
  {
    v8 = v6 + 8;
    v6 += 8 + 32LL * *(unsigned int *)(v6 + 4);
    while ( v8 < v6 )
    {
      if ( *(_BYTE *)(v8 + 1) == 0xF0 && !*(_DWORD *)(v8 + 8) )
      {
        v7 = 1;
        *(_DWORD *)(v8 + 8) = PnpDefaultInterfaceType;
      }
      v8 += 32LL;
    }
  }
  if ( v7 )
  {
    v9 = *a2;
    if ( *a2 )
    {
      v10 = (unsigned int)PnpDetermineResourceListSize(*a2);
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x20207050u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v9, v10);
        v13 = 0;
        for ( i = v12 + 1; v13 < *v9; i = v16 )
        {
          if ( !*i )
            *i = PnpDefaultInterfaceType;
          v15 = i[3];
          v16 = i + 4;
          if ( v15 )
          {
            v17 = v15;
            do
            {
              v18 = 0LL;
              if ( *(_BYTE *)v16 == 5 )
                v18 = (unsigned int)v16[1];
              v16 = (_DWORD *)((char *)v16 + v18 + 20);
              --v17;
            }
            while ( v17 );
          }
          ++v13;
        }
        *a2 = v12;
      }
      else
      {
        return 0;
      }
    }
  }
  return v7;
}

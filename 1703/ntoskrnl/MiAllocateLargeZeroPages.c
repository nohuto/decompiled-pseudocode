/*
 * XREFs of MiAllocateLargeZeroPages @ 0x1406BE398
 * Callers:
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 * Callees:
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 *     MiConvertPfnsForLargePage @ 0x1402215E4 (MiConvertPfnsForLargePage.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiFindLargePageMemory @ 0x1406BE99C (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 */

void __fastcall MiAllocateLargeZeroPages(int a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  unsigned __int32 v9; // esi
  __int64 v10; // rdi
  char *PoolWithTag; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  void *i; // rcx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdi
  _QWORD *v21; // rsi
  __int64 v22; // rbx
  _QWORD v23[3]; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+48h] [rbp-8h]

  if ( *a2 )
  {
    while ( (unsigned int)MiGetFastLargePage(a1, a3, (_DWORD)a2, a4, a5) && *a2 )
      ;
    if ( *a2 )
    {
      v9 = dword_14036C1FC;
      v10 = (unsigned int)dword_14036C1FC;
      if ( 24 * (unsigned __int64)(unsigned int)dword_14036C1FC / 0x18 == dword_14036C1FC )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_14036C1FC, 0x6C646D4Du);
        v12 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          if ( v9 )
          {
            v13 = PoolWithTag + 16;
            do
            {
              *(v13 - 1) = 0LL;
              *v13 = 0xFFFFFFFFFLL;
              v13 += 3;
              --v10;
            }
            while ( v10 );
          }
          v14 = *a2;
          v24 = 0;
          v23[1] = v23;
          v23[2] = v12;
          v23[0] = v23;
          MiFindLargePageMemory(a1, a3, v14, a4, (__int64)v23);
          if ( v24 == 1 )
            MiZeroInParallel(v12, v9, 0);
          for ( i = (void *)v12; ; i = (void *)v16 )
          {
            ExFreePoolWithTag(i, 0);
            v16 = v23[0];
            if ( (_QWORD *)v23[0] == v23 )
              break;
            v17 = *(_QWORD *)v23[0];
            if ( *(_QWORD **)(v23[0] + 8LL) != v23 || *(_QWORD *)(v17 + 8) != v23[0] )
              __fastfail(3u);
            v23[0] = *(_QWORD *)v23[0];
            *(_QWORD *)(v17 + 8) = v23;
            v18 = *(_QWORD *)(v16 + 24);
            *a2 -= v18;
            if ( v18 )
            {
              do
              {
                v19 = 1;
                if ( *(_QWORD *)(v16 + 24) >= 0x40000uLL )
                  v19 = (*(_DWORD *)(v16 + 16) & 0x3FFFF) != 0LL;
                v20 = v19;
                v21 = (_QWORD *)(48LL * *(_QWORD *)(v16 + 16) - 0x58000000000LL);
                v22 = MiLargePageSizes[v19];
                MiConvertPfnsForLargePage((__int64)v21, v19);
                *(_QWORD *)(v16 + 16) += v22;
                *(_QWORD *)(v16 + 24) -= v22;
                *v21 = *(_QWORD *)(a5 + 8 * v20);
                *(_QWORD *)(a5 + 8 * v20) = v21;
              }
              while ( *(_QWORD *)(v16 + 24) );
            }
          }
        }
      }
    }
  }
}

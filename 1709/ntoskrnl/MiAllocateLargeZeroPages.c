/*
 * XREFs of MiAllocateLargeZeroPages @ 0x1406EB7E8
 * Callers:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 * Callees:
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 *     MiConvertPfnsForLargePage @ 0x14022E29C (MiConvertPfnsForLargePage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiFindLargePageMemory @ 0x1406EBD0C (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 */

void __fastcall MiAllocateLargeZeroPages(int a1, __int64 *a2, int a3, int a4, __int64 a5, char a6)
{
  unsigned __int32 v10; // esi
  __int64 v11; // rdi
  char *PoolWithTag; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r8
  void *i; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdi
  _QWORD *v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  _QWORD v25[3]; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+48h] [rbp-8h]

  if ( *a2 )
  {
    while ( (unsigned int)MiGetFastLargePage(a1, a3, (_DWORD)a2, a4, a5) && *a2 )
      ;
    if ( *a2 )
    {
      if ( (a6 & 1) == 0 )
      {
        v10 = dword_140388544;
        v11 = (unsigned int)dword_140388544;
        if ( 24 * (unsigned __int64)(unsigned int)dword_140388544 / 0x18 == dword_140388544 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_140388544, 0x6C646D4Du);
          v13 = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            if ( v10 )
            {
              v14 = PoolWithTag + 16;
              do
              {
                *(v14 - 1) = 0LL;
                *v14 = 0xFFFFFFFFFLL;
                v14 += 3;
                --v11;
              }
              while ( v11 );
            }
            v15 = *a2;
            v26 = 0;
            v25[1] = v25;
            v25[2] = v13;
            v25[0] = v25;
            MiFindLargePageMemory(a1, a3, v15, a4, (__int64)v25);
            if ( v26 == 1 )
              MiZeroInParallel(v13, v10, 0);
            for ( i = (void *)v13; ; i = (void *)v17 )
            {
              ExFreePoolWithTag(i, 0);
              v17 = v25[0];
              if ( (_QWORD *)v25[0] == v25 )
                break;
              if ( *(_QWORD **)(v25[0] + 8LL) != v25
                || (v18 = *(_QWORD *)v25[0], *(_QWORD *)(*(_QWORD *)v25[0] + 8LL) != v25[0]) )
              {
                __fastfail(3u);
              }
              v25[0] = *(_QWORD *)v25[0];
              *(_QWORD *)(v18 + 8) = v25;
              v19 = *(_QWORD *)(v17 + 24);
              *a2 -= v19;
              if ( v19 )
              {
                do
                {
                  v20 = 1;
                  if ( *(_QWORD *)(v17 + 24) >= 0x40000uLL )
                    v20 = (*(_DWORD *)(v17 + 16) & 0x3FFFF) != 0LL;
                  v21 = v20;
                  v22 = (_QWORD *)(48LL * *(_QWORD *)(v17 + 16) - 0x58000000000LL);
                  v23 = MiLargePageSizes[v20];
                  MiConvertPfnsForLargePage((__int64)v22, v20);
                  *(_QWORD *)(v17 + 16) += v23;
                  *(_QWORD *)(v17 + 24) -= v23;
                  MiSetPfnLink(v22, *(_QWORD *)(a5 + 8 * v21));
                  *(_QWORD *)(v24 + 8 * v21) = v22;
                }
                while ( *(_QWORD *)(v17 + 24) );
              }
            }
          }
        }
      }
    }
  }
}

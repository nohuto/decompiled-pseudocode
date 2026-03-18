/*
 * XREFs of MiAllocateLargeZeroPages @ 0x14075522C
 * Callers:
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x14074D840 (MiGetLargePagesForSystemMapping.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 *     MiConvertPfnsForLargePage @ 0x1402688E0 (MiConvertPfnsForLargePage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiFindLargePageMemory @ 0x140755784 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 */

_QWORD *__fastcall MiAllocateLargeZeroPages(int a1, __int64 *a2, int a3, int a4, __int64 a5, char a6)
{
  _QWORD *result; // rax
  __int64 *v9; // r15
  __int64 v11; // rcx
  unsigned __int32 v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // r8
  void *i; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rdi
  _QWORD *v23; // rsi
  __int64 v24; // rbx
  _QWORD v25[3]; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h] BYREF

  result = &retaddr;
  v9 = a2;
  if ( *a2 )
  {
    do
    {
      result = (_QWORD *)MiGetFastLargePage(a1, a3, (_DWORD)v9, a4, a5);
      v11 = *v9;
    }
    while ( (_DWORD)result && v11 );
    if ( v11 )
    {
      if ( (a6 & 1) == 0 )
      {
        v12 = dword_1403CB6DC;
        v13 = (unsigned int)dword_1403CB6DC;
        result = (_QWORD *)(8LL * (unsigned int)dword_1403CB6DC);
        if ( 24 * (unsigned __int64)(unsigned int)dword_1403CB6DC / 0x18 == dword_1403CB6DC )
        {
          result = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_1403CB6DC, 0x6C646D4Du);
          v14 = (__int64)result;
          if ( result )
          {
            if ( v12 )
            {
              v15 = result + 2;
              do
              {
                *(v15 - 1) = 0LL;
                *v15 = 0xFFFFFFFFFLL;
                v15 += 3;
                --v13;
              }
              while ( v13 );
            }
            v16 = *v9;
            v26 = 0;
            v25[1] = v25;
            v25[2] = v14;
            v25[0] = v25;
            MiFindLargePageMemory(a1, a3, v16, a4, (__int64)v25);
            if ( v26 == 1 )
              MiZeroInParallel(v14, v12, 0);
            for ( i = (void *)v14; ; i = (void *)v18 )
            {
              ExFreePoolWithTag(i, 0);
              v18 = v25[0];
              result = v25;
              if ( (_QWORD *)v25[0] == v25 )
                break;
              if ( *(_QWORD **)(v25[0] + 8LL) != v25
                || (v19 = *(_QWORD *)v25[0], *(_QWORD *)(*(_QWORD *)v25[0] + 8LL) != v25[0]) )
              {
                __fastfail(3u);
              }
              v25[0] = *(_QWORD *)v25[0];
              *(_QWORD *)(v19 + 8) = v25;
              v20 = *(_QWORD *)(v18 + 24);
              *v9 -= v20;
              if ( v20 )
              {
                do
                {
                  v21 = 1;
                  if ( v20 >= 0x40000 )
                    v21 = (*(_DWORD *)(v18 + 16) & 0x3FFFF) != 0LL;
                  v22 = v21;
                  v23 = (_QWORD *)(48LL * *(_QWORD *)(v18 + 16) - 0x58000000000LL);
                  v24 = MiLargePageSizes[v21];
                  MiConvertPfnsForLargePage((__int64)v23, v21);
                  *(_QWORD *)(v18 + 16) += v24;
                  *(_QWORD *)(v18 + 24) -= v24;
                  MiSetPfnLink(v23, *(_QWORD *)(a5 + 8 * v22));
                  *(_QWORD *)(a5 + 8 * v22) = v23;
                  v20 = *(_QWORD *)(v18 + 24);
                }
                while ( v20 );
                v9 = a2;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

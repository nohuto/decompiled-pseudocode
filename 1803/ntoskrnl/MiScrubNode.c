/*
 * XREFs of MiScrubNode @ 0x1402707F0
 * Callers:
 *     MiScrubMemoryWorker @ 0x140757E90 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiClaimPhysicalRun @ 0x140121080 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x140124360 (MiPfnsWorthTrying.c)
 *     MiEmptyKernelStackCache @ 0x140186CB0 (MiEmptyKernelStackCache.c)
 *     MiMakePageBad @ 0x1402701E8 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 *     MiScrubNonPagedPool @ 0x14074DA70 (MiScrubNonPagedPool.c)
 *     MiScrubNodeLargePages @ 0x140756CEC (MiScrubNodeLargePages.c)
 */

unsigned __int64 __fastcall MiScrubNode(ULONG_PTR *a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 result; // rax
  _DWORD *v6; // rcx
  __int64 i; // r15
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  unsigned __int8 v14; // [rsp+90h] [rbp+8h]
  int v15; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 176) + 16 * (**(unsigned int **)(a2 + 176) + 1LL);
  if ( a1 == &MiSystemPartition )
    MiScrubNonPagedPool(a2, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
  result = MiScrubNodeLargePages(a2, a1, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
  v6 = *(_DWORD **)(a2 + 176);
  for ( i = 0LL; (unsigned int)i < *v6; i = (unsigned int)(i + 1) )
  {
    result = *(unsigned __int8 *)(v4 + 2 * i);
    if ( (_DWORD)result == *(_DWORD *)(a2 + 184) )
    {
      v8 = *(_QWORD *)&v6[4 * (unsigned int)i + 4];
      v9 = v8 + *(_QWORD *)&v6[4 * (unsigned int)i + 6] - 1LL;
      result = 0xFFFFFA8000000000uLL;
      v10 = 48 * v9 - 0x58000000000LL;
      while ( v9 >= v8 && v8 )
      {
        result = *(_QWORD *)(a2 + 160);
        if ( *(_DWORD *)(result + 4) )
          return result;
        v15 = 0;
        result = MiPfnsWorthTrying((__int16 *)a1, v10, 1LL, 117440512, &v15);
        v11 = result;
        if ( result )
        {
          if ( result >= v9 - v8 + 1 )
            break;
          v12 = 48 - 48 * result;
          result = 1 - result;
          v10 += v12;
          v9 += 1 - v11;
        }
        else
        {
          if ( v15 == 1 )
            MiEmptyKernelStackCache();
          result = MiClaimPhysicalRun(
                     (__int64)a1,
                     v9,
                     1LL,
                     qword_1403CB780,
                     a2 + 128,
                     117440512,
                     -1,
                     0LL,
                     *(unsigned __int8 *)(v10 + 34) >> 6,
                     0LL);
          if ( !result )
          {
            v13 = MiScrubPage(a2, 0LL, v10, 0LL);
            v14 = MiLockPageInline(v10);
            if ( v13 < 0 || (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
              MiMakePageBad(v10, 1);
            else
              MiInsertPageInFreeOrZeroedList(v9, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            result = v14;
            __writecr8(v14);
          }
        }
        --v9;
        v10 -= 48LL;
      }
    }
    v6 = *(_DWORD **)(a2 + 176);
  }
  return result;
}

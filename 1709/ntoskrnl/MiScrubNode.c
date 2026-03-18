/*
 * XREFs of MiScrubNode @ 0x140238CDC
 * Callers:
 *     MiScrubMemoryWorker @ 0x1406EE9C0 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiEmptyKernelStackCache @ 0x14000F458 (MiEmptyKernelStackCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiClaimPhysicalRun @ 0x1402168A0 (MiClaimPhysicalRun.c)
 *     MiMakePageBad @ 0x1402385C8 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 *     MiScrubNonPagedPool @ 0x1406E2B74 (MiScrubNonPagedPool.c)
 *     MiScrubNodeLargePages @ 0x1406ED858 (MiScrubNodeLargePages.c)
 */

_DWORD *__fastcall MiScrubNode(ULONG_PTR *a1, __int64 a2)
{
  __int64 v4; // rbp
  _DWORD *result; // rax
  __int64 i; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // [rsp+90h] [rbp+8h]
  int v16; // [rsp+98h] [rbp+10h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a2 + 176) + 16LL * **(unsigned int **)(a2 + 176);
  if ( a1 == &MiSystemPartition )
    MiScrubNonPagedPool(a2, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
  MiScrubNodeLargePages(a2, a1, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
  result = *(_DWORD **)(a2 + 176);
  for ( i = 0LL; (unsigned int)i < *result; i = (unsigned int)(i + 1) )
  {
    if ( *(unsigned __int8 *)(v4 + 2 * i + 16) == *(_DWORD *)(a2 + 184) )
    {
      v7 = *(_QWORD *)(a2 + 176);
      v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)i + 16);
      v9 = v8 + *(_QWORD *)(v7 + 16LL * (unsigned int)i + 24) - 1LL;
      v10 = 48 * v9 - 0x58000000000LL;
      while ( v9 >= v8 && v8 )
      {
        result = *(_DWORD **)(a2 + 160);
        if ( result[1] )
          return result;
        v16 = 0;
        v11 = MiPfnsWorthTrying((__int16 *)a1, v10, 1LL, 117440512, &v16, &v17);
        if ( v11 )
        {
          if ( v11 >= v9 - v8 + 1 )
            break;
          v10 += 48 - 48 * v11;
          v9 += 1 - v11;
        }
        else
        {
          if ( v16 == 1 )
            MiEmptyKernelStackCache();
          if ( !MiClaimPhysicalRun(
                  (__int64)a1,
                  v9,
                  1LL,
                  qword_1403885E0,
                  a2 + 128,
                  117440512,
                  -1,
                  0LL,
                  *(unsigned __int8 *)(v10 + 34) >> 6,
                  0LL) )
          {
            v12 = MiScrubPage(a2, 0LL, v10, 0LL);
            v15 = MiLockPageInline(v10);
            if ( v12 < 0 || (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
              MiMakePageBad(v10, 1, v13, v14);
            else
              MiInsertPageInFreeOrZeroedList(v9, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v15);
          }
        }
        --v9;
        v10 -= 48LL;
      }
    }
    result = *(_DWORD **)(a2 + 176);
  }
  return result;
}

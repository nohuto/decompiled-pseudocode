/*
 * XREFs of MiPruneStandbyPages @ 0x1401353D0
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x14014E230 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned __int64 v6; // r14
  unsigned int v7; // r12d
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  int v12; // esi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rbx
  _QWORD *v21; // rsi
  _QWORD *v22; // r11
  _QWORD *v23; // rax
  __int64 *v24; // r8
  unsigned __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int8 CurrentIrql; // bl
  int v33; // [rsp+20h] [rbp-58h] BYREF
  BOOL v34; // [rsp+24h] [rbp-54h]

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 0LL;
  v34 = (*(_DWORD *)(8256LL * a2 + *(_QWORD *)(a1 + 16) + 8160) & 1) == 0;
  if ( a4 )
  {
    while ( 1 )
    {
      v9 = MiRemoveLowestPriorityStandbyPage(v4, 8LL, 0LL, a4);
      v10 = v9;
      if ( v9 == -1 )
        return v8;
      v11 = 48 * v9 - 0x58000000000LL;
      v12 = 0;
      ++v8;
      v33 = 0;
      v13 = *(_QWORD *)(v11 + 40);
      v14 = v13 >> 36;
      v15 = v13 >> 58;
      v16 = v14 & 3;
      if ( (unsigned __int16)v15 != v5 || (_DWORD)v16 != v7 && !v34 )
        break;
LABEL_15:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList(v10, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v12 != 1 )
      {
        v4 = a1;
        if ( v8 < v6 )
          continue;
      }
      return v8;
    }
    v17 = 0LL;
    v18 = (unsigned int)v16;
    v19 = *(_QWORD *)(v4 + 16) + 8256LL * (unsigned __int16)v15;
    v20 = 0LL;
    v21 = (_QWORD *)(v19 + 8 * v16 + 48);
    v22 = (_QWORD *)(v19 + 8032);
    do
    {
      if ( (unsigned int)MmNumberOfChannels > 1 )
        v23 = (_QWORD *)(v19 + 8 * (v20 + 2 * v18) + 8096);
      else
        v23 = v22;
      v24 = MiLargePageSizes;
      v25 = v17 + *v23;
      v26 = v21;
      v27 = 0LL;
      v28 = 3LL;
      do
      {
        ++v24;
        v29 = *v26 + v26[8];
        v26 += 16;
        v27 += *(v24 - 1) * v29;
        --v28;
      }
      while ( v28 );
      ++v20;
      v17 = v25 + v27;
      ++v22;
      v21 += 4;
    }
    while ( v20 <= 1 );
    v5 = a2;
    v7 = a3;
    if ( v17 < 0x200 )
    {
      --v8;
    }
    else
    {
      v30 = MiSwapNumaStandbyPage(v10, a2, a3, 16LL);
      if ( v30 == v10 )
      {
        v12 = 1;
        goto LABEL_14;
      }
      v10 = v30;
      v11 = 48 * v30 - 0x58000000000LL;
    }
    v12 = v33;
LABEL_14:
    v6 = a4;
    goto LABEL_15;
  }
  return 0LL;
}

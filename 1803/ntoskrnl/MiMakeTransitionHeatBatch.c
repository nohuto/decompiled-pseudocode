/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x140258D38
 * Callers:
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTryLockLeafPage @ 0x1400518D8 (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     MiAddPageToHeatRanges @ 0x140264D10 (MiAddPageToHeatRanges.c)
 *     MiGetPrototypePteBoundaries @ 0x14026A624 (MiGetPrototypePteBoundaries.c)
 */

__int64 __fastcall MiMakeTransitionHeatBatch(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 PrototypePteBoundaries; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+60h] [rbp+8h]
  __int64 v35; // [rsp+78h] [rbp+20h] BYREF

  a1[2] &= (-(__int64)((a1[2] & 0x400LL) != 0) & 0xFFFFFFFFFFFFF808uLL) - 9;
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 0LL;
  v7 = a1[1] | 0x8000000000000000uLL;
  v8 = 0LL;
  if ( (a1[5] & 0x200000000000000LL) != 0 )
  {
    v34 = 1;
    PrototypePteBoundaries = MiGetPrototypePteBoundaries(v7, &v35);
    if ( !PrototypePteBoundaries )
      return v8;
    v13 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v19 = PrototypePteBoundaries + 8 * v35;
    v17 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( (v7 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
      v13 = PrototypePteBoundaries;
    if ( v17 >= v19 )
      v17 = v19 - 8;
  }
  else
  {
    v34 = 0;
    v9 = (__int64)(v7 << 25) >> 16;
    if ( v9 > 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(v9) != 6 )
        return v8;
      v13 = v7 & 0xFFFFFFFFFFFFF000uLL;
      v17 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      if ( !a2 )
        return v8;
      v10 = v9 & 0x7FFFFFE00000LL;
      v11 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
      if ( v10 >= v11 << 12 )
        v12 = (v10 >> 9) & 0x7FFFFFFFF8LL;
      else
        v12 = 8 * (v11 & 0xFFFFFFFFFLL);
      v13 = v12 - 0x98000000000LL;
      v14 = v10 + 2093056;
      v15 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
      if ( v14 <= v15 << 12 )
        v16 = (v14 >> 9) & 0x7FFFFFFFF8LL;
      else
        v16 = 8 * (v15 & 0xFFFFFFFFFLL);
      v17 = v16 - 0x98000000000LL;
    }
  }
  v20 = (__int64)RtlpInterlockedPopEntrySList(&stru_1403CC110);
  if ( !v20 )
  {
    v21 = dword_1403CC120;
    while ( v21 )
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange(&dword_1403CC120, v21 - 1, v21);
      if ( v22 == v21 )
        goto LABEL_25;
    }
    v20 = -1LL;
  }
LABEL_25:
  v8 = v20;
  if ( v20 )
  {
    if ( v20 == -1 )
    {
      v32 = a1[2];
      if ( (v32 & 0x400) != 0 )
        v33 = v32 | 0x800;
      else
        v33 = v32 | 8;
      a1[2] = v33;
    }
    else
    {
      v23 = -1;
      v24 = a3;
      if ( a3 >= 0xFFFFFFFF )
        v24 = 0xFFFFFFFFLL;
      if ( v24 >= 0x10 )
      {
        if ( a3 < 0xFFFFFFFF )
          v23 = a3;
      }
      else
      {
        v23 = 16;
      }
      v25 = v7;
      if ( a3 <= 0x10 )
        v25 = v13;
      if ( (unsigned int)((__int64)(v17 - v7) >> 3) + 1 < v23 )
      {
        if ( (unsigned int)((__int64)(v17 - v25) >> 3) + 1 > v23 )
          v25 = v17 - 8LL * v23 + 8;
      }
      else
      {
        v25 = v7;
        v17 = v7 + 8 * (v23 - 1LL);
      }
      *(_QWORD *)v20 = 0LL;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_DWORD *)v20 = 1;
      while ( v25 <= v17 )
      {
        if ( (MI_READ_PTE_LOCK_FREE(v25) & 0xC01) == 0x800 )
        {
          if ( v25 == v7 )
          {
            v27 = a1;
LABEL_53:
            if ( (unsigned int)MiAddPageToHeatRanges(
                                 v20,
                                 (__int64)((unsigned __int128)((__int64)(v27 + 0xB000000000LL)
                                                             * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
                                 (__int64)(v27 + 0xB000000000LL) / 48) )
              return v8;
            goto LABEL_54;
          }
          if ( v34 )
            v26 = MiTryLockLeafPage(v25);
          else
            v26 = MiLockTransitionLeafPage(v25, (_BYTE *)1);
          v27 = (_QWORD *)v26;
          if ( v26 )
          {
            v29 = *(_QWORD *)(v26 + 16);
            v28 = v29;
            v30 = (v29 >> 10) & 1;
            if ( v30 )
              v31 = v29 >> 11;
            else
              v31 = v29 >> 3;
            if ( (v31 & 1) != 0 )
            {
              v27[2] = v28 & ((-(__int64)(v30 != 0) & 0xFFFFFFFFFFFFF808uLL) - 9);
              _InterlockedAnd64(v27 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_53;
            }
            _InterlockedAnd64(v27 + 3, 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
LABEL_54:
        v25 += 8LL;
      }
    }
  }
  return v8;
}

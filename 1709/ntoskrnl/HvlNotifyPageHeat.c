/*
 * XREFs of HvlNotifyPageHeat @ 0x140294980
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiAddColdPagesToHotRanges @ 0x14022A2C8 (MiAddColdPagesToHotRanges.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v7; // rbx
  _QWORD *v8; // r14
  int v9; // ebp
  unsigned int v10; // edx
  unsigned int v11; // r8d
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int16 v21; // bx
  PHYSICAL_ADDRESS v22[3]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( !a1 )
  {
    if ( (HvlEnlightenments & 0x400000) != 0 )
    {
      v7 = 0LL;
      goto LABEL_9;
    }
    return 3221225659LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 3221225659LL;
  v7 = 1LL;
LABEL_9:
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v22, 1, 0LL, 0LL);
  v9 = 0;
  v10 = a2;
  *v8 = 0LL;
  *v8 = v7;
  do
  {
    v11 = 0;
    if ( v10 >= 0x1FF )
      v10 = 511;
    if ( v10 )
    {
      v12 = v8 + 1;
      while ( 1 )
      {
        v13 = v11 + v9;
        *v12 = 0LL;
        v14 = *(_QWORD *)(a3 + 8 * v13);
        v15 = v13;
        *v12 = v14 & 0x3FF;
        v16 = *(_QWORD *)(a3 + 8 * v13);
        if ( (v16 & 0xC00) == 0 )
          break;
        v18 = v14 & 0x3FF | 0x800;
        *v12 = v18;
        v17 = v18 | *(_QWORD *)(a3 + 8 * v15) & 0xFFFFFFFFFFE00000uLL;
        *v12 = v17;
        v19 = (*(_DWORD *)(a3 + 8 * v15) >> 10) & 3;
        if ( v19 == 1 )
          goto LABEL_19;
        if ( v19 == 2 )
        {
          v17 |= 0x1000uLL;
          goto LABEL_19;
        }
LABEL_20:
        ++v11;
        ++v12;
        if ( v11 >= v10 )
          goto LABEL_21;
      }
      v17 = v14 & 0x3FF | v16 & 0xFFFFFFFFFFFFF000uLL;
LABEL_19:
      *v12 = v17;
      goto LABEL_20;
    }
LABEL_21:
    v20 = HvcallCodeVa();
    v21 = v20;
    if ( (_WORD)v20 )
      break;
    v9 += WORD2(v20) & 0xFFF;
    v10 = a2 - v9;
  }
  while ( a2 != v9 );
  HvlpReleaseHypercallPage((__int64)v22);
  if ( v21 )
    return (unsigned int)HvlpHvToNtStatus(v21);
  return v3;
}

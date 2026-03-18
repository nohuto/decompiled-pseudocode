/*
 * XREFs of HvlNotifyPageHeat @ 0x1402CA4CC
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x140147CE0 (MmSetPfnListInfo.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     MiAddColdPagesToHotRanges @ 0x140264C70 (MiAddColdPagesToHotRanges.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14026772C (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v7; // rbx
  _QWORD *v8; // r15
  int v9; // ebp
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdi
  int v12; // edx
  unsigned __int16 v13; // ax
  unsigned int v14; // r10d
  int v15; // eax
  unsigned int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // bx
  PHYSICAL_ADDRESS v27[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+20h]

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
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v27, 1, 0LL, 0LL);
  LODWORD(v28) = 32771;
  v9 = 0;
  v10 = a2;
  LODWORD(v11) = 0;
  v12 = 0;
  *v8 = v7;
  do
  {
    v13 = v11;
    v14 = v10;
    if ( v10 >= 0x1FF )
    {
      v14 = 511;
      v13 = v12;
    }
    v15 = ((unsigned __int16)v14 ^ v13) & 0xFFF;
    v16 = 0;
    if ( v10 >= 0x1FF )
      LODWORD(v11) = v12;
    HIDWORD(v28) = v11 ^ v15;
    if ( v14 )
    {
      v17 = v8 + 1;
      while ( 1 )
      {
        v18 = v16 + v9;
        *v17 = 0LL;
        v19 = *(_QWORD *)(a3 + 8 * v18) & 0x3FFLL;
        v20 = (unsigned int)v18;
        *v17 = v19;
        v21 = *(_QWORD *)(a3 + 8 * v18);
        if ( (v21 & 0xC00) == 0 )
          break;
        v23 = v19 | 0x800;
        *v17 = v23;
        v22 = v23 | *(_QWORD *)(a3 + 8 * v20) & 0xFFFFFFFFFFE00000uLL;
        *v17 = v22;
        v24 = (*(_DWORD *)(a3 + 8 * v20) >> 10) & 3;
        if ( v24 == 1 )
          goto LABEL_21;
        if ( v24 == 2 )
        {
          v22 |= 0x1000uLL;
          goto LABEL_21;
        }
LABEL_22:
        ++v16;
        ++v17;
        if ( v16 >= v14 )
          goto LABEL_23;
      }
      v22 = v19 | v21 & 0xFFFFFFFFFFFFF000uLL;
LABEL_21:
      *v17 = v22;
      goto LABEL_22;
    }
LABEL_23:
    v25 = HvcallCodeVa();
    v26 = v25;
    if ( (_WORD)v25 )
      break;
    v11 = HIDWORD(v28);
    v9 += WORD2(v25) & 0xFFF;
    v12 = HIDWORD(v28);
    v10 = a2 - v9;
  }
  while ( a2 != v9 );
  HvlpReleaseHypercallPage((__int64)v27);
  if ( v26 )
    return (unsigned int)HvlpHvToNtStatus(v26);
  return v3;
}

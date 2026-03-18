/*
 * XREFs of HvlNotifyPageHeat @ 0x140269C18
 * Callers:
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401EA4A4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v7; // rbx
  _QWORD *v8; // r15
  int v9; // ebp
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  _QWORD *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // bx
  PHYSICAL_ADDRESS v22[3]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    v7 = 1LL;
  }
  else
  {
    v7 = 0LL;
  }
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
      do
      {
        *v12 = 0LL;
        v13 = v11 + v9;
        v14 = *(_QWORD *)(a3 + 8 * v13) & 0x3FFLL;
        *v12 = v14;
        v15 = *(_QWORD *)(a3 + 8 * v13);
        if ( (v15 & 0xC00) != 0 )
        {
          v16 = v14 | 0x800;
          *v12 = v16;
          v17 = *(_QWORD *)(a3 + 8 * v13) ^ ((unsigned int)v16 ^ (unsigned int)*(_QWORD *)(a3 + 8 * v13)) & 0x1FFFFF;
          *v12 = v17;
          v18 = *(_QWORD *)(a3 + 8 * v13) & 0xC00LL;
          if ( v18 == 1024 )
          {
            v19 = v17 & 0xFFFFFFFFFFFFEFFFuLL;
LABEL_17:
            *v12 = v19;
            goto LABEL_18;
          }
          if ( v18 == 2048 )
          {
            v19 = v17 | 0x1000;
            goto LABEL_17;
          }
        }
        else
        {
          *v12 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v14) & 0xFFF;
        }
LABEL_18:
        ++v11;
        ++v12;
      }
      while ( v11 < v10 );
    }
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

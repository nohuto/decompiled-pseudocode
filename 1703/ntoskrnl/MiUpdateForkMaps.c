/*
 * XREFs of MiUpdateForkMaps @ 0x140002950
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 * Callees:
 *     MiBuildForkPageTable @ 0x140002C30 (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x140002DEC (MiDoneWithThisPageGetAnother.c)
 *     MiMapSinglePage @ 0x140025508 (MiMapSinglePage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(_QWORD *a1, int a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  __int64 NextPageTable; // rax
  ULONG_PTR v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // r15
  __int64 *v19; // r13
  __int64 v20; // rbp
  int v21; // r12d
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  _QWORD *v31; // [rsp+50h] [rbp-78h]
  ULONG_PTR v32; // [rsp+58h] [rbp-70h]
  char v33; // [rsp+60h] [rbp-68h] BYREF
  char v34; // [rsp+70h] [rbp-58h] BYREF

  v31 = a4;
  v29 = a5;
  LOBYTE(a4) = a6;
  NextPageTable = MiGetNextPageTable(a2, a3, 0, (_DWORD)a4, 4, (__int64)&v28);
  v32 = NextPageTable;
  v9 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  LODWORD(v11) = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)v11;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v12;
    }
    while ( v12 );
    v9 += 8LL;
    v11 = (unsigned int)v11;
    do
    {
      v9 = (__int64)(v9 << 25) >> 16;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    if ( ((v9 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v14 = (unsigned __int64 *)&v33;
      v15 = 3LL;
      v16 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        *v14 = v16;
        v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v14;
        --v15;
      }
      while ( v15 );
      v17 = *a1;
      v18 = &v34;
      a1[6] = v9;
      v19 = a1 + 1;
      v20 = 0LL;
      v21 = 3;
      v22 = *(_QWORD *)(v17 + 40) >> 12;
      v23 = v22;
      v24 = 0;
      do
      {
        v30 = MiMapSinglePage(a1[7], v22, 1073741856LL, 0LL) + 8LL * ((*(_DWORD *)v18 >> 3) & 0x1FF);
        v25 = MI_READ_PTE_LOCK_FREE(v30);
        v28 = v25;
        if ( v25 )
        {
          if ( (v25 & 1) != 0 )
            v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v28);
          else
            v27 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v28);
          v22 = v27;
        }
        else
        {
          LOBYTE(v26) = a6;
          MiDoneWithThisPageGetAnother(&a1[v24 + 1], v29, *a1, v26);
          v22 = *v19;
          MiBuildForkPageTable(*a1, *v19, *(_QWORD *)v18, v30, v23, v21);
          ++*v31;
          if ( v20 )
            MiIncreaseUsedPtesCount(v20, 1LL);
        }
        v20 = 48 * v22 - 0x58000000000LL;
        ++v24;
        --v21;
        ++v19;
        v18 -= 8;
        v23 = v22;
      }
      while ( v24 < 3 );
      v13 = MiMapSinglePage(a1[7], v22, 1073741856LL, 0LL);
      a1[4] = v13;
      v9 = v32;
      a1[8] = 48 * v22 - 0x58000000000LL;
    }
    else
    {
      v13 = a1[4];
    }
    a1[5] = v13 | v9 & 0xFFF;
    MiMakeSystemAddressValid(v9, 1);
  }
  return v9;
}

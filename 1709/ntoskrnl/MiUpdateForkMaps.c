/*
 * XREFs of MiUpdateForkMaps @ 0x1400CC280
 * Callers:
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMapSinglePage @ 0x1400CD194 (MiMapSinglePage.c)
 *     MiBuildForkPageTable @ 0x1400CEA74 (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400CEC64 (MiDoneWithThisPageGetAnother.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 NextPageTable; // rax
  ULONG_PTR v9; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // r12
  __int64 v19; // rbp
  int v20; // r13d
  __int64 *v21; // rbx
  __int64 v22; // rsi
  unsigned int v23; // r15d
  __int64 v24; // r9
  __int64 *v25; // r14
  __int64 PteShadow; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  _QWORD *v31; // [rsp+50h] [rbp-78h]
  ULONG_PTR v32; // [rsp+58h] [rbp-70h]
  char v33; // [rsp+60h] [rbp-68h] BYREF
  char v34; // [rsp+70h] [rbp-58h] BYREF

  v31 = a4;
  v30 = a5;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4u, &v28);
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
      v19 = 0LL;
      v20 = 3;
      v21 = a1 + 1;
      v22 = *(_QWORD *)(v17 + 40) >> 12;
      v29 = v22;
      v23 = 0;
      do
      {
        v25 = (__int64 *)(MiMapSinglePage(a1[7], v22, 1073741856LL, 0LL) + 8LL * ((*(_DWORD *)v18 >> 3) & 0x1FF));
        PteShadow = *v25;
        if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v25, *v25);
        v28 = PteShadow;
        if ( PteShadow )
        {
          if ( (PteShadow & 1) != 0 )
            v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v28);
          else
            v27 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v28);
          v22 = v27;
        }
        else
        {
          LOBYTE(v24) = a6;
          MiDoneWithThisPageGetAnother(&a1[v23 + 1], v30, *a1, v24);
          v22 = *v21;
          MiBuildForkPageTable(*a1, *v21, *(_QWORD *)v18, (_DWORD)v25, v29, v20);
          ++*v31;
          if ( v19 )
            MiIncreaseUsedPtesCount(v19, 1u);
        }
        v19 = 48 * v22 - 0x58000000000LL;
        v29 = v22;
        ++v23;
        --v20;
        ++v21;
        v18 -= 8;
      }
      while ( v23 < 3 );
      v13 = MiMapSinglePage(a1[7], v22, 1073741856LL, 0LL);
      v9 = v32;
      a1[4] = v13;
      a1[8] = v19;
    }
    else
    {
      v13 = a1[4];
    }
    a1[5] = v13 | v9 & 0xFFF;
    MiMakeSystemAddressValid(v9, 0LL, 0, a6, 1);
  }
  return v9;
}

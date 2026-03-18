/*
 * XREFs of MiUpdateForkMaps @ 0x140141F94
 * Callers:
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiMapSinglePage @ 0x140138578 (MiMapSinglePage.c)
 *     MiBuildForkPageTable @ 0x1401422DC (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x1401424AC (MiDoneWithThisPageGetAnother.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v8; // r14d
  __int64 NextPageTable; // rax
  ULONG_PTR v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // rax
  __int64 v15; // rax
  char *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rbp
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // r9
  ULONG_PTR v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v29[4]; // [rsp+38h] [rbp-50h] BYREF
  char v30; // [rsp+58h] [rbp-30h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v8 = 4;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4, &v31);
  v28 = NextPageTable;
  v10 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  LODWORD(v12) = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( (_DWORD)v12 )
  {
    v13 = (unsigned int)v12;
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v13;
    }
    while ( v13 );
    v10 += 8LL;
    v12 = (unsigned int)v12;
    do
    {
      v10 = (__int64)(v10 << 25) >> 16;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    if ( ((v10 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiFillPteHierarchy((__int64)(v10 << 25) >> 16, v29);
      v15 = *a1;
      a1[6] = v10;
      v16 = &v30;
      v17 = *(_QWORD *)(v15 + 40) >> 12;
      v18 = v17;
      v19 = 0LL;
      do
      {
        v16 -= 8;
        --v8;
        v20 = MiMapSinglePage(a1[7], v17, 1073741856, 0) + 8LL * ((*(_DWORD *)v16 >> 3) & 0x1FF);
        v21 = MI_READ_PTE_LOCK_FREE(v20);
        v31 = v21;
        if ( v21 )
        {
          if ( (v21 & 1) != 0 )
            v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
          else
            v26 = MiReverseSwizzleInvalidPte(v21, v22, v23, v24);
          v17 = (v26 >> 12) & 0xFFFFFFFFFLL;
        }
        else
        {
          LOBYTE(v24) = a6;
          v25 = &a1[3 - v8];
          MiDoneWithThisPageGetAnother(v25 + 1, a5, *a1, v24);
          v17 = v25[1];
          MiBuildForkPageTable(*a1, v17, *(_QWORD *)v16, v20, v18, v8);
          ++*v32;
          if ( v19 )
            MiIncreaseUsedPtesCount(v19, 1u);
        }
        v19 = 48 * v17 - 0x58000000000LL;
        v18 = v17;
      }
      while ( v8 != 1 );
      v14 = MiMapSinglePage(a1[7], v17, 1073741856, 0);
      v10 = v28;
      a1[4] = v14;
      a1[8] = v19;
    }
    else
    {
      v14 = a1[4];
    }
    v27 = a6;
    a1[5] = v14 | v10 & 0xFFF;
    MiMakeSystemAddressValid(v10, 0LL, 0, v27, 1);
  }
  return v10;
}

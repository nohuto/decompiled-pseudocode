/*
 * XREFs of MiGetNextNonGapPfnPage @ 0x14017A7D8
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     MiGetFileOnlyRanges @ 0x140252864 (MiGetFileOnlyRanges.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiGetNextNonGapPfnPage(unsigned __int64 *a1, unsigned __int64 *a2, char a3, int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r15
  int v8; // r13d
  char *AnyMultiplexedVm; // rax
  bool v10; // cc
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 NextPageTable; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-58h]
  unsigned int v36; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *a1;
  v5 = 0LL;
  if ( !*a1 )
    v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = 48 * qword_1403CB780 - 0x57FFFFFFFD0LL;
  v7 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( ((((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFF) != 0 )
    v7 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a4 != 0 ? 7 : 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v30 = AnyMultiplexedVm;
  v10 = v4 <= v7;
  v11 = 0LL;
  v12 = 0LL;
  i = 0LL;
  while ( 2 )
  {
    if ( v10 )
    {
      if ( v11 )
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
      v11 = 0LL;
      NextPageTable = MiGetNextPageTable(v4, v7, 0LL, a3, v8, &v36);
      v4 = NextPageTable;
      if ( NextPageTable )
      {
        if ( !a4 )
          v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v36 )
        {
          if ( v11 && v36 )
          {
            v28 = v36;
            do
            {
              v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v28;
            }
            while ( v28 );
          }
          i = 0x200000LL;
          if ( v36 > 1 )
          {
            v29 = v36 - 1;
            do
            {
              i <<= 9;
              --v29;
            }
            while ( v29 );
          }
          v15 = (__int64)(v7 - NextPageTable) >> 3;
          v12 = NextPageTable;
          AnyMultiplexedVm = v30;
          if ( i >> 12 > v15 + 1 )
            i = (v15 + 1) << 12;
          break;
        }
        v18 = NextPageTable;
        while ( 1 )
        {
          v31 = MI_READ_PTE_LOCK_FREE(v18);
          if ( (v31 & 1) != 0 )
          {
            if ( qword_1403CC468 == (PVOID)qword_1403CC470 )
              break;
            v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
            if ( ((v19 >> 12) & 0xFFFFFFFFFLL) != v20 )
              break;
          }
          v18 += 8LL;
          if ( v18 > v7 || (v18 & 0xFFF) == 0 )
            goto LABEL_30;
        }
        v12 = v18;
        if ( !v18 )
        {
LABEL_30:
          AnyMultiplexedVm = v30;
          v4 = v18;
          v10 = v18 <= v7;
          continue;
        }
        v21 = v18 + 8;
        for ( i = 4096LL; v21 <= v7; i += 4096LL )
        {
          if ( (v21 & 0xFFF) == 0 )
            break;
          v22 = MI_READ_PTE_LOCK_FREE(v21);
          v21 = v25 + 8;
          v31 = v22;
          if ( (v22 & 1) == 0 )
            break;
          if ( v23 != v24 )
          {
            v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
            if ( ((v26 >> 12) & 0xFFFFFFFFFLL) == v27 )
              break;
          }
        }
      }
      AnyMultiplexedVm = v30;
    }
    break;
  }
  if ( v11 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v11);
  if ( v12 )
  {
    v4 = v12 + 8 * (i >> 12);
    v16 = (__int64)(v12 << 25) >> 16;
    v5 = v32 - v16;
    if ( v16 + i <= v32 )
      v5 = i;
  }
  else
  {
    v16 = 0LL;
  }
  *a2 = v5;
  *a1 = v4;
  return v16;
}

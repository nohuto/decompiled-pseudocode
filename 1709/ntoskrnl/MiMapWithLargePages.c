/*
 * XREFs of MiMapWithLargePages @ 0x14014F450
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x14014F27C (MiMapContiguousMemoryLarge.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapWithLargePages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  bool v16; // zf
  unsigned __int64 *v17; // r14
  __int64 v18; // rbx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rdx
  __int64 v22; // r11
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 *i; // r10
  unsigned __int64 v28; // [rsp+68h] [rbp+10h]

  v5 = 14;
  if ( a5 != 9 )
    v5 = a5;
  v7 = a2 >> 9;
  v8 = a3 & 7;
  v9 = a2 >> 9 << 9;
  if ( (a2 & 0x1FF) != 0 )
    ++v7;
  v10 = MiObtainSystemVa(v7, v5, a3);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MiIsPfnInline(a1) )
  {
    v15 = *(unsigned __int8 *)(48 * v14 - 0x57FFFFFFFDELL) >> 6;
    if ( v15 )
    {
      v16 = v15 == 2;
      goto LABEL_13;
    }
LABEL_11:
    v8 |= 8u;
    goto LABEL_15;
  }
  if ( !a4 )
    goto LABEL_11;
  v16 = a4 == 2;
LABEL_13:
  if ( v16 )
    v8 |= 0x18u;
LABEL_15:
  v17 = (unsigned __int64 *)(v13 + 8 * v9);
  if ( !(unsigned int)MiMakeZeroedPageTables(v13, (__int64)(v17 - 1), (a5 == 12) | 2u, a5) )
  {
LABEL_16:
    MiReturnSystemVa(v11, (v7 << 21) + v11, v5, 0LL);
    return 0LL;
  }
  if ( a2 == v9 )
  {
    v18 = a1;
  }
  else
  {
    v28 = v13 + 8 * a2;
    if ( !(unsigned int)MiMakeZeroedPageTables(v13 + 8 * v9, v28 - 8, a5 == 12, a5) )
      goto LABEL_16;
    v18 = a1;
    ValidPte = MiMakeValidPte(0LL, v9 + a1, v8 | 0xA0000000);
    v20 = v28;
    v21 = ValidPte;
    if ( (unsigned __int64)v17 < v28 )
    {
      v22 = 0xFFFFFFFFF000LL;
      do
      {
        *v17 = v21;
        if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v17, v21);
        ++v17;
        v21 ^= v22 & (v21 ^ (v21 + 4096));
      }
      while ( (unsigned __int64)v17 < v20 );
    }
  }
  v23 = (unsigned __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v24 = MiMakeValidPte(0LL, v18, v8 | 0xA4000000);
  for ( i = &v23[v9 >> 9]; v23 < i; v24 ^= (v24 ^ (v24 + 0x200000)) & 0xFFFFFFFFF000LL )
  {
    *v23 = v24;
    if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v23, v24);
    ++v23;
  }
  return v11;
}

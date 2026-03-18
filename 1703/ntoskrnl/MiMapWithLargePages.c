/*
 * XREFs of MiMapWithLargePages @ 0x14014734C
 * Callers:
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapWithLargePages(unsigned __int64 a1, unsigned __int64 a2, char a3, int a4, int a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  bool v17; // zf
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  unsigned __int64 ValidPte; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx

  v5 = 15;
  if ( a5 != 9 )
    v5 = a5;
  v7 = a2 >> 9;
  v8 = a3 & 7;
  v10 = a2 >> 9 << 9;
  if ( (a2 & 0x1FF) != 0 )
    ++v7;
  v11 = MiObtainSystemVa(v7, v5);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v14 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MiIsPfnInline(a1) )
  {
    v16 = *(unsigned __int8 *)(48 * v15 - 0x57FFFFFFFDELL) >> 6;
    if ( v16 )
    {
      v17 = v16 == 2;
      goto LABEL_13;
    }
LABEL_11:
    v8 |= 8u;
    goto LABEL_15;
  }
  if ( !a4 )
    goto LABEL_11;
  v17 = a4 == 2;
LABEL_13:
  if ( v17 )
    v8 |= 0x18u;
LABEL_15:
  v18 = (unsigned __int64 *)(v14 + 8 * v10);
  if ( !(unsigned int)MiMakeZeroedPageTables(v14, (__int64)(v18 - 1), (a5 == 12) | 2u, a5) )
  {
LABEL_16:
    MiReturnSystemVa(v12, (v7 << 21) + v12, v5, 0LL);
    return 0LL;
  }
  if ( a2 == v10 )
  {
    v20 = a1;
  }
  else
  {
    v19 = v14 + 8 * a2;
    if ( !(unsigned int)MiMakeZeroedPageTables(v14 + 8 * v10, v19 - 8, a5 == 12, a5) )
      goto LABEL_16;
    v20 = a1;
    ValidPte = MiMakeValidPte(0LL, v10 + a1, v8 | 0xA0000000);
    while ( (unsigned __int64)v18 < v19 )
    {
      *v18 = ValidPte;
      if ( (unsigned int)MiPteInShadowRange(v18) )
        MiWritePteShadow(v23);
      ValidPte = (v22 ^ ((v22 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v22;
      ++v18;
    }
  }
  v24 = (unsigned __int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v25 = MiMakeValidPte(0LL, v20, v8 | 0xA4000000);
  v26 = &v24[v10 >> 9];
  while ( v24 < v26 )
  {
    *v24 = v25;
    if ( (unsigned int)MiPteInShadowRange(v24) )
      MiWritePteShadow(v28);
    v25 = (v27 ^ ((v27 & 0xFFFFFFFFFFFFF000uLL) + 0x200000)) & 0xFFFFFFFFF000LL ^ v27;
    ++v24;
  }
  return v12;
}

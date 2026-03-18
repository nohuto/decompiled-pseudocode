/*
 * XREFs of MiMapWithLargePages @ 0x140177EDC
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x140177CFC (MiMapContiguousMemoryLarge.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

unsigned __int64 __fastcall MiMapWithLargePages(unsigned __int64 a1, unsigned __int64 a2, char a3, int a4, int a5)
{
  int v5; // r15d
  unsigned __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 *v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v25; // zf
  unsigned __int64 v26; // r13
  __int64 v27; // r9
  unsigned __int64 ValidPte; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // ecx

  v5 = 14;
  if ( a5 != 9 )
    v5 = a5;
  v7 = a2 >> 9;
  v8 = a3 & 7;
  v10 = a2 >> 9 << 9;
  if ( (a2 & 0x1FF) != 0 )
    ++v7;
  v11 = MiObtainSystemVa((unsigned int)v7, v5);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( MiIsPfnInline(a1) )
  {
    v32 = *(unsigned __int8 *)(48 * v14 - 0x57FFFFFFFDELL) >> 6;
    if ( !v32 )
      goto LABEL_8;
    v25 = v32 == 2;
  }
  else
  {
    if ( !a4 )
    {
LABEL_8:
      v8 |= 8u;
      goto LABEL_9;
    }
    v25 = a4 == 2;
  }
  if ( v25 )
    v8 |= 0x18u;
LABEL_9:
  v15 = (unsigned __int64 *)(v13 + 8 * v10);
  if ( !(unsigned int)MiMakeZeroedPageTables(v13, (__int64)(v15 - 1), (a5 == 12) | 2u, a5) )
  {
LABEL_27:
    MiReturnSystemVa(v12, (v7 << 21) + v12, v5);
    return 0LL;
  }
  if ( a2 != v10 )
  {
    v26 = v13 + 8 * a2;
    if ( (unsigned int)MiMakeZeroedPageTables(v13 + 8 * v10, v26 - 8, a5 == 12, a5) )
    {
      v17 = a1;
      ValidPte = MiMakeValidPte(0LL, v10 + a1, v8 | 0xA0000000, v27);
      while ( (unsigned __int64)v15 < v26 )
      {
        *v15 = ValidPte;
        if ( MiPteInShadowRange((unsigned __int64)v15) )
          MiWritePteShadow(v30, v29, v31);
        ValidPte = (v29 ^ (v29 + 4096)) & 0xFFFFFFFFF000LL ^ v29;
        ++v15;
      }
      goto LABEL_12;
    }
    goto LABEL_27;
  }
  v17 = a1;
LABEL_12:
  v18 = (unsigned __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v19 = MiMakeValidPte(0LL, v17, v8 | 0xA4000000, v16);
  v20 = &v18[v10 >> 9];
  while ( v18 < v20 )
  {
    *v18 = v19;
    if ( MiPteInShadowRange((unsigned __int64)v18) )
      MiWritePteShadow(v22, v21, v23);
    v19 = (v21 ^ (v21 + 0x200000)) & 0xFFFFFFFFF000LL ^ v21;
    ++v18;
  }
  return v12;
}

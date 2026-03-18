/*
 * XREFs of MxMapVa @ 0x14089ABC4
 * Callers:
 *     MxMapPfnRange @ 0x14089A954 (MxMapPfnRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     MxGetNextPage @ 0x14089ADD4 (MxGetNextPage.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  BOOL v2; // r15d
  __int64 v3; // r9
  unsigned __int64 ValidPte; // rbx
  int i; // esi
  unsigned __int64 v6; // rdi
  __int64 NextPage; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  ULONG_PTR v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = qword_1403CFA10 > 0x20000;
  MiFillPteHierarchy(*(_QWORD *)a1, v19);
  ValidPte = MiMakeValidPte(v19[3], 0LL, 3087007748LL, v3);
  for ( i = 3; ; --i )
  {
    v6 = v19[i];
    if ( (*(_QWORD *)v6 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v6 & 0x80u) != 0LL )
    {
      *(_DWORD *)(a1 + 32) = i;
      return 1LL;
    }
LABEL_5:
    if ( !i )
      return 1LL;
  }
  if ( i == 1 && v2 )
  {
    NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL);
    if ( NextPage != -1 )
    {
      qword_1403CC680 += 512LL;
      *(_QWORD *)v6 = MiMakeValidPte(v6, NextPage, 3019898884LL, v8);
      if ( MiPteInShadowRange(v6) )
        MiWritePteShadow(v10, v9, v11);
      v12 = *(_DWORD *)(a1 + 12);
      if ( !v12 )
      {
        if ( v6 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v6 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          goto LABEL_15;
        }
        v12 = 1;
      }
      if ( v12 == 1 )
        KeZeroPages((__m128i *)((__int64)(v6 << 25) >> 16 << 25 >> 16), 0x200000uLL);
LABEL_15:
      *(_DWORD *)(a1 + 32) = 1;
      return 1LL;
    }
  }
  v14 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  v16 = v14;
  if ( v14 != -1LL )
  {
    ++qword_1403CC680;
    if ( (i || *(_DWORD *)(a1 + 12) == 1) && (MxFillPhysicalPage(v14), i) )
      ValidPte ^= (ValidPte ^ (v16 << 12)) & 0xFFFFFFFFF000LL;
    else
      ValidPte = MiMakeValidPte(v6, v16, 2952790020LL, v15);
    *(_QWORD *)v6 = ValidPte;
    if ( MiPteInShadowRange(v6) )
      MiWritePteShadow(v17, ValidPte, v18);
    goto LABEL_5;
  }
  return 0LL;
}

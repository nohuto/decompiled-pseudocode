/*
 * XREFs of MxMapVa @ 0x1408015E0
 * Callers:
 *     MxMapPfnRange @ 0x140801360 (MxMapPfnRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 *     MxGetNextPage @ 0x14080182C (MxGetNextPage.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  BOOL v5; // r15d
  unsigned __int64 ValidPte; // rbx
  int i; // edi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  ULONG_PTR NextPage; // rax
  __int64 v11; // rbp
  int v12; // eax
  _QWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF

  v1 = v14;
  v2 = 4LL;
  v4 = *(_QWORD *)a1;
  v5 = qword_1403817D0 > 0x20000;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *v1++ = v4;
    --v2;
  }
  while ( v2 );
  ValidPte = MiMakeValidPte(v4, 0LL, -1207959548);
  for ( i = 3; ; --i )
  {
    v8 = v14[i];
    if ( (*(_QWORD *)v8 & 1) == 0 )
    {
      if ( i != 1 || !v5 || (v9 = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL), v9 == -1) )
      {
        NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
        v11 = NextPage;
        if ( NextPage == -1LL )
          return 0LL;
        ++qword_14036D148;
        if ( (i || *(_DWORD *)(a1 + 12) == 1) && (MxFillPhysicalPage(NextPage), i) )
          ValidPte ^= (ValidPte ^ (v11 << 12)) & 0xFFFFFFFFF000LL;
        else
          ValidPte = MiMakeValidPte(v8, v11, -1342177276);
        *(_QWORD *)v8 = ValidPte;
        if ( MiPteInShadowRange(v8) )
          MiWritePteShadow();
        goto LABEL_18;
      }
      qword_14036D148 += 512LL;
      *(_QWORD *)v8 = MiMakeValidPte(v8, v9, -1275068412);
      if ( MiPteInShadowRange(v8) )
        MiWritePteShadow();
      v12 = *(_DWORD *)(a1 + 12);
      if ( !v12 )
      {
        if ( v8 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v8 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
LABEL_28:
          *(_DWORD *)(a1 + 32) = 1;
          return 1LL;
        }
        v12 = 1;
      }
      if ( v12 == 1 )
        KeZeroPages((int *)((__int64)(v8 << 25) >> 16 << 25 >> 16), 0x200000uLL);
      goto LABEL_28;
    }
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v8 & 0x80u) != 0LL )
      break;
LABEL_18:
    if ( !i )
      return 1LL;
  }
  *(_DWORD *)(a1 + 32) = i;
  return 1LL;
}

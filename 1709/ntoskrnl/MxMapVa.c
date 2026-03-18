/*
 * XREFs of MxMapVa @ 0x14082B594
 * Callers:
 *     MxMapPfnRange @ 0x14082B318 (MxMapPfnRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     MxGetNextPage @ 0x14082B81C (MxGetNextPage.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v2; // rcx
  BOOL v3; // r15d
  __int64 v4; // r8
  unsigned __int64 ValidPte; // rbx
  int i; // esi
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  ULONG_PTR NextPage; // rax
  __int64 v10; // rbp
  int v11; // eax
  _QWORD v14[4]; // [rsp+28h] [rbp-50h] BYREF

  v1 = v14;
  v2 = *(_QWORD *)a1;
  v3 = qword_14038B750 > 0x20000;
  v4 = 4LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *v1++ = v2;
    --v4;
  }
  while ( v4 );
  ValidPte = MiMakeValidPte(v2, 0LL, -1207959548);
  for ( i = 3; ; --i )
  {
    v7 = v14[i];
    if ( (*(_QWORD *)v7 & 1) == 0 )
    {
      if ( i != 1 || !v3 || (v8 = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL), v8 == -1) )
      {
        NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
        v10 = NextPage;
        if ( NextPage == -1LL )
          return 0LL;
        ++qword_140389408;
        if ( (i || *(_DWORD *)(a1 + 12) == 1) && (MxFillPhysicalPage(NextPage), i) )
          ValidPte ^= (ValidPte ^ (v10 << 12)) & 0xFFFFFFFFF000LL;
        else
          ValidPte = MiMakeValidPte(v7, v10, -1342177276);
        *(_QWORD *)v7 = ValidPte;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        goto LABEL_19;
      }
      qword_140389408 += 512LL;
      *(_QWORD *)v7 = MiMakeValidPte(v7, v8, -1275068412);
      if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v11 = *(_DWORD *)(a1 + 12);
      if ( !v11 )
      {
        if ( v7 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v7 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
LABEL_30:
          *(_DWORD *)(a1 + 32) = 1;
          return 1LL;
        }
        v11 = 1;
      }
      if ( v11 == 1 )
        KeZeroPages((int *)((__int64)(v7 << 25) >> 16 << 25 >> 16), 0x200000uLL);
      goto LABEL_30;
    }
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v7 & 0x80u) != 0LL )
      break;
LABEL_19:
    if ( !i )
      return 1LL;
  }
  *(_DWORD *)(a1 + 32) = i;
  return 1LL;
}

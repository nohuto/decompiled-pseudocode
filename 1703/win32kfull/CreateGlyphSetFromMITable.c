/*
 * XREFs of CreateGlyphSetFromMITable @ 0x1C0225B9C
 * Callers:
 *     cjComputeGLYPHSET_HIGH_BYTE @ 0x1C02290E0 (cjComputeGLYPHSET_HIGH_BYTE.c)
 *     cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C022932C (cjComputeGLYPHSET_MSFT_GENERAL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE870 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GetCodePageFromSpecId @ 0x1C0225EF8 (GetCodePageFromSpecId.c)
 */

__int64 __fastcall CreateGlyphSetFromMITable(__int64 a1, __int64 a2, unsigned __int16 a3, ULONG **a4)
{
  int v8; // r14d
  int *v9; // rax
  int *v10; // rdi
  unsigned int CodePageFromSpecId; // r13d
  unsigned __int16 v13; // si
  int *v14; // rcx
  unsigned int v15; // eax
  ULONG v16; // r15d
  __int64 v17; // rdx
  unsigned int v18; // ebp
  ULONG v19; // esi
  ULONG *v20; // rax
  ULONG *v21; // r14
  _DWORD *v22; // rdx
  ULONG *v23; // r9
  int *v24; // rcx
  unsigned __int16 v25; // r10
  int v26; // r8d
  int v27[4]; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0;
  v9 = (int *)EngAllocMem(0, 0xC0000u, 0x64667454u);
  v10 = v9;
  if ( !v9 )
  {
    if ( a4 )
      *a4 = 0LL;
    return 0LL;
  }
  memset(v9, 0, 0xC0000uLL);
  CodePageFromSpecId = GetCodePageFromSpecId(*(unsigned __int16 *)(a1 + 8));
  v13 = 0;
  if ( a3 )
  {
    while ( (unsigned int)ConvertToAndFromWideChar(
                            CodePageFromSpecId,
                            (WCHAR *)v27,
                            4u,
                            (CHAR *)(a2 + 8LL * v13),
                            2u,
                            1) != -1 )
    {
      if ( !v10[3 * LOWORD(v27[0])] )
      {
        v10[3 * LOWORD(v27[0])] = 1;
        LOWORD(v10[3 * LOWORD(v27[0]) + 1]) = v27[0];
        v10[3 * LOWORD(v27[0]) + 2] = *(_DWORD *)(a2 + 8LL * v13 + 4);
      }
      if ( ++v13 >= a3 )
        goto LABEL_10;
    }
    EngFreeMem(v10);
    if ( a4 )
      *a4 = 0LL;
    return 0LL;
  }
LABEL_10:
  v14 = v10;
  v15 = 0;
  v16 = 0;
  v17 = 0xFFFFLL;
  do
  {
    if ( *v14 )
    {
      v8 = 1;
      ++v16;
    }
    else if ( v8 )
    {
      v8 = 0;
      ++v15;
    }
    v14 += 3;
    --v17;
  }
  while ( v17 );
  v18 = v15 + 1;
  if ( !v8 )
    v18 = v15;
  if ( !v18 )
  {
    EngFreeMem(v10);
    if ( !a4 )
      return 0LL;
LABEL_22:
    *a4 = 0LL;
    return 0LL;
  }
  v19 = 4 * (v16 + 4 * (v18 + 1));
  if ( a4 )
  {
    v20 = (ULONG *)EngAllocMem(0, v19, 0x64667454u);
    v21 = v20;
    if ( !v20 )
    {
      EngFreeMem(v10);
      goto LABEL_22;
    }
    memset(v20, 0, v19);
    *v21 = v19;
    v21[1] = 0;
    v22 = v21 + 4;
    v23 = &v21[4 * v18 + 4];
    v21[3] = v18;
    v21[2] = v16;
    v24 = v10;
    v25 = 0;
    v26 = *v10;
    do
    {
      if ( !v26 )
      {
        do
          v24 += 3;
        while ( !*v24 );
      }
      *v22 = *((unsigned __int16 *)v24 + 2);
      *((_QWORD *)v22 + 1) = v23;
      while ( 1 )
      {
        v26 = *v24;
        if ( !*v24 )
          break;
        ++*((_WORD *)v22 + 1);
        *v23++ = v24[2];
        v24 += 3;
      }
      ++v25;
      v22 += 4;
    }
    while ( v25 < v18 );
    EngFreeMem(v10);
    *a4 = v21;
  }
  return v19;
}

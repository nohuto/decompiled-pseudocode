/*
 * XREFs of MiReplacePageOfProtoPool @ 0x14011DA1C
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPoolHeader @ 0x14011DF0C (MiIsPoolHeader.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned int v9; // r13d
  __int64 *v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rcx
  unsigned __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rbx
  int v23; // ebx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  unsigned int v29; // r9d
  unsigned int v30; // ebx
  unsigned int v31; // r10d
  unsigned int v32; // edx
  int v33; // r11d
  char *v34; // r15
  unsigned int v35; // esi
  unsigned int v36; // edx
  char *v37; // rdx
  __int64 i; // r8
  unsigned __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // r10
  __int64 *v42; // rcx
  __int64 PteShadow; // rax
  __int64 v44; // rax
  int v45; // r10d
  __int64 v46; // rcx
  __int64 v50; // [rsp+30h] [rbp-59h] BYREF
  __int64 v51; // [rsp+38h] [rbp-51h]
  unsigned int v52; // [rsp+40h] [rbp-49h]
  signed __int32 *v53; // [rsp+48h] [rbp-41h]
  signed __int32 v54[16]; // [rsp+50h] [rbp-39h] BYREF

  v51 = a3;
  v5 = 48 * a2 - 0x58000000000LL;
  v6 = 48 * a3 - 0x58000000000LL;
  v52 = 512;
  v7 = a1;
  v50 = v6;
  v8 = a1 + 4080;
  v9 = 0;
  v53 = v54;
  v10 = a4;
  memset(v54, 0, sizeof(v54));
  v13 = v7;
  v14 = *(_DWORD *)(v7 + 4);
  if ( (v14 == 1951624525 || v14 == 1816358221 || v14 == 1701147206)
    && (unsigned int)((__int64 (*)(void))MiIsPoolHeader)() )
  {
    v19 = a4;
  }
  else
  {
    v15 = -(__int64)a4;
    while ( v7 > v8
         || (v7 & 0xF) != 0
         || *(_DWORD *)((char *)v10 + v15 + v13 + 4) != 1734439494
         || (unsigned int)MiIsPoolHeader(v7) != 1 )
    {
      v16 = MiLockLeafPage((__int64 *)v7, v9, v11, v12);
      if ( v16 )
      {
        ++v9;
        _bittestandset(v54, ((__int64)v10 + v15) >> 3);
        LOBYTE(v12) = *(_BYTE *)(v16 + 34);
        if ( (v12 & 8) != 0 )
          goto LABEL_48;
        v17 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v17) = MiReadPteShadow(v7, *(_QWORD *)v7);
        if ( (v17 & 1) == 0 && (v12 & 0x20) != 0 )
          goto LABEL_48;
      }
      v18 = *(_QWORD *)v7;
      v7 += 8LL;
      v19 = a4;
      *v10++ = v18;
      if ( v10 == a4 + 512 )
        goto LABEL_21;
      v13 = a1;
    }
    v19 = a4;
  }
LABEL_21:
  if ( v7 != a1 + 4096 )
  {
    v20 = v7;
    while ( 1 )
    {
      v21 = *(_DWORD *)(v20 + 4);
      v22 = 16 * (unsigned int)(unsigned __int8)*(_WORD *)(v20 + 2);
      if ( v21 != 1734439494 && v21 != 1816358221 && (*(_BYTE *)(v20 + 3) & 2) != 0 )
        break;
      memmove(v10, (const void *)v7, 16 * (unsigned int)(unsigned __int8)*(_WORD *)(v20 + 2));
      v27 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
      v7 += v27;
      v10 = (__int64 *)((char *)v10 + v27);
LABEL_37:
      v20 += 16LL * (unsigned __int8)*(_WORD *)(v20 + 2);
      if ( (v20 & 0xFFF) == 0 )
      {
        v6 = v50;
        goto LABEL_40;
      }
      v19 = a4;
    }
    v7 += 16LL;
    v23 = v22 - 16;
    *(_OWORD *)v10 = *(_OWORD *)v20;
    v10 += 2;
    v24 = (char *)v10 - (char *)v19;
    while ( 1 )
    {
      v25 = MiLockLeafPage((__int64 *)v7, v9, v11, v12);
      if ( v25 )
      {
        ++v9;
        _bittestandset(v54, v24 >> 3);
        LOBYTE(v12) = *(_BYTE *)(v25 + 34);
        if ( (v12 & 8) != 0 )
          goto LABEL_48;
        v26 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v26) = MiReadPteShadow(v7, *(_QWORD *)v7);
        if ( (v26 & 1) == 0 && (v12 & 0x20) != 0 )
          goto LABEL_48;
      }
      v24 += 8LL;
      *v10 = *(_QWORD *)v7;
      v7 += 8LL;
      ++v10;
      v23 -= 8;
      if ( !v23 )
        goto LABEL_37;
    }
  }
LABEL_40:
  if ( v9 )
    MiLockNestedPageAtDpcInline(v5);
  else
    MiLockPageAtDpcInline(v5);
  if ( *(_WORD *)(v5 + 32) != 2
    || (v28 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL, *(unsigned __int16 *)(v5 + 24) != (unsigned __int64)(v9 + 1))
    || v28 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_48:
    v29 = 0;
    goto LABEL_49;
  }
  MiLockNestedPageAtDpcInline(v6);
  *(_QWORD *)(v6 + 24) = v28 | *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v29 = 1;
LABEL_49:
  v30 = 0;
  while ( v9 )
  {
    v31 = v30 < v52 ? v30 : 0;
    v32 = v52 - 1;
    v33 = (((unsigned __int8)((unsigned __int8)&v54[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
    v34 = (char *)v54
        + (-(__int64)((((unsigned __int8)((unsigned __int8)&v54[14] + 1) - 57) & 4) != 0LL) & 0xFFFFFFFFFFFFFFFCuLL);
    while ( 1 )
    {
      v35 = v33 + v32;
      if ( v32 - v31 == -1 )
        goto LABEL_53;
      v37 = &v34[8 * ((unsigned __int64)(v33 + v31) >> 6)];
      for ( i = ~*(_QWORD *)v37 | ((1LL << ((v33 + v31) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v37 )
      {
        v37 += 8;
        if ( v37 > &v34[8 * ((unsigned __int64)v35 >> 6)] )
          goto LABEL_53;
      }
      _BitScanForward64(&v39, ~i);
      v36 = v39 + ((unsigned int)((v37 - v34) >> 3) << 6);
      if ( v36 > v35 )
      {
LABEL_53:
        v36 = -1;
      }
      else if ( v36 != -1 )
      {
        break;
      }
      if ( !v31 )
        break;
      v40 = v30 + 1;
      if ( v30 + 1 > v52 )
        v40 = v52;
      v32 = v40 - 1;
      v31 = 0;
    }
    v41 = v36 - v33;
    if ( v36 == -1 )
      v41 = 0xFFFFFFFFLL;
    v42 = (__int64 *)(a1 + 8 * v41);
    PteShadow = *v42;
    if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v42, *v42);
    v50 = PteShadow;
    if ( (PteShadow & 1) != 0 )
      v44 = MI_GET_PAGE_FRAME_FROM_PTE(&v50);
    else
      v44 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v50);
    v46 = 48 * v44;
    if ( v29 == 1 )
      *(_QWORD *)(v46 - 0x58000000000LL + 40) ^= (v51 ^ *(_QWORD *)(v46 - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
    --v9;
    _InterlockedAnd64((volatile signed __int64 *)(v46 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v30 = v45 + 1;
  }
  return v29;
}

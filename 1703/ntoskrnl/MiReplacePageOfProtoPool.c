/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140027284
 * Callers:
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiIsPoolHeader @ 0x1400276F0 (MiIsPoolHeader.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(char *Src, __int64 a2, __int64 a3, char *a4)
{
  char *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned int v8; // r13d
  char *v9; // rdi
  char *v10; // r14
  int v11; // eax
  __int64 v12; // rax
  char v13; // r9
  __int64 v14; // rax
  char *v15; // r15
  int v16; // eax
  __int64 v17; // rbx
  int v18; // ebx
  __int64 v19; // r12
  __int64 v20; // rax
  char v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  unsigned int v24; // r9d
  unsigned int v25; // ebx
  unsigned int v26; // r10d
  unsigned int v27; // edx
  int v28; // r11d
  char *v29; // rsi
  unsigned int v30; // r14d
  unsigned int v31; // edx
  char *v32; // rdx
  __int64 i; // r8
  unsigned __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // r10
  unsigned __int64 v37; // rax
  int v38; // r10d
  __int64 v39; // rcx
  __int64 v42; // [rsp+28h] [rbp-71h] BYREF
  char *v43; // [rsp+30h] [rbp-69h]
  __int64 v44; // [rsp+38h] [rbp-61h]
  __int64 v45; // [rsp+40h] [rbp-59h]
  unsigned int v46; // [rsp+48h] [rbp-51h]
  signed __int32 *v47; // [rsp+50h] [rbp-49h]
  signed __int32 v48[16]; // [rsp+60h] [rbp-39h] BYREF

  v4 = Src;
  v43 = a4;
  v45 = a3;
  v6 = 48 * a2 - 0x58000000000LL;
  v7 = 48 * a3 - 0x58000000000LL;
  v46 = 512;
  v44 = v7;
  v8 = 0;
  v47 = v48;
  v9 = Src;
  v10 = a4;
  memset(v48, 0, sizeof(v48));
  v11 = *((_DWORD *)v4 + 1);
  if ( v11 != 1951624525 && v11 != 1816358221 && v11 != 1701147206 || !(unsigned int)MiIsPoolHeader(v4) )
  {
    do
    {
      if ( v9 <= Src + 4080
        && ((unsigned __int8)v9 & 0xF) == 0
        && *(_DWORD *)&v10[Src - a4 + 4] == 1734439494
        && (unsigned int)MiIsPoolHeader(v9) == 1 )
      {
        break;
      }
      v12 = MiLockLeafPage(v9, v8);
      if ( v12 )
      {
        ++v8;
        _bittestandset(v48, (v10 - a4) >> 3);
        if ( (*(_BYTE *)(v12 + 34) & 8) != 0 )
          goto LABEL_38;
        v42 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v42 & 1) == 0 && (v13 & 0x20) != 0 )
          goto LABEL_38;
      }
      v14 = *(_QWORD *)v9;
      v9 += 8;
      *(_QWORD *)v10 = v14;
      v10 += 8;
    }
    while ( v10 != a4 + 4096 );
    v4 = Src;
  }
  if ( v9 != v4 + 4096 )
  {
    v15 = v9;
    while ( 1 )
    {
      v16 = *((_DWORD *)v15 + 1);
      v17 = 16 * (unsigned int)(unsigned __int8)*((_WORD *)v15 + 1);
      if ( v16 != 1734439494 && v16 != 1816358221 && (v15[3] & 2) != 0 )
        break;
      memmove(v10, v9, 16 * (unsigned int)(unsigned __int8)*((_WORD *)v15 + 1));
      v22 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
      v9 += v22;
      v10 += v22;
LABEL_28:
      v15 += 16 * (unsigned __int8)*((_WORD *)v15 + 1);
      if ( ((unsigned __int16)v15 & 0xFFF) == 0 )
      {
        v7 = v44;
        goto LABEL_30;
      }
    }
    v9 += 16;
    v18 = v17 - 16;
    *(_OWORD *)v10 = *(_OWORD *)v15;
    v10 += 16;
    v19 = v10 - v43;
    while ( 1 )
    {
      v20 = MiLockLeafPage(v9, v8);
      if ( v20 )
      {
        ++v8;
        _bittestandset(v48, v19 >> 3);
        if ( (*(_BYTE *)(v20 + 34) & 8) != 0 )
          goto LABEL_38;
        v42 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v42 & 1) == 0 && (v21 & 0x20) != 0 )
          goto LABEL_38;
      }
      v19 += 8LL;
      *(_QWORD *)v10 = *(_QWORD *)v9;
      v9 += 8;
      v10 += 8;
      v18 -= 8;
      if ( !v18 )
        goto LABEL_28;
    }
  }
LABEL_30:
  if ( v8 )
    MiLockNestedPageAtDpcInline(v6);
  else
    MiLockPageAtDpcInline(v6);
  if ( *(_WORD *)(v6 + 32) != 2
    || (v23 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL, *(unsigned __int16 *)(v6 + 24) != (unsigned __int64)(v8 + 1))
    || v23 >= 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_38:
    v24 = 0;
    goto LABEL_39;
  }
  MiLockNestedPageAtDpcInline(v7);
  *(_QWORD *)(v7 + 24) ^= (v23 ^ *(_QWORD *)(v7 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v24 = 1;
LABEL_39:
  v25 = 0;
  while ( v8 )
  {
    v26 = v25 < v46 ? v25 : 0;
    v27 = v46 - 1;
    v28 = (((unsigned __int8)((unsigned __int8)&v48[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
    v29 = (char *)v48 - ((((unsigned __int8)((unsigned __int8)&v48[14] + 1) - 57) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v30 = v28 + v27;
      if ( v27 - v26 == -1 )
        goto LABEL_43;
      v32 = &v29[8 * ((unsigned __int64)(v28 + v26) >> 6)];
      for ( i = ~*(_QWORD *)v32 | ((1LL << ((v28 + v26) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v32 )
      {
        v32 += 8;
        if ( v32 > &v29[8 * ((unsigned __int64)v30 >> 6)] )
          goto LABEL_43;
      }
      _BitScanForward64(&v34, ~i);
      v31 = v34 + ((unsigned int)((v32 - v29) >> 3) << 6);
      LODWORD(v43) = v34;
      if ( v31 > v30 )
      {
LABEL_43:
        v31 = -1;
      }
      else if ( v31 != -1 )
      {
        break;
      }
      if ( !v26 )
        break;
      v35 = v25 + 1;
      if ( v25 + 1 > v46 )
        v35 = v46;
      v27 = v35 - 1;
      v26 = 0;
    }
    v36 = v31 - v28;
    if ( v31 == -1 )
      v36 = 0xFFFFFFFFLL;
    v42 = MI_READ_PTE_LOCK_FREE(&Src[8 * v36]);
    if ( (v42 & 1) != 0 )
      v37 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v42) >> 12) & 0xFFFFFFFFFLL;
    else
      v37 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v42);
    v39 = 48 * v37;
    if ( v24 == 1 )
      *(_QWORD *)(v39 - 0x58000000000LL + 40) ^= (*(_QWORD *)(v39 - 0x58000000000LL + 40) ^ v45) & 0xFFFFFFFFFLL;
    --v8;
    _InterlockedAnd64((volatile signed __int64 *)(v39 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = v38 + 1;
  }
  return v24;
}

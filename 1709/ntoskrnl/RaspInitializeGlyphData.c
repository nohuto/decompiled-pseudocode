/*
 * XREFs of RaspInitializeGlyphData @ 0x14013DAC0
 * Callers:
 *     RaspLoadGlyphData @ 0x14013E540 (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x14013CD18 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x14013DA8C (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x14013DEA8 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x14013E2C0 (RaspAllocateMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int16 v10; // r12
  unsigned int v11; // ebx
  unsigned __int16 v12; // si
  size_t v13; // rbx
  char *v14; // rax
  char *v15; // rsi
  __int64 v16; // r14
  int v17; // ecx
  _WORD *v18; // rsi
  int v19; // eax
  int v20; // edi
  unsigned int v21; // edi
  __int64 v22; // rbx
  int v23; // ebx
  unsigned int v24; // edi
  __int64 v25; // r8
  __int64 v26; // r12
  char *v27; // rsi
  __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // ebx
  __int64 v33; // r11
  __int64 v34; // r8
  __int16 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  char *v38; // rsi
  unsigned int v39; // edi
  __int16 v40; // r12
  char *v41; // rbx
  char v42; // dl
  __int16 v43; // si
  int v44; // ecx
  __int64 v45; // r13
  _DWORD *v46; // rbx
  char v47; // dl
  _QWORD *v48; // rdx
  __int64 v50; // rdx
  __int64 Memory; // rax
  unsigned int v52; // ecx
  __int16 v53[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-34h]
  __int64 v55; // [rsp+28h] [rbp-30h]
  __int64 v56; // [rsp+30h] [rbp-28h]
  __int64 v57; // [rsp+38h] [rbp-20h] BYREF
  __int16 v58[12]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+48h] BYREF
  int v60; // [rsp+A8h] [rbp+50h]
  __int64 *v61; // [rsp+B0h] [rbp+58h]
  _QWORD *v62; // [rsp+B8h] [rbp+60h]

  v62 = a4;
  v61 = a3;
  v60 = a2;
  v57 = 0LL;
  v58[0] = 0;
  LOWORD(v59) = 0;
  v53[0] = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a1 + 60);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6 + a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v8, (unsigned int)(v6 + a2), &v57);
  FioFwReadUshortAtOffset(v8, v7 + 2, (_WORD *)&v57 + 1);
  v7 += 4;
  FioFwReadUshortAtOffset(v8, v7, (_WORD *)&v57 + 2);
  FioFwReadUshortAtOffset(v8, v7 + 2, (_WORD *)&v57 + 3);
  v9 = v7 + 4;
  FioFwReadUshortAtOffset(v8, v9, v58);
  v10 = v57;
  if ( (v57 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( !(_WORD)v57 )
  {
    Memory = RaspAllocateMemory(66LL);
    if ( Memory )
    {
      v52 = SWORD1(v57);
      *(_DWORD *)(Memory + 2) = SWORD1(v57);
      *(_WORD *)Memory = 0;
      *(_DWORD *)(Memory + 6) = SWORD2(v57);
      *(_DWORD *)(Memory + 10) = SHIWORD(v57);
      *(_DWORD *)(Memory + 14) = v58[0];
      *(_QWORD *)(Memory + 18) = v52;
      *a3 = Memory;
      return 0LL;
    }
    return 3221225626LL;
  }
  v11 = v9 + 2 * (__int16)v57;
  FioFwReadUshortAtOffset(v8, v11, v53);
  v12 = ++v53[0];
  FioFwReadUshortAtOffset(v8, v11 + 2, &v59);
  v54 = v12;
  v55 = v12;
  v56 = 4LL * ((unsigned int)v12 + 2);
  v13 = v12 + 66LL + (unsigned __int16)v59 + 2 * (v56 + v10);
  v14 = (char *)RaspAllocateMemory(v13);
  v15 = v14;
  if ( !v14 )
    return 3221225626LL;
  memset(v14, 0, v13);
  v16 = (__int64)v15;
  v17 = SWORD1(v57);
  *(_DWORD *)(v15 + 6) = SWORD2(v57);
  *(_DWORD *)(v15 + 10) = SHIWORD(v57);
  *(_DWORD *)(v15 + 14) = v58[0];
  *((_WORD *)v15 + 11) = v59;
  *((_WORD *)v15 + 12) = v53[0];
  *(_WORD *)v15 = v10;
  *(_DWORD *)(v15 + 2) = v17;
  *(_DWORD *)(v15 + 18) = v17;
  v18 = v15 + 66;
  v19 = *(_DWORD *)(a1 + 60);
  v20 = v60 + 10;
  *(_QWORD *)(v16 + 26) = v18;
  v21 = v19 + v20;
  if ( v10 > 0 )
  {
    v22 = (unsigned __int16)v10;
    do
    {
      FioFwReadUshortAtOffset(v8, v21, v18);
      v21 += 2;
      ++v18;
      --v22;
    }
    while ( v22 );
  }
  v23 = (unsigned __int16)v59;
  v24 = v21 + 2;
  v25 = (unsigned __int16)v59;
  *(_QWORD *)(v16 + 34) = v18;
  FioFwReadBytesAtOffset(v8, v24, v25, v18);
  v26 = v55;
  v27 = (char *)v18 + (unsigned __int16)v59;
  v28 = v55;
  *(_QWORD *)(v16 + 42) = v27;
  v29 = v23 + v24;
  v30 = RaspAllocateMemory(v28);
  v59 = v30;
  v31 = v30;
  if ( !v30 )
  {
    RaspFreeMemory(v16, v62);
    return 3221225626LL;
  }
  v32 = v54;
  FioFwReadBytesAtOffset(v8, v29, v54, v30);
  LODWORD(v33) = 0;
  LODWORD(v34) = 0;
  v35 = 0;
  if ( v32 )
  {
    do
    {
      v36 = (unsigned int)v34;
      v37 = v35++;
      *(_BYTE *)(v37 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)((unsigned int)v34 + v31);
      if ( (*(_BYTE *)((unsigned int)v34 + v31) & 8) != 0 )
      {
        v34 = (unsigned int)(v34 + 1);
        if ( (unsigned __int16)v33 < *(unsigned __int8 *)(v34 + v31) )
        {
          v33 = *(unsigned __int8 *)(v34 + v31);
          do
          {
            v50 = v35++;
            *(_BYTE *)(v50 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)(v36 + v31);
            --v33;
          }
          while ( v33 );
        }
      }
      LODWORD(v34) = v34 + 1;
    }
    while ( v35 < v32 );
    v26 = v55;
  }
  v38 = &v27[v26];
  v39 = v34 + v29;
  *(_QWORD *)(v16 + 50) = v38;
  v40 = v33;
  if ( v32 )
  {
    while ( 1 )
    {
      v41 = &v38[4 * v40];
      *(_DWORD *)v41 = v33;
      v42 = *(_BYTE *)(v40 + *(_QWORD *)(v16 + 42));
      if ( (v42 & 2) != 0 )
      {
        FioFwReadBytesAtOffset(v8, v39++, 1LL, &v38[4 * v40]);
        if ( (*(_BYTE *)(v40 + *(_QWORD *)(v16 + 42)) & 0x10) == 0 )
          *(_DWORD *)v41 = -*(_DWORD *)v41;
      }
      else
      {
        if ( (v42 & 0x10) != 0 )
        {
          *(_DWORD *)v41 = v33;
          goto LABEL_19;
        }
        FioFwReadUshortAtOffset(v8, v39, &v38[4 * v40]);
        v39 += 2;
      }
      LODWORD(v33) = 0;
LABEL_19:
      v32 = v54;
      if ( ++v40 >= (int)v54 )
      {
        v31 = v59;
        break;
      }
    }
  }
  v43 = v33;
  v56 += *(_QWORD *)(v16 + 50);
  *(_QWORD *)(v16 + 58) = v56;
  if ( !v32 )
    goto LABEL_29;
  v44 = v54;
  v45 = v56;
  do
  {
    v46 = (_DWORD *)(v45 + 4LL * v43);
    *v46 = v33;
    v47 = *(_BYTE *)(v43 + *(_QWORD *)(v16 + 42));
    if ( (v47 & 4) != 0 )
    {
      FioFwReadBytesAtOffset(v8, v39++, 1LL, v45 + 4LL * v43);
      v44 = v54;
      if ( (*(_BYTE *)(v43 + *(_QWORD *)(v16 + 42)) & 0x20) == 0 )
        *v46 = -*v46;
      goto LABEL_26;
    }
    if ( (v47 & 0x20) == 0 )
    {
      FioFwReadUshortAtOffset(v8, v39, (_WORD *)(v45 + 4LL * v43));
      v44 = v54;
      v39 += 2;
LABEL_26:
      LODWORD(v33) = 0;
      goto LABEL_27;
    }
    *v46 = v33;
LABEL_27:
    ++v43;
  }
  while ( v43 < v44 );
  v31 = v59;
LABEL_29:
  v48 = v62;
  *v61 = v16;
  RaspFreeMemory(v31, v48);
  return 0LL;
}

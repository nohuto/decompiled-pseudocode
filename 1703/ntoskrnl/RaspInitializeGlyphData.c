/*
 * XREFs of RaspInitializeGlyphData @ 0x140142574
 * Callers:
 *     RaspLoadGlyphData @ 0x140143048 (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x1401417C4 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x140142540 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x14014294C (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140142D48 (RaspAllocateMemory.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int16 v11; // r15
  unsigned int v12; // ebx
  unsigned __int16 v13; // r14
  size_t v14; // rbx
  char *Memory; // rax
  char *v16; // rsi
  __int64 v17; // r14
  int v18; // ecx
  _WORD *v19; // rsi
  unsigned int v20; // edi
  __int64 v21; // rbx
  int v22; // ebx
  unsigned int v23; // edi
  __int64 v24; // r8
  unsigned int v25; // edi
  _QWORD *v26; // r15
  char *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // r13d
  __int64 v32; // r11
  __int64 v33; // r8
  __int16 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rdx
  char *v37; // rsi
  unsigned int v38; // edi
  __int16 v39; // r15
  char *v40; // rbx
  char v41; // dl
  __int16 v42; // si
  __int64 v43; // rax
  _WORD *v44; // rbx
  char v45; // cl
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned __int16 v52; // [rsp+20h] [rbp-30h] BYREF
  __int64 v53; // [rsp+28h] [rbp-28h]
  __int64 v54; // [rsp+30h] [rbp-20h]
  __int64 v55; // [rsp+38h] [rbp-18h] BYREF
  __int16 v56[8]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v57; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v58; // [rsp+A0h] [rbp+50h]
  _QWORD *v59; // [rsp+A8h] [rbp+58h]

  v59 = a4;
  v58 = a3;
  v55 = 0LL;
  v56[0] = 0;
  LOWORD(v57) = 0;
  v52 = 0;
  if ( !a1 )
    return 3221225473LL;
  v7 = *(_DWORD *)(a1 + 60);
  if ( !v7 )
    return 3221225473LL;
  v8 = v7 + a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v9, (unsigned int)(v7 + a2), &v55);
  FioFwReadUshortAtOffset(v9, v8 + 2, (_WORD *)&v55 + 1);
  v8 += 4;
  FioFwReadUshortAtOffset(v9, v8, (_WORD *)&v55 + 2);
  FioFwReadUshortAtOffset(v9, v8 + 2, (_WORD *)&v55 + 3);
  v10 = v8 + 4;
  FioFwReadUshortAtOffset(v9, v10, v56);
  v11 = v55;
  if ( (v55 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( (_WORD)v55 )
  {
    v12 = v10 + 2 * (__int16)v55;
    FioFwReadUshortAtOffset(v9, v12, &v52);
    v13 = ++v52;
    FioFwReadUshortAtOffset(v9, v12 + 2, &v57);
    v53 = v13;
    v54 = 4LL * v13;
    v14 = v13 + 82LL + (unsigned __int16)v57 + 2 * (v54 + v11);
    Memory = (char *)RaspAllocateMemory(v14);
    v16 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, v14);
      v17 = (__int64)v16;
      v18 = SWORD1(v55);
      *(_DWORD *)(v16 + 6) = SWORD2(v55);
      *(_DWORD *)(v16 + 10) = SHIWORD(v55);
      *(_DWORD *)(v16 + 14) = v56[0];
      *((_WORD *)v16 + 11) = v57;
      *((_WORD *)v16 + 12) = v52;
      *(_WORD *)v16 = v11;
      *(_DWORD *)(v16 + 2) = v18;
      *(_DWORD *)(v16 + 18) = v18;
      v19 = v16 + 66;
      v20 = *(_DWORD *)(a1 + 60) + a2 + 10;
      *(_QWORD *)(v17 + 26) = v19;
      if ( v11 > 0 )
      {
        v21 = (unsigned __int16)v11;
        do
        {
          FioFwReadUshortAtOffset(v9, v20, v19);
          v20 += 2;
          ++v19;
          --v21;
        }
        while ( v21 );
      }
      v22 = (unsigned __int16)v57;
      v23 = v20 + 2;
      v24 = (unsigned __int16)v57;
      *(_QWORD *)(v17 + 34) = v19;
      FioFwReadBytesAtOffset(v9, v23, v24, v19);
      v25 = v22 + v23;
      v26 = v59;
      v27 = (char *)v19 + (unsigned __int16)v57;
      v28 = v53;
      *(_QWORD *)(v17 + 42) = v27;
      v29 = RaspAllocateMemory(v28);
      v55 = v29;
      v30 = v29;
      if ( v29 )
      {
        v31 = v52;
        FioFwReadBytesAtOffset(v9, v25, v52, v29);
        LODWORD(v32) = 0;
        LODWORD(v33) = 0;
        v34 = 0;
        if ( v31 )
        {
          do
          {
            v35 = (unsigned int)v33;
            v36 = v34++;
            *(_BYTE *)(v36 + *(_QWORD *)(v17 + 42)) = *(_BYTE *)((unsigned int)v33 + v30);
            if ( (*(_BYTE *)((unsigned int)v33 + v30) & 8) != 0 )
            {
              v33 = (unsigned int)(v33 + 1);
              if ( (unsigned __int16)v32 < *(unsigned __int8 *)(v33 + v30) )
              {
                v32 = *(unsigned __int8 *)(v33 + v30);
                do
                {
                  v49 = v34++;
                  *(_BYTE *)(v49 + *(_QWORD *)(v17 + 42)) = *(_BYTE *)(v35 + v30);
                  --v32;
                }
                while ( v32 );
              }
            }
            LODWORD(v33) = v33 + 1;
          }
          while ( v34 < v31 );
        }
        v37 = &v27[v53];
        v38 = v33 + v25;
        *(_QWORD *)(v17 + 50) = v37;
        v39 = v32;
        if ( v31 )
        {
          do
          {
            v40 = &v37[4 * v39];
            *(_DWORD *)v40 = v32;
            v41 = *(_BYTE *)(v39 + *(_QWORD *)(v17 + 42));
            if ( (v41 & 2) != 0 )
            {
              FioFwReadBytesAtOffset(v9, v38++, 1LL, &v37[4 * v39]);
              if ( (*(_BYTE *)(v39 + *(_QWORD *)(v17 + 42)) & 0x10) == 0 )
                *(_DWORD *)v40 = -*(_DWORD *)v40;
            }
            else
            {
              if ( (v41 & 0x10) != 0 )
              {
                *(_DWORD *)v40 = v32;
                goto LABEL_18;
              }
              FioFwReadUshortAtOffset(v9, v38, &v37[4 * v39]);
              v38 += 2;
            }
            LODWORD(v32) = 0;
LABEL_18:
            ++v39;
          }
          while ( v39 < v31 );
        }
        v42 = v32;
        v43 = v54 + *(_QWORD *)(v17 + 50) + 8LL;
        v57 = v43;
        *(_QWORD *)(v17 + 58) = v43;
        if ( v31 )
        {
          do
          {
            v44 = (_WORD *)(v43 + 4LL * v42);
            *(_DWORD *)v44 = v32;
            v45 = *(_BYTE *)(v42 + *(_QWORD *)(v17 + 42));
            if ( (v45 & 4) != 0 )
            {
              FioFwReadBytesAtOffset(v9, v38++, 1LL, v44);
              if ( (*(_BYTE *)(v42 + *(_QWORD *)(v17 + 42)) & 0x20) == 0 )
                *(_DWORD *)v44 = -*(_DWORD *)v44;
            }
            else
            {
              if ( (v45 & 0x20) != 0 )
              {
                *(_DWORD *)v44 = v32;
                goto LABEL_24;
              }
              FioFwReadUshortAtOffset(v9, v38, v44);
              v38 += 2;
            }
            LODWORD(v32) = 0;
LABEL_24:
            ++v42;
            v43 = v57;
          }
          while ( v42 < v31 );
        }
        v46 = v59;
        v47 = v55;
        *v58 = v17;
        RaspFreeMemory(v47, v46);
        return 0LL;
      }
      RaspFreeMemory(v17, v26);
    }
  }
  else
  {
    v50 = RaspAllocateMemory(66LL);
    if ( v50 )
    {
      v51 = SWORD1(v55);
      *(_DWORD *)(v50 + 2) = SWORD1(v55);
      *(_WORD *)v50 = 0;
      *(_DWORD *)(v50 + 6) = SWORD2(v55);
      *(_DWORD *)(v50 + 10) = SHIWORD(v55);
      *(_DWORD *)(v50 + 14) = v56[0];
      *(_QWORD *)(v50 + 18) = v51;
      *a3 = v50;
      return 0LL;
    }
  }
  return 3221225626LL;
}

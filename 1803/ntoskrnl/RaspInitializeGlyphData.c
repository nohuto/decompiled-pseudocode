/*
 * XREFs of RaspInitializeGlyphData @ 0x140175110
 * Callers:
 *     RaspLoadGlyphData @ 0x1401759F8 (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x140174460 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x1401750DC (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x1401754D8 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x1401758F4 (RaspAllocateMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int16 v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned __int16 v14; // bx
  __int64 v15; // r14
  char *Memory; // rax
  char *v17; // rdi
  __int64 v18; // r14
  int v19; // ecx
  _WORD *v20; // rdi
  int v21; // eax
  int v22; // esi
  unsigned int v23; // esi
  __int64 v24; // rbx
  unsigned int v25; // esi
  unsigned __int16 v26; // r12
  char *v27; // rdi
  unsigned int v28; // esi
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // r13d
  __int64 v34; // r11
  __int64 v35; // r8
  __int16 v36; // r9
  __int64 v37; // r10
  __int64 v38; // rdx
  char *v39; // rdi
  unsigned int v40; // esi
  __int16 v41; // r12
  char *v42; // rbx
  char v43; // dl
  char *v44; // rax
  __int16 v45; // di
  char *v46; // rbx
  char v47; // cl
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // ecx
  int v54[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v55; // [rsp+30h] [rbp-28h]
  __int64 v56; // [rsp+40h] [rbp-18h] BYREF
  __int16 v57[8]; // [rsp+48h] [rbp-10h] BYREF
  char *v58; // [rsp+A0h] [rbp+48h] BYREF
  int v59; // [rsp+A8h] [rbp+50h]
  __int64 *v60; // [rsp+B0h] [rbp+58h]
  _QWORD *v61; // [rsp+B8h] [rbp+60h]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v56 = 0LL;
  v57[0] = 0;
  LOWORD(v58) = 0;
  LOWORD(v54[0]) = 0;
  if ( !a1 )
    return 3221225473LL;
  v7 = *(_DWORD *)(a1 + 60);
  if ( !v7 )
    return 3221225473LL;
  v8 = v7 + a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v9, (unsigned int)(v7 + a2), &v56);
  FioFwReadUshortAtOffset(v9, v8 + 2, (_WORD *)&v56 + 1);
  v8 += 4;
  FioFwReadUshortAtOffset(v9, v8, (_WORD *)&v56 + 2);
  FioFwReadUshortAtOffset(v9, v8 + 2, (_WORD *)&v56 + 3);
  v10 = v8 + 4;
  FioFwReadUshortAtOffset(v9, v10, v57);
  v11 = v56;
  if ( (v56 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( (_WORD)v56 )
  {
    v12 = v10 + 2 * (__int16)v56;
    FioFwReadUshortAtOffset(v9, v12, v54);
    v13 = (unsigned __int16)(LOWORD(v54[0]) + 1);
    v54[0] = (unsigned __int16)(LOWORD(v54[0]) + 1);
    FioFwReadUshortAtOffset(v9, v12 + 2, &v58);
    v14 = (unsigned __int16)v58;
    v55 = (unsigned __int16)v58;
    v15 = (unsigned __int16)v58 + v13 + 2 * (v11 + 4LL * (unsigned int)(v13 + 2));
    Memory = (char *)RaspAllocateMemory(v15 + 66);
    v17 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, v15 + 66);
      v18 = (__int64)v17;
      v19 = SWORD1(v56);
      *(_DWORD *)(v17 + 6) = SWORD2(v56);
      *(_DWORD *)(v17 + 10) = SHIWORD(v56);
      *(_DWORD *)(v17 + 14) = v57[0];
      *((_WORD *)v17 + 12) = v54[0];
      *(_WORD *)v17 = v11;
      *(_DWORD *)(v17 + 2) = v19;
      *(_DWORD *)(v17 + 18) = v19;
      *((_WORD *)v17 + 11) = v14;
      v20 = v17 + 66;
      v21 = *(_DWORD *)(a1 + 60);
      v22 = v59 + 10;
      *(_QWORD *)(v18 + 26) = v20;
      v23 = v21 + v22;
      if ( v11 > 0 )
      {
        v24 = (unsigned __int16)v11;
        do
        {
          FioFwReadUshortAtOffset(v9, v23, v20);
          v23 += 2;
          ++v20;
          --v24;
        }
        while ( v24 );
        v14 = (unsigned __int16)v58;
      }
      v25 = v23 + 2;
      *(_QWORD *)(v18 + 34) = v20;
      FioFwReadBytesAtOffset(v9, v25, v14, v20);
      v26 = v54[0];
      v27 = (char *)v20 + v55;
      v28 = v14 + v25;
      v29 = (char *)LOWORD(v54[0]);
      v30 = LOWORD(v54[0]);
      *(_QWORD *)(v18 + 42) = v27;
      v58 = v29;
      v31 = RaspAllocateMemory(v30);
      v55 = v31;
      v32 = v31;
      if ( v31 )
      {
        v33 = v26;
        FioFwReadBytesAtOffset(v9, v28, v26, v31);
        LODWORD(v34) = 0;
        LODWORD(v35) = 0;
        v36 = 0;
        if ( v26 )
        {
          do
          {
            v37 = (unsigned int)v35;
            v38 = v36++;
            *(_BYTE *)(v38 + *(_QWORD *)(v18 + 42)) = *(_BYTE *)((unsigned int)v35 + v32);
            if ( (*(_BYTE *)((unsigned int)v35 + v32) & 8) != 0 )
            {
              v35 = (unsigned int)(v35 + 1);
              if ( (unsigned __int16)v34 < *(unsigned __int8 *)(v35 + v32) )
              {
                v34 = *(unsigned __int8 *)(v35 + v32);
                do
                {
                  v51 = v36++;
                  *(_BYTE *)(v51 + *(_QWORD *)(v18 + 42)) = *(_BYTE *)(v37 + v32);
                  --v34;
                }
                while ( v34 );
              }
            }
            LODWORD(v35) = v35 + 1;
          }
          while ( v36 < (int)v26 );
        }
        v39 = &v27[(_QWORD)v58];
        v40 = v35 + v28;
        *(_QWORD *)(v18 + 50) = v39;
        v41 = v34;
        if ( v33 )
        {
          while ( 1 )
          {
            v42 = &v39[4 * v41];
            *(_DWORD *)v42 = v34;
            v43 = *(_BYTE *)(v41 + *(_QWORD *)(v18 + 42));
            if ( (v43 & 2) != 0 )
            {
              FioFwReadBytesAtOffset(v9, v40++, 1LL, &v39[4 * v41]);
              if ( (*(_BYTE *)(v41 + *(_QWORD *)(v18 + 42)) & 0x10) == 0 )
                *(_DWORD *)v42 = -*(_DWORD *)v42;
            }
            else
            {
              if ( (v43 & 0x10) != 0 )
              {
                *(_DWORD *)v42 = v34;
                goto LABEL_19;
              }
              FioFwReadUshortAtOffset(v9, v40, &v39[4 * v41]);
              v40 += 2;
            }
            LODWORD(v34) = 0;
LABEL_19:
            if ( ++v41 >= v33 )
            {
              v39 = *(char **)(v18 + 50);
              break;
            }
          }
        }
        v44 = &v39[4 * (v33 + 2)];
        v58 = v44;
        v45 = v34;
        *(_QWORD *)(v18 + 58) = v44;
        if ( v33 )
        {
          do
          {
            v46 = &v44[4 * v45];
            *(_DWORD *)v46 = v34;
            v47 = *(_BYTE *)(v45 + *(_QWORD *)(v18 + 42));
            if ( (v47 & 4) != 0 )
            {
              FioFwReadBytesAtOffset(v9, v40++, 1LL, v46);
              if ( (*(_BYTE *)(v45 + *(_QWORD *)(v18 + 42)) & 0x20) == 0 )
                *(_DWORD *)v46 = -*(_DWORD *)v46;
            }
            else
            {
              if ( (v47 & 0x20) != 0 )
              {
                *(_DWORD *)v46 = v34;
                goto LABEL_26;
              }
              FioFwReadUshortAtOffset(v9, v40, v46);
              v40 += 2;
            }
            LODWORD(v34) = 0;
LABEL_26:
            ++v45;
            v44 = v58;
          }
          while ( v45 < v33 );
        }
        v48 = v61;
        v49 = v55;
        *v60 = v18;
        RaspFreeMemory(v49, v48);
        return 0LL;
      }
      RaspFreeMemory(v18, a4);
    }
  }
  else
  {
    v52 = RaspAllocateMemory(66LL);
    if ( v52 )
    {
      v53 = SWORD1(v56);
      *(_DWORD *)(v52 + 2) = SWORD1(v56);
      *(_WORD *)v52 = 0;
      *(_DWORD *)(v52 + 6) = SWORD2(v56);
      *(_DWORD *)(v52 + 10) = SHIWORD(v56);
      *(_DWORD *)(v52 + 14) = v57[0];
      *(_QWORD *)(v52 + 18) = v53;
      *a3 = v52;
      return 0LL;
    }
  }
  return 3221225626LL;
}

/*
 * XREFs of OutputAATo4BPP @ 0x1C0241A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo4BPP(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int16 *v10; // r15
  unsigned __int64 v12; // r9
  unsigned __int8 *v13; // r14
  __int128 v14; // xmm0
  int v15; // ecx
  char v16; // esi^2
  char v17; // r8d^2
  __int64 v18; // rax
  unsigned __int8 *v19; // r14
  char v20; // edx^2
  char v21; // ebx^2
  char v22; // edi^2
  char v23; // si
  char v24; // bl
  int v25; // r9d
  int v26; // edx
  int v27; // edx
  bool v28; // zf
  int v29; // edx
  int v30; // edi
  char v31; // si
  unsigned int v32; // r11d
  __int64 v34; // [rsp+20h] [rbp-10h]

  v10 = a6;
  v12 = a3;
  v13 = a2;
  v14 = *(_OWORD *)(a5 - 24);
  v15 = 0;
  v34 = *(_QWORD *)(a5 - 8);
  v16 = BYTE6(v34);
  if ( BYTE1(a9) )
    v15 = 2003830647;
  v17 = BYTE14(*(_OWORD *)(a5 - 24));
  if ( (_BYTE)a9 )
  {
    v13 = a2 + 4;
    if ( a2[7] )
    {
      v17 = BYTE14(*(_OWORD *)(a5 - 24));
      *a4 = *a4 & 0xF0 | BYTE1(v15) ^ (BYTE14(v14) & ((*(_DWORD *)(a5 + 4LL * *v13) - (unsigned int)*a6) >> 16) | BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v13[1] + 256)) - (unsigned int)a6[1]) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v13[2] + 512)) - (unsigned int)a6[2]) >> 16));
      v12 = a3;
    }
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  LODWORD(v18) = *a1;
  v19 = v13 + 4;
  v20 = BYTE10(v14);
  v21 = BYTE6(v14);
  v22 = BYTE2(v14);
  if ( (v18 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v19 >= v12 )
        goto LABEL_14;
      LODWORD(v18) = v19[3] & 2;
      if ( !((unsigned int)v18 | v19[7] & 1) )
        goto LABEL_24;
      v27 = (v18 | v19[7] & 1) - 1;
      if ( ((unsigned int)v18 | v19[7] & 1) == 1 )
        break;
      LODWORD(v18) = v10[2];
      v28 = v27 == 1;
      v29 = v19[2];
      if ( v28 )
      {
        v32 = (unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v29 + 512)) - v18) >> 16;
        v20 = BYTE10(v14);
        LOBYTE(v18) = *a4 & 0xF;
        v12 = a3;
        *a4 = v18 | BYTE2(v15) ^ (v22 & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v10) >> 16) | v21 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[1] + 256)) - (unsigned int)v10[1]) >> 16) | BYTE10(v14) & v32);
      }
      else
      {
        v30 = *(_DWORD *)(a5 + 4LL * (unsigned int)(v29 + 512));
        v20 = BYTE10(v14);
        v12 = a3;
        v31 = BYTE10(v14) & ((unsigned int)(v30 - v18) >> 16) | BYTE14(v14) & ((*(_DWORD *)(a5 + 4LL * v19[4])
                                                                              - (unsigned int)v10[3]) >> 16) | BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[5] + 256)) - (unsigned int)v10[4]) >> 16) | BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[6] + 512)) - (unsigned int)v10[5]) >> 16);
        v22 = BYTE2(v14);
        v21 = BYTE6(v14);
        LODWORD(v18) = WORD1(v14);
        *a4 = v15 ^ (BYTE2(v14) & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v10) >> 16) | BYTE6(v14) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[1] + 256)) - (unsigned int)v10[1]) >> 16) | v31);
        v16 = BYTE6(v34);
      }
LABEL_25:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v18) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v19 += 8;
    }
    v12 = a3;
    LOBYTE(v18) = *a4 & 0xF0;
    *a4 = v18 | BYTE1(v15) ^ (BYTE14(v14) & ((*(_DWORD *)(a5 + 4LL * v19[4]) - (unsigned int)*v10) >> 16) | BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[5] + 256)) - (unsigned int)v10[1]) >> 16) | v16 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[6] + 512)) - (unsigned int)v10[2]) >> 16));
LABEL_24:
    v20 = BYTE10(v14);
    goto LABEL_25;
  }
  if ( (unsigned __int64)v19 < v12 )
  {
    do
    {
      v23 = BYTE6(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[6] + 512)) - (unsigned int)v10[5]) >> 16) | BYTE10(v14) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[2] + 512)) - (unsigned int)v10[2]) >> 16) | BYTE2(v34) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[5] + 256)) - (unsigned int)v10[4]) >> 16);
      v24 = BYTE6(v14) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[1] + 256)) - (unsigned int)v10[1]) >> 16);
      v18 = *v19;
      v25 = *(_DWORD *)(a5 + 4LL * v19[4]) - v10[3];
      v26 = *v10;
      v10 += 6;
      *a4++ = v15 ^ (v24 | BYTE2(v14) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v18) - v26) >> 16) | v17 & BYTE2(v25) | v23);
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v18) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v19 += 8;
    }
    while ( (unsigned __int64)v19 < a3 );
    v20 = BYTE10(v14);
  }
LABEL_14:
  if ( BYTE3(a9) && v19[3] )
  {
    LOBYTE(v18) = *a4 & 0xF;
    *a4 = v18 | BYTE2(v15) ^ (BYTE2(v14) & ((*(_DWORD *)(a5 + 4LL * *v19) - (unsigned int)*v10) >> 16) | BYTE6(v14) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[1] + 256)) - (unsigned int)v10[1]) >> 16) | v20 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v19[2] + 512)) - (unsigned int)v10[2]) >> 16));
  }
  return v18;
}

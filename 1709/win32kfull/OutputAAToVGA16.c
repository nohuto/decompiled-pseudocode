/*
 * XREFs of OutputAAToVGA16 @ 0x1C0242750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAAToVGA16(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned __int16 *v10; // r9
  unsigned __int8 *v12; // r10
  int v13; // eax
  unsigned __int8 *v14; // r10
  int v15; // ecx
  int v16; // ecx
  bool v17; // zf
  int v18; // ecx
  unsigned __int64 v19; // r8
  char v20; // cl
  unsigned __int64 v21; // r8
  int v22; // ecx
  __int128 v24; // [rsp+0h] [rbp-28h]
  __int64 v25; // [rsp+10h] [rbp-18h]

  v10 = a6;
  v12 = a2;
  v24 = *(_OWORD *)(a5 - 24);
  v25 = *(_QWORD *)(a5 - 8);
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = *a4 & 0xF0 | VGA16Xlate[((HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * *v12) - (unsigned int)*a6) | (unsigned int)v25 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v12[1] + 256)) - a6[1]) | (unsigned __int64)(HIDWORD(v25) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v12[2] + 512)) - (unsigned int)a6[2]))) ^ 0x70000) >> 16];
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  v13 = *a1;
  v14 = v12 + 4;
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= a3 )
        goto LABEL_25;
      v13 = v14[3] & 2;
      v15 = v13 | v14[7] & 1;
      if ( v15 )
        break;
LABEL_16:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v13) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v14 += 8;
    }
    v13 = v10[2];
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 == 1;
      v18 = v14[2];
      if ( !v17 )
      {
        LOBYTE(v13) = VGA16Xlate[(((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v14) - *v10) | HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * v14[4]) - (unsigned int)v10[3]) | (unsigned int)v25 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[5] + 256)) - v10[4]) | DWORD1(v24) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[1] + 256)) - (unsigned int)v10[1]) | HIDWORD(v25) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[6] + 512)) - (unsigned int)v10[5]) | (unsigned __int64)(DWORD2(v24) & (unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v18 + 512)) - v13))) ^ 0x770000) >> 16];
LABEL_15:
        *a4 = v13;
        goto LABEL_16;
      }
      v19 = ((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v14) - *v10) | DWORD1(v24) & (*(_DWORD *)(a5
                                                                                                  + 4LL * ((unsigned int)v14[1] + 256))
                                                                                      - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v24) & (unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v18 + 512)) - v13))) ^ 0x700000;
      v20 = *a4 & 0xF;
    }
    else
    {
      v19 = (HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * v14[4]) - (unsigned int)*v10) | (unsigned int)v25 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[5] + 256)) - v10[1]) | (unsigned __int64)(HIDWORD(v25) & (unsigned int)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[6] + 512)) - v13))) ^ 0x70000;
      v20 = *a4 & 0xF0;
    }
    LOBYTE(v13) = v20 | VGA16Xlate[v19 >> 16];
    goto LABEL_15;
  }
  while ( (unsigned __int64)v14 < a3 )
  {
    v21 = HIDWORD(v24) & (*(_DWORD *)(a5 + 4LL * v14[4]) - (unsigned int)v10[3]) | (unsigned int)v25 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[5] + 256)) - v10[4]) | DWORD1(v24) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[1] + 256)) - (unsigned int)v10[1]) | HIDWORD(v25) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[6] + 512)) - (unsigned int)v10[5]) | (unsigned __int64)(DWORD2(v24) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[2] + 512)) - (unsigned int)v10[2]));
    v22 = *v10;
    v10 += 6;
    LOBYTE(v13) = VGA16Xlate[(((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v14) - v22) | v21) ^ 0x770000) >> 16];
    *a4++ = v13;
    if ( (unsigned __int64)v10 >= a7 )
    {
      LOBYTE(v13) = a8;
      v10 = (unsigned __int16 *)((char *)v10 + a8);
    }
    v14 += 8;
  }
LABEL_25:
  if ( HIBYTE(a9) && v14[3] )
  {
    LOBYTE(v13) = *a4 & 0xF | VGA16Xlate[(((unsigned int)v24 & (*(_DWORD *)(a5 + 4LL * *v14) - *v10) | DWORD1(v24) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[1] + 256)) - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v24) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v14[2] + 512)) - (unsigned int)v10[2]))) ^ 0x700000) >> 16];
    *a4 = v13;
  }
  return v13;
}

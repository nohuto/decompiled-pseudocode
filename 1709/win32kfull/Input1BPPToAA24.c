/*
 * XREFs of Input1BPPToAA24 @ 0x1C010AFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  char v2; // al
  unsigned __int8 *v3; // rsi
  unsigned int v5; // r10d
  _BYTE *v6; // r9
  __int16 *v7; // rcx
  char v9; // al
  int v10; // ecx
  unsigned int v11; // edi
  _WORD *v12; // r15
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r10d
  unsigned __int16 v28; // ax
  __int64 v29; // r8
  char v30; // cl
  int v31; // eax
  int v32; // eax
  __int64 v34; // rdx
  char *v35; // rcx
  char v36; // al
  int v37; // ecx
  unsigned int i; // edx
  unsigned int v39; // ecx
  int v40; // r10d
  unsigned __int16 v41; // ax
  unsigned int v42; // edx
  unsigned __int16 v43; // ax
  unsigned int v44; // edi
  unsigned __int16 v45; // ax
  __int64 v46; // r8
  __int16 v47; // [rsp+20h] [rbp+20h] BYREF
  char v48; // [rsp+22h] [rbp+22h]
  __int16 v49; // [rsp+23h] [rbp+23h]
  char v50; // [rsp+25h] [rbp+25h]

  v2 = *a1;
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v5 = *((_DWORD *)a1 + 12);
  v6 = a2;
  v7 = (__int16 *)*((_QWORD *)a1 + 10);
  if ( (v2 & 4) != 0 )
  {
    v34 = 0LL;
    v35 = (char *)v7 + 3;
    do
    {
      v36 = *v35;
      v35 += 4;
      *((_BYTE *)&v47 + v34++) = v36;
    }
    while ( v34 < 2 );
    v37 = (unsigned __int8)a1[1];
    if ( a1[1] )
    {
      v42 = 8 - v37;
      v43 = *v3++ << v37;
      if ( 8 - v37 > v5 )
        v42 = v5;
      for ( v5 -= v42; v42; --v42 )
      {
        v43 *= 2;
        *v6++ = *((_BYTE *)&v47 + (HIBYTE(v43) & 1));
      }
    }
    for ( i = v5 >> 3; i; --i )
    {
      v39 = *v3++;
      *v6 = *((_BYTE *)&v47 + ((unsigned __int64)v39 >> 7));
      v6[1] = *((_BYTE *)&v47 + ((v39 >> 6) & 1));
      v6[2] = *((_BYTE *)&v47 + ((v39 >> 5) & 1));
      v6[3] = *((_BYTE *)&v47 + ((v39 >> 4) & 1));
      v6[4] = *((_BYTE *)&v47 + ((v39 >> 3) & 1));
      v6[5] = *((_BYTE *)&v47 + ((v39 >> 2) & 1));
      v6[6] = *((_BYTE *)&v47 + ((v39 >> 1) & 1));
      v6[7] = *((_BYTE *)&v47 + (v39 & 1));
      v6 += 8;
    }
    v40 = v5 & 7;
    if ( v40 )
    {
      v41 = *v3;
      do
      {
        v41 *= 2;
        *v6++ = *((_BYTE *)&v47 + (HIBYTE(v41) & 1));
        --v40;
      }
      while ( v40 );
    }
  }
  else
  {
    v47 = *v7;
    v48 = *((_BYTE *)v7 + 2);
    v49 = v7[2];
    v9 = *((_BYTE *)v7 + 6);
    v10 = (unsigned __int8)a1[1];
    v50 = v9;
    if ( v10 )
    {
      v44 = 8 - v10;
      v45 = *v3++ << v10;
      if ( 8 - v10 > v5 )
        v44 = v5;
      for ( v5 -= v44; v44; --v44 )
      {
        v45 *= 2;
        v46 = HIBYTE(v45) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v47 + 2 * v46 + v46);
        v6[2] = *((_BYTE *)&v47 + 2 * v46 + v46 + 2);
        v6 += 3;
      }
    }
    v11 = v5 >> 3;
    if ( v5 >> 3 )
    {
      v12 = v6 + 6;
      do
      {
        v13 = *v3;
        v14 = *v3++;
        v14 >>= 7;
        *(_WORD *)v6 = *(__int16 *)((char *)&v47 + 2 * v14 + v14);
        v15 = *((_BYTE *)&v47 + 2 * v14 + v14 + 2);
        v16 = (v13 >> 6) & 1;
        v6[2] = v15;
        v6 += 24;
        *(_WORD *)((char *)v12 - 3) = *(__int16 *)((char *)&v47 + 2 * v16 + v16);
        v17 = *((_BYTE *)&v47 + 2 * v16 + v16 + 2);
        v18 = (v13 >> 5) & 1;
        *((_BYTE *)v12 - 1) = v17;
        *v12 = *(__int16 *)((char *)&v47 + 2 * v18 + v18);
        v12 += 12;
        v19 = *((_BYTE *)&v47 + 2 * v18 + v18 + 2);
        v20 = (v13 >> 4) & 1;
        *((_BYTE *)v12 - 22) = v19;
        *(_WORD *)((char *)v12 - 21) = *(__int16 *)((char *)&v47 + 2 * v20 + v20);
        v21 = *((_BYTE *)&v47 + 2 * v20 + v20 + 2);
        v22 = (v13 >> 3) & 1;
        *((_BYTE *)v12 - 19) = v21;
        *(v12 - 9) = *(__int16 *)((char *)&v47 + 2 * v22 + v22);
        v23 = *((_BYTE *)&v47 + 2 * v22 + v22 + 2);
        v24 = (v13 >> 2) & 1;
        *((_BYTE *)v12 - 16) = v23;
        *(_WORD *)((char *)v12 - 15) = *(__int16 *)((char *)&v47 + 2 * v24 + v24);
        *((_BYTE *)v12 - 13) = *((_BYTE *)&v47 + 2 * v24 + v24 + 2);
        v25 = (v13 >> 1) & 1;
        v26 = v13 & 1;
        *(v12 - 6) = *(__int16 *)((char *)&v47 + 2 * v25 + v25);
        *((_BYTE *)v12 - 10) = *((_BYTE *)&v47 + 2 * v25 + v25 + 2);
        *(_WORD *)((char *)v12 - 9) = *(__int16 *)((char *)&v47 + 2 * v26 + v26);
        *((_BYTE *)v12 - 7) = *((_BYTE *)&v47 + 2 * v26 + v26 + 2);
        --v11;
      }
      while ( v11 );
    }
    v27 = v5 & 7;
    if ( v27 )
    {
      v28 = *v3;
      do
      {
        v28 *= 2;
        v29 = HIBYTE(v28) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v47 + 2 * v29 + v29);
        v6 += 3;
        *(v6 - 1) = *((_BYTE *)&v47 + 2 * v29 + v29 + 2);
        --v27;
      }
      while ( v27 );
    }
  }
  v30 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v31 = *((_DWORD *)a1 + 13);
    if ( v31 && (v32 = v31 - 1, (*((_DWORD *)a1 + 13) = v32) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v30 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v30 & 0xFD;
    }
  }
  return a2;
}

/*
 * XREFs of Input1BPPToAA24 @ 0x1C00A3440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // rsi
  _BYTE *v3; // r9
  unsigned int v4; // r10d
  __int16 *v7; // rcx
  char v8; // al
  int v9; // ecx
  unsigned int v10; // edi
  _WORD *v11; // r15
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r10d
  unsigned __int16 v27; // ax
  __int64 v28; // r8
  char v29; // cl
  int v30; // eax
  int v31; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  char *v35; // rdx
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

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v3 = a2;
  v4 = *((_DWORD *)a1 + 12);
  if ( (*a1 & 4) != 0 )
  {
    v33 = *((_QWORD *)a1 + 10);
    v34 = 0LL;
    v35 = (char *)(v33 + 3);
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
      v43 = *v2++ << v37;
      if ( 8 - v37 > v4 )
        v42 = v4;
      for ( v4 -= v42; v42; --v42 )
      {
        v43 *= 2;
        *v3++ = *((_BYTE *)&v47 + (HIBYTE(v43) & 1));
      }
    }
    for ( i = v4 >> 3; i; --i )
    {
      v39 = *v2++;
      *v3 = *((_BYTE *)&v47 + ((unsigned __int64)v39 >> 7));
      v3[1] = *((_BYTE *)&v47 + ((v39 >> 6) & 1));
      v3[2] = *((_BYTE *)&v47 + ((v39 >> 5) & 1));
      v3[3] = *((_BYTE *)&v47 + ((v39 >> 4) & 1));
      v3[4] = *((_BYTE *)&v47 + ((v39 >> 3) & 1));
      v3[5] = *((_BYTE *)&v47 + ((v39 >> 2) & 1));
      v3[6] = *((_BYTE *)&v47 + ((v39 >> 1) & 1));
      v3[7] = *((_BYTE *)&v47 + (v39 & 1));
      v3 += 8;
    }
    v40 = v4 & 7;
    if ( v40 )
    {
      v41 = *v2;
      do
      {
        v41 *= 2;
        *v3++ = *((_BYTE *)&v47 + (HIBYTE(v41) & 1));
        --v40;
      }
      while ( v40 );
    }
  }
  else
  {
    v7 = (__int16 *)*((_QWORD *)a1 + 10);
    v47 = *v7;
    v48 = *((_BYTE *)v7 + 2);
    v49 = v7[2];
    v8 = *((_BYTE *)v7 + 6);
    v9 = (unsigned __int8)a1[1];
    v50 = v8;
    if ( v9 )
    {
      v44 = 8 - v9;
      v45 = *v2++ << v9;
      if ( 8 - v9 > v4 )
        v44 = v4;
      for ( v4 -= v44; v44; --v44 )
      {
        v45 *= 2;
        v46 = HIBYTE(v45) & 1;
        *(_WORD *)v3 = *(__int16 *)((char *)&v47 + 2 * v46 + v46);
        v3[2] = *((_BYTE *)&v47 + 2 * v46 + v46 + 2);
        v3 += 3;
      }
    }
    v10 = v4 >> 3;
    if ( v4 >> 3 )
    {
      v11 = v3 + 6;
      do
      {
        v12 = *v2;
        v13 = *v2++;
        v13 >>= 7;
        *(_WORD *)v3 = *(__int16 *)((char *)&v47 + 2 * v13 + v13);
        v14 = *((_BYTE *)&v47 + 2 * v13 + v13 + 2);
        v15 = (v12 >> 6) & 1;
        v3[2] = v14;
        v3 += 24;
        *(_WORD *)((char *)v11 - 3) = *(__int16 *)((char *)&v47 + 2 * v15 + v15);
        v16 = *((_BYTE *)&v47 + 2 * v15 + v15 + 2);
        v17 = (v12 >> 5) & 1;
        *((_BYTE *)v11 - 1) = v16;
        *v11 = *(__int16 *)((char *)&v47 + 2 * v17 + v17);
        v11 += 12;
        v18 = *((_BYTE *)&v47 + 2 * v17 + v17 + 2);
        v19 = (v12 >> 4) & 1;
        *((_BYTE *)v11 - 22) = v18;
        *(_WORD *)((char *)v11 - 21) = *(__int16 *)((char *)&v47 + 2 * v19 + v19);
        v20 = *((_BYTE *)&v47 + 2 * v19 + v19 + 2);
        v21 = (v12 >> 3) & 1;
        *((_BYTE *)v11 - 19) = v20;
        *(v11 - 9) = *(__int16 *)((char *)&v47 + 2 * v21 + v21);
        v22 = *((_BYTE *)&v47 + 2 * v21 + v21 + 2);
        v23 = (v12 >> 2) & 1;
        *((_BYTE *)v11 - 16) = v22;
        *(_WORD *)((char *)v11 - 15) = *(__int16 *)((char *)&v47 + 2 * v23 + v23);
        *((_BYTE *)v11 - 13) = *((_BYTE *)&v47 + 2 * v23 + v23 + 2);
        v24 = (v12 >> 1) & 1;
        v25 = v12 & 1;
        *(v11 - 6) = *(__int16 *)((char *)&v47 + 2 * v24 + v24);
        *((_BYTE *)v11 - 10) = *((_BYTE *)&v47 + 2 * v24 + v24 + 2);
        *(_WORD *)((char *)v11 - 9) = *(__int16 *)((char *)&v47 + 2 * v25 + v25);
        *((_BYTE *)v11 - 7) = *((_BYTE *)&v47 + 2 * v25 + v25 + 2);
        --v10;
      }
      while ( v10 );
    }
    v26 = v4 & 7;
    if ( v26 )
    {
      v27 = *v2;
      do
      {
        v27 *= 2;
        v28 = HIBYTE(v27) & 1;
        *(_WORD *)v3 = *(__int16 *)((char *)&v47 + 2 * v28 + v28);
        v3 += 3;
        *(v3 - 1) = *((_BYTE *)&v47 + 2 * v28 + v28 + 2);
        --v26;
      }
      while ( v26 );
    }
  }
  v29 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v30 = *((_DWORD *)a1 + 13);
    if ( v30 && (v31 = v30 - 1, (*((_DWORD *)a1 + 13) = v31) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v29 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v29 & 0xFD;
    }
  }
  return a2;
}

/*
 * XREFs of vSrcOpaqCopyS1D4 @ 0x1C026CE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcOpaqCopyS1D4(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10)
{
  char v10; // r10
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // r13
  int v16; // r9d
  unsigned int v17; // r10d
  unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // r14d
  unsigned __int64 v21; // rax
  int v22; // r11d
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r9
  unsigned __int8 *v27; // r11
  unsigned int v28; // ecx
  _BYTE *v29; // r8
  int v30; // r10d
  char v31; // si
  _BYTE *v32; // r11
  int v33; // ebx
  _BYTE *v34; // r15
  unsigned __int8 v35; // r9
  _BYTE *v36; // rdi
  int v37; // ecx
  unsigned __int64 v38; // rdx
  _BYTE *v39; // r11
  int v40; // r14d
  char v41; // bl
  __int64 v42; // r12
  _BYTE *v43; // rsi
  unsigned __int8 v44; // r9
  int v45; // edi
  unsigned __int64 v46; // rcx
  unsigned __int8 *v47; // r9
  _BYTE *v48; // r8
  int v49; // r14d
  unsigned __int8 *v50; // rbx
  unsigned __int8 v51; // r11
  unsigned int v52; // edx
  unsigned __int64 v53; // rcx
  __int64 v55; // [rsp+0h] [rbp-20h]
  __int64 v56; // [rsp+10h] [rbp-10h]
  unsigned __int8 *v57; // [rsp+18h] [rbp-8h]
  __int64 v58; // [rsp+50h] [rbp+30h]
  int v59; // [rsp+70h] [rbp+50h]
  int v60; // [rsp+90h] [rbp+70h]

  v58 = a1;
  v10 = a10;
  LOBYTE(a10) = a10 | (16 * a10);
  BYTE1(a10) = a9 | (16 * a10);
  HIBYTE(a10) = a9 | (16 * BYTE1(a10));
  v13 = a2;
  BYTE2(a10) = v10 | (16 * HIBYTE(a10));
  v14 = a2 & 7;
  v55 = a3;
  v15 = a3 * (__int64)a8;
  v16 = a6 - a5 + a2;
  v60 = v16;
  v17 = v16 & 7;
  v18 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  v57 = &v18[v15];
  v19 = v14 != 0 ? 8 - v14 : 0;
  v20 = a7;
  LOBYTE(v21) = v19 + v17;
  v22 = a6 - a5 - (v19 + v17);
  if ( v22 > 0 )
  {
    v23 = (_BYTE *)(a4 + ((__int64)(v19 + a5) >> 1));
    v24 = a3 - (v22 >> 3);
    v25 = a7 - (v22 >> 1);
    v26 = (__int64)v22 >> 3;
    v56 = v24;
    do
    {
      v27 = &v18[v26];
      do
      {
        v28 = *v18++;
        *v23 = *((_BYTE *)&a10 + ((unsigned __int64)v28 >> 6));
        v23[1] = *((_BYTE *)&a10 + ((v28 >> 4) & 3));
        v23[2] = *((_BYTE *)&a10 + ((v28 >> 2) & 3));
        LOBYTE(v21) = *((_BYTE *)&a10 + (v28 & 3));
        v23[3] = v21;
        v23 += 4;
      }
      while ( v18 != v27 );
      v18 += v56;
      v23 += v25;
    }
    while ( v18 != v57 );
    a1 = v58;
    v16 = v60;
  }
  if ( v14 )
  {
    LOBYTE(v21) = v13 ^ v16;
    v29 = (_BYTE *)(a4 + ((__int64)a5 >> 1));
    if ( (((unsigned int)v13 ^ v16) & 0xFFFFFFF8) == 0 )
    {
      v30 = v17 - v14;
      if ( v30 > 0 )
      {
        v31 = v14 & 0xFE;
        v32 = (_BYTE *)(a1 + (v13 >> 3));
        v33 = v14 & 1;
        v34 = &v32[v15];
        do
        {
          v35 = *v32 << v31;
          v36 = v29;
          v37 = v30;
          if ( v33 )
          {
            v36 = v29 + 1;
            v37 = v30 - 1;
            *v29 ^= (*v29 ^ *((_BYTE *)&a10 + ((unsigned __int64)v35 >> 6))) & 0xF;
            v35 *= 4;
          }
          if ( v37 >= 2 )
          {
            v38 = (unsigned __int64)(unsigned int)v37 >> 1;
            v37 -= 2 * ((unsigned int)v37 >> 1);
            do
            {
              v21 = (unsigned __int64)v35 >> 6;
              v35 *= 4;
              LOBYTE(v21) = *((_BYTE *)&a10 + v21);
              *v36++ = v21;
              --v38;
            }
            while ( v38 );
          }
          if ( v37 )
          {
            v21 = (unsigned __int64)v35 >> 6;
            *v36 = *((_BYTE *)&a10 + v21) ^ (*v36 ^ *((_BYTE *)&a10 + v21)) & 0xF;
          }
          v32 += v55;
          v29 += a7;
        }
        while ( v32 != v34 );
      }
      return v21;
    }
    v39 = (_BYTE *)(a1 + (v13 >> 3));
    LODWORD(v21) = (9 - v14) >> 1;
    v59 = 8 - v14;
    v40 = 8 - v14;
    v41 = v14 & 0xFE;
    v42 = a7 - (int)v21;
    v43 = &v39[v15];
    do
    {
      v44 = *v39 << v41;
      v45 = v59;
      if ( (v59 & 1) != 0 )
      {
        v46 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        *v29 ^= (*v29 ^ *((_BYTE *)&a10 + v46)) & 0xF;
        ++v29;
        v45 = v40 - 1;
      }
      for ( ; v45; v45 -= 2 )
      {
        v21 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        LOBYTE(v21) = *((_BYTE *)&a10 + v21);
        *v29++ = v21;
      }
      v39 += v55;
      v29 += v42;
    }
    while ( v39 != v43 );
    v20 = a7;
  }
  if ( v17 )
  {
    v47 = (unsigned __int8 *)(v58 + ((__int64)v60 >> 3));
    v48 = (_BYTE *)(a4 + ((__int64)(int)(a6 - v17) >> 1));
    LODWORD(v21) = (v17 + 1) >> 1;
    v49 = v20 - v21;
    v50 = &v47[v15];
    do
    {
      v51 = *v47;
      v52 = v17;
      if ( v17 >= 2 )
      {
        v53 = (unsigned __int64)v17 >> 1;
        v52 = v17 - 2 * v53;
        do
        {
          v21 = (unsigned __int64)v51 >> 6;
          v51 *= 4;
          LOBYTE(v21) = *((_BYTE *)&a10 + v21);
          *v48++ = v21;
          --v53;
        }
        while ( v53 );
      }
      if ( v52 )
      {
        v21 = (unsigned __int64)v51 >> 6;
        *v48 = *((_BYTE *)&a10 + v21) ^ (*v48 ^ *((_BYTE *)&a10 + v21)) & 0xF;
        ++v48;
      }
      v47 += v55;
      v48 += v49;
    }
    while ( v47 != v50 );
  }
  return v21;
}

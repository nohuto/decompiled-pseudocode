/*
 * XREFs of vSrcOpaqCopyS1D4 @ 0x1C0270750
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
        int a9,
        int a10)
{
  __int64 v10; // r12
  int v12; // r11d
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // r13
  int v17; // r9d
  unsigned int v18; // r10d
  unsigned __int8 *v19; // r8
  int v20; // edx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  int v23; // r11d
  _BYTE *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r9
  unsigned __int8 *v28; // r11
  unsigned int v29; // ecx
  _BYTE *v30; // r8
  int v31; // r10d
  char v32; // r14
  _BYTE *v33; // r11
  int v34; // ebx
  _BYTE *v35; // r15
  unsigned __int8 v36; // r9
  _BYTE *v37; // rdi
  int v38; // ecx
  unsigned __int64 v39; // rdx
  _BYTE *v40; // r11
  int v41; // ecx
  int v42; // esi
  char v43; // bl
  __int64 v44; // r12
  _BYTE *v45; // r14
  unsigned __int8 v46; // r9
  int v47; // edi
  unsigned __int64 v48; // rcx
  unsigned __int8 *v49; // r9
  _BYTE *v50; // r8
  int v51; // esi
  unsigned __int8 *v52; // rbx
  unsigned __int8 v53; // r11
  unsigned int v54; // edx
  unsigned __int64 v55; // rcx
  __int64 v57; // [rsp+0h] [rbp-20h]
  __int64 v58; // [rsp+10h] [rbp-10h]
  unsigned __int8 *v59; // [rsp+18h] [rbp-8h]
  __int64 v60; // [rsp+50h] [rbp+30h]

  v60 = a1;
  v10 = a5;
  v12 = a6 - a5;
  LOBYTE(a5) = a10 | (16 * a10);
  BYTE1(a5) = a9 | (16 * a5);
  v14 = a2;
  HIBYTE(a5) = a9 | (16 * BYTE1(a5));
  v15 = a2 & 7;
  v57 = a3;
  BYTE2(a5) = a10 | (16 * HIBYTE(a5));
  v16 = a3 * (__int64)a8;
  v17 = v12 + a2;
  a10 = 8 - v15;
  a9 = v12 + a2;
  v18 = ((_BYTE)v12 + (_BYTE)a2) & 7;
  v19 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  v59 = &v19[v16];
  v20 = v15 != 0 ? 8 - v15 : 0;
  v21 = a7;
  LOBYTE(v22) = v20 + v18;
  v23 = v12 - (v20 + v18);
  if ( v23 > 0 )
  {
    v24 = (_BYTE *)(a4 + ((__int64)(v20 + (int)v10) >> 1));
    v25 = a3 - (v23 >> 3);
    v26 = a7 - (v23 >> 1);
    v27 = (__int64)v23 >> 3;
    v58 = v25;
    do
    {
      v28 = &v19[v27];
      do
      {
        v29 = *v19++;
        *v24 = *((_BYTE *)&a5 + ((unsigned __int64)v29 >> 6));
        v24[1] = *((_BYTE *)&a5 + ((v29 >> 4) & 3));
        v24[2] = *((_BYTE *)&a5 + ((v29 >> 2) & 3));
        LOBYTE(v22) = *((_BYTE *)&a5 + (v29 & 3));
        v24[3] = v22;
        v24 += 4;
      }
      while ( v19 != v28 );
      v19 += v58;
      v24 += v26;
    }
    while ( v19 != v59 );
    a1 = v60;
    v17 = a9;
  }
  if ( v15 )
  {
    LOBYTE(v22) = v14 ^ v17;
    v30 = (_BYTE *)(a4 + (v10 >> 1));
    if ( (((unsigned int)v14 ^ v17) & 0xFFFFFFF8) == 0 )
    {
      v31 = v18 - v15;
      if ( v31 > 0 )
      {
        v32 = v15 & 0xFE;
        v33 = (_BYTE *)(a1 + (v14 >> 3));
        v34 = v15 & 1;
        v35 = &v33[v16];
        do
        {
          v36 = *v33 << v32;
          v37 = v30;
          v38 = v31;
          if ( v34 )
          {
            v37 = v30 + 1;
            v38 = v31 - 1;
            *v30 ^= (*v30 ^ *((_BYTE *)&a5 + ((unsigned __int64)v36 >> 6))) & 0xF;
            v36 *= 4;
          }
          if ( v38 >= 2 )
          {
            v39 = (unsigned __int64)(unsigned int)v38 >> 1;
            v38 -= 2 * ((unsigned int)v38 >> 1);
            do
            {
              v22 = (unsigned __int64)v36 >> 6;
              v36 *= 4;
              LOBYTE(v22) = *((_BYTE *)&a5 + v22);
              *v37++ = v22;
              --v39;
            }
            while ( v39 );
          }
          if ( v38 )
          {
            v22 = (unsigned __int64)v36 >> 6;
            *v37 = *((_BYTE *)&a5 + v22) ^ (*v37 ^ *((_BYTE *)&a5 + v22)) & 0xF;
          }
          v33 += v57;
          v30 += v21;
        }
        while ( v33 != v35 );
      }
      return v22;
    }
    v40 = (_BYTE *)(a1 + (v14 >> 3));
    LODWORD(v22) = (9 - v15) >> 1;
    v41 = v21;
    v42 = a10;
    v43 = v15 & 0xFE;
    v44 = v41 - (int)v22;
    v45 = &v40[v16];
    do
    {
      v46 = *v40 << v43;
      v47 = v42;
      if ( (v42 & 1) != 0 )
      {
        v48 = (unsigned __int64)v46 >> 6;
        v46 *= 4;
        *v30 ^= (*v30 ^ *((_BYTE *)&a5 + v48)) & 0xF;
        ++v30;
        v47 = v42 - 1;
      }
      for ( ; v47; v47 -= 2 )
      {
        v22 = (unsigned __int64)v46 >> 6;
        v46 *= 4;
        LOBYTE(v22) = *((_BYTE *)&a5 + v22);
        *v30++ = v22;
      }
      v40 += v57;
      v30 += v44;
    }
    while ( v40 != v45 );
    LODWORD(v21) = a7;
  }
  if ( v18 )
  {
    v49 = (unsigned __int8 *)(v60 + ((__int64)a9 >> 3));
    v50 = (_BYTE *)(a4 + ((__int64)(int)(a6 - v18) >> 1));
    LODWORD(v22) = (v18 + 1) >> 1;
    v51 = v21 - v22;
    v52 = &v49[v16];
    do
    {
      v53 = *v49;
      v54 = v18;
      if ( v18 >= 2 )
      {
        v55 = (unsigned __int64)v18 >> 1;
        v54 = v18 - 2 * v55;
        do
        {
          v22 = (unsigned __int64)v53 >> 6;
          v53 *= 4;
          LOBYTE(v22) = *((_BYTE *)&a5 + v22);
          *v50++ = v22;
          --v55;
        }
        while ( v55 );
      }
      if ( v54 )
      {
        v22 = (unsigned __int64)v53 >> 6;
        *v50 = *((_BYTE *)&a5 + v22) ^ (*v50 ^ *((_BYTE *)&a5 + v22)) & 0xF;
        ++v50;
      }
      v49 += v57;
      v50 += v51;
    }
    while ( v49 != v52 );
  }
  return v22;
}

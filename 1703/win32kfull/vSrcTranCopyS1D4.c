/*
 * XREFs of vSrcTranCopyS1D4 @ 0x1C0271370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D4(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r12d
  int v11; // edi
  __int64 v12; // rbp
  int v14; // esi
  char v15; // r11
  __int64 v16; // r14
  unsigned int v17; // r9d
  unsigned __int8 *v18; // r8
  int v19; // edx
  unsigned __int64 v20; // rax
  int v21; // ebx
  _BYTE *v22; // r10
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rbx
  unsigned __int8 *v26; // rdi
  unsigned int v27; // edx
  char v28; // al
  char v29; // cl
  int v30; // r15d
  _BYTE *v31; // rdx
  int v32; // r9d
  _BYTE *v33; // r10
  __int64 v34; // r12
  _BYTE *v35; // r15
  unsigned __int8 v36; // r8
  _BYTE *v37; // rbx
  int v38; // edi
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  int v42; // ebp
  _BYTE *v43; // r8
  _BYTE *v44; // r12
  char v45; // r10
  int v46; // ebx
  unsigned __int64 v47; // rax
  char *v48; // r8
  _BYTE *v49; // rdx
  __int64 v50; // rbp
  char *v51; // rsi
  char v52; // di
  unsigned int v53; // ebx
  unsigned __int64 v54; // r10
  __int64 v56; // [rsp+0h] [rbp-58h]
  unsigned __int64 v57; // [rsp+8h] [rbp-50h]
  unsigned __int8 *v58; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+18h] [rbp-40h]
  __int64 v60; // [rsp+60h] [rbp+8h]
  int v61; // [rsp+68h] [rbp+10h]

  v60 = a1;
  v10 = a5;
  v11 = a7;
  v12 = a2;
  v14 = a2 & 7;
  v15 = a9 | (16 * a9);
  v61 = -1044736;
  a9 = a6 - a5 + a2;
  v16 = a3 * (__int64)a8;
  v17 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  v56 = a3;
  a8 = 8 - v14;
  v18 = (unsigned __int8 *)(a1 + ((__int64)(a2 + 7) >> 3));
  v58 = &v18[v16];
  v19 = v14 != 0 ? 8 - v14 : 0;
  LOBYTE(v20) = v17 + v19;
  v21 = a6 - a5 - (v17 + v19);
  if ( v21 > 0 )
  {
    v22 = (_BYTE *)(a4 + ((__int64)(v19 + a5) >> 1));
    v23 = a3 - (v21 >> 3);
    v24 = a7 - (v21 >> 1);
    v25 = (__int64)v21 >> 3;
    v59 = v23;
    do
    {
      v26 = &v18[v25];
      do
      {
        v27 = *v18++;
        *v22 = v15 & *((_BYTE *)&v61 + ((unsigned __int64)v27 >> 6)) | *v22 & ~*((_BYTE *)&v61
                                                                               + ((unsigned __int64)v27 >> 6));
        v28 = *((_BYTE *)&v61 + ((v27 >> 4) & 3));
        v22[1] = v15 & v28 | v22[1] & ~v28;
        v29 = *((_BYTE *)&v61 + (v27 & 3));
        v22[2] = v15 & *((_BYTE *)&v61 + ((v27 >> 2) & 3)) | v22[2] & ~*((_BYTE *)&v61 + ((v27 >> 2) & 3));
        LOBYTE(v20) = v15 & v29 | v22[3] & ~v29;
        v22[3] = v20;
        v22 += 4;
      }
      while ( v18 != v26 );
      v18 += v59;
      v22 += v24;
    }
    while ( v18 != v58 );
    v11 = a7;
    v10 = a5;
    a1 = v60;
  }
  v30 = a9;
  if ( v14 )
  {
    LOBYTE(v20) = v12 ^ a9;
    v31 = (_BYTE *)(a4 + ((__int64)v10 >> 1));
    if ( (((unsigned int)v12 ^ a9) & 0xFFFFFFF8) == 0 )
    {
      v32 = v17 - v14;
      if ( v32 > 0 )
      {
        v33 = (_BYTE *)(a1 + (v12 >> 3));
        v34 = v11;
        v35 = &v33[v16];
        do
        {
          v36 = *v33 << v14;
          v37 = v31;
          v38 = v32;
          if ( (v14 & 1) != 0 )
          {
            if ( (v36 & 0x80u) != 0 )
              *v31 ^= (v15 ^ *v31) & 0xF;
            v36 *= 2;
            v37 = v31 + 1;
            v38 = v32 - 1;
          }
          if ( v38 >= 2 )
          {
            v39 = (unsigned __int64)(unsigned int)v38 >> 1;
            v38 -= 2 * ((unsigned int)v38 >> 1);
            do
            {
              v40 = (unsigned __int64)v36 >> 6;
              v36 *= 4;
              *v37 = v15 & *((_BYTE *)&v61 + v40) | *v37 & ~*((_BYTE *)&v61 + v40);
              ++v37;
              --v39;
            }
            while ( v39 );
          }
          LOBYTE(v20) = (v38 & 1) != 0;
          if ( ((unsigned __int8)v20 & (v36 >> 7)) != 0 )
          {
            LOBYTE(v20) = v15 ^ (v15 ^ *v37) & 0xF;
            *v37 = v20;
          }
          v33 += v56;
          v31 += v34;
        }
        while ( v33 != v35 );
      }
      return v20;
    }
    v41 = v12;
    v42 = a8;
    v43 = (_BYTE *)(a1 + (v41 >> 3));
    v20 = v11 - ((9 - v14) >> 1);
    v44 = &v43[v16];
    v57 = (int)v20;
    do
    {
      v45 = *v43 << v14;
      v46 = v42;
      if ( (v42 & 1) != 0 )
      {
        if ( v45 < 0 )
        {
          *v31 ^= (v15 ^ *v31) & 0xF;
          v20 = v57;
        }
        v45 *= 2;
        ++v31;
        v46 = v42 - 1;
      }
      if ( v46 )
      {
        do
        {
          v47 = (unsigned __int64)(unsigned __int8)v45 >> 6;
          v45 *= 4;
          *v31 = v15 & *((_BYTE *)&v61 + v47) | *v31 & ~*((_BYTE *)&v61 + v47);
          ++v31;
          v46 -= 2;
        }
        while ( v46 );
        v20 = v57;
      }
      v43 += v56;
      v31 += v20;
    }
    while ( v43 != v44 );
    v11 = a7;
  }
  if ( v17 )
  {
    v48 = (char *)(v60 + ((__int64)v30 >> 3));
    v49 = (_BYTE *)(a4 + ((__int64)(int)(a6 - v17) >> 1));
    LODWORD(v20) = (v17 + 1) >> 1;
    v50 = v11 - (int)v20;
    v51 = &v48[v16];
    do
    {
      v52 = *v48;
      v53 = v17;
      if ( v17 >= 2 )
      {
        v54 = (unsigned __int64)v17 >> 1;
        v53 = v17 - 2 * v54;
        do
        {
          v20 = (unsigned __int64)(unsigned __int8)v52 >> 6;
          v52 *= 4;
          LOBYTE(v20) = v15 & *((_BYTE *)&v61 + v20) | *v49 & ~*((_BYTE *)&v61 + v20);
          *v49++ = v20;
          --v54;
        }
        while ( v54 );
      }
      if ( v53 )
      {
        if ( v52 < 0 )
        {
          LOBYTE(v20) = v15 ^ (v15 ^ *v49) & 0xF;
          *v49 = v20;
        }
        ++v49;
      }
      v48 += v56;
      v49 += v50;
    }
    while ( v48 != v51 );
  }
  return v20;
}

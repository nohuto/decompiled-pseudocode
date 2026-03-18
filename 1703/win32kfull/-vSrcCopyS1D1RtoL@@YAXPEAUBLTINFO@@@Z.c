/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02A4AE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  _BYTE *v1; // rbx
  int v2; // r10d
  int v3; // r9d
  int v4; // r8d
  char v5; // si
  BOOL v6; // r14d
  struct BLTINFO *v7; // r13
  int v8; // r11d
  __int64 v9; // r12
  int v10; // edx
  char v11; // bp
  int v12; // r11d
  unsigned __int8 *v13; // rdi
  int v14; // r10d
  _BYTE *v15; // r11
  __int64 v16; // r14
  unsigned __int8 v17; // dl
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  int v21; // ebp
  _BYTE *v22; // r14
  __int64 v23; // rax
  unsigned __int8 *v24; // rdi
  int v25; // ecx
  int v26; // edx
  size_t v27; // r15
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // r13
  char v31; // dl
  unsigned __int8 v32; // al
  __int64 v33; // r14
  unsigned __int8 v34; // dl
  char v35; // al
  char v36; // r8
  unsigned __int8 *v37; // r9
  char v38; // al
  unsigned __int8 v39; // r8
  int v40; // edx
  char v41; // r15
  int v42; // r8d
  int v43; // eax
  __int64 v44; // r9
  int v45; // eax
  unsigned __int8 *v46; // r9
  unsigned __int8 v47; // dl
  unsigned __int8 v48; // al
  unsigned __int8 v49; // dl
  char v50; // al
  int v51; // [rsp+20h] [rbp-68h]
  char v52; // [rsp+24h] [rbp-64h]
  int v53; // [rsp+28h] [rbp-60h]
  int v54; // [rsp+2Ch] [rbp-5Ch]
  _BYTE *v55; // [rsp+38h] [rbp-50h]
  int v57; // [rsp+98h] [rbp+10h]
  int v58; // [rsp+A0h] [rbp+18h]
  __int64 v59; // [rsp+A0h] [rbp+18h]
  int v60; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v2 = *((_DWORD *)a1 + 14);
  v3 = *((_DWORD *)a1 + 12) & 7;
  v4 = v2 & 7;
  v5 = (*((_BYTE *)a1 + 48) & 7) - (*((_BYTE *)a1 + 56) & 7);
  v6 = 1;
  v7 = a1;
  if ( v3 < v4 )
    v5 += 8;
  v8 = *((_DWORD *)a1 + 7);
  v9 = *((int *)a1 + 11);
  v10 = *((_DWORD *)a1 + 10);
  v52 = 8 - v5;
  v54 = v2 - v8;
  v60 = v2 >> 3;
  v53 = *((_DWORD *)a1 + 11);
  v11 = -1 << (7 - v4);
  v57 = v10;
  v51 = (v2 - v8) >> 3;
  if ( v51 == v2 >> 3 )
  {
    v11 &= 255 >> ((v54 + 1) & 7);
    v10 = *((_DWORD *)a1 + 10);
    if ( v3 < v4 )
      v6 = v3 - v8 < -1;
  }
  v12 = ((_BYTE)v4 + 1) & 7;
  v58 = v12;
  if ( !(v12 | (v51 == v60)) )
    goto LABEL_12;
  v13 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 3));
  v14 = *((_DWORD *)a1 + 8);
  v15 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
  if ( v3 > v4 )
  {
    if ( v14 )
    {
      v16 = v10;
      do
      {
        v17 = *v13;
        v13 += v16;
        *v15 = ~v11 & *v15 | v11 & (v17 << v5);
        v15 += v9;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_11;
  }
  if ( v3 < v4 )
  {
    if ( v6 )
    {
      if ( v14 )
      {
        v30 = v10;
        do
        {
          v31 = *(v13 - 1);
          v32 = *v13;
          v13 += v30;
          *v15 = ~v11 & *v15 | v11 & ((v32 >> v52) | (v31 << v5));
          v15 += v9;
          --v14;
        }
        while ( v14 );
        v7 = a1;
      }
    }
    else if ( v14 )
    {
      v33 = v10;
      do
      {
        v34 = *v13;
        v13 += v33;
        *v15 = ~v11 & *v15 | v11 & (v34 >> (8 - v5));
        v15 += v9;
        --v14;
      }
      while ( v14 );
      v7 = a1;
    }
    goto LABEL_11;
  }
  if ( !v14 )
  {
LABEL_11:
    v12 = v58;
LABEL_12:
    v18 = v57;
    goto LABEL_13;
  }
  v18 = *((_DWORD *)a1 + 10);
  do
  {
    v35 = *v13 & v11;
    v13 += v57;
    *v15 = v35 | ~v11 & *v15;
    v15 += v9;
    --v14;
  }
  while ( v14 );
  v12 = v58;
LABEL_13:
  v19 = v60;
  v20 = v51;
  if ( v51 != v60 )
  {
    v21 = *((_DWORD *)v7 + 8);
    v22 = (_BYTE *)(*((_QWORD *)v7 + 2) + ((__int64)(*((_DWORD *)v7 + 14) - 7) >> 3));
    v1 = (_BYTE *)(*((_QWORD *)v7 + 2) + ((__int64)v54 >> 3));
    LODWORD(v23) = *((_DWORD *)v7 + 4) + ((*((_DWORD *)v7 + 14) - 7) >> 3) - (_DWORD)v1;
    v24 = (unsigned __int8 *)(*((_QWORD *)v7 + 1) + ((__int64)(*((_DWORD *)v7 + 12) - v12) >> 3));
    v55 = v1;
    v25 = v23 + v9;
    v26 = v23 + v18;
    if ( v5 )
    {
      if ( v21 )
      {
        v23 = (int)v23;
        v59 = (int)v23;
        do
        {
          v36 = *v24 >> v52;
          v37 = &v24[-v23];
          --v21;
          if ( v24 != &v24[-v23] )
          {
            do
            {
              v38 = v36 | (*--v24 << v5);
              v39 = *v24;
              *v22-- = v38;
              v36 = v39 >> v52;
            }
            while ( v24 != v37 );
            v23 = v59;
          }
          v22 += v25;
          v24 += v26;
        }
        while ( v21 );
        goto LABEL_39;
      }
    }
    else if ( v21 )
    {
      v27 = (int)v23;
      v28 = (int)v23 - 1;
      v29 = v18;
      do
      {
        memmove(&v22[-v28], &v24[-v28], v27);
        v22 += v53;
        v24 += v29;
        --v21;
      }
      while ( v21 );
      v1 = v55;
LABEL_39:
      v20 = v51;
      v19 = v60;
      LODWORD(v9) = v53;
      v7 = a1;
    }
  }
  v40 = ((_BYTE)v54 + 1) & 7;
  v41 = -1 << (8 - v40);
  if ( (((_BYTE)v54 + 1) & 7) != 0 && v20 != v19 )
  {
    v42 = *((_DWORD *)v7 + 8);
    v43 = *((_DWORD *)v7 + 13) + 1;
    v44 = v43;
    v45 = v43 & 7;
    v46 = (unsigned __int8 *)(*((_QWORD *)v7 + 1) + (v44 >> 3));
    if ( v45 <= v40 )
    {
      if ( v45 >= v40 )
      {
        for ( ; v42; --v42 )
        {
          v50 = *v46 & ~v41;
          v46 += v57;
          *v1 = v50 | v41 & *v1;
          v1 += (int)v9;
        }
      }
      else
      {
        for ( ; v42; --v42 )
        {
          v49 = *v46;
          v46 += v57;
          *v1 = v41 & *v1 | ~v41 & (v49 >> v52);
          v1 += (int)v9;
        }
      }
    }
    else
    {
      for ( ; v42; --v42 )
      {
        v47 = v46[1];
        v48 = *v46;
        v46 += v57;
        *v1 = v41 & *v1 | ~v41 & ((v48 << v5) | (v47 >> v52));
        v1 += (int)v9;
      }
    }
  }
}

/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02A11C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  _BYTE *v1; // rbx
  int v2; // r10d
  int v3; // r9d
  int v4; // r8d
  char v5; // bp
  BOOL v6; // r14d
  struct BLTINFO *v7; // r13
  int v8; // r11d
  __int64 v9; // r12
  int v10; // edx
  char v11; // si
  int v12; // r11d
  unsigned __int8 *v13; // rdi
  int v14; // r10d
  _BYTE *v15; // r11
  __int64 v16; // r14
  unsigned __int8 v17; // dl
  __int64 v18; // r13
  char v19; // dl
  unsigned __int8 v20; // al
  __int64 v21; // r14
  unsigned __int8 v22; // dl
  char v23; // al
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // esi
  int v28; // eax
  int v29; // r11d
  _BYTE *v30; // r14
  unsigned __int8 *v31; // rdi
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  size_t v35; // r15
  __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // rax
  char v39; // r8
  unsigned __int8 *v40; // r9
  char v41; // al
  unsigned __int8 v42; // r8
  int v43; // edx
  char v44; // r15
  int v45; // r8d
  int v46; // eax
  __int64 v47; // r9
  int v48; // eax
  unsigned __int8 *v49; // r9
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // al
  unsigned __int8 v52; // dl
  char v53; // al
  int v54; // [rsp+20h] [rbp-68h]
  char v55; // [rsp+24h] [rbp-64h]
  int v56; // [rsp+28h] [rbp-60h]
  int v57; // [rsp+2Ch] [rbp-5Ch]
  int v59; // [rsp+98h] [rbp+10h]
  int v60; // [rsp+A0h] [rbp+18h]
  int v61; // [rsp+A8h] [rbp+20h]

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
  v55 = 8 - v5;
  v57 = v2 - v8;
  v61 = v2 >> 3;
  v56 = *((_DWORD *)a1 + 11);
  v11 = -1 << (7 - v4);
  v59 = v10;
  v54 = (v2 - v8) >> 3;
  if ( v54 == v2 >> 3 )
  {
    v11 &= 255 >> ((v57 + 1) & 7);
    v10 = *((_DWORD *)a1 + 10);
    if ( v3 < v4 )
      v6 = v3 - v8 < -1;
  }
  v12 = ((_BYTE)v4 + 1) & 7;
  v60 = v12;
  if ( v12 | (v54 == v61) )
  {
    v13 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 3));
    v14 = *((_DWORD *)a1 + 8);
    v15 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
    if ( v3 <= v4 )
    {
      if ( v3 >= v4 )
      {
        for ( ; v14; --v14 )
        {
          v23 = *v13 & v11;
          v13 += v59;
          *v15 = v23 | ~v11 & *v15;
          v15 += v9;
        }
      }
      else if ( v6 )
      {
        if ( v14 )
        {
          v18 = v10;
          do
          {
            v19 = *(v13 - 1);
            v20 = *v13;
            v13 += v18;
            *v15 = ~v11 & *v15 | v11 & ((v20 >> v55) | (v19 << v5));
            v15 += v9;
            --v14;
          }
          while ( v14 );
          v7 = a1;
        }
      }
      else if ( v14 )
      {
        v21 = v10;
        do
        {
          v22 = *v13;
          v13 += v21;
          *v15 = ~v11 & *v15 | v11 & (v22 >> (8 - v5));
          v15 += v9;
          --v14;
        }
        while ( v14 );
        v7 = a1;
      }
    }
    else if ( v14 )
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
    v12 = v60;
  }
  v24 = v61;
  v25 = v54;
  if ( v54 == v61 )
    goto LABEL_38;
  v26 = *((_QWORD *)v7 + 2);
  v27 = *((_DWORD *)v7 + 8);
  v28 = *((_DWORD *)v7 + 12) - v12;
  v29 = v59;
  v30 = (_BYTE *)(v26 + ((__int64)(*((_DWORD *)v7 + 14) - 7) >> 3));
  v1 = (_BYTE *)(v26 + ((__int64)v57 >> 3));
  v31 = (unsigned __int8 *)(*((_QWORD *)v7 + 1) + ((__int64)v28 >> 3));
  v32 = ((*((_DWORD *)v7 + 14) - 7) >> 3) - (v57 >> 3);
  v33 = v32 + v9;
  v34 = v32 + v59;
  if ( v5 )
  {
    if ( v27 )
    {
      v37 = v32;
      v38 = v34;
      do
      {
        v39 = *v31 >> v55;
        v40 = &v31[-v37];
        --v27;
        if ( v31 != &v31[-v37] )
        {
          do
          {
            v41 = v39 | (*--v31 << v5);
            v42 = *v31;
            *v30-- = v41;
            v39 = v42 >> v55;
          }
          while ( v31 != v40 );
          v38 = v34;
        }
        v30 += v33;
        v31 += v38;
      }
      while ( v27 );
      goto LABEL_37;
    }
  }
  else if ( v27 )
  {
    v35 = v32;
    v36 = v32 - 1;
    do
    {
      memmove(&v30[-v36], &v31[-v36], v35);
      v30 += v56;
      v31 += v59;
      --v27;
    }
    while ( v27 );
LABEL_37:
    v25 = v54;
    v24 = v61;
    LODWORD(v9) = v56;
    v7 = a1;
LABEL_38:
    v29 = v59;
  }
  v43 = ((_BYTE)v57 + 1) & 7;
  v44 = -1 << (8 - v43);
  if ( (((_BYTE)v57 + 1) & 7) != 0 && v25 != v24 )
  {
    v45 = *((_DWORD *)v7 + 8);
    v46 = *((_DWORD *)v7 + 13) + 1;
    v47 = v46;
    v48 = v46 & 7;
    v49 = (unsigned __int8 *)(*((_QWORD *)v7 + 1) + (v47 >> 3));
    if ( v48 <= v43 )
    {
      if ( v48 >= v43 )
      {
        for ( ; v45; --v45 )
        {
          v53 = *v49 & ~v44;
          v49 += v29;
          *v1 = v53 | v44 & *v1;
          v1 += (int)v9;
        }
      }
      else
      {
        for ( ; v45; --v45 )
        {
          v52 = *v49;
          v49 += v59;
          *v1 = v44 & *v1 | ~v44 & (v52 >> v55);
          v1 += (int)v9;
        }
      }
    }
    else
    {
      for ( ; v45; --v45 )
      {
        v50 = v49[1];
        v51 = *v49;
        v49 += v59;
        *v1 = v44 & *v1 | ~v44 & ((v51 << v5) | (v50 >> v55));
        v1 += (int)v9;
      }
    }
  }
}

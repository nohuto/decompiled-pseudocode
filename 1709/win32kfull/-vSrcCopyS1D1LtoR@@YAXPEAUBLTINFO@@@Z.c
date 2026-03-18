/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00BCB80
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  _BYTE *v1; // rdi
  int v2; // r8d
  struct BLTINFO *v3; // rsi
  int v4; // ebx
  int v5; // eax
  int v6; // r12d
  int v7; // edx
  char v8; // r13
  __int64 v9; // r15
  int v10; // ebp
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // ebp
  _BYTE *v15; // rsi
  char *v16; // rbx
  size_t v17; // r8
  int v18; // r9d
  int v19; // r10d
  __int64 v20; // r14
  size_t v21; // r15
  int v22; // r8d
  int v23; // r10d
  int v24; // r11d
  int v25; // r14d
  int v26; // r8d
  int v27; // ecx
  __int64 v28; // r9
  int v29; // ecx
  unsigned __int8 *v30; // r9
  int v31; // edx
  int v32; // r12d
  char v33; // al
  int v34; // r8d
  _BYTE *v35; // r9
  unsigned __int8 *v36; // r10
  unsigned __int8 v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rax
  char *v40; // r9
  char v41; // r8
  char v42; // al
  char v43; // r8
  unsigned __int8 v44; // dl
  unsigned __int8 v45; // dl
  char v46; // dl
  unsigned __int8 v47; // al
  __int64 v48; // rdx
  __int64 v49; // rax
  char *v50; // r9
  char v51; // r8
  char v52; // al
  __int64 v53; // rax
  __int64 v54; // rbx
  int i; // ecx
  char v56; // al
  unsigned __int8 v57; // dl
  unsigned __int8 v58; // al
  unsigned __int8 v59; // dl
  unsigned __int8 v60; // dl
  unsigned __int8 v61; // cl
  unsigned __int8 v62; // dl
  unsigned __int8 v63; // al
  unsigned __int8 v64; // dl
  char v65; // r11
  int v66; // r12d
  char v67; // r14
  unsigned __int8 v68; // dl
  char v69; // dl
  unsigned __int8 v70; // al
  unsigned __int8 v71; // cl
  int v72; // [rsp+20h] [rbp-88h]
  char v73; // [rsp+24h] [rbp-84h]
  int v74; // [rsp+28h] [rbp-80h]
  int v75; // [rsp+2Ch] [rbp-7Ch]
  char v76; // [rsp+30h] [rbp-78h]
  int v77; // [rsp+38h] [rbp-70h]
  BOOL v78; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v79; // [rsp+40h] [rbp-68h]
  __int64 v80; // [rsp+40h] [rbp-68h]
  __int64 v81; // [rsp+40h] [rbp-68h]
  int v82; // [rsp+48h] [rbp-60h]
  __int64 v83; // [rsp+50h] [rbp-58h]
  __int64 v85; // [rsp+B8h] [rbp+10h]
  __int64 v86; // [rsp+B8h] [rbp+10h]
  int v87; // [rsp+C0h] [rbp+18h]
  int v88; // [rsp+C8h] [rbp+20h]

  v1 = 0LL;
  v2 = *((_DWORD *)a1 + 12);
  v3 = a1;
  v78 = 1;
  v4 = v2 & 7;
  v5 = *((_DWORD *)a1 + 14);
  v74 = v4;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v7 = v5 & 7;
  v8 = (v2 & 7) - (v5 & 7);
  v77 = v7;
  if ( v4 < v7 )
    v8 += 8;
  v9 = *((int *)a1 + 11);
  v10 = *((_DWORD *)a1 + 10);
  v76 = 8 - v8;
  v82 = *((_DWORD *)a1 + 7);
  v75 = *((_DWORD *)a1 + 11);
  v72 = v10;
  v11 = v5 + v82;
  v73 = v5 + v82;
  v87 = v5 >> 3;
  v88 = (v5 + v82) >> 3;
  if ( v88 != v5 >> 3 )
  {
    v12 = *((_QWORD *)a1 + 2);
    v13 = v10;
    v14 = *((_DWORD *)a1 + 8);
    v1 = (_BYTE *)(v12 + ((__int64)v11 >> 3));
    v15 = (_BYTE *)(v12 + ((__int64)(v5 + 7) >> 3));
    v16 = (char *)(*((_QWORD *)a1 + 1) + ((__int64)(v2 + (-v7 & 7)) >> 3));
    v17 = (unsigned int)((v11 >> 3) - ((v5 + 7) >> 3));
    v79 = v17;
    v18 = v9 - v17;
    v19 = v13 - v17;
    if ( v8 && v6 && v6 != 3 )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 2 || !v14 )
          goto LABEL_12;
        v48 = (int)v17;
        v49 = v18;
        v81 = (int)v17;
        v86 = v18;
        do
        {
          v50 = &v16[v48];
          --v14;
          v51 = *v16 << v8;
          if ( v16 != &v16[v48] )
          {
            do
            {
              v52 = ~(v51 | ((unsigned __int8)*++v16 >> v76));
              v51 = *v16 << v8;
              *v15++ = v52;
            }
            while ( v16 != v50 );
            v49 = v86;
            v48 = v81;
          }
          v15 += v49;
          v16 += v19;
        }
        while ( v14 );
        goto LABEL_11;
      }
      if ( !v14 )
        goto LABEL_12;
      v38 = (int)v17;
      v39 = v18;
      v80 = (int)v17;
      v85 = v18;
      do
      {
        v40 = &v16[v38];
        --v14;
        v41 = *v16 << v8;
        if ( v16 != &v16[v38] )
        {
          do
          {
            v42 = v41 | ((unsigned __int8)*++v16 >> v76);
            v43 = *v16;
            *v15++ = v42;
            v41 = v43 << v8;
          }
          while ( v16 != v40 );
          v39 = v85;
          v38 = v80;
        }
        v15 += v39;
        v16 += v19;
      }
      while ( v14 );
      goto LABEL_42;
    }
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( v14 )
        {
          v20 = v9;
          v21 = (int)v17;
          do
          {
            memmove(v15, v16, v21);
            v15 += v20;
            v16 += v72;
            --v14;
          }
          while ( v14 );
          LODWORD(v9) = v75;
          goto LABEL_11;
        }
LABEL_12:
        LOBYTE(v11) = v73;
        v3 = a1;
        v10 = v72;
        v4 = v74;
        goto LABEL_13;
      }
      if ( v6 == 2 )
      {
        for ( ; v14; v16 += v19 )
        {
          --v14;
          for ( i = v17; i; --i )
          {
            v56 = *v16++;
            *v15++ = ~v56;
          }
          v15 += v18;
        }
        goto LABEL_12;
      }
      if ( v6 != 3 )
        goto LABEL_12;
    }
    if ( !v14 )
      goto LABEL_12;
    v53 = v18;
    v83 = v18;
    do
    {
      --v14;
      if ( (_DWORD)v17 )
      {
        LOBYTE(v7) = -(v6 != 0);
        v54 = (unsigned int)v17;
        memset(v15, v7, v17);
        v17 = v79;
        v15 += v54;
        v53 = v83;
      }
      v15 += v53;
    }
    while ( v14 );
LABEL_42:
    LODWORD(v9) = v75;
LABEL_11:
    v7 = v77;
    goto LABEL_12;
  }
LABEL_13:
  v22 = v87;
  v23 = v88;
  v24 = 255 >> v7;
  if ( v88 == v87 )
  {
    LOBYTE(v24) = (-1 << (8 - (v11 & 7))) & v24;
    v78 = v4 + v82 > 8;
  }
  if ( v7 | (v88 == v87) )
  {
    v34 = *((_DWORD *)v3 + 8);
    v35 = (_BYTE *)(*((_QWORD *)v3 + 2) + ((__int64)*((int *)v3 + 14) >> 3));
    v36 = (unsigned __int8 *)(*((_QWORD *)v3 + 1) + ((__int64)*((int *)v3 + 12) >> 3));
    switch ( v6 )
    {
      case 0:
        if ( v34 )
        {
          v65 = ~(_BYTE)v24;
          do
          {
            *v35 &= v65;
            v35 += (int)v9;
            --v34;
          }
          while ( v34 );
        }
        break;
      case 1:
        if ( v4 >= v7 )
        {
          if ( v4 <= v7 )
          {
            for ( ; v34; --v34 )
            {
              v37 = *v36;
              v36 += v10;
              *v35 = ~(_BYTE)v24 & *v35 | v24 & v37;
              v35 += (int)v9;
            }
            break;
          }
          if ( v78 )
          {
            if ( !v34 )
              break;
            do
            {
              v62 = v36[1];
              v63 = *v36;
              v36 += v10;
              *v35 = ~(_BYTE)v24 & *v35 | v24 & ((v63 << v8) | (v62 >> v76));
              v35 += (int)v9;
              --v34;
            }
            while ( v34 );
            goto LABEL_82;
          }
          if ( !v34 )
            break;
          do
          {
            v64 = *v36;
            v36 += v10;
            *v35 = ~(_BYTE)v24 & *v35 | v24 & (v64 << v8);
            v35 += (int)v9;
            --v34;
          }
          while ( v34 );
LABEL_85:
          LODWORD(v9) = v75;
          break;
        }
        if ( v34 )
        {
          do
          {
            v45 = *v36;
            v36 += v10;
            *v35 = ~(_BYTE)v24 & *v35 | v24 & (v45 >> v76);
            v35 += (int)v9;
            --v34;
          }
          while ( v34 );
LABEL_48:
          LODWORD(v9) = v75;
        }
        break;
      case 2:
        if ( v4 <= v7 )
        {
          if ( v4 >= v7 )
          {
            for ( ; v34; --v34 )
            {
              v61 = *v36;
              v36 += v10;
              *v35 = ~(_BYTE)v24 & *v35 | v24 & ~v61;
              v35 += (int)v9;
            }
            break;
          }
          if ( v34 )
          {
            do
            {
              v60 = *v36;
              v36 += v10;
              *v35 = ~(_BYTE)v24 & *v35 | v24 & ~(v60 >> v76);
              v35 += (int)v9;
              --v34;
            }
            while ( v34 );
            goto LABEL_48;
          }
        }
        else
        {
          if ( !v78 )
          {
            if ( !v34 )
              break;
            do
            {
              v59 = *v36;
              v36 += v10;
              *v35 = ~(_BYTE)v24 & *v35 | v24 & ~(v59 << v8);
              v35 += (int)v9;
              --v34;
            }
            while ( v34 );
            goto LABEL_85;
          }
          if ( v34 )
          {
            do
            {
              v57 = v36[1];
              v58 = *v36;
              v36 += v10;
              *v35 = ~(_BYTE)v24 & *v35 | v24 & ~((v58 << v8) | (v57 >> v76));
              v35 += (int)v9;
              --v34;
            }
            while ( v34 );
LABEL_82:
            LODWORD(v9) = v75;
            v10 = v72;
          }
        }
        break;
      default:
        if ( v6 == 3 && v34 )
        {
          do
          {
            *v35 |= v24;
            v35 += (int)v9;
            --v34;
          }
          while ( v34 );
        }
        break;
    }
    v22 = v87;
    v23 = v88;
  }
  v25 = 255 >> ((*((_BYTE *)a1 + 56) + v82) & 7);
  if ( (v73 & 7) != 0 && v23 != v22 )
  {
    v26 = *((_DWORD *)a1 + 8);
    v27 = *((_DWORD *)a1 + 13) - 1;
    v28 = v27;
    v29 = v27 & 7;
    v30 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + (v28 >> 3));
    v31 = (v73 - 1) & 7;
    if ( v6 )
    {
      v32 = v6 - 1;
      if ( v32 )
      {
        v66 = v32 - 1;
        if ( v66 )
        {
          if ( v66 == 1 && v26 )
          {
            v67 = ~(_BYTE)v25;
            do
            {
              *v1 |= v67;
              v1 += (int)v9;
              --v26;
            }
            while ( v26 );
          }
        }
        else if ( v29 <= v31 )
        {
          if ( v29 >= v31 )
          {
            for ( ; v26; --v26 )
            {
              v71 = *v30;
              v30 += v10;
              *v1 = v25 & *v1 | ~(v25 | v71);
              v1 += (int)v9;
            }
          }
          else
          {
            for ( ; v26; --v26 )
            {
              v69 = *(v30 - 1);
              v70 = *v30;
              v30 += v10;
              *v1 = v25 & *v1 | ~(v25 | (v70 >> v76) | (v69 << v8));
              v1 += (int)v9;
            }
          }
        }
        else
        {
          for ( ; v26; --v26 )
          {
            v68 = *v30;
            v30 += v10;
            *v1 = v25 & *v1 | ~(v25 | (v68 << v8));
            v1 += (int)v9;
          }
        }
      }
      else if ( v29 > v31 )
      {
        for ( ; v26; --v26 )
        {
          v44 = *v30;
          v30 += v10;
          *v1 = v25 & *v1 | ~(_BYTE)v25 & (v44 << v8);
          v1 += (int)v9;
        }
      }
      else if ( v29 < v31 )
      {
        for ( ; v26; --v26 )
        {
          v46 = *(v30 - 1);
          v47 = *v30;
          v30 += v10;
          *v1 = v25 & *v1 | ~(_BYTE)v25 & ((v47 >> v76) | (v46 << v8));
          v1 += (int)v9;
        }
      }
      else
      {
        for ( ; v26; --v26 )
        {
          v33 = ~(_BYTE)v25 & *v30;
          v30 += v10;
          *v1 = v33 | v25 & *v1;
          v1 += (int)v9;
        }
      }
    }
    else
    {
      for ( ; v26; --v26 )
      {
        *v1 &= v25;
        v1 += (int)v9;
      }
    }
  }
}

/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00AAE10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  _BYTE *v1; // rdi
  struct BLTINFO *v2; // r10
  int v3; // ebx
  BOOL v4; // r14d
  int v5; // eax
  int v6; // r12d
  int v7; // edx
  char v8; // r13
  int v9; // r15d
  int v10; // ebp
  int v11; // ebp
  _BYTE *v12; // r14
  size_t v13; // r8
  char *v14; // rbx
  int v15; // r9d
  int v16; // r11d
  __int64 v17; // rsi
  size_t v18; // r15
  int v19; // r9d
  int v20; // r11d
  int v21; // esi
  int v22; // ecx
  __int64 v23; // r9
  int v24; // ecx
  unsigned __int8 *v25; // r9
  int v26; // r8d
  int v27; // edx
  int v28; // r12d
  char v29; // al
  _BYTE *v30; // r9
  int v31; // r8d
  unsigned __int8 *v32; // r10
  unsigned __int8 v33; // cl
  __int64 v34; // rdx
  __int64 v35; // rax
  char *v36; // r9
  char v37; // r8
  char v38; // al
  char v39; // r8
  unsigned __int8 v40; // dl
  char v41; // dl
  unsigned __int8 v42; // al
  unsigned __int8 v43; // dl
  __int64 v44; // rdx
  __int64 v45; // rax
  char *v46; // r9
  char v47; // r8
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rbx
  int i; // ecx
  char v52; // al
  unsigned __int8 v53; // dl
  unsigned __int8 v54; // al
  unsigned __int8 v55; // dl
  unsigned __int8 v56; // dl
  unsigned __int8 v57; // cl
  unsigned __int8 v58; // dl
  unsigned __int8 v59; // al
  unsigned __int8 v60; // dl
  char v61; // r11
  int v62; // r12d
  char v63; // si
  unsigned __int8 v64; // dl
  char v65; // dl
  unsigned __int8 v66; // al
  unsigned __int8 v67; // cl
  int v68; // [rsp+20h] [rbp-88h]
  int v69; // [rsp+28h] [rbp-80h]
  char v70; // [rsp+2Ch] [rbp-7Ch]
  int v71; // [rsp+34h] [rbp-74h]
  unsigned int v72; // [rsp+38h] [rbp-70h]
  __int64 v73; // [rsp+38h] [rbp-70h]
  __int64 v74; // [rsp+38h] [rbp-70h]
  int v75; // [rsp+40h] [rbp-68h]
  char v76; // [rsp+44h] [rbp-64h]
  int v77; // [rsp+48h] [rbp-60h]
  __int64 v78; // [rsp+50h] [rbp-58h]
  __int64 v80; // [rsp+B8h] [rbp+10h]
  __int64 v81; // [rsp+B8h] [rbp+10h]
  int v82; // [rsp+C0h] [rbp+18h]
  int v83; // [rsp+C8h] [rbp+20h]

  v1 = 0LL;
  v2 = a1;
  v3 = *((_DWORD *)a1 + 12) & 7;
  v4 = 1;
  v5 = *((_DWORD *)a1 + 14);
  v68 = v3;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v7 = v5 & 7;
  v8 = (*((_BYTE *)a1 + 48) & 7) - (v5 & 7);
  v71 = v7;
  if ( v3 < v7 )
    v8 += 8;
  v9 = *((_DWORD *)a1 + 11);
  v10 = *((_DWORD *)a1 + 10);
  v70 = 8 - v8;
  v75 = *((_DWORD *)a1 + 7);
  v69 = v9;
  v83 = v10;
  v76 = v5 + v75;
  v82 = v5 >> 3;
  v77 = (v5 + v75) >> 3;
  if ( v77 != v5 >> 3 )
  {
    v11 = *((_DWORD *)a1 + 8);
    v1 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)(v5 + v75) >> 3));
    v12 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)(v5 + 7) >> 3));
    v13 = (unsigned int)((_DWORD)v1 - (_DWORD)v12);
    v14 = (char *)(*((_QWORD *)a1 + 1) + ((__int64)(*((_DWORD *)a1 + 12) + (-v7 & 7)) >> 3));
    v15 = v9 - v13;
    v16 = *((_DWORD *)a1 + 10) - v13;
    v72 = (_DWORD)v1 - (_DWORD)v12;
    if ( v8 && v6 && v6 != 3 )
    {
      if ( v6 == 1 )
      {
        if ( !v11 )
          goto LABEL_13;
        v34 = (int)v13;
        v35 = v15;
        v73 = (int)v13;
        v80 = v15;
        do
        {
          v36 = &v14[v34];
          --v11;
          v37 = *v14 << v8;
          if ( v14 != &v14[v34] )
          {
            do
            {
              v38 = v37 | ((unsigned __int8)*++v14 >> v70);
              v39 = *v14;
              *v12++ = v38;
              v37 = v39 << v8;
            }
            while ( v14 != v36 );
            v35 = v80;
            v34 = v73;
          }
          v12 += v35;
          v14 += v16;
        }
        while ( v11 );
      }
      else
      {
        if ( v6 != 2 || !v11 )
          goto LABEL_13;
        v44 = (int)v13;
        v45 = v15;
        v74 = (int)v13;
        v81 = v15;
        do
        {
          v46 = &v14[v44];
          --v11;
          v47 = *v14 << v8;
          if ( v14 != &v14[v44] )
          {
            do
            {
              v48 = ~(v47 | ((unsigned __int8)*++v14 >> v70));
              v47 = *v14 << v8;
              *v12++ = v48;
            }
            while ( v14 != v46 );
            v45 = v81;
            v44 = v74;
          }
          v12 += v45;
          v14 += v16;
        }
        while ( v11 );
      }
    }
    else
    {
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          if ( !v11 )
          {
LABEL_13:
            v4 = 1;
            v10 = v83;
            v3 = v68;
            goto LABEL_14;
          }
          v17 = *((int *)a1 + 11);
          v18 = (int)v13;
          do
          {
            memmove(v12, v14, v18);
            v12 += v17;
            v14 += v83;
            --v11;
          }
          while ( v11 );
          v9 = v69;
          goto LABEL_11;
        }
        if ( v6 == 2 )
        {
          if ( !v11 )
            goto LABEL_13;
          do
          {
            --v11;
            for ( i = v13; i; --i )
            {
              v52 = *v14++;
              *v12++ = ~v52;
            }
            v12 += v15;
            v14 += v16;
          }
          while ( v11 );
          goto LABEL_12;
        }
        if ( v6 != 3 )
          goto LABEL_13;
      }
      if ( !v11 )
        goto LABEL_13;
      v49 = v15;
      v78 = v15;
      do
      {
        --v11;
        if ( (_DWORD)v13 )
        {
          LOBYTE(v7) = -(v6 != 0);
          v50 = (unsigned int)v13;
          memset(v12, v7, v13);
          v13 = v72;
          v12 += v50;
          v49 = v78;
        }
        v12 += v49;
      }
      while ( v11 );
    }
LABEL_11:
    v7 = v71;
LABEL_12:
    v2 = a1;
    goto LABEL_13;
  }
LABEL_14:
  v19 = v82;
  v20 = 255 >> v7;
  if ( v77 == v82 )
  {
    LOBYTE(v20) = (-1 << (8 - (v76 & 7))) & v20;
    v4 = v3 + v75 > 8;
  }
  if ( v7 | (v77 == v82) )
  {
    v30 = (_BYTE *)(*((_QWORD *)v2 + 2) + ((__int64)*((int *)v2 + 14) >> 3));
    v31 = *((_DWORD *)a1 + 8);
    v32 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    switch ( v6 )
    {
      case 0:
        if ( v31 )
        {
          v61 = ~(_BYTE)v20;
          do
          {
            *v30 &= v61;
            v30 += v9;
            --v31;
          }
          while ( v31 );
        }
        break;
      case 1:
        if ( v3 >= v7 )
        {
          if ( v3 <= v7 )
          {
            for ( ; v31; --v31 )
            {
              v33 = *v32;
              v32 += v10;
              *v30 = ~(_BYTE)v20 & *v30 | v20 & v33;
              v30 += v9;
            }
            break;
          }
          if ( v4 )
          {
            if ( !v31 )
              break;
            do
            {
              v58 = v32[1];
              v59 = *v32;
              v32 += v10;
              *v30 = ~(_BYTE)v20 & *v30 | v20 & ((v59 << v8) | (v58 >> v70));
              v30 += v9;
              --v31;
            }
            while ( v31 );
            goto LABEL_83;
          }
          if ( !v31 )
            break;
          do
          {
            v60 = *v32;
            v32 += v10;
            *v30 = ~(_BYTE)v20 & *v30 | v20 & (v60 << v8);
            v30 += v9;
            --v31;
          }
          while ( v31 );
LABEL_86:
          v9 = v69;
          break;
        }
        if ( v31 )
        {
          do
          {
            v43 = *v32;
            v32 += v10;
            *v30 = ~(_BYTE)v20 & *v30 | v20 & (v43 >> v70);
            v30 += v9;
            --v31;
          }
          while ( v31 );
LABEL_52:
          v9 = v69;
        }
        break;
      case 2:
        if ( v3 <= v7 )
        {
          if ( v3 >= v7 )
          {
            for ( ; v31; --v31 )
            {
              v57 = *v32;
              v32 += v10;
              *v30 = ~(_BYTE)v20 & *v30 | v20 & ~v57;
              v30 += v9;
            }
            break;
          }
          if ( v31 )
          {
            do
            {
              v56 = *v32;
              v32 += v10;
              *v30 = ~(_BYTE)v20 & *v30 | v20 & ~(v56 >> v70);
              v30 += v9;
              --v31;
            }
            while ( v31 );
            goto LABEL_52;
          }
        }
        else
        {
          if ( !v4 )
          {
            if ( !v31 )
              break;
            do
            {
              v55 = *v32;
              v32 += v10;
              *v30 = ~(_BYTE)v20 & *v30 | v20 & ~(v55 << v8);
              v30 += v9;
              --v31;
            }
            while ( v31 );
            goto LABEL_86;
          }
          if ( v31 )
          {
            do
            {
              v53 = v32[1];
              v54 = *v32;
              v32 += v10;
              *v30 = ~(_BYTE)v20 & *v30 | v20 & ~((v54 << v8) | (v53 >> v70));
              v30 += v9;
              --v31;
            }
            while ( v31 );
LABEL_83:
            v9 = v69;
            v10 = v83;
          }
        }
        break;
      default:
        if ( v6 == 3 && v31 )
        {
          do
          {
            *v30 |= v20;
            v30 += v9;
            --v31;
          }
          while ( v31 );
        }
        break;
    }
    v19 = v82;
  }
  v21 = 255 >> ((*((_BYTE *)a1 + 56) + v75) & 7);
  if ( (v76 & 7) != 0 && v77 != v19 )
  {
    v22 = *((_DWORD *)a1 + 13) - 1;
    v23 = v22;
    v24 = v22 & 7;
    v25 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + (v23 >> 3));
    v26 = *((_DWORD *)a1 + 8);
    v27 = (v76 - 1) & 7;
    if ( v6 )
    {
      v28 = v6 - 1;
      if ( v28 )
      {
        v62 = v28 - 1;
        if ( v62 )
        {
          if ( v62 == 1 && v26 )
          {
            v63 = ~(_BYTE)v21;
            do
            {
              *v1 |= v63;
              v1 += v9;
              --v26;
            }
            while ( v26 );
          }
        }
        else if ( v24 <= v27 )
        {
          if ( v24 >= v27 )
          {
            for ( ; v26; --v26 )
            {
              v67 = *v25;
              v25 += v10;
              *v1 = v21 & *v1 | ~(v21 | v67);
              v1 += v9;
            }
          }
          else
          {
            for ( ; v26; --v26 )
            {
              v65 = *(v25 - 1);
              v66 = *v25;
              v25 += v10;
              *v1 = v21 & *v1 | ~(v21 | (v66 >> v70) | (v65 << v8));
              v1 += v9;
            }
          }
        }
        else
        {
          for ( ; v26; --v26 )
          {
            v64 = *v25;
            v25 += v10;
            *v1 = v21 & *v1 | ~(v21 | (v64 << v8));
            v1 += v9;
          }
        }
      }
      else if ( v24 > v27 )
      {
        for ( ; v26; --v26 )
        {
          v40 = *v25;
          v25 += v10;
          *v1 = v21 & *v1 | ~(_BYTE)v21 & (v40 << v8);
          v1 += v9;
        }
      }
      else if ( v24 < v27 )
      {
        for ( ; v26; --v26 )
        {
          v41 = *(v25 - 1);
          v42 = *v25;
          v25 += v10;
          *v1 = v21 & *v1 | ~(_BYTE)v21 & ((v42 >> v70) | (v41 << v8));
          v1 += v9;
        }
      }
      else
      {
        for ( ; v26; --v26 )
        {
          v29 = ~(_BYTE)v21 & *v25;
          v25 += v10;
          *v1 = v29 | v21 & *v1;
          v1 += v9;
        }
      }
    }
    else
    {
      for ( ; v26; --v26 )
      {
        *v1 &= v21;
        v1 += v9;
      }
    }
  }
}

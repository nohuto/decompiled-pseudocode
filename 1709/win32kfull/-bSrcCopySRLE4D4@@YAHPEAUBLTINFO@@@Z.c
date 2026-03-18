/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02A5F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  char *v2; // r11
  __int64 v3; // rdi
  int v4; // r15d
  int v5; // edx
  int v6; // r12d
  int v7; // ebp
  int v8; // r8d
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // r13d
  unsigned int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rax
  char v17; // r9
  unsigned int v18; // r15d
  unsigned int v19; // edx
  unsigned __int8 *v20; // r11
  unsigned __int64 v21; // r14
  unsigned int v22; // r15d
  BOOL v23; // r13d
  unsigned int v24; // ecx
  char v25; // al
  char v26; // cl
  unsigned int v27; // ebp
  unsigned __int64 v28; // rax
  char v29; // cl
  char v30; // cl
  __int64 v31; // rsi
  unsigned int v32; // r14d
  unsigned __int64 v33; // rax
  char v34; // dl
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r11
  unsigned int j; // r14d
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  int v40; // eax
  unsigned __int8 *v41; // r11
  int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rax
  int v45; // eax
  int v46; // r13d
  char v47; // bp
  char v48; // r14
  __int64 v49; // rax
  char v50; // cl
  char v51; // bp
  char v52; // bp
  unsigned int v53; // r8d
  unsigned int i; // edx
  __int64 v55; // rax
  unsigned int v56; // [rsp+0h] [rbp-78h]
  unsigned int v57; // [rsp+4h] [rbp-74h]
  __int64 v58; // [rsp+8h] [rbp-70h]
  int v59; // [rsp+10h] [rbp-68h]
  int v60; // [rsp+14h] [rbp-64h]
  int v61; // [rsp+18h] [rbp-60h]
  int v62; // [rsp+1Ch] [rbp-5Ch]
  int v63; // [rsp+20h] [rbp-58h]
  __int64 v64; // [rsp+28h] [rbp-50h]
  int v66; // [rsp+88h] [rbp+10h]
  int v67; // [rsp+90h] [rbp+18h]
  unsigned int v68; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 15);
  v7 = *((_DWORD *)a1 + 24);
  v59 = *((_DWORD *)a1 + 11);
  v62 = *((_DWORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 32);
  v61 = v7;
  v57 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 22);
  v67 = v10;
  v60 = v5;
  v58 = *(_QWORD *)(v9 + 16);
  v11 = *((_DWORD *)v1 + 25);
  v66 = v11;
  if ( v6 < v5 )
    return 1LL;
  v13 = (unsigned int)v10 >> 1;
  v14 = (unsigned int)(v7 - 1) >> 1;
  v56 = (unsigned int)v10 >> 1;
  v68 = v14;
  v15 = (unsigned int)(v8 >> 1);
  v63 = v7 & 1;
  if ( v6 >= v11 )
  {
    v17 = (char)a1;
  }
  else
  {
    if ( (unsigned int)v15 < v13 )
    {
      v16 = v13;
    }
    else
    {
      v16 = v14;
      if ( (unsigned int)v15 <= v14 )
        v16 = (unsigned int)v15;
    }
    v17 = *(_BYTE *)(v16 + v3);
    v11 = *((_DWORD *)v1 + 25);
  }
  v18 = v4 + 2;
  if ( v18 <= v57 )
  {
    v64 = v7 & 1;
    while ( 1 )
    {
      v19 = (unsigned __int8)*v2;
      v20 = (unsigned __int8 *)(v2 + 1);
      v21 = *v20;
      v2 = (char *)(v20 + 1);
      if ( !v19 )
        break;
      if ( v6 < v11 && v8 < v7 )
      {
        if ( (int)(v19 + v8) > v10 )
        {
          if ( v8 < v10 )
          {
            LODWORD(v15) = v13;
            v45 = v10 - v8;
            v8 = v10;
            v19 -= v45;
          }
          if ( (int)(v19 + v8) <= v7 )
          {
            v46 = 0;
          }
          else
          {
            v46 = v8 + v19 - v7;
            v19 = v7 - v8;
          }
          v47 = *(_BYTE *)(v58 + 4 * (v21 >> 4));
          v48 = *(_BYTE *)(v58 + 4 * (v21 & 0xF));
          if ( (v8 & 1) != 0 )
          {
            v49 = (unsigned int)v15;
            v50 = v17 ^ v47;
            v51 = v48 ^ v47;
            LODWORD(v15) = v15 + 1;
            ++v8;
            --v19;
            *(_BYTE *)(v49 + v3) = v17 ^ v50 & 0xF;
            v48 ^= v51;
            v47 = v48 ^ v51;
          }
          v52 = 16 * v47;
          v53 = v19 + v8;
          v17 = v52 | v48 & 0xF;
          for ( i = v19 >> 1; i; --i )
          {
            v55 = (unsigned int)v15;
            LODWORD(v15) = v15 + 1;
            *(_BYTE *)(v55 + v3) = v17;
          }
          if ( (v53 & 1) != 0 )
            v17 = v52 | v52 & 0xF | v48 & 0xF;
          v8 = v46 + v53;
LABEL_92:
          v10 = v67;
LABEL_93:
          v13 = v56;
          goto LABEL_94;
        }
        v11 = v66;
      }
      v8 += v19;
LABEL_97:
      v18 += 2;
      v15 = (unsigned int)(v8 >> 1);
      if ( v18 > v57 )
        return 0LL;
      v7 = v61;
    }
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
      {
        if ( v6 < v66 )
        {
          if ( v8 >= v10 && v8 < v7 && (v8 & 1) != 0 )
          {
            *(_BYTE *)(v15 + v3) = v17 ^ (v17 ^ *(_BYTE *)(v15 + v3)) & 0xF;
          }
          else if ( v63 && v8 >= v7 )
          {
            *(_BYTE *)(v68 + v3) = v17 ^ (v17 ^ *(_BYTE *)(v68 + v3)) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v21 != 2 )
      {
        v22 = ((unsigned int)(v21 + 1) >> 1) + v18;
        if ( v22 > v57 )
          return 0LL;
        v23 = (((_DWORD)v21 + 1) & 2) != 0;
        if ( v6 < v66 && v8 < v7 && (int)v21 + v8 > v67 )
        {
          if ( v8 < v67 )
          {
            v24 = v67 - v8;
            v15 = v56;
            LODWORD(v21) = v21 - (v67 - v8);
            v8 = v67;
            v2 += (unsigned __int64)v24 >> 1;
            if ( (v24 & 1) != 0 )
            {
              v25 = *v2++;
              v26 = *(_BYTE *)(v58 + 4LL * (v25 & 0xF));
              if ( (v67 & 1) != 0 )
              {
                v17 ^= (v17 ^ v26) & 0xF;
                *(_BYTE *)(v56 + v3) = v17;
                v15 = v56 + 1;
              }
              else
              {
                v17 = v17 & 0xF | (16 * v26);
              }
              v10 = v67;
              v8 = v67 + 1;
              LODWORD(v21) = v21 - 1;
              if ( !(_DWORD)v21 )
              {
                v18 = v23 + v22;
                v2 += v23;
                goto LABEL_93;
              }
            }
          }
          if ( (int)v21 + v8 <= v7 )
          {
            v27 = 0;
          }
          else
          {
            v27 = v8 + v21 - v7;
            LODWORD(v21) = v61 - v8;
          }
          if ( (_DWORD)v21 )
          {
            if ( (v8 & 1) != 0 )
            {
              v28 = (unsigned __int8)*v2;
              v8 += v21;
              v29 = *v2++;
              v17 ^= (v17 ^ *(_BYTE *)(v58 + 4 * (v28 >> 4))) & 0xF;
              v30 = *(_BYTE *)(v58 + 4LL * (v29 & 0xF));
              *(_BYTE *)(v15 + v3) = v17;
              v31 = (unsigned int)(v15 + 1);
              v32 = (unsigned int)(v21 - 1) >> 1;
              if ( v32 )
              {
                do
                {
                  v33 = (unsigned __int8)*v2++;
                  v34 = 16 * v30;
                  v30 = *(_BYTE *)(v58 + 4 * (v33 & 0xF));
                  v17 = v34 | *(_BYTE *)(v58 + 4 * (v33 >> 4)) & 0xF;
                  *(_BYTE *)(v31 + v3) = v17;
                  v31 = (unsigned int)(v31 + 1);
                  --v32;
                }
                while ( v32 );
                v1 = a1;
              }
              if ( (v8 & 1) != 0 )
              {
                v17 = v17 & 0xF | (16 * v30);
                goto LABEL_38;
              }
              v35 = v27;
LABEL_39:
              v36 = (unsigned __int64)&v2[v35 >> 1];
LABEL_40:
              v8 += v27;
LABEL_47:
              v18 = v23 + v22;
              v2 = (char *)(v23 + v36);
              goto LABEL_92;
            }
            v8 += v21;
            for ( j = (unsigned int)v21 >> 1; j; --j )
            {
              v38 = (unsigned __int8)*v2++;
              v17 = *(_BYTE *)(v58 + 4 * (v38 & 0xF)) & 0xF | (16 * *(_BYTE *)(v58 + 4 * (v38 >> 4)));
              *(_BYTE *)(v15 + v3) = v17;
              v15 = (unsigned int)(v15 + 1);
            }
            if ( (v8 & 1) != 0 )
            {
              v17 = v17 & 0xF | (16 * *(_BYTE *)(v58 + 4 * ((unsigned __int64)(unsigned __int8)*v2 >> 4)));
              v36 = (unsigned __int64)&v2[((unsigned __int64)v27 >> 1) + 1];
              goto LABEL_40;
            }
          }
LABEL_38:
          v35 = v27 + 1;
          goto LABEL_39;
        }
        v8 += v21;
        v36 = (unsigned __int64)&v2[(unsigned __int64)(unsigned int)(v21 + 1) >> 1];
        goto LABEL_47;
      }
      if ( v6 >= v66 )
        goto LABEL_53;
      if ( v8 >= v10 && v8 < v7 && (v8 & 1) != 0 )
      {
        *(_BYTE *)(v15 + v3) = v17 ^ (v17 ^ *(_BYTE *)(v15 + v3)) & 0xF;
        goto LABEL_53;
      }
      if ( v64 && v8 >= v7 )
      {
        v39 = v68;
        *(_BYTE *)(v68 + v3) = v17 ^ (v17 ^ *(_BYTE *)(v68 + v3)) & 0xF;
      }
      else
      {
LABEL_53:
        v39 = v68;
      }
      v18 += 2;
      if ( v18 > v57 )
        return 0LL;
      v40 = (unsigned __int8)*v2;
      v41 = (unsigned __int8 *)(v2 + 1);
      v8 += v40;
      v42 = *v41;
      v2 = (char *)(v41 + 1);
      v6 -= v42;
      v3 += v59 * v42;
      if ( v6 < v60 )
      {
        *((_DWORD *)v1 + 34) = v8;
LABEL_110:
        result = 1LL;
        *((_DWORD *)v1 + 33) = v6;
        *((_QWORD *)v1 + 14) = v3;
        *((_QWORD *)v1 + 13) = v2;
        *((_DWORD *)v1 + 31) = v18;
        return result;
      }
      if ( v8 >> 1 < v13 )
      {
        v43 = v13;
      }
      else
      {
        v43 = v39;
        if ( v8 >> 1 <= v39 )
          v43 = v8 >> 1;
      }
      v44 = v43;
      v10 = v67;
      v17 = *(_BYTE *)(v44 + v3);
      goto LABEL_94;
    }
    v11 = v66;
    if ( v6 < v66 )
    {
      if ( v8 >= v10 && v8 < v7 && (v8 & 1) != 0 )
      {
        v17 ^= (v17 ^ *(_BYTE *)(v15 + v3)) & 0xF;
        *(_BYTE *)(v15 + v3) = v17;
LABEL_73:
        v11 = v66;
        v10 = v67;
        goto LABEL_74;
      }
      if ( v64 && v8 >= v7 )
      {
        v17 ^= (v17 ^ *(_BYTE *)(v68 + v3)) & 0xF;
        *(_BYTE *)(v68 + v3) = v17;
        goto LABEL_73;
      }
    }
LABEL_74:
    --v6;
    v3 += v59;
    v8 = v62;
    if ( v6 < v60 )
    {
      *((_DWORD *)v1 + 34) = v62;
      goto LABEL_110;
    }
    if ( v6 < v11 )
    {
      v17 = *(_BYTE *)(v13 + v3);
LABEL_94:
      v11 = v66;
      goto LABEL_97;
    }
    goto LABEL_97;
  }
  return 0LL;
}

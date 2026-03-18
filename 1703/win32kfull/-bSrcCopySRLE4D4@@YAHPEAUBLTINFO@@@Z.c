/*
 * XREFs of ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02A9920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r10
  int v2; // ebp
  char *v3; // r11
  __int64 v4; // rdi
  int v5; // r15d
  int v6; // r13d
  int v7; // r12d
  int v8; // r8d
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // r9
  unsigned int v16; // r15d
  unsigned int v17; // edx
  unsigned __int8 *v18; // r11
  unsigned __int64 v19; // r14
  unsigned int v20; // r15d
  BOOL v21; // edx
  unsigned int v22; // ecx
  char v23; // al
  char v24; // cl
  unsigned int v25; // ebp
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // cl
  __int64 v29; // rsi
  unsigned int v30; // r14d
  char v31; // r9
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned __int64 v34; // rcx
  unsigned int v35; // r14d
  unsigned __int64 v36; // rax
  unsigned int v37; // edx
  int v38; // eax
  unsigned __int8 *v39; // r11
  int v40; // ecx
  int v41; // eax
  char v42; // bp
  char v43; // r14
  __int64 v44; // rax
  char v45; // cl
  char v46; // bp
  char v47; // bp
  unsigned int v48; // r8d
  unsigned int i; // edx
  __int64 v50; // rax
  unsigned int v51; // [rsp+0h] [rbp-78h]
  int v52; // [rsp+4h] [rbp-74h]
  __int64 v53; // [rsp+8h] [rbp-70h]
  int v54; // [rsp+10h] [rbp-68h]
  int v55; // [rsp+14h] [rbp-64h]
  int v56; // [rsp+18h] [rbp-60h]
  int v57; // [rsp+1Ch] [rbp-5Ch]
  int v59; // [rsp+88h] [rbp+10h]
  unsigned int v60; // [rsp+90h] [rbp+18h]
  unsigned int v61; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 22);
  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 30);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 32);
  v54 = *((_DWORD *)a1 + 11);
  v57 = v2;
  v56 = *((_DWORD *)a1 + 14);
  v51 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v55 = *((_DWORD *)a1 + 23);
  v53 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 25);
  v59 = v9;
  if ( v7 < v55 )
    return 1LL;
  v11 = (unsigned int)v2 >> 1;
  v12 = (unsigned int)(v6 - 1) >> 1;
  v61 = (unsigned int)v2 >> 1;
  v60 = v12;
  v13 = (unsigned int)(v8 >> 1);
  if ( v7 >= v9 )
  {
    v15 = (char)a1;
  }
  else
  {
    if ( (unsigned int)v13 < v11 )
    {
      v14 = v11;
    }
    else
    {
      v14 = v12;
      if ( (unsigned int)v13 <= v12 )
        v14 = (unsigned int)v13;
    }
    v15 = *(_BYTE *)(v14 + v4);
    v9 = v59;
  }
  v16 = v5 + 2;
  if ( v16 <= v51 )
  {
    while ( 1 )
    {
      v17 = (unsigned __int8)*v3;
      v18 = (unsigned __int8 *)(v3 + 1);
      v19 = *v18;
      v3 = (char *)(v18 + 1);
      if ( !v17 )
        break;
      if ( v7 < v9 && v8 < v6 )
      {
        if ( (int)(v17 + v8) > v2 )
        {
          if ( v8 < v2 )
          {
            LODWORD(v13) = v11;
            v41 = v2 - v8;
            v8 = v2;
            v17 -= v41;
          }
          if ( (int)(v17 + v8) <= v6 )
          {
            v52 = 0;
          }
          else
          {
            v52 = v8 + v17 - v6;
            v17 = v6 - v8;
          }
          v42 = *(_BYTE *)(v53 + 4 * (v19 >> 4));
          v43 = *(_BYTE *)(v53 + 4 * (v19 & 0xF));
          if ( (v8 & 1) != 0 )
          {
            v44 = (unsigned int)v13;
            v45 = v15 ^ v42;
            v46 = v43 ^ v42;
            LODWORD(v13) = v13 + 1;
            ++v8;
            --v17;
            *(_BYTE *)(v44 + v4) = v15 ^ v45 & 0xF;
            v43 ^= v46;
            v42 = v43 ^ v46;
          }
          v47 = 16 * v42;
          v48 = v17 + v8;
          v15 = v47 | v43 & 0xF;
          for ( i = v17 >> 1; i; --i )
          {
            v50 = (unsigned int)v13;
            LODWORD(v13) = v13 + 1;
            *(_BYTE *)(v50 + v4) = v15;
          }
          if ( (v48 & 1) != 0 )
            v15 = v47 | v47 & 0xF | v43 & 0xF;
          v8 = v52 + v48;
          goto LABEL_90;
        }
        v9 = v59;
      }
      v8 += v17;
LABEL_93:
      v16 += 2;
      v13 = (unsigned int)(v8 >> 1);
      if ( v16 > v51 )
        return 0LL;
      v2 = v57;
      v11 = v61;
    }
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
        if ( v7 < v59 )
        {
          if ( v8 >= v2 && v8 < v6 && (v8 & 1) != 0 )
          {
            *(_BYTE *)(v13 + v4) = v15 ^ (v15 ^ *(_BYTE *)(v13 + v4)) & 0xF;
          }
          else if ( (v6 & 1) != 0 && v8 >= v6 )
          {
            *(_BYTE *)(v60 + v4) = v15 ^ (v15 ^ *(_BYTE *)(v60 + v4)) & 0xF;
          }
        }
        return 0LL;
      }
      if ( (_DWORD)v19 != 2 )
      {
        v20 = ((unsigned int)(v19 + 1) >> 1) + v16;
        if ( v20 > v51 )
          return 0LL;
        v21 = (((_DWORD)v19 + 1) & 2) != 0;
        if ( v7 >= v59 || v8 >= v6 || (int)v19 + v8 <= v2 )
        {
          v8 += v19;
          v3 += (unsigned __int64)(unsigned int)(v19 + 1) >> 1;
          goto LABEL_26;
        }
        if ( v8 < v2 )
        {
          v13 = v61;
          v22 = v2 - v8;
          v8 = v2;
          LODWORD(v19) = v19 - v22;
          v3 += (unsigned __int64)v22 >> 1;
          if ( (v22 & 1) != 0 )
          {
            v23 = *v3++;
            v24 = *(_BYTE *)(v53 + 4LL * (v23 & 0xF));
            if ( (v2 & 1) != 0 )
            {
              v15 ^= (v15 ^ v24) & 0xF;
              *(_BYTE *)(v61 + v4) = v15;
              v13 = v61 + 1;
            }
            else
            {
              v15 = v15 & 0xF | (16 * v24);
            }
            v8 = v2 + 1;
            LODWORD(v19) = v19 - 1;
            if ( !(_DWORD)v19 )
            {
LABEL_26:
              v16 = v21 + v20;
              v3 += v21;
              goto LABEL_90;
            }
          }
        }
        if ( (int)v19 + v8 <= v6 )
        {
          v25 = 0;
        }
        else
        {
          v25 = v8 + v19 - v6;
          LODWORD(v19) = v6 - v8;
        }
        if ( (_DWORD)v19 )
        {
          if ( (v8 & 1) != 0 )
          {
            v8 += v19;
            v26 = (unsigned __int64)(unsigned __int8)*v3 >> 4;
            v27 = *v3++ & 0xF;
            v15 ^= (v15 ^ *(_BYTE *)(v53 + 4 * v26)) & 0xF;
            v28 = *(_BYTE *)(v53 + 4 * v27);
            *(_BYTE *)(v13 + v4) = v15;
            v29 = (unsigned int)(v13 + 1);
            v30 = (unsigned int)(v19 - 1) >> 1;
            if ( v30 )
            {
              do
              {
                v31 = v15 & 0xF | (16 * v28);
                v32 = (unsigned __int8)*v3;
                v33 = *v3++;
                v28 = *(_BYTE *)(v53 + 4LL * (v33 & 0xF));
                v15 = (v31 ^ *(_BYTE *)(v53 + 4 * (v32 >> 4))) & 0xF ^ v31;
                *(_BYTE *)(v29 + v4) = v15;
                v29 = (unsigned int)(v29 + 1);
                --v30;
              }
              while ( v30 );
              v1 = a1;
            }
            if ( (v8 & 1) != 0 )
            {
              v15 = v15 & 0xF | (16 * v28);
              goto LABEL_37;
            }
            v34 = v25;
LABEL_38:
            v3 += v34 >> 1;
LABEL_39:
            v8 += v25;
            goto LABEL_26;
          }
          v8 += v19;
          v35 = (unsigned int)v19 >> 1;
          if ( v35 )
          {
            do
            {
              v36 = (unsigned __int8)*v3++;
              v15 = (16 * *(_BYTE *)(v53 + 4 * (v36 >> 4))) | *(_BYTE *)(v53 + 4 * (v36 & 0xF)) & 0xF;
              *(_BYTE *)(v13 + v4) = v15;
              v13 = (unsigned int)(v13 + 1);
              --v35;
            }
            while ( v35 );
            v1 = a1;
          }
          if ( (v8 & 1) != 0 )
          {
            v15 = v15 & 0xF | (16 * *(_BYTE *)(v53 + 4 * ((unsigned __int64)(unsigned __int8)*v3 >> 4)));
            v3 += ((unsigned __int64)v25 >> 1) + 1;
            goto LABEL_39;
          }
        }
LABEL_37:
        v34 = v25 + 1;
        goto LABEL_38;
      }
      if ( v7 >= v59 )
        goto LABEL_52;
      if ( v8 >= v2 && v8 < v6 && (v8 & 1) != 0 )
      {
        *(_BYTE *)(v13 + v4) = v15 ^ (v15 ^ *(_BYTE *)(v13 + v4)) & 0xF;
        goto LABEL_52;
      }
      if ( (v6 & 1) != 0 && v8 >= v6 )
      {
        v37 = (unsigned int)(v6 - 1) >> 1;
        *(_BYTE *)(v60 + v4) = v15 ^ (v15 ^ *(_BYTE *)(v60 + v4)) & 0xF;
      }
      else
      {
LABEL_52:
        v37 = (unsigned int)(v6 - 1) >> 1;
      }
      v16 += 2;
      if ( v16 > v51 )
        return 0LL;
      v38 = (unsigned __int8)*v3;
      v39 = (unsigned __int8 *)(v3 + 1);
      v8 += v38;
      v40 = *v39;
      v3 = (char *)(v39 + 1);
      v7 -= v40;
      v4 += v54 * v40;
      if ( v7 < v55 )
      {
        *((_DWORD *)v1 + 34) = v8;
LABEL_106:
        result = 1LL;
        *((_DWORD *)v1 + 33) = v7;
        *((_QWORD *)v1 + 14) = v4;
        *((_QWORD *)v1 + 13) = v3;
        *((_DWORD *)v1 + 31) = v16;
        return result;
      }
      if ( v8 >> 1 < v61 )
      {
        v11 = v61;
      }
      else
      {
        v11 = v37;
        if ( v8 >> 1 <= v37 )
          v11 = v8 >> 1;
      }
LABEL_74:
      v15 = *(_BYTE *)(v11 + v4);
LABEL_90:
      v9 = v59;
      goto LABEL_93;
    }
    v9 = v59;
    if ( v7 < v59 )
    {
      if ( v8 >= v2 && v8 < v6 && (v8 & 1) != 0 )
      {
        v15 ^= (v15 ^ *(_BYTE *)(v13 + v4)) & 0xF;
        *(_BYTE *)(v13 + v4) = v15;
LABEL_71:
        v9 = v59;
        v11 = v61;
        goto LABEL_72;
      }
      if ( (v6 & 1) != 0 && v8 >= v6 )
      {
        v15 ^= (v15 ^ *(_BYTE *)(v60 + v4)) & 0xF;
        *(_BYTE *)(v60 + v4) = v15;
        goto LABEL_71;
      }
    }
LABEL_72:
    --v7;
    v4 += v54;
    v8 = v56;
    if ( v7 < v55 )
    {
      *((_DWORD *)v1 + 34) = v56;
      goto LABEL_106;
    }
    if ( v7 < v9 )
      goto LABEL_74;
    goto LABEL_93;
  }
  return 0LL;
}

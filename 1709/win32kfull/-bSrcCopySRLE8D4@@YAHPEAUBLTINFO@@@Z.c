/*
 * XREFs of ?bSrcCopySRLE8D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02A4890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r8
  unsigned __int8 *v2; // rdi
  __int64 v3; // r10
  int v4; // r12d
  int v5; // ebp
  int v6; // r13d
  int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // rax
  char v17; // r9
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  unsigned __int8 *v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // r12d
  int v23; // r15d
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // esi
  __int64 v29; // rax
  unsigned __int8 *v30; // rdi
  char v31; // r9
  __int64 v32; // rax
  unsigned __int8 *v33; // rdi
  int v34; // eax
  unsigned __int8 *v35; // rdi
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  int v39; // r15d
  int v40; // esi
  unsigned int v41; // edx
  unsigned int i; // r14d
  int v43; // [rsp+0h] [rbp-78h]
  unsigned int v44; // [rsp+4h] [rbp-74h]
  int v45; // [rsp+Ch] [rbp-6Ch]
  int v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+18h] [rbp-60h]
  int v49; // [rsp+88h] [rbp+10h]
  unsigned int v50; // [rsp+90h] [rbp+18h]
  int v51; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v51 = *((_DWORD *)a1 + 11);
  v45 = *((_DWORD *)a1 + 14);
  v7 = *((_DWORD *)a1 + 32);
  v43 = *((_DWORD *)a1 + 23);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v9 = *(_QWORD *)a1;
  v10 = *((_DWORD *)a1 + 22);
  v50 = v8;
  v46 = v10;
  v47 = *(_QWORD *)(v9 + 16);
  v11 = *((_DWORD *)v1 + 25);
  v49 = v11;
  if ( v5 < v43 )
    return 1LL;
  v13 = (unsigned int)v10 >> 1;
  v14 = (unsigned int)(v6 - 1) >> 1;
  v44 = (unsigned int)v10 >> 1;
  v15 = (unsigned int)(v7 >> 1);
  if ( v5 >= v11 )
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
  if ( v18 <= v8 )
  {
    while ( 1 )
    {
      v19 = *v2;
      v20 = v2 + 1;
      v21 = *v20;
      v2 = v20 + 1;
      if ( v19 )
      {
        if ( v5 < v11 && v7 < v6 )
        {
          if ( (int)(v19 + v7) > v10 )
          {
            if ( v7 < v10 )
            {
              v19 += v7 - v10;
              v7 = v10;
              v15 = (unsigned int)(v10 >> 1);
            }
            if ( (int)(v19 + v7) <= v6 )
            {
              v39 = 0;
            }
            else
            {
              v39 = v7 + v19 - v6;
              v19 = v6 - v7;
            }
            v40 = *(_DWORD *)(v47 + 4 * v21);
            if ( (v7 & 1) != 0 )
            {
              ++v7;
              *(_BYTE *)(v15 + v3) = v17 ^ (v17 ^ v40) & 0xF;
              v15 = (unsigned int)(v15 + 1);
              --v19;
            }
            v17 = (16 * v40) | v40 & 0xF;
            v41 = v19 + v7;
            for ( i = v19 >> 1; i; --i )
            {
              *(_BYTE *)(v15 + v3) = v17;
              v15 = (unsigned int)(v15 + 1);
            }
            if ( (v41 & 1) != 0 )
              v17 = (16 * v40) | v40 & 0xF;
            v7 = v39 + v41;
            goto LABEL_80;
          }
          v11 = v49;
        }
        v7 += v19;
        goto LABEL_51;
      }
      if ( (_DWORD)v21 )
      {
        if ( (_DWORD)v21 == 1 )
        {
          if ( v5 < v49 )
          {
            if ( v7 >= v10 && v7 < v6 && (v7 & 1) != 0 )
            {
              *(_BYTE *)(v15 + v3) = v17 ^ (v17 ^ *(_BYTE *)(v15 + v3)) & 0xF;
            }
            else if ( (v6 & 1) != 0 && v7 >= v6 )
            {
              *(_BYTE *)(v14 + v3) = v17 ^ (v17 ^ *(_BYTE *)(v14 + v3)) & 0xF;
            }
          }
          return 0LL;
        }
        if ( (_DWORD)v21 != 2 )
        {
          v22 = v21 + v18;
          if ( v22 > v50 )
            return 0LL;
          v23 = v21 & 1;
          if ( v5 >= v49 || v7 >= v6 || (int)v21 + v7 <= v10 )
          {
            v33 = &v2[v21];
            v7 += v21;
          }
          else
          {
            if ( v7 < v10 )
            {
              v24 = (unsigned int)(v10 - v7);
              v15 = (unsigned int)(v10 >> 1);
              LODWORD(v21) = v21 - v24;
              v7 = v10;
              v2 += v24;
            }
            if ( (int)v21 + v7 <= v6 )
            {
              v25 = 0;
            }
            else
            {
              v25 = v7 + v21 - v6;
              LODWORD(v21) = v6 - v7;
            }
            if ( (v7 & 1) != 0 )
            {
              v26 = *v2;
              ++v7;
              ++v2;
              v17 ^= (v17 ^ *(_BYTE *)(v47 + 4 * v26)) & 0xF;
              *(_BYTE *)(v15 + v3) = v17;
              v15 = (unsigned int)(v15 + 1);
              LODWORD(v21) = v21 - 1;
            }
            v27 = v21 + v7;
            v28 = (unsigned int)v21 >> 1;
            if ( v28 )
            {
              do
              {
                v29 = *v2;
                v30 = v2 + 1;
                v31 = *(_BYTE *)(v47 + 4 * v29);
                v32 = *v30;
                v2 = v30 + 1;
                v17 = *(_BYTE *)(v47 + 4 * v32) & 0xF | (16 * v31);
                *(_BYTE *)(v15 + v3) = v17;
                v15 = (unsigned int)(v15 + 1);
                --v28;
              }
              while ( v28 );
              v1 = a1;
            }
            if ( (v27 & 1) != 0 )
              v17 = v17 & 0xF | (16 * *(_BYTE *)(v47 + 4LL * *v2++));
            v33 = &v2[v25];
            v7 = v25 + v27;
          }
          v18 = v23 + v22;
          v2 = &v33[v23];
LABEL_80:
          v14 = (unsigned int)(v6 - 1) >> 1;
LABEL_81:
          v11 = v49;
          goto LABEL_51;
        }
        if ( v5 < v49 )
        {
          if ( v7 >= v10 && v7 < v6 && (v7 & 1) != 0 )
          {
            v17 ^= (v17 ^ *(_BYTE *)(v15 + v3)) & 0xF;
            *(_BYTE *)(v15 + v3) = v17;
          }
          else if ( (v6 & 1) != 0 && v7 >= v6 )
          {
            v17 ^= (v17 ^ *(_BYTE *)(v14 + v3)) & 0xF;
            *(_BYTE *)(v14 + v3) = v17;
          }
        }
        v18 += 2;
        if ( v18 > v50 )
          return 0LL;
        v34 = *v2;
        v35 = v2 + 1;
        v7 += v34;
        v36 = *v35;
        v2 = v35 + 1;
        v5 -= v36;
        v3 += v51 * v36;
        if ( v5 < v43 )
        {
          *((_DWORD *)v1 + 34) = v7;
LABEL_95:
          result = 1LL;
          *((_DWORD *)v1 + 33) = v5;
          *((_QWORD *)v1 + 14) = v3;
          *((_QWORD *)v1 + 13) = v2;
          *((_DWORD *)v1 + 31) = v18;
          return result;
        }
        v37 = v7 >> 1;
        if ( v5 < v49 )
        {
          v38 = v44;
          if ( v37 >= v44 )
          {
            v38 = v14;
            if ( v37 <= v14 )
              v38 = v7 >> 1;
          }
          v17 = *(_BYTE *)(v38 + v3);
        }
        v11 = v49;
        goto LABEL_51;
      }
      v11 = v49;
      if ( v5 < v49 )
      {
        if ( v7 >= v10 && v7 < v6 && (v7 & 1) != 0 )
        {
          v17 ^= (v17 ^ *(_BYTE *)(v15 + v3)) & 0xF;
          *(_BYTE *)(v15 + v3) = v17;
LABEL_61:
          v11 = v49;
          goto LABEL_62;
        }
        if ( (v6 & 1) != 0 && v7 >= v6 )
        {
          v17 ^= (v17 ^ *(_BYTE *)(v14 + v3)) & 0xF;
          *(_BYTE *)(v14 + v3) = v17;
          goto LABEL_61;
        }
      }
LABEL_62:
      --v5;
      v3 += v51;
      v7 = v45;
      if ( v5 < v43 )
      {
        *((_DWORD *)v1 + 34) = v45;
        goto LABEL_95;
      }
      if ( v5 < v11 )
      {
        v17 = *(_BYTE *)(v44 + v3);
        goto LABEL_81;
      }
LABEL_51:
      v18 += 2;
      v15 = (unsigned int)(v7 >> 1);
      if ( v18 > v50 )
        return 0LL;
      v10 = v46;
    }
  }
  return 0LL;
}

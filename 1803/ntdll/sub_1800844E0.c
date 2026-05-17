/*
 * XREFs of sub_1800844E0 @ 0x1800844E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800844E0(_BYTE *a1, int a2, _BYTE *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _BYTE *v6; // r15
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbx
  _BYTE *v9; // r11
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  int v12; // eax
  int v13; // r9d
  bool v14; // sf
  unsigned __int64 v15; // rdi
  char v16; // dl
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rdx
  _BYTE *v20; // rsi
  _DWORD *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned int *v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  char v28; // al
  __int64 v29; // rax
  __int16 v30; // ax
  unsigned __int64 v31; // rdi
  char v32; // dl
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v37; // rdx

  v6 = a1;
  if ( a4 >= 5 )
  {
    v7 = (unsigned __int64)&a3[a4];
    v8 = (unsigned __int64)&a1[a2];
    v9 = 0LL;
    v10 = v7 - 86;
    v11 = v8 - 352;
LABEL_3:
    v12 = *(_DWORD *)a3;
    a3 += 4;
    if ( (unsigned __int64)a1 < v11 && (unsigned __int64)a3 < v10 )
    {
      v13 = 2 * v12 + 1;
      if ( v12 >= 0 )
      {
        while ( 1 )
        {
          if ( v13 < 0 )
          {
            *a1++ = *a3++;
            goto LABEL_12;
          }
          v14 = (v13 & 0x40000000) != 0;
          v13 *= 2;
          if ( v14 )
          {
            *(_WORD *)a1 = *(_WORD *)a3;
            a1 += 2;
            a3 += 2;
            goto LABEL_12;
          }
          v14 = (v13 & 0x40000000) != 0;
          v13 *= 2;
          *(_DWORD *)a1 = *(_DWORD *)a3;
          if ( v14 )
          {
            a1 += 3;
            a3 += 3;
            goto LABEL_12;
          }
          a1 += 4;
          a3 += 4;
          v14 = (v13 & 0x40000000) != 0;
          v13 *= 2;
          if ( v14 )
            goto LABEL_12;
LABEL_10:
          v13 *= 2;
        }
      }
      while ( 1 )
      {
        v15 = *(unsigned __int16 *)a3;
        a3 += 2;
        v16 = v15;
        v17 = (v15 >> 3) + 1;
        v18 = v16 & 7;
        if ( v18 == 7 )
        {
          if ( v9 )
          {
            v22 = (unsigned __int64)(unsigned __int8)*v9 >> 4;
            v9 = 0LL;
          }
          else
          {
            v9 = a3++;
            v22 = *v9 & 0xF;
          }
          if ( v22 == 15 )
          {
            if ( (unsigned __int64)(a3 + 7) >= v10 )
              goto LABEL_71;
            v23 = (unsigned __int8)*a3++;
            if ( v23 == 255 )
            {
              v24 = *(unsigned __int16 *)a3;
              v25 = (unsigned int *)(a3 + 2);
              v26 = v24;
              if ( !*(_WORD *)a3 )
                v24 = *v25;
              a3 += 6;
              if ( v26 )
                a3 = v25;
              if ( v24 < 0x16 || &a1[v24 + 3] < a1 )
                return 3221226050LL;
              v23 = v24 - 22;
            }
            v22 = v23 + 15;
          }
          v18 = v22 + 7;
        }
        v19 = v18 + 3;
        v20 = &a1[-v17];
        if ( &a1[-v17] < v6 )
          return 3221226050LL;
        if ( v17 >= 4 )
        {
LABEL_16:
          *(_DWORD *)a1 = *(_DWORD *)v20;
          *((_DWORD *)a1 + 1) = *((_DWORD *)v20 + 1);
          if ( v19 >= 9 )
          {
            a1 += 8;
            v21 = v20 + 8;
            for ( v19 -= 8LL; ; v19 -= 16LL )
            {
              if ( (unsigned __int64)a1 >= v11 )
                goto LABEL_62;
              *(_DWORD *)a1 = *v21;
              *((_DWORD *)a1 + 1) = v21[1];
              *((_DWORD *)a1 + 2) = v21[2];
              *((_DWORD *)a1 + 3) = v21[3];
              if ( v19 < 17 )
                break;
              a1 += 16;
              v21 += 4;
            }
          }
          a1 += v19;
          goto LABEL_18;
        }
        *a1 = *v20;
        v27 = v17 - 1;
        if ( !v27 )
          break;
        a1[1] = v20[1];
        if ( v27 != 1 )
        {
          v28 = v20[2];
          goto LABEL_43;
        }
        a1 += 2;
        v29 = -2LL;
LABEL_44:
        v19 += v29;
        if ( v19 )
          goto LABEL_16;
LABEL_18:
        if ( v13 >= 0 )
          goto LABEL_10;
LABEL_12:
        v13 *= 2;
        if ( !v13 )
          goto LABEL_3;
      }
      a1[1] = *v20;
      v28 = *v20;
LABEL_43:
      a1[2] = v28;
      v29 = -3LL;
      a1 += 3;
      goto LABEL_44;
    }
LABEL_48:
    v13 = 2 * v12 + 1;
    if ( v12 < 0 )
    {
      while ( 1 )
      {
        if ( a3 == (_BYTE *)v7 )
          goto LABEL_74;
        if ( (unsigned __int64)(a3 + 1) >= v7 )
          break;
        v31 = *(unsigned __int16 *)a3;
        a3 += 2;
        v32 = v31;
        v17 = (v31 >> 3) + 1;
        v33 = v32 & 7;
        if ( v33 == 7 )
        {
          if ( v9 )
          {
            v34 = (unsigned __int64)(unsigned __int8)*v9 >> 4;
            v9 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)a3 >= v7 )
              return 3221226050LL;
            v9 = a3++;
            v34 = *v9 & 0xF;
          }
          if ( v34 == 15 )
          {
LABEL_71:
            if ( (unsigned __int64)a3 >= v7 )
              return 3221226050LL;
            v35 = (unsigned __int8)*a3++;
            if ( v35 == 255 )
            {
              if ( (unsigned __int64)(a3 + 1) >= v7 )
                return 3221226050LL;
              v37 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v37 )
              {
                if ( (unsigned __int64)(a3 + 3) >= v7 )
                  return 3221226050LL;
                v37 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v37 < 0x16 || &a1[v37 + 3] < a1 )
                return 3221226050LL;
              v35 = v37 - 22;
            }
            v34 = v35 + 15;
          }
          v33 = v34 + 7;
        }
        v19 = v33 + 3;
        v21 = &a1[-v17];
        if ( &a1[-v17] < v6 )
          return 3221226050LL;
LABEL_62:
        if ( (unsigned __int64)&a1[v19] > v8 )
          return 3221226050LL;
        qmemcpy(a1, v21, v19);
        a1 += v19;
        if ( v13 >= 0 )
        {
          v13 *= 2;
          goto LABEL_49;
        }
LABEL_57:
        v13 *= 2;
        if ( !v13 )
        {
          if ( (unsigned __int64)(a3 + 3) >= v7 )
            return 3221226050LL;
          v12 = *(_DWORD *)a3;
          a3 += 4;
          goto LABEL_48;
        }
      }
      if ( (unsigned __int64)a1 >= v8 )
      {
LABEL_74:
        *a6 = (_DWORD)a1 - (_DWORD)v6;
        return 0LL;
      }
    }
    else
    {
LABEL_49:
      if ( v13 < 0 )
      {
LABEL_54:
        if ( (unsigned __int64)a3 < v7 && (unsigned __int64)a1 < v8 )
        {
          *a1++ = *a3++;
          goto LABEL_57;
        }
      }
      else
      {
        while ( 1 )
        {
          v13 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v7 || (unsigned __int64)(a1 + 2) > v8 )
            break;
          v30 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)a1 = v30;
          a1 += 2;
          if ( v13 < 0 )
            goto LABEL_57;
          v14 = (v13 & 0x40000000) != 0;
          v13 *= 2;
          if ( v14 )
            goto LABEL_54;
        }
      }
    }
  }
  return 3221226050LL;
}

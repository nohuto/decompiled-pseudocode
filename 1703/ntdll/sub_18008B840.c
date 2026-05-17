/*
 * XREFs of sub_18008B840 @ 0x18008B840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008B840(_BYTE *a1, int a2, _BYTE *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _BYTE *v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  _BYTE *v9; // r12
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  int v12; // r9d
  bool v13; // sf
  int v14; // r9d
  unsigned __int64 v15; // rdi
  char v16; // dl
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // r10
  signed __int64 v20; // r11
  _BYTE *v21; // rsi
  signed __int64 v22; // rdx
  _DWORD *v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int16 v27; // ax
  unsigned __int64 v28; // rdi
  char v29; // dl
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v34; // rdi
  char v35; // al
  __int64 v36; // rdx

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
      v13 = v12 < 0;
      v14 = 2 * v12 + 1;
      if ( !v13 )
      {
        while ( 1 )
        {
          if ( v14 < 0 )
          {
            *a1++ = *a3++;
            goto LABEL_12;
          }
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          if ( v13 )
          {
            *(_WORD *)a1 = *(_WORD *)a3;
            a1 += 2;
            a3 += 2;
            goto LABEL_12;
          }
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          *(_DWORD *)a1 = *(_DWORD *)a3;
          if ( v13 )
          {
            a1 += 3;
            a3 += 3;
            goto LABEL_12;
          }
          a1 += 4;
          a3 += 4;
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          if ( v13 )
            goto LABEL_12;
LABEL_10:
          v14 *= 2;
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
            v24 = (unsigned __int64)(unsigned __int8)*v9 >> 4;
            v9 = 0LL;
          }
          else
          {
            v9 = a3++;
            v24 = *v9 & 0xF;
          }
          if ( v24 == 15 )
          {
            if ( (unsigned __int64)(a3 + 7) >= v10 )
              goto LABEL_64;
            v25 = (unsigned __int8)*a3++;
            if ( v25 == 255 )
            {
              v26 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v26 )
              {
                v26 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v26 < 22 || &a1[v26 + 3] < a1 )
                return 3221226050LL;
              v25 = v26 - 22;
            }
            v24 = v25 + 15;
          }
          v18 = v24 + 7;
        }
        v19 = v18;
        v20 = v18;
        v21 = &a1[-v17];
        v22 = v18 + 3;
        if ( &a1[-v17] < v6 )
          return 3221226050LL;
        if ( v17 >= 4 )
        {
LABEL_16:
          *(_DWORD *)a1 = *(_DWORD *)v21;
          *((_DWORD *)a1 + 1) = *((_DWORD *)v21 + 1);
          if ( v22 >= 9 )
          {
            a1 += 8;
            v23 = v21 + 8;
            for ( v22 -= 8LL; ; v22 -= 16LL )
            {
              if ( (unsigned __int64)a1 >= v11 )
                goto LABEL_55;
              *(_DWORD *)a1 = *v23;
              *((_DWORD *)a1 + 1) = v23[1];
              *((_DWORD *)a1 + 2) = v23[2];
              *((_DWORD *)a1 + 3) = v23[3];
              if ( v22 < 17 )
                break;
              a1 += 16;
              v23 += 4;
            }
          }
          a1 += v22;
          goto LABEL_18;
        }
        *a1 = *v21;
        v34 = v17 - 1;
        if ( !v34 )
          break;
        a1[1] = v21[1];
        if ( v34 != 1 )
        {
          v35 = v21[2];
          v22 = v20;
LABEL_71:
          a1[2] = v35;
          a1 += 3;
          goto LABEL_72;
        }
        v22 -= 2LL;
        a1 += 2;
LABEL_72:
        if ( v22 )
          goto LABEL_16;
LABEL_18:
        if ( v14 >= 0 )
          goto LABEL_10;
LABEL_12:
        v14 *= 2;
        if ( !v14 )
          goto LABEL_3;
      }
      v22 = v19;
      a1[1] = *v21;
      v35 = *v21;
      goto LABEL_71;
    }
LABEL_41:
    v13 = v12 < 0;
    v14 = 2 * v12 + 1;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( a3 == (_BYTE *)v7 )
          goto LABEL_67;
        if ( (unsigned __int64)(a3 + 1) >= v7 )
          break;
        v28 = *(unsigned __int16 *)a3;
        a3 += 2;
        v29 = v28;
        v17 = (v28 >> 3) + 1;
        v30 = v29 & 7;
        if ( v30 == 7 )
        {
          if ( v9 )
          {
            v31 = (unsigned __int64)(unsigned __int8)*v9 >> 4;
            v9 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)a3 >= v7 )
              return 3221226050LL;
            v9 = a3++;
            v31 = *v9 & 0xF;
          }
          if ( v31 == 15 )
          {
LABEL_64:
            if ( (unsigned __int64)a3 >= v7 )
              return 3221226050LL;
            v32 = (unsigned __int8)*a3++;
            if ( v32 == 255 )
            {
              if ( (unsigned __int64)(a3 + 1) >= v7 )
                return 3221226050LL;
              v36 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v36 )
              {
                if ( (unsigned __int64)(a3 + 3) >= v7 )
                  return 3221226050LL;
                v36 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v36 < 22 || &a1[v36 + 3] < a1 )
                return 3221226050LL;
              v32 = v36 - 22;
            }
            v31 = v32 + 15;
          }
          v30 = v31 + 7;
        }
        v22 = v30 + 3;
        v23 = &a1[-v17];
        if ( &a1[-v17] < v6 )
          return 3221226050LL;
LABEL_55:
        if ( (unsigned __int64)&a1[v22] > v8 )
          return 3221226050LL;
        qmemcpy(a1, v23, v22);
        a1 += v22;
        if ( v14 >= 0 )
        {
          v14 *= 2;
          goto LABEL_42;
        }
LABEL_50:
        v14 *= 2;
        if ( !v14 )
        {
          if ( (unsigned __int64)(a3 + 3) >= v7 )
            return 3221226050LL;
          v12 = *(_DWORD *)a3;
          a3 += 4;
          goto LABEL_41;
        }
      }
      if ( (unsigned __int64)a1 >= v8 )
      {
LABEL_67:
        *a6 = (_DWORD)a1 - (_DWORD)v6;
        return 0LL;
      }
    }
    else
    {
LABEL_42:
      if ( v14 < 0 )
      {
LABEL_47:
        if ( (unsigned __int64)a3 < v7 && (unsigned __int64)a1 < v8 )
        {
          *a1++ = *a3++;
          goto LABEL_50;
        }
      }
      else
      {
        while ( 1 )
        {
          v14 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v7 || (unsigned __int64)(a1 + 2) > v8 )
            break;
          v27 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)a1 = v27;
          a1 += 2;
          if ( v14 < 0 )
            goto LABEL_50;
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          if ( v13 )
            goto LABEL_47;
        }
      }
    }
  }
  return 3221226050LL;
}

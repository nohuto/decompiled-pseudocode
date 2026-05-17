/*
 * XREFs of sub_180001368 @ 0x180001368
 * Callers:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 * Callees:
 *     sub_180104190 @ 0x180104190 (sub_180104190.c)
 */

__int64 __fastcall sub_180001368(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r9
  int v10; // r14d
  unsigned __int8 *v11; // rbp
  unsigned __int64 v12; // r12
  unsigned __int8 *v13; // rsi
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r10
  unsigned __int8 *v19; // r8
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // r9
  unsigned __int8 *v22; // r12
  unsigned __int8 v23; // r10
  char *v24; // r9
  unsigned __int8 v25; // bp
  _BYTE *v26; // r10
  int v27; // ecx
  int v28; // eax
  unsigned __int8 *v29; // rdi
  unsigned __int64 v30; // rcx
  __int16 v31; // ax
  unsigned __int64 v32; // rcx
  unsigned __int8 *v33; // rax
  unsigned __int8 v34; // al
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int8 *v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 *v39; // rcx
  __int64 v40; // rdx
  unsigned __int8 *v41; // rcx
  unsigned __int8 v42; // al
  unsigned int v43; // esi
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // [rsp+20h] [rbp-68h]
  unsigned __int64 v47; // [rsp+28h] [rbp-60h]
  _QWORD v48[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v49; // [rsp+40h] [rbp-48h]
  unsigned __int8 *v50; // [rsp+90h] [rbp+8h]
  int v51; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v52; // [rsp+C0h] [rbp+38h]
  unsigned __int8 *v53; // [rsp+C8h] [rbp+40h]

  v51 = (int)a3;
  v6 = (unsigned __int64)&a1[a2];
  v7 = (unsigned __int64)&a3[a4];
  v47 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v49 = a2;
  v8 = v6 - 38;
  v50 = 0LL;
  v48[0] = 0LL;
  v9 = v6 - 38;
  v48[1] = 0LL;
  if ( v6 < 0x26 )
    v9 = (unsigned __int64)&a1[a2];
  v10 = 2;
  v52 = v9;
  v11 = 0LL;
  v12 = v7 - 41;
  a3[4] = *a1;
  v13 = a3 + 5;
  v46 = v7 - 41;
  v14 = a1 + 1;
  v15 = a3;
  if ( a2 >= 0x40 )
  {
    v16 = a6;
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 2 )
    {
      while ( 1 )
      {
        v17 = v16 + 8LL * *v14;
        v18 = v14[2] + 4 * (unsigned int)v14[1];
        v19 = *(unsigned __int8 **)(v17 + 16 * v18);
        *(_QWORD *)(v17 + 16 * v18) = v14;
        v20 = *v14;
        if ( *v19 != *v14 || v19[1] != v14[1] || v19[2] != v14[2] || v14 - v19 >= 0x2000 )
          break;
        v21 = v19[3];
        v22 = v14 + 3;
        v53 = v14;
        if ( v14[3] != v21 )
        {
          v36 = v20 + 2 * v18;
          v37 = *(unsigned __int8 **)(a6 + 8 * (v36 + *v22) + 22448);
          *(_QWORD *)(a6 + 8 * (v36 + v21) + 22448) = v19;
          if ( v14 - v37 >= 0x2000 || *(_DWORD *)v14 != *(_DWORD *)v37 )
          {
            v14 += 3;
            goto LABEL_51;
          }
          v19 = v37;
          *(_QWORD *)(a6 + 8 * (v36 + (unsigned __int8)HIBYTE(*(_DWORD *)v14)) + 22448) = v14;
        }
        v23 = v19[4];
        v24 = (char *)(v14 + 4);
        if ( v14[4] != v23 )
        {
          v38 = 2
              * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(*v22 + *v14, 3), 1)
               + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v14 ^ __ROR1__(v14[1] + v14[2] + 97, 1), 3));
          v39 = *(unsigned __int8 **)(a6 + 8 * (v38 + (unsigned __int8)*v24) + 22448);
          *(_QWORD *)(a6 + 8 * (v38 + v23) + 22448) = v19;
          if ( v14 - v39 >= 0x2000 || *(_DWORD *)v14 != *(_DWORD *)v39 || *v24 != v39[4] || v14 == v39 )
          {
            v14 += 4;
            LOWORD(v19) = (_WORD)v19 + 4;
            goto LABEL_33;
          }
          v19 = v39;
          *(_QWORD *)(a6 + 8 * (v38 + (unsigned __int8)*v24) + 22448) = v14;
        }
        v25 = v19[5];
        v26 = v14 + 5;
        if ( v14[5] != v25 )
        {
          v40 = 2
              * ((v14[2] ^ (unsigned __int8)__ROL1__(*v14, *v24))
               + 4
               * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(*v22, 3), 1)
                + (unsigned __int8)__ROL1__(*v24 ^ (__ROR1__(*v14, 1) + 69), 3)));
          v41 = *(unsigned __int8 **)(a6 + 8 * (v40 + (unsigned __int8)*v26) + 22448);
          *(_QWORD *)(a6 + 8 * (v40 + v25) + 22448) = v19;
          if ( v14 - v41 >= 0x2000 || *(_DWORD *)v14 != *(_DWORD *)v41 || *v24 != v41[4] || *v26 != v41[5] || v14 == v41 )
          {
            v14 += 5;
            v8 = v6 - 38;
            LOWORD(v19) = (_WORD)v19 + 5;
            goto LABEL_47;
          }
          v19 = v41;
          *(_QWORD *)(a6 + 8 * (v40 + (unsigned __int8)*v26) + 22448) = v14;
        }
        v14 += 6;
        v8 = v6 - 38;
        for ( v19 += 6; ; v19 += 32 )
        {
          if ( (unsigned __int64)v14 >= v8 )
          {
            while ( (unsigned __int64)v14 < v6 && *v14 == *v19 )
            {
              ++v14;
              ++v19;
            }
            goto LABEL_47;
          }
          v27 = *(_DWORD *)v14;
          v28 = *(_DWORD *)v19;
          if ( *(_DWORD *)v14 != *(_DWORD *)v19 )
            goto LABEL_29;
          v27 = *((_DWORD *)v14 + 1);
          v28 = *((_DWORD *)v19 + 1);
          if ( v27 != v28 )
            break;
          v27 = *((_DWORD *)v14 + 2);
          v28 = *((_DWORD *)v19 + 2);
          if ( v27 != v28 )
          {
            v14 += 8;
            v19 += 8;
            goto LABEL_29;
          }
          v27 = *((_DWORD *)v14 + 3);
          v28 = *((_DWORD *)v19 + 3);
          if ( v27 != v28 )
          {
            v14 += 12;
            v19 += 12;
            goto LABEL_29;
          }
          v27 = *((_DWORD *)v14 + 4);
          v28 = *((_DWORD *)v19 + 4);
          if ( v27 != v28 )
          {
            v14 += 16;
            v19 += 16;
            goto LABEL_29;
          }
          v27 = *((_DWORD *)v14 + 5);
          v28 = *((_DWORD *)v19 + 5);
          if ( v27 != v28 )
          {
            v14 += 20;
            v19 += 20;
            goto LABEL_29;
          }
          v27 = *((_DWORD *)v14 + 6);
          v28 = *((_DWORD *)v19 + 6);
          if ( v27 != v28 )
          {
            v14 += 24;
            v19 += 24;
            goto LABEL_29;
          }
          v27 = *((_DWORD *)v14 + 7);
          v28 = *((_DWORD *)v19 + 7);
          if ( v27 != v28 )
          {
            v14 += 28;
            v19 += 28;
            goto LABEL_29;
          }
          v14 += 32;
        }
        v14 += 4;
        v19 += 4;
LABEL_29:
        if ( (_BYTE)v27 != (_BYTE)v28 )
          goto LABEL_47;
        if ( v14[1] != v19[1] )
        {
          ++v14;
          LOWORD(v19) = (_WORD)v19 + 1;
LABEL_47:
          v11 = v50;
          goto LABEL_33;
        }
        v11 = v50;
        if ( v14[2] != v19[2] )
        {
          v14 += 2;
          LOWORD(v19) = (_WORD)v19 + 2;
          goto LABEL_33;
        }
        v14 += 3;
LABEL_51:
        LOWORD(v19) = (_WORD)v19 + 3;
LABEL_33:
        v30 = v14 - v53 - 3;
        v31 = 8 * ((_WORD)v14 - (_WORD)v19) - 8;
        if ( v30 < 7 )
        {
          *(_WORD *)v13 = v31 + v30;
          v13 += 2;
        }
        else
        {
          v32 = v14 - v53 - 10;
          *(_WORD *)v13 = v31 | 7;
          v13 += 2;
          v33 = v13;
          if ( v11 )
          {
            v34 = *v11;
            if ( v32 >= 0xF )
            {
              *v11 = v34 | 0xF0;
              v11 = 0LL;
              goto LABEL_39;
            }
            v50 = 0LL;
            *v11 = v34 | (16 * v32);
            v11 = 0LL;
          }
          else
          {
            v11 = v13;
            if ( v32 < 0xF )
            {
              *v13++ = v32;
              v50 = v33;
            }
            else
            {
              *v13++ = 15;
LABEL_39:
              v50 = v11;
              v35 = v14 - v53 - 25;
              if ( v35 >= 0xFF )
              {
                v45 = v35 + 22;
                *v13 = -1;
                if ( v45 >= 0x10000 )
                {
                  *(_WORD *)(v13 + 1) = 0;
                  *(_DWORD *)(v13 + 3) = v45;
                  v13 += 7;
                }
                else
                {
                  *(_WORD *)(v13 + 1) = v45;
                  v13 += 3;
                }
              }
              else
              {
                *v13++ = v35;
              }
            }
          }
        }
        if ( v10 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v10 + 1;
          v10 = 1;
          v15 = v13;
          v13 += 4;
        }
        else
        {
          v10 = 2 * v10 + 1;
        }
        v9 = v52;
        if ( (unsigned __int64)v14 >= v52 )
        {
          if ( (unsigned __int64)v14 < v8 )
          {
            v9 = sub_180104190(v48, v8, v14);
            v52 = v9;
            goto LABEL_44;
          }
LABEL_81:
          v7 = v47;
          LODWORD(a3) = v51;
          goto LABEL_82;
        }
LABEL_44:
        v12 = v46;
        v8 = v6 - 38;
        v16 = a6;
        if ( (unsigned __int64)v13 >= v46 )
          goto LABEL_81;
      }
      *v13++ = v20;
      ++v14;
      v29 = v13;
      if ( v10 <= 0 )
      {
        v13 += 4;
        *(_DWORD *)v15 = 2 * v10;
        v10 = 1;
        if ( (unsigned __int64)v14 >= v9 )
        {
          v15 = v29;
          if ( (unsigned __int64)v14 >= v8 )
            goto LABEL_81;
          v9 = sub_180104190(v48, v8, v14);
          v52 = v9;
          v8 = v6 - 38;
        }
        v15 = v29;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_81;
      }
      else
      {
        v10 *= 2;
      }
      v16 = a6;
      continue;
    }
  }
LABEL_82:
  while ( (unsigned __int64)v14 < v6 )
  {
    if ( (unsigned __int64)v13 >= v7 )
      return 3221225507LL;
    v42 = *v14++;
    *v13++ = v42;
    if ( v10 <= 0 )
    {
      *(_DWORD *)v15 = 2 * v10;
      v10 = 1;
      v15 = v13;
      v13 += 4;
    }
    else
    {
      v10 *= 2;
    }
  }
  if ( (unsigned __int64)v13 >= v7 )
    return 3221225507LL;
  while ( v10 > 0 )
    v10 = 2 * v10 + 1;
  v43 = (_DWORD)v13 - (_DWORD)a3;
  *(_DWORD *)v15 = 2 * v10 + 1;
  if ( v43 < 8 )
    v43 = 8;
  *a5 = v43;
  return 0LL;
}

/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1800603D8
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180060380 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x180108790 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int64 v7; // r13
  int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 XpressCallback; // r9
  unsigned __int8 *v12; // rsi
  unsigned __int8 *v13; // rbp
  int v14; // r14d
  int *v15; // r15
  unsigned __int8 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int8 *v20; // r8
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // r9
  unsigned __int8 *v23; // r11
  unsigned __int8 v24; // r10
  char *v25; // r9
  unsigned __int8 v26; // bp
  _BYTE *v27; // r10
  unsigned __int64 v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int8 *v32; // rcx
  __int64 v33; // rdx
  unsigned __int8 *v34; // rcx
  __int64 v35; // rdx
  unsigned __int8 *v36; // rcx
  unsigned __int8 v37; // al
  unsigned int v38; // esi
  unsigned __int64 v40; // rcx
  int v41; // eax
  unsigned __int64 v42; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v43; // [rsp+28h] [rbp-60h]
  unsigned __int64 v44; // [rsp+30h] [rbp-58h]
  _QWORD v45[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v46; // [rsp+48h] [rbp-40h]
  unsigned __int8 *v47; // [rsp+90h] [rbp+8h]
  int v48; // [rsp+A0h] [rbp+18h]
  int *v49; // [rsp+C0h] [rbp+38h]
  unsigned __int64 v50; // [rsp+C8h] [rbp+40h]

  v48 = a3;
  v7 = (unsigned __int64)&a1[a2];
  v8 = a3;
  v9 = a3 + a4;
  v44 = v9;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v46 = a2;
  v10 = v7 - 38;
  v47 = 0LL;
  v45[0] = 0LL;
  v42 = v9 - 41;
  XpressCallback = v7 - 38;
  *(_BYTE *)(a3 + 4) = *a1;
  if ( v7 < 0x26 )
    XpressCallback = v7;
  v45[1] = 0LL;
  v12 = (unsigned __int8 *)(a3 + 5);
  v50 = XpressCallback;
  v49 = (int *)a3;
  v13 = 0LL;
  v14 = 2;
  v15 = (int *)a3;
  v16 = a1 + 1;
  if ( a2 >= 0x40 )
  {
    v17 = a6;
    memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
    memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
    while ( 2 )
    {
      while ( 1 )
      {
        v18 = v17 + 8LL * *v16;
        v19 = v16[2] + 4 * (unsigned int)v16[1];
        v20 = *(unsigned __int8 **)(v18 + 16 * v19);
        *(_QWORD *)(v18 + 16 * v19) = v16;
        v21 = *v16;
        if ( *v20 != *v16 || v20[1] != v16[1] || v20[2] != v16[2] || v16 - v20 >= 0x2000 )
          break;
        v22 = v20[3];
        v23 = v16 + 3;
        v43 = v16;
        if ( v16[3] != v22 )
        {
          v31 = v21 + 2 * v19;
          v32 = *(unsigned __int8 **)(a6 + 8 * (v31 + *v23) + 22448);
          *(_QWORD *)(a6 + 8 * (v31 + v22) + 22448) = v20;
          if ( v16 - v32 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v32 )
          {
            v16 += 3;
            goto LABEL_52;
          }
          v20 = v32;
          *(_QWORD *)(a6 + 8 * (v31 + *v23) + 22448) = v16;
        }
        v24 = v20[4];
        v25 = (char *)(v16 + 4);
        if ( v16[4] != v24 )
        {
          v33 = 2
              * ((unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(*v23 + *v16, 3), 1)
               + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v16 ^ __ROR1__(v16[1] + v16[2] + 97, 1), 3));
          v34 = *(unsigned __int8 **)(a6 + 8 * (v33 + (unsigned __int8)*v25) + 22448);
          *(_QWORD *)(a6 + 8 * (v33 + v24) + 22448) = v20;
          if ( v16 - v34 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v34 || *v25 != v34[4] || v16 == v34 )
          {
            v16 += 4;
            LOWORD(v20) = (_WORD)v20 + 4;
            goto LABEL_33;
          }
          v20 = v34;
          *(_QWORD *)(a6 + 8 * (v33 + (unsigned __int8)*v25) + 22448) = v16;
        }
        v26 = v20[5];
        v27 = v16 + 5;
        if ( v16[5] != v26 )
        {
          v35 = 2
              * ((v16[2] ^ (unsigned __int8)__ROL1__(*v16, *v25))
               + 4
               * ((unsigned __int8)__ROL1__(*v25 ^ (__ROR1__(*v16, 1) + 69), 3)
                + (unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(*v23, 3), 1)));
          v36 = *(unsigned __int8 **)(a6 + 8 * (v35 + (unsigned __int8)*v27) + 22448);
          *(_QWORD *)(a6 + 8 * (v35 + v26) + 22448) = v20;
          if ( v16 - v36 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v36 || *v25 != v36[4] || *v27 != v36[5] || v16 == v36 )
          {
            v16 += 5;
            LOWORD(v20) = (_WORD)v20 + 5;
            goto LABEL_47;
          }
          v20 = v36;
          *(_QWORD *)(a6 + 8 * (v35 + (unsigned __int8)*v27) + 22448) = v16;
        }
        v16 += 6;
        for ( v20 += 6; ; v20 += 32 )
        {
          if ( (unsigned __int64)v16 >= v10 )
          {
            while ( (unsigned __int64)v16 < v7 && *v16 == *v20 )
            {
              ++v16;
              ++v20;
            }
            goto LABEL_47;
          }
          if ( *(_DWORD *)v16 != *(_DWORD *)v20 )
            goto LABEL_29;
          if ( *((_DWORD *)v16 + 1) != *((_DWORD *)v20 + 1) )
          {
            v16 += 4;
            v20 += 4;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 2) != *((_DWORD *)v20 + 2) )
          {
            v16 += 8;
            v20 += 8;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 3) != *((_DWORD *)v20 + 3) )
          {
            v16 += 12;
            v20 += 12;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 4) != *((_DWORD *)v20 + 4) )
          {
            v16 += 16;
            v20 += 16;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 5) != *((_DWORD *)v20 + 5) )
          {
            v16 += 20;
            v20 += 20;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 6) != *((_DWORD *)v20 + 6) )
          {
            v16 += 24;
            v20 += 24;
            goto LABEL_29;
          }
          if ( *((_DWORD *)v16 + 7) != *((_DWORD *)v20 + 7) )
            break;
          v16 += 32;
        }
        v16 += 28;
        v20 += 28;
LABEL_29:
        if ( *v16 != *v20 )
          goto LABEL_47;
        if ( v16[1] != v20[1] )
        {
          ++v16;
          LOWORD(v20) = (_WORD)v20 + 1;
LABEL_47:
          v13 = v47;
          v15 = v49;
          goto LABEL_33;
        }
        v13 = v47;
        v15 = v49;
        if ( v16[2] != v20[2] )
        {
          v16 += 2;
          LOWORD(v20) = (_WORD)v20 + 2;
          goto LABEL_33;
        }
        v16 += 3;
LABEL_52:
        LOWORD(v20) = (_WORD)v20 + 3;
LABEL_33:
        v28 = v16 - v43 - 3;
        v29 = 8 * ((_WORD)v16 - (_WORD)v20) - 8;
        if ( v28 < 7 )
        {
          *(_WORD *)v12 = v29 + v28;
          v12 += 2;
        }
        else
        {
          v30 = v16 - v43 - 10;
          *(_WORD *)v12 = v29 | 7;
          v12 += 2;
          if ( !v13 )
          {
            v47 = v12;
            v13 = v12;
            if ( v30 >= 0xF )
            {
              *v12++ = 15;
              goto LABEL_37;
            }
            goto LABEL_38;
          }
          v47 = 0LL;
          if ( v30 >= 0xF )
          {
            *v13 |= 0xF0u;
            v13 = 0LL;
LABEL_37:
            v30 = v16 - v43 - 25;
            if ( v30 >= 0xFF )
            {
              v40 = v30 + 22;
              *v12 = -1;
              if ( v40 >= 0x10000 )
              {
                *(_WORD *)(v12 + 1) = 0;
                *(_DWORD *)(v12 + 3) = v40;
                v12 += 7;
              }
              else
              {
                *(_WORD *)(v12 + 1) = v40;
                v12 += 3;
              }
            }
            else
            {
LABEL_38:
              *v12++ = v30;
            }
          }
          else
          {
            *v13 |= 16 * (_BYTE)v30;
            v13 = 0LL;
          }
        }
        if ( v14 <= 0 )
        {
          v49 = (int *)v12;
          *v15 = 2 * v14 + 1;
          v14 = 1;
          v15 = (int *)v12;
          v12 += 4;
        }
        else
        {
          v14 = 2 * v14 + 1;
        }
        XpressCallback = v50;
        if ( (unsigned __int64)v16 >= v50 )
        {
          if ( (unsigned __int64)v16 < v10 )
          {
            XpressCallback = RtlpMakeXpressCallback(v45, v7 - 38, v16);
            v50 = XpressCallback;
            goto LABEL_42;
          }
LABEL_80:
          v9 = v44;
          v8 = v48;
          goto LABEL_81;
        }
LABEL_42:
        v17 = a6;
        if ( (unsigned __int64)v12 >= v42 )
          goto LABEL_80;
      }
      *v12 = v21;
      ++v16;
      ++v12;
      if ( v14 <= 0 )
      {
        v49 = (int *)v12;
        *v15 = 2 * v14;
        v14 = 1;
        v15 = (int *)v12;
        v12 += 4;
        if ( (unsigned __int64)v16 >= XpressCallback )
        {
          if ( (unsigned __int64)v16 >= v10 )
            goto LABEL_80;
          XpressCallback = RtlpMakeXpressCallback(v45, v7 - 38, v16);
          v50 = XpressCallback;
        }
        if ( (unsigned __int64)v12 >= v42 )
          goto LABEL_80;
      }
      else
      {
        v14 *= 2;
      }
      v17 = a6;
      continue;
    }
  }
LABEL_81:
  while ( (unsigned __int64)v16 < v7 )
  {
    if ( (unsigned __int64)v12 >= v9 )
      return 3221225507LL;
    v37 = *v16++;
    *v12++ = v37;
    if ( v14 <= 0 )
    {
      v41 = 2 * v14;
      v14 = 1;
      *v15 = v41;
      v15 = (int *)v12;
      v12 += 4;
    }
    else
    {
      v14 *= 2;
    }
  }
  if ( (unsigned __int64)v12 >= v9 )
    return 3221225507LL;
  while ( v14 > 0 )
    v14 = 2 * v14 + 1;
  v38 = (_DWORD)v12 - v8;
  *v15 = 2 * v14 + 1;
  if ( v38 < 8 )
    v38 = 8;
  *a5 = v38;
  return 0LL;
}

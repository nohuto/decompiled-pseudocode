/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x140002F00
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x140002E90 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x140257FD4 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14025A984 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 v9; // r15
  unsigned __int8 *v10; // rbp
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r12
  unsigned int v15; // ecx
  unsigned __int8 *v16; // rbx
  unsigned __int64 v17; // r13
  int v18; // r14d
  unsigned __int8 *v19; // rsi
  int *v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int8 *v23; // r8
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // r10
  unsigned __int8 *v26; // rbp
  unsigned __int8 v27; // r11
  unsigned __int8 v28; // r13
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // r13
  __int64 v31; // rcx
  unsigned __int8 *v32; // rdi
  unsigned __int64 v33; // rcx
  __int16 v34; // ax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int8 *v38; // rcx
  __int64 v39; // rdx
  unsigned __int8 *v40; // rcx
  int *v41; // rcx
  int v42; // eax
  unsigned __int8 v43; // al
  unsigned __int8 v44; // al
  unsigned __int8 v45; // al
  unsigned int v46; // esi
  unsigned __int64 v48; // rcx
  int v49; // eax
  __int64 XpressCallback; // rax
  unsigned __int64 v51; // [rsp+20h] [rbp-88h]
  int *v52; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v53; // [rsp+30h] [rbp-78h]
  unsigned __int64 v54; // [rsp+38h] [rbp-70h]
  unsigned __int64 v55; // [rsp+40h] [rbp-68h]
  unsigned __int64 v56; // [rsp+48h] [rbp-60h]
  _QWORD v57[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-48h]
  unsigned __int64 v59; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v60; // [rsp+B8h] [rbp+10h]
  int v61; // [rsp+C0h] [rbp+18h]

  v61 = a3;
  v9 = a3;
  v10 = &a1[a2];
  v11 = a3 + a4;
  v55 = (unsigned __int64)v10;
  v56 = v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = (unsigned __int64)(v10 - 38);
  v14 = v11 - 41;
  v54 = (unsigned __int64)(v10 - 38);
  v51 = v11 - 41;
  v53 = 0LL;
  if ( !a7 || (v15 = a9, a9 > a2) )
    v15 = a2;
  v16 = a1 + 1;
  v17 = (unsigned __int64)&a1[v15];
  v57[1] = a8;
  *(_BYTE *)(v9 + 4) = *a1;
  v18 = 2;
  if ( v13 < v17 )
    v17 = (unsigned __int64)(v10 - 38);
  v57[0] = a7;
  v19 = (unsigned __int8 *)(v9 + 5);
  v59 = v17;
  v58 = v15;
  v20 = (int *)v9;
  v52 = (int *)v9;
  if ( a2 < 0x40 )
    goto LABEL_80;
  memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
  memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = a6 + 8LL * *v16;
      v22 = v16[2] + 4 * (unsigned int)v16[1];
      v23 = *(unsigned __int8 **)(v21 + 16 * v22);
      *(_QWORD *)(v21 + 16 * v22) = v16;
      v24 = *v16;
      if ( *(_WORD *)v23 == *(_WORD *)v16 && v23[2] == v16[2] && v16 - v23 < 0x2000 )
        break;
      *v19 = v24;
      ++v16;
      ++v19;
      if ( v18 <= 0 )
      {
        v52 = (int *)v19;
        *v20 = 2 * v18;
        v18 = 1;
        v20 = (int *)v19;
        v19 += 4;
        if ( (unsigned __int64)v16 >= v17 )
        {
          if ( (unsigned __int64)v16 >= v13 )
            goto LABEL_79;
          XpressCallback = RtlpMakeXpressCallback(v57, v13, v16, v13);
          v13 = v54;
          v17 = XpressCallback;
          v20 = v52;
          v59 = XpressCallback;
        }
        if ( (unsigned __int64)v19 >= v14 )
          goto LABEL_79;
      }
      else
      {
        v18 *= 2;
      }
    }
    v25 = v16[3];
    v26 = v16;
    v27 = v23[3];
    if ( v25 != v27 )
    {
      v31 = v24 + 2 * v22;
      v32 = *(unsigned __int8 **)(a6 + 8 * (v31 + v25) + 22448);
      *(_QWORD *)(a6 + 8 * (v31 + v27) + 22448) = v23;
      if ( v16 - v32 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v32 )
      {
LABEL_29:
        v16 += 3;
        LOWORD(v23) = (_WORD)v23 + 3;
        goto LABEL_30;
      }
      v23 = v32;
      *(_QWORD *)(a6 + 8 * (v31 + v16[3]) + 22448) = v16;
    }
    v28 = v23[4];
    v29 = v16[4];
    if ( v29 != v28 )
    {
      v37 = 2
          * ((unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(v16[3] + *v16, 3), 1)
           + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v16 ^ __ROR1__(v16[1] + v16[2] + 97, 1), 3));
      v38 = *(unsigned __int8 **)(a6 + 8 * (v37 + v29) + 22448);
      *(_QWORD *)(a6 + 8 * (v37 + v28) + 22448) = v23;
      if ( v16 - v38 >= 0x2000 || *(_DWORD *)v16 != *(_DWORD *)v38 || (v43 = v16[4], v43 != v38[4]) || v16 == v38 )
      {
        v16 += 4;
        LOWORD(v23) = (_WORD)v23 + 4;
LABEL_56:
        v17 = v59;
        v14 = v51;
        goto LABEL_30;
      }
      v23 = v38;
      *(_QWORD *)(a6 + 8 * (v37 + v43) + 22448) = v16;
    }
    v30 = v16[5];
    v60 = v23[5];
    if ( v30 != v60 )
    {
      v39 = 2
          * ((v16[2] ^ (unsigned __int8)__ROL1__(*v16, v16[4]))
           + 4
           * ((unsigned __int8)__ROL1__(v16[4] ^ (__ROR1__(*v16, 1) + 69), 3)
            + (unsigned __int8)__ROR1__(v16[1] ^ __ROL1__(v16[3], 3), 1)));
      v40 = *(unsigned __int8 **)(a6 + 8 * (v39 + v30) + 22448);
      *(_QWORD *)(a6 + 8 * (v39 + v60) + 22448) = v23;
      if ( v16 - v40 >= 0x2000
        || *(_DWORD *)v16 != *(_DWORD *)v40
        || v16[4] != v40[4]
        || (v44 = v16[5], v16 == v40)
        || v44 != v40[5] )
      {
        v17 = v59;
        v16 += 5;
        v14 = v51;
        LOWORD(v23) = (_WORD)v23 + 5;
        goto LABEL_30;
      }
      v23 = v40;
      *(_QWORD *)(a6 + 8 * (v39 + v44) + 22448) = v16;
    }
    v16 += 6;
    v23 += 6;
    if ( (unsigned __int64)v16 >= v54 )
    {
LABEL_97:
      while ( (unsigned __int64)v16 < v55 )
      {
        if ( *v16 != *v23 )
          break;
        ++v16;
        ++v23;
      }
      goto LABEL_56;
    }
    while ( *(_DWORD *)v16 == *(_DWORD *)v23 )
    {
      if ( *((_DWORD *)v16 + 1) != *((_DWORD *)v23 + 1) )
      {
        v16 += 4;
        v23 += 4;
        break;
      }
      if ( *((_DWORD *)v16 + 2) != *((_DWORD *)v23 + 2) )
      {
        v16 += 8;
        v23 += 8;
        break;
      }
      if ( *((_DWORD *)v16 + 3) != *((_DWORD *)v23 + 3) )
      {
        v16 += 12;
        v23 += 12;
        break;
      }
      if ( *((_DWORD *)v16 + 4) != *((_DWORD *)v23 + 4) )
      {
        v16 += 16;
        v23 += 16;
        break;
      }
      if ( *((_DWORD *)v16 + 5) != *((_DWORD *)v23 + 5) )
      {
        v16 += 20;
        v23 += 20;
        break;
      }
      if ( *((_DWORD *)v16 + 6) != *((_DWORD *)v23 + 6) )
      {
        v16 += 24;
        v23 += 24;
        break;
      }
      if ( *((_DWORD *)v16 + 7) != *((_DWORD *)v23 + 7) )
      {
        v16 += 28;
        v23 += 28;
        break;
      }
      v16 += 32;
      v23 += 32;
      if ( (unsigned __int64)v16 >= v54 )
        goto LABEL_97;
    }
    if ( *v16 != *v23 )
      goto LABEL_56;
    if ( v16[1] == v23[1] )
    {
      v14 = v51;
      v17 = v59;
      if ( v16[2] == v23[2] )
        goto LABEL_29;
      v16 += 2;
      LOWORD(v23) = (_WORD)v23 + 2;
    }
    else
    {
      v17 = v59;
      ++v16;
      v14 = v51;
      LOWORD(v23) = (_WORD)v23 + 1;
    }
LABEL_30:
    v33 = v16 - v26 - 3;
    v34 = 8 * ((_WORD)v16 - (_WORD)v23) - 8;
    if ( v33 < 7 )
    {
      *(_WORD *)v19 = v34 + v33;
      v19 += 2;
      goto LABEL_32;
    }
    v35 = v16 - v26 - 10;
    *(_WORD *)v19 = v34 | 7;
    v19 += 2;
    if ( v53 )
    {
      if ( v35 >= 0xF )
      {
        *v53 |= 0xF0u;
        v53 = 0LL;
LABEL_45:
        v36 = v16 - v26 - 25;
        if ( v36 >= 0xFF )
        {
          v48 = v36 + 22;
          *v19 = -1;
          if ( v48 >= 0x10000 )
          {
            *(_WORD *)(v19 + 1) = 0;
            *(_DWORD *)(v19 + 3) = v48;
            v19 += 7;
          }
          else
          {
            *(_WORD *)(v19 + 1) = v48;
            v19 += 3;
          }
        }
        else
        {
          *v19++ = v36;
        }
        goto LABEL_32;
      }
      *v53 |= 16 * (_BYTE)v35;
      v53 = 0LL;
    }
    else
    {
      v53 = v19;
      if ( v35 >= 0xF )
      {
        *v19++ = 15;
        goto LABEL_45;
      }
      *v19++ = v35;
    }
LABEL_32:
    if ( v18 <= 0 )
    {
      v41 = v52;
      v42 = 2 * v18 + 1;
      v52 = (int *)v19;
      v18 = 1;
      v19 += 4;
      *v41 = v42;
    }
    else
    {
      v18 = 2 * v18 + 1;
    }
    if ( (unsigned __int64)v16 < v17 )
      goto LABEL_35;
    if ( (unsigned __int64)v16 >= v54 )
      break;
    v17 = RtlpMakeXpressCallback(v57, v54, v16, v13);
    v59 = v17;
LABEL_35:
    v13 = v54;
    v20 = v52;
    if ( (unsigned __int64)v19 >= v14 )
      goto LABEL_79;
  }
  v20 = v52;
LABEL_79:
  v10 = (unsigned __int8 *)v55;
  v11 = v56;
  LODWORD(v9) = v61;
LABEL_80:
  if ( v16 >= v10 )
  {
LABEL_85:
    if ( (unsigned __int64)v19 >= v11 )
      return 3221225507LL;
    for ( ; v18 > 0; v18 = 2 * v18 + 1 )
      ;
    v46 = (_DWORD)v19 - v9;
    *v20 = 2 * v18 + 1;
    *a5 = v46;
    if ( v46 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v19 < v11 )
    {
      v45 = *v16++;
      *v19++ = v45;
      if ( v18 <= 0 )
      {
        v49 = 2 * v18;
        v18 = 1;
        *v20 = v49;
        v20 = (int *)v19;
        v19 += 4;
      }
      else
      {
        v18 *= 2;
      }
      if ( v16 >= v10 )
        goto LABEL_85;
    }
    return 3221225507LL;
  }
}

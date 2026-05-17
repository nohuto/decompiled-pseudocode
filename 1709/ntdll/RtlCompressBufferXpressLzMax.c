/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1801081B8
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180060380 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpMakeXpressCallback @ 0x180108790 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned int v9; // r14d
  unsigned __int8 *v11; // r12
  unsigned __int64 v13; // rdx
  int v14; // esi
  _DWORD *v15; // r8
  _BYTE *v16; // rbx
  __int16 v17; // r11
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // r15
  char *v20; // r9
  unsigned __int8 *v21; // r10
  unsigned __int8 *v22; // rax
  __int64 v23; // r11
  char *v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r15
  __int64 v27; // r14
  __int64 XpressCallback; // rax
  int v29; // r12d
  unsigned __int8 *v30; // rdx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // r14
  char *v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // r9
  unsigned __int8 *v38; // r11
  _BYTE *v39; // rdi
  unsigned __int8 *v40; // rdx
  _BYTE *i; // rcx
  __int64 v42; // rax
  __int64 v43; // r13
  _BYTE *v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  _DWORD *v47; // rcx
  int v48; // eax
  char v49; // al
  int v50; // eax
  unsigned int v51; // ebx
  _BYTE *v52; // [rsp+20h] [rbp-88h]
  unsigned __int64 v53; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v54; // [rsp+30h] [rbp-78h]
  __int16 v55; // [rsp+38h] [rbp-70h]
  unsigned __int8 *v56; // [rsp+40h] [rbp-68h]
  unsigned __int64 v57; // [rsp+48h] [rbp-60h]
  _QWORD v58[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-48h]
  int v61; // [rsp+C0h] [rbp+18h]
  __int64 v63; // [rsp+E0h] [rbp+38h]
  __int64 v65; // [rsp+E8h] [rbp+40h]

  v61 = a3;
  v6 = 0LL;
  v7 = a1 + a2;
  v8 = a3 + a4;
  v9 = a2;
  v57 = v8;
  v11 = (unsigned __int8 *)a1;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v63 = a3;
  v58[0] = 0LL;
  v58[1] = 0LL;
  v53 = v8 - 41;
  v13 = v7 - 5;
  v14 = 2;
  *(_BYTE *)(a3 + 4) = *v11;
  v15 = (_DWORD *)a3;
  v16 = (_BYTE *)(a3 + 5);
  v52 = 0LL;
  v17 = 0;
  v59 = v9;
  v18 = v11 + 1;
  v56 = v11;
  v19 = v11;
LABEL_6:
  v20 = a6;
  v21 = (unsigned __int8 *)v13;
  if ( (unsigned __int64)(v19 + 0x2000) <= v13 )
    v21 = v19 + 0x2000;
  v22 = &v18[v9];
  v54 = v21;
  if ( v21 < v22 )
    v22 = v21;
  v23 = v17 & 0x3FFF;
  v65 = (__int64)v22;
  v55 = v23;
  if ( v19 < v21 )
  {
    v24 = &a6[8 * v23 + 0x40000];
    do
    {
      LOWORD(v23) = v23 + 1;
      v25 = (unsigned __int16)XpressHashFunction[v19[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v19] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v19[1] + 256];
      *(_QWORD *)v24 = *(_QWORD *)&a6[8 * v25];
      v24 += 8;
      *(_QWORD *)&a6[8 * v25] = v19++;
    }
    while ( v19 < v21 );
    v15 = (_DWORD *)v63;
    v56 = v19;
    v55 = v23;
LABEL_14:
    v22 = (unsigned __int8 *)v65;
  }
  v26 = (unsigned __int64)(v18 - 0x2000);
  v27 = 0x2000LL - (_QWORD)v11;
  while ( 1 )
  {
    if ( v18 >= v22 )
    {
      if ( v18 >= v21 )
      {
        v11 = (unsigned __int8 *)a1;
        v13 = v7 - 5;
        v9 = a2;
        v17 = v55;
        v19 = v56;
        if ( (unsigned __int64)v18 >= v7 - 5 )
          goto LABEL_91;
        goto LABEL_6;
      }
      XpressCallback = RtlpMakeXpressCallback(v58, v21, v18);
      v15 = (_DWORD *)v63;
      v20 = a6;
      v21 = v54;
      v65 = XpressCallback;
    }
    v29 = *(_DWORD *)v18;
    v30 = *(unsigned __int8 **)&v20[8 * ((v27 + v26) & 0x3FFF) + 0x40000];
    if ( (unsigned __int64)v30 >= v26 )
    {
      v31 = v29 ^ *(_DWORD *)v30;
      if ( !v31 )
        goto LABEL_34;
      if ( (v31 & 0xFFFFFF) == 0 )
        goto LABEL_33;
      v30 = *(unsigned __int8 **)&v20[8 * ((unsigned __int64)&v30[-a1] & 0x3FFF) + 0x40000];
      if ( (unsigned __int64)v30 >= v26 )
      {
        v32 = v29 ^ *(_DWORD *)v30;
        if ( !v32 )
          goto LABEL_34;
        if ( (v32 & 0xFFFFFF) == 0 )
        {
LABEL_33:
          v34 = a1;
          v26 = (unsigned __int64)(v18 - 0x2000);
          v35 = a6;
          v6 = v18 - v30;
          v36 = 3LL;
          v37 = 0LL;
          goto LABEL_71;
        }
        v30 = *(unsigned __int8 **)&v20[8 * ((unsigned __int64)&v30[-a1] & 0x3FFF) + 0x40000];
        if ( (unsigned __int64)v30 >= v26 )
          break;
      }
    }
LABEL_28:
    *v16 = v29;
    ++v18;
    ++v16;
    ++v26;
    if ( v14 <= 0 )
    {
      v63 = (__int64)v16;
      *v15 = 2 * v14;
      v14 = 1;
      v15 = v16;
      v16 += 4;
      if ( (unsigned __int64)v16 >= v53 )
        goto LABEL_91;
    }
    else
    {
      v14 *= 2;
    }
    v22 = (unsigned __int8 *)v65;
  }
  v33 = v29 ^ *(_DWORD *)v30;
  if ( v33 )
  {
    if ( (v33 & 0xFFFFFF) == 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
LABEL_34:
  v34 = a1;
  v36 = 3LL;
  v37 = 0LL;
LABEL_35:
  v38 = v18;
  v39 = v18 + 4;
  v40 = v30 + 4;
  for ( i = v39 + 32; ; i += 32 )
  {
    if ( (unsigned __int64)i >= v7 )
    {
      while ( (unsigned __int64)v39 < v7 && *v39 == *v40 )
      {
        ++v39;
        ++v40;
      }
      goto LABEL_63;
    }
    if ( *(_DWORD *)v39 != *(_DWORD *)v40 )
      break;
    if ( *((_DWORD *)v39 + 1) != *((_DWORD *)v40 + 1) )
    {
      v39 += 4;
      v40 += 4;
      break;
    }
    if ( *((_DWORD *)v39 + 2) != *((_DWORD *)v40 + 2) )
    {
      v39 += 8;
      v40 += 8;
      break;
    }
    if ( *((_DWORD *)v39 + 3) != *((_DWORD *)v40 + 3) )
    {
      v39 += 12;
      v40 += 12;
      break;
    }
    if ( *((_DWORD *)v39 + 4) != *((_DWORD *)v40 + 4) )
    {
      v39 += 16;
      v40 += 16;
      break;
    }
    if ( *((_DWORD *)v39 + 5) != *((_DWORD *)v40 + 5) )
    {
      v39 += 20;
      v40 += 20;
      break;
    }
    if ( *((_DWORD *)v39 + 6) != *((_DWORD *)v40 + 6) )
    {
      v39 += 24;
      v40 += 24;
      break;
    }
    if ( *((_DWORD *)v39 + 7) != *((_DWORD *)v40 + 7) )
    {
      v39 += 28;
      v40 += 28;
      break;
    }
    v40 += 32;
    v39 = i;
  }
  if ( *v39 == *v40 )
  {
    if ( v39[1] == v40[1] )
    {
      if ( v39[2] == v40[2] )
      {
        v39 += 3;
        v40 += 3;
      }
      else
      {
        v39 += 2;
        v40 += 2;
      }
    }
    else
    {
      ++v39;
      ++v40;
    }
  }
LABEL_63:
  v42 = v39 - v38;
  if ( v39 - v38 <= v36 )
  {
    v37 += v42;
  }
  else
  {
    v36 = v39 - v38;
    v6 = v39 - v40;
    if ( v40 > v38 )
    {
      v18 = v38;
      goto LABEL_66;
    }
  }
  v30 = &v40[-v42];
  v18 = v38;
  v35 = a6;
  while ( (unsigned __int64)++v37 < 0x18 )
  {
LABEL_71:
    v30 = *(unsigned __int8 **)&v35[8 * ((unsigned __int64)&v30[-v34] & 0x3FFF) + 0x40000];
    if ( (unsigned __int64)v30 < v26 )
      break;
    if ( v29 == *(_DWORD *)v30 )
      goto LABEL_35;
  }
LABEL_66:
  v18 += v36;
  v43 = 8 * v6 - 8;
  if ( v36 - 3 < 7 )
  {
    v6 = v36 - 3 + v43;
    *(_WORD *)v16 = v6;
    v16 += 2;
    goto LABEL_85;
  }
  v44 = v52;
  v6 = v43 | 7;
  *(_WORD *)v16 = v6;
  v45 = v36 - 10;
  v16 += 2;
  if ( v52 )
  {
    v52 = 0LL;
    if ( v45 >= 0xF )
    {
      *v44 |= 0xF0u;
      goto LABEL_80;
    }
    *v44 |= 16 * (_BYTE)v45;
  }
  else
  {
    v52 = v16;
    if ( v45 >= 0xF )
    {
      *v16++ = 15;
LABEL_80:
      v45 = v36 - 25;
      if ( v36 - 25 >= 0xFF )
      {
        v46 = v45 + 22;
        *v16 = -1;
        if ( v46 >= 0x10000 )
        {
          *(_WORD *)(v16 + 1) = 0;
          *(_DWORD *)(v16 + 3) = v46;
          v16 += 7;
        }
        else
        {
          *(_WORD *)(v16 + 1) = v46;
          v16 += 3;
        }
        goto LABEL_85;
      }
    }
    *v16++ = v45;
  }
LABEL_85:
  if ( v14 <= 0 )
  {
    v47 = (_DWORD *)v63;
    v48 = 2 * v14 + 1;
    v15 = v16;
    v63 = (__int64)v16;
    v14 = 1;
    v16 += 4;
    *v47 = v48;
  }
  else
  {
    v15 = (_DWORD *)v63;
    v14 = 2 * v14 + 1;
  }
  if ( (unsigned __int64)v16 < v53 )
  {
    v11 = (unsigned __int8 *)a1;
    v20 = a6;
    v21 = v54;
    goto LABEL_14;
  }
LABEL_91:
  while ( (unsigned __int64)v18 < v7 )
  {
    if ( (unsigned __int64)v16 >= v57 )
      return 3221225507LL;
    v49 = *v18++;
    *v16++ = v49;
    if ( v14 <= 0 )
    {
      v50 = 2 * v14;
      v14 = 1;
      *v15 = v50;
      v15 = v16;
      v16 += 4;
    }
    else
    {
      v14 *= 2;
    }
  }
  if ( (unsigned __int64)v16 >= v57 )
    return 3221225507LL;
  while ( v14 > 0 )
    v14 = 2 * v14 + 1;
  v51 = (_DWORD)v16 - v61;
  *v15 = 2 * v14 + 1;
  if ( v51 < 8 )
    v51 = 8;
  *a5 = v51;
  return 0LL;
}

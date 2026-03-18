/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x140242B7C
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1400579D0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x140137A60 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140137838 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  __int64 v9; // r13
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int8 *v14; // r12
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  char *v18; // rdi
  int *v19; // r8
  int v20; // esi
  _BYTE *v21; // rbx
  __int16 v22; // r11
  unsigned __int8 *v23; // r14
  char *v24; // r9
  unsigned __int64 v25; // r10
  char *v26; // rax
  __int64 v27; // r11
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  unsigned __int64 XpressCallback; // rax
  int v33; // r12d
  char *v34; // rdx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // r14
  char *v39; // rax
  unsigned __int64 v40; // r10
  __int64 v41; // r9
  char *v42; // r11
  _BYTE *v43; // rdi
  char *v44; // rdx
  _BYTE *i; // rcx
  __int64 v46; // rax
  __int64 v47; // r13
  _BYTE *v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  int *v51; // rcx
  int v52; // eax
  char v53; // al
  int v54; // eax
  unsigned int v55; // ebx
  int *v56; // [rsp+20h] [rbp-98h]
  unsigned __int64 v57; // [rsp+28h] [rbp-90h]
  _BYTE *v58; // [rsp+30h] [rbp-88h]
  unsigned __int64 v59; // [rsp+38h] [rbp-80h]
  unsigned __int64 v60; // [rsp+40h] [rbp-78h]
  __int16 v61; // [rsp+48h] [rbp-70h]
  unsigned __int8 *v62; // [rsp+50h] [rbp-68h]
  unsigned __int64 v63; // [rsp+58h] [rbp-60h]
  _QWORD v64[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v65; // [rsp+70h] [rbp-48h]
  int v67; // [rsp+D0h] [rbp+18h]

  v67 = a3;
  v9 = 0LL;
  v10 = a1 + a2;
  v11 = a3 + a4;
  v63 = v11;
  v14 = (unsigned __int8 *)a1;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v59 = v11 - 41;
  v16 = v10 - 5;
  v58 = 0LL;
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v64[0] = a7;
  v18 = (char *)(v14 + 1);
  v64[1] = a8;
  v19 = (int *)a3;
  v20 = 2;
  *(_BYTE *)(a3 + 4) = *v14;
  v21 = (_BYTE *)(a3 + 5);
  v56 = (int *)a3;
  v22 = 0;
  v65 = v17;
  v23 = v14;
  v62 = v14;
LABEL_9:
  v24 = a6;
  v25 = v16;
  if ( (unsigned __int64)(v23 + 0x2000) <= v16 )
    v25 = (unsigned __int64)(v23 + 0x2000);
  v26 = &v18[v17];
  v60 = v25;
  if ( v25 < (unsigned __int64)v26 )
    v26 = (char *)v25;
  v27 = v22 & 0x3FFF;
  v57 = (unsigned __int64)v26;
  v61 = v27;
  if ( (unsigned __int64)v23 < v25 )
  {
    v28 = &a6[8 * v27 + 0x40000];
    do
    {
      LOWORD(v27) = v27 + 1;
      v29 = (unsigned __int16)XpressHashFunction[v23[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v23] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v23[1] + 256];
      *(_QWORD *)v28 = *(_QWORD *)&a6[8 * v29];
      v28 += 8;
      *(_QWORD *)&a6[8 * v29] = v23++;
    }
    while ( (unsigned __int64)v23 < v25 );
    v19 = v56;
    v62 = v23;
    v61 = v27;
LABEL_17:
    v26 = (char *)v57;
  }
  v30 = (unsigned __int64)(v18 - 0x2000);
  v31 = 0x2000LL - (_QWORD)v14;
  while ( 1 )
  {
    if ( v18 >= v26 )
    {
      if ( (unsigned __int64)v18 >= v25 )
      {
        v14 = (unsigned __int8 *)a1;
        v16 = v10 - 5;
        v17 = a9;
        v22 = v61;
        v23 = v62;
        if ( (unsigned __int64)v18 >= v10 - 5 )
          goto LABEL_94;
        goto LABEL_9;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v64, v25, (__int64)v18);
      v19 = v56;
      v24 = a6;
      v25 = v60;
      v57 = XpressCallback;
    }
    v33 = *(_DWORD *)v18;
    v34 = *(char **)&v24[8 * ((v31 + v30) & 0x3FFF) + 0x40000];
    if ( (unsigned __int64)v34 >= v30 )
    {
      v35 = v33 ^ *(_DWORD *)v34;
      if ( !v35 )
        goto LABEL_37;
      if ( (v35 & 0xFFFFFF) == 0 )
        goto LABEL_36;
      v34 = *(char **)&v24[8 * ((unsigned __int64)&v34[-a1] & 0x3FFF) + 0x40000];
      if ( (unsigned __int64)v34 >= v30 )
      {
        v36 = v33 ^ *(_DWORD *)v34;
        if ( !v36 )
          goto LABEL_37;
        if ( (v36 & 0xFFFFFF) == 0 )
        {
LABEL_36:
          v38 = a1;
          v30 = (unsigned __int64)(v18 - 0x2000);
          v39 = a6;
          v9 = v18 - v34;
          v40 = 3LL;
          v41 = 0LL;
          goto LABEL_74;
        }
        v34 = *(char **)&v24[8 * ((unsigned __int64)&v34[-a1] & 0x3FFF) + 0x40000];
        if ( (unsigned __int64)v34 >= v30 )
          break;
      }
    }
LABEL_31:
    *v21 = v33;
    ++v18;
    ++v21;
    ++v30;
    if ( v20 <= 0 )
    {
      v56 = (int *)v21;
      *v19 = 2 * v20;
      v20 = 1;
      v19 = (int *)v21;
      v21 += 4;
      if ( (unsigned __int64)v21 >= v59 )
        goto LABEL_94;
    }
    else
    {
      v20 *= 2;
    }
    v26 = (char *)v57;
  }
  v37 = v33 ^ *(_DWORD *)v34;
  if ( v37 )
  {
    if ( (v37 & 0xFFFFFF) == 0 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  v38 = a1;
  v40 = 3LL;
  v41 = 0LL;
LABEL_38:
  v42 = v18;
  v43 = v18 + 4;
  v44 = v34 + 4;
  for ( i = v43 + 32; ; i += 32 )
  {
    if ( (unsigned __int64)i >= v10 )
    {
      while ( (unsigned __int64)v43 < v10 && *v43 == *v44 )
      {
        ++v43;
        ++v44;
      }
      goto LABEL_66;
    }
    if ( *(_DWORD *)v43 != *(_DWORD *)v44 )
      break;
    if ( *((_DWORD *)v43 + 1) != *((_DWORD *)v44 + 1) )
    {
      v43 += 4;
      v44 += 4;
      break;
    }
    if ( *((_DWORD *)v43 + 2) != *((_DWORD *)v44 + 2) )
    {
      v43 += 8;
      v44 += 8;
      break;
    }
    if ( *((_DWORD *)v43 + 3) != *((_DWORD *)v44 + 3) )
    {
      v43 += 12;
      v44 += 12;
      break;
    }
    if ( *((_DWORD *)v43 + 4) != *((_DWORD *)v44 + 4) )
    {
      v43 += 16;
      v44 += 16;
      break;
    }
    if ( *((_DWORD *)v43 + 5) != *((_DWORD *)v44 + 5) )
    {
      v43 += 20;
      v44 += 20;
      break;
    }
    if ( *((_DWORD *)v43 + 6) != *((_DWORD *)v44 + 6) )
    {
      v43 += 24;
      v44 += 24;
      break;
    }
    if ( *((_DWORD *)v43 + 7) != *((_DWORD *)v44 + 7) )
    {
      v43 += 28;
      v44 += 28;
      break;
    }
    v44 += 32;
    v43 = i;
  }
  if ( *v43 == *v44 )
  {
    if ( v43[1] == v44[1] )
    {
      if ( v43[2] == v44[2] )
      {
        v43 += 3;
        v44 += 3;
      }
      else
      {
        v43 += 2;
        v44 += 2;
      }
    }
    else
    {
      ++v43;
      ++v44;
    }
  }
LABEL_66:
  v46 = v43 - v42;
  if ( v43 - v42 <= v40 )
  {
    v41 += v46;
  }
  else
  {
    v40 = v43 - v42;
    v9 = v43 - v44;
    if ( v44 > v42 )
    {
      v18 = v42;
      goto LABEL_69;
    }
  }
  v34 = &v44[-v46];
  v18 = v42;
  v39 = a6;
  while ( (unsigned __int64)++v41 < 0x18 )
  {
LABEL_74:
    v34 = *(char **)&v39[8 * ((unsigned __int64)&v34[-v38] & 0x3FFF) + 0x40000];
    if ( (unsigned __int64)v34 < v30 )
      break;
    if ( v33 == *(_DWORD *)v34 )
      goto LABEL_38;
  }
LABEL_69:
  v18 += v40;
  v47 = 8 * v9 - 8;
  if ( v40 - 3 < 7 )
  {
    v9 = v40 - 3 + v47;
    *(_WORD *)v21 = v9;
    v21 += 2;
    goto LABEL_88;
  }
  v48 = v58;
  v9 = v47 | 7;
  *(_WORD *)v21 = v9;
  v49 = v40 - 10;
  v21 += 2;
  if ( v58 )
  {
    v58 = 0LL;
    if ( v49 >= 0xF )
    {
      *v48 |= 0xF0u;
      goto LABEL_83;
    }
    *v48 |= 16 * (_BYTE)v49;
  }
  else
  {
    v58 = v21;
    if ( v49 >= 0xF )
    {
      *v21++ = 15;
LABEL_83:
      v49 = v40 - 25;
      if ( v40 - 25 >= 0xFF )
      {
        v50 = v49 + 22;
        *v21 = -1;
        if ( v50 >= 0x10000 )
        {
          *(_WORD *)(v21 + 1) = 0;
          *(_DWORD *)(v21 + 3) = v50;
          v21 += 7;
        }
        else
        {
          *(_WORD *)(v21 + 1) = v50;
          v21 += 3;
        }
        goto LABEL_88;
      }
    }
    *v21++ = v49;
  }
LABEL_88:
  if ( v20 <= 0 )
  {
    v51 = v56;
    v52 = 2 * v20 + 1;
    v19 = (int *)v21;
    v56 = (int *)v21;
    v20 = 1;
    v21 += 4;
    *v51 = v52;
  }
  else
  {
    v19 = v56;
    v20 = 2 * v20 + 1;
  }
  if ( (unsigned __int64)v21 < v59 )
  {
    v14 = (unsigned __int8 *)a1;
    v24 = a6;
    v25 = v60;
    goto LABEL_17;
  }
LABEL_94:
  while ( (unsigned __int64)v18 < v10 )
  {
    if ( (unsigned __int64)v21 >= v63 )
      return 3221225507LL;
    v53 = *v18++;
    *v21++ = v53;
    if ( v20 <= 0 )
    {
      v54 = 2 * v20;
      v20 = 1;
      *v19 = v54;
      v19 = (int *)v21;
      v21 += 4;
    }
    else
    {
      v20 *= 2;
    }
  }
  if ( (unsigned __int64)v21 >= v63 )
    return 3221225507LL;
  while ( v20 > 0 )
    v20 = 2 * v20 + 1;
  v55 = (_DWORD)v21 - v67;
  *v19 = 2 * v20 + 1;
  if ( v55 < 8 )
    v55 = 8;
  *a5 = v55;
  return 0LL;
}

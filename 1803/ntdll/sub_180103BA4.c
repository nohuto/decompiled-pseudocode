/*
 * XREFs of sub_180103BA4 @ 0x180103BA4
 * Callers:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180104190 @ 0x180104190 (sub_180104190.c)
 */

__int64 __fastcall sub_180103BA4(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6)
{
  unsigned __int8 *v6; // rbp
  unsigned __int64 v7; // r15
  unsigned int v8; // r14d
  unsigned __int64 v12; // rdx
  unsigned __int8 *v13; // rdi
  _DWORD *v14; // r8
  __int16 v15; // r11
  _BYTE *v16; // rbx
  int v17; // esi
  unsigned __int8 *v18; // r15
  char *v19; // r9
  unsigned __int8 *v20; // r10
  unsigned __int8 *v21; // rax
  __int64 v22; // r11
  char *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int8 *v25; // r12
  __int64 v26; // rax
  int v27; // r15d
  unsigned __int64 v28; // rdx
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // rax
  char *v33; // rax
  unsigned __int64 v34; // r11
  __int64 v35; // r9
  unsigned __int8 *v36; // rax
  unsigned __int8 *v37; // r10
  unsigned __int8 *v38; // rdi
  unsigned __int8 *i; // rax
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // r15
  unsigned __int64 v44; // r15
  _BYTE *v45; // rdx
  __int64 v46; // r15
  unsigned __int64 v47; // rax
  char v48; // cl
  unsigned __int64 v49; // rax
  int v50; // eax
  _DWORD *v51; // rcx
  char v52; // al
  unsigned int v53; // ebx
  __int64 v54; // [rsp+20h] [rbp-88h]
  unsigned __int64 v55; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v56; // [rsp+30h] [rbp-78h]
  __int16 v57; // [rsp+38h] [rbp-70h]
  unsigned __int8 *v58; // [rsp+40h] [rbp-68h]
  unsigned __int64 v59; // [rsp+48h] [rbp-60h]
  _QWORD v60[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-48h]
  __int64 v62; // [rsp+B0h] [rbp+8h]
  int v63; // [rsp+C0h] [rbp+18h]
  _BYTE *v65; // [rsp+E0h] [rbp+38h]
  __int64 v67; // [rsp+E8h] [rbp+40h]

  v63 = a3;
  v6 = &a1[a2];
  v7 = a3 + a4;
  v8 = a2;
  v62 = 0LL;
  v59 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v65 = 0LL;
  v55 = v7 - 41;
  v12 = (unsigned __int64)(v6 - 5);
  v13 = a1 + 1;
  *(_BYTE *)(a3 + 4) = *a1;
  v14 = (_DWORD *)a3;
  v60[0] = 0LL;
  v60[1] = 0LL;
  v15 = 0;
  v16 = (_BYTE *)(a3 + 5);
  v67 = a3;
  v61 = v8;
  v17 = 2;
  v58 = a1;
  v18 = a1;
LABEL_6:
  v19 = a6;
  v20 = (unsigned __int8 *)v12;
  if ( (unsigned __int64)(v18 + 0x2000) <= v12 )
    v20 = v18 + 0x2000;
  v21 = &v13[v8];
  v56 = v20;
  if ( v20 < v21 )
    v21 = v20;
  v22 = v15 & 0x3FFF;
  v54 = (__int64)v21;
  v57 = v22;
  if ( v18 < v20 )
  {
    v23 = &a6[8 * v22 + 0x40000];
    do
    {
      LOWORD(v22) = v22 + 1;
      v24 = (unsigned __int16)word_1801302D0[v18[2] + 512] ^ (unsigned __int16)word_1801302D0[*v18] ^ (unsigned __int64)(unsigned __int16)word_1801302D0[v18[1] + 256];
      *(_QWORD *)v23 = *(_QWORD *)&a6[8 * v24];
      v23 += 8;
      *(_QWORD *)&a6[8 * v24] = v18++;
    }
    while ( v18 < v20 );
    v58 = v18;
    v57 = v22;
LABEL_14:
    v21 = (unsigned __int8 *)v54;
  }
  v25 = v13 - 0x2000;
  while ( 1 )
  {
    if ( v13 >= v21 )
    {
      if ( v13 >= v20 )
      {
        v8 = a2;
        v12 = (unsigned __int64)(v6 - 5);
        v15 = v57;
        v18 = v58;
        if ( v13 >= v6 - 5 )
          goto LABEL_91;
        goto LABEL_6;
      }
      v26 = sub_180104190(v60, v20, v13);
      v14 = (_DWORD *)v67;
      v19 = a6;
      v20 = v56;
      v54 = v26;
    }
    v27 = *(_DWORD *)v13;
    v28 = *(_QWORD *)&v19[8 * ((unsigned __int64)&v25[0x2000LL - (_QWORD)a1] & 0x3FFF) + 0x40000];
    if ( v28 >= (unsigned __int64)v25 )
    {
      v29 = v27 ^ *(_DWORD *)v28;
      if ( !v29 )
        goto LABEL_34;
      if ( (v29 & 0xFFFFFF) == 0 )
        goto LABEL_33;
      v28 = *(_QWORD *)&v19[8 * ((v28 - (_QWORD)a1) & 0x3FFF) + 0x40000];
      if ( v28 >= (unsigned __int64)v25 )
      {
        v30 = v27 ^ *(_DWORD *)v28;
        if ( !v30 )
          goto LABEL_34;
        if ( (v30 & 0xFFFFFF) == 0 )
        {
LABEL_33:
          v33 = a6;
          v25 = v13 - 0x2000;
          v34 = 3LL;
          v62 = (__int64)&v13[-v28];
          v35 = 0LL;
          goto LABEL_71;
        }
        v28 = *(_QWORD *)&v19[8 * ((v28 - (_QWORD)a1) & 0x3FFF) + 0x40000];
        if ( v28 >= (unsigned __int64)v25 )
          break;
      }
    }
LABEL_28:
    *v16++ = v27;
    ++v13;
    ++v25;
    v32 = v16;
    if ( v17 <= 0 )
    {
      v16 += 4;
      *v14 = 2 * v17;
      v17 = 1;
      v14 = v32;
      if ( (unsigned __int64)v16 >= v55 )
        goto LABEL_91;
      v67 = (__int64)v32;
    }
    else
    {
      v17 *= 2;
    }
    v21 = (unsigned __int8 *)v54;
  }
  v31 = v27 ^ *(_DWORD *)v28;
  if ( v31 )
  {
    if ( (v31 & 0xFFFFFF) == 0 )
      goto LABEL_33;
    goto LABEL_28;
  }
LABEL_34:
  v35 = 0LL;
  v34 = 3LL;
LABEL_35:
  v36 = v13;
  v37 = v13;
  v38 = v13 + 4;
  v28 += 4LL;
  for ( i = v36 + 36; ; i = v38 + 32 )
  {
    if ( i >= v6 )
    {
      while ( v38 < v6 && *v38 == *(_BYTE *)v28 )
      {
        ++v38;
        ++v28;
      }
      goto LABEL_63;
    }
    v40 = *(_DWORD *)v38;
    v41 = *(_DWORD *)v28;
    if ( *(_DWORD *)v38 != *(_DWORD *)v28 )
      break;
    v40 = *((_DWORD *)v38 + 1);
    v41 = *(_DWORD *)(v28 + 4);
    if ( v40 != v41 )
    {
      v38 += 4;
      v28 += 4LL;
      break;
    }
    v40 = *((_DWORD *)v38 + 2);
    v41 = *(_DWORD *)(v28 + 8);
    if ( v40 != v41 )
    {
      v38 += 8;
      v28 += 8LL;
      break;
    }
    v40 = *((_DWORD *)v38 + 3);
    v41 = *(_DWORD *)(v28 + 12);
    if ( v40 != v41 )
    {
      v38 += 12;
      v28 += 12LL;
      break;
    }
    v40 = *((_DWORD *)v38 + 4);
    v41 = *(_DWORD *)(v28 + 16);
    if ( v40 != v41 )
    {
      v38 += 16;
      v28 += 16LL;
      break;
    }
    v40 = *((_DWORD *)v38 + 5);
    v41 = *(_DWORD *)(v28 + 20);
    if ( v40 != v41 )
    {
      v38 += 20;
      v28 += 20LL;
      break;
    }
    v40 = *((_DWORD *)v38 + 6);
    v41 = *(_DWORD *)(v28 + 24);
    if ( v40 != v41 )
    {
      v38 += 24;
      v28 += 24LL;
      break;
    }
    v40 = *((_DWORD *)v38 + 7);
    v41 = *(_DWORD *)(v28 + 28);
    if ( v40 != v41 )
    {
      v38 += 28;
      v28 += 28LL;
      break;
    }
    v38 += 32;
    v28 += 32LL;
  }
  if ( (_BYTE)v40 == (_BYTE)v41 )
  {
    if ( v38[1] == *(_BYTE *)(v28 + 1) )
    {
      if ( v38[2] == *(_BYTE *)(v28 + 2) )
      {
        v38 += 3;
        v28 += 3LL;
      }
      else
      {
        v38 += 2;
        v28 += 2LL;
      }
    }
    else
    {
      ++v38;
      ++v28;
    }
  }
LABEL_63:
  v42 = v38 - v37;
  if ( v38 - v37 <= v34 )
  {
    v35 += v42;
  }
  else
  {
    v34 = v38 - v37;
    v62 = (__int64)&v38[-v28];
    if ( v28 > (unsigned __int64)v37 )
    {
      v13 = v37;
      goto LABEL_66;
    }
  }
  LOWORD(v28) = v28 - v42;
  v13 = v37;
  v33 = a6;
  while ( (unsigned __int64)++v35 < 0x18 )
  {
LABEL_71:
    v28 = *(_QWORD *)&v33[8 * (((_WORD)v28 - (_WORD)a1) & 0x3FFF) + 0x40000];
    if ( v28 < (unsigned __int64)v25 )
      break;
    if ( v27 == *(_DWORD *)v28 )
      goto LABEL_35;
  }
LABEL_66:
  v13 += v34;
  v43 = 8 * v62 - 8;
  if ( v34 - 3 < 7 )
  {
    v44 = v34 - 3 + v43;
    *(_WORD *)v16 = v44;
    v16 += 2;
    v62 = v44;
    goto LABEL_85;
  }
  v45 = v65;
  v46 = v43 | 7;
  *(_WORD *)v16 = v46;
  v47 = v34 - 10;
  v16 += 2;
  v62 = v46;
  if ( v65 )
  {
    v48 = *v65;
    v65 = 0LL;
    if ( v47 >= 0xF )
    {
      *v45 = v48 | 0xF0;
      goto LABEL_80;
    }
    *v45 = v48 | (16 * v47);
  }
  else
  {
    v65 = v16;
    if ( v47 >= 0xF )
    {
      *v16++ = 15;
LABEL_80:
      v47 = v34 - 25;
      if ( v34 - 25 >= 0xFF )
      {
        v49 = v47 + 22;
        *v16 = -1;
        if ( v49 >= 0x10000 )
        {
          *(_WORD *)(v16 + 1) = 0;
          *(_DWORD *)(v16 + 3) = v49;
          v16 += 7;
        }
        else
        {
          *(_WORD *)(v16 + 1) = v49;
          v16 += 3;
        }
        goto LABEL_85;
      }
    }
    *v16++ = v47;
  }
LABEL_85:
  v50 = 2 * v17 + 1;
  if ( v17 <= 0 )
  {
    v51 = (_DWORD *)v67;
    v14 = v16;
    v67 = (__int64)v16;
    v17 = 1;
    v16 += 4;
    *v51 = v50;
  }
  else
  {
    v14 = (_DWORD *)v67;
    v17 = 2 * v17 + 1;
  }
  if ( (unsigned __int64)v16 < v55 )
  {
    v19 = a6;
    v20 = v56;
    goto LABEL_14;
  }
LABEL_91:
  while ( v13 < v6 )
  {
    if ( (unsigned __int64)v16 >= v59 )
      return 3221225507LL;
    v52 = *v13++;
    *v16++ = v52;
    if ( v17 <= 0 )
    {
      *v14 = 2 * v17;
      v17 = 1;
      v14 = v16;
      v16 += 4;
    }
    else
    {
      v17 *= 2;
    }
  }
  if ( (unsigned __int64)v16 >= v59 )
    return 3221225507LL;
  while ( v17 > 0 )
    v17 = 2 * v17 + 1;
  v53 = (_DWORD)v16 - v63;
  *v14 = 2 * v17 + 1;
  if ( v53 < 8 )
    v53 = 8;
  *a5 = v53;
  return 0LL;
}

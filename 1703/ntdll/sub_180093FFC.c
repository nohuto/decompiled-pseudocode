/*
 * XREFs of sub_180093FFC @ 0x180093FFC
 * Callers:
 *     sub_180063930 @ 0x180063930 (sub_180063930.c)
 * Callees:
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_18006446C @ 0x18006446C (sub_18006446C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180103834 @ 0x180103834 (sub_180103834.c)
 */

__int64 __fastcall sub_180093FFC(
        unsigned __int64 a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  unsigned __int64 v7; // r13
  unsigned int v8; // esi
  unsigned __int8 *v10; // rbx
  _BYTE *v11; // r15
  __int64 v12; // r10
  unsigned __int8 *v13; // r11
  int *v14; // rbp
  int v15; // esi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v23; // al
  int v24; // eax
  int v25; // r15d
  unsigned __int8 *v26; // r8
  int v27; // eax
  unsigned __int8 *v28; // rbp
  unsigned __int8 *v29; // r9
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  unsigned __int8 *v32; // rbx
  _DWORD *v33; // r8
  unsigned __int64 i; // rcx
  int v35; // esi
  unsigned __int64 v36; // rbx
  unsigned __int8 *v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  char v41; // cl
  unsigned __int8 v42; // cl
  _WORD *v43; // rdi
  unsigned __int64 v44; // rax
  _BYTE *v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  bool v50; // zf
  unsigned __int8 v52; // al
  _DWORD *v53; // rdi
  unsigned __int8 *v54; // [rsp+30h] [rbp-88h]
  __int64 v55; // [rsp+38h] [rbp-80h]
  __int64 v56; // [rsp+40h] [rbp-78h]
  _BYTE *v57; // [rsp+48h] [rbp-70h]
  unsigned __int8 *v58; // [rsp+50h] [rbp-68h]
  _BYTE *v59; // [rsp+58h] [rbp-60h]
  _QWORD v60[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-48h]
  int *v62; // [rsp+C0h] [rbp+8h]
  int v63; // [rsp+D0h] [rbp+18h]
  __int64 v65; // [rsp+F0h] [rbp+38h]
  __int64 v67; // [rsp+F8h] [rbp+40h]

  v63 = (int)a3;
  v7 = a1 + a2;
  v8 = a2;
  v59 = &a3[a4];
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset(a6, 0, 0x40000uLL);
    v57 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v10 = (unsigned __int8 *)a1;
    v60[0] = 0LL;
    v11 = a3;
    v60[1] = 0LL;
    v67 = 0LL;
    v61 = v8;
LABEL_4:
    v55 = 0LL;
    v56 = 0LL;
    memset(a6 + 1339936, 0, 0x800uLL);
    v12 = v8;
    v62 = (int *)(a6 + 1342240);
    v13 = (unsigned __int8 *)v7;
    v14 = (int *)(a6 + 1342240);
    v15 = 1;
    if ( (unsigned __int64)(v10 + 0x10000) <= v7 )
      v13 = v10 + 0x10000;
    v16 = (unsigned __int64)&v10[v12];
    v58 = v13;
    v17 = (unsigned __int64)(v13 - 5);
    v54 = v13 - 5;
    if ( (unsigned __int64)(v13 - 5) < v16 )
      v16 = (unsigned __int64)(v13 - 5);
    v18 = a6 + 1342244;
    v65 = v16;
    if ( v10 == (unsigned __int8 *)a1 )
    {
      v15 = 2;
      ++*(_DWORD *)&a6[4 * *v10 + 1339936];
      v52 = *v10++;
      *v18 = v52;
      v18 = a6 + 1342245;
    }
    if ( (unsigned __int64)v10 >= v17 )
      goto LABEL_16;
    v19 = v10;
    v20 = (__int64)&v10[-a1] % 0x20000;
    do
    {
      v21 = (unsigned __int16)word_180123AB0[*v19] ^ (unsigned __int16)word_180123EB0[v19[2]] ^ (unsigned __int64)(unsigned __int16)word_180123CB0[v19[1]];
      v22 = *(_QWORD *)&a6[8 * v21];
      *(_QWORD *)&a6[8 * v21] = v19++;
      *(_QWORD *)&a6[8 * v20 + 0x40000] = v22;
      v20 = ((_DWORD)v20 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v19 < v17 );
    while ( 1 )
    {
      if ( (unsigned __int64)v10 >= v16 )
      {
        if ( (unsigned __int64)v10 >= v17 )
        {
          v11 = v57;
          v13 = v58;
LABEL_16:
          while ( v10 < v13 )
          {
            ++*(_DWORD *)&a6[4 * *v10 + 1339936];
            v23 = *v10++;
            *v18++ = v23;
            if ( v15 > 0 )
            {
              v15 *= 2;
            }
            else
            {
              v24 = 2 * v15;
              v15 = 1;
              *v14 = v24;
              v14 = (int *)v18;
              v18 += 4;
            }
          }
          while ( v15 > 0 )
            v15 = 2 * v15 + 1;
          *v14 = 2 * v15 + 1;
          if ( (unsigned __int64)v10 >= v7 )
          {
            ++*((_DWORD *)a6 + 335240);
            v35 = 1;
          }
          else
          {
            v35 = 0;
          }
          if ( &v11[4 * ((unsigned __int64)(sub_18006446C((_QWORD *)a6 + 163840) + v55 + 31) >> 5) + 258 + v56] >= v59 )
            return 3221225507LL;
          v11 = sub_1800641B0((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v18, (__int64)v11, v35);
          v57 = v11;
          v50 = v35 == 0;
          v8 = a2;
          if ( !v50 )
          {
            *a5 = (_DWORD)v11 - v63;
            return 0LL;
          }
          goto LABEL_4;
        }
        v65 = sub_180103834(v60, v17, v10);
      }
      v25 = *(_DWORD *)v10;
      v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v10[-a1] % 0x20000) + 0x40000];
      if ( v26 + 0x10000 <= v10 )
        goto LABEL_73;
      v27 = v25 ^ *(_DWORD *)v26;
      if ( !v27 )
        goto LABEL_22;
      if ( (v27 & 0xFFFFFF) != 0 )
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 + 0x10000 <= v10 )
          goto LABEL_73;
        v48 = v25 ^ *(_DWORD *)v26;
        if ( !v48 )
          goto LABEL_22;
        if ( (v48 & 0xFFFFFF) != 0 )
        {
          v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
          if ( v26 + 0x10000 <= v10 )
            goto LABEL_73;
          v49 = v25 ^ *(_DWORD *)v26;
          if ( !v49 )
          {
LABEL_22:
            v28 = v10 - 0x10000;
            v29 = v10;
            v30 = 0LL;
            v31 = 3LL;
            goto LABEL_23;
          }
          if ( (v49 & 0xFFFFFF) != 0 )
            goto LABEL_73;
        }
      }
      v67 = (__int64)v26;
      v29 = v10;
      v28 = v10 - 0x10000;
      v30 = 0LL;
      v31 = 3LL;
      do
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 <= v28 )
          break;
        if ( v25 == *(_DWORD *)v26 )
        {
          v10 = v29;
LABEL_23:
          v32 = v10 + 4;
          v33 = v26 + 4;
          for ( i = (unsigned __int64)(v32 + 32); ; i += 32LL )
          {
            if ( i >= v7 )
            {
              while ( (unsigned __int64)v32 < v7 && *v32 == *(_BYTE *)v33 )
              {
                ++v32;
                v33 = (_DWORD *)((char *)v33 + 1);
              }
              goto LABEL_44;
            }
            if ( *(_DWORD *)v32 != *v33 )
              goto LABEL_43;
            if ( *((_DWORD *)v32 + 1) != v33[1] )
            {
              v32 += 4;
              ++v33;
              goto LABEL_43;
            }
            if ( *((_DWORD *)v32 + 2) != v33[2] )
            {
              v32 += 8;
              v33 += 2;
              goto LABEL_43;
            }
            if ( *((_DWORD *)v32 + 3) != v33[3] )
            {
              v32 += 12;
              v33 += 3;
              goto LABEL_43;
            }
            if ( *((_DWORD *)v32 + 4) != v33[4] )
            {
              v32 += 16;
              v33 += 4;
              goto LABEL_43;
            }
            if ( *((_DWORD *)v32 + 5) != v33[5] )
            {
              v32 += 20;
              v33 += 5;
              goto LABEL_43;
            }
            if ( *((_DWORD *)v32 + 6) != v33[6] )
            {
              v32 += 24;
              v33 += 6;
              goto LABEL_43;
            }
            if ( *((_DWORD *)v32 + 7) != v33[7] )
              break;
            v33 += 8;
            v32 = (unsigned __int8 *)i;
          }
          v32 += 28;
          v33 += 7;
LABEL_43:
          if ( *v32 == *(_BYTE *)v33 )
          {
            if ( v32[1] == *((_BYTE *)v33 + 1) )
            {
              if ( v32[2] == *((_BYTE *)v33 + 2) )
              {
                v32 += 3;
                v33 = (_DWORD *)((char *)v33 + 3);
              }
              else
              {
                v32 += 2;
                v33 = (_DWORD *)((char *)v33 + 2);
              }
            }
            else
            {
              ++v32;
              v33 = (_DWORD *)((char *)v33 + 1);
            }
          }
LABEL_44:
          v36 = v32 - v29;
          v26 = (unsigned __int8 *)v33 - v36;
          if ( v36 <= v31 )
          {
            v30 += v36;
            goto LABEL_63;
          }
          v37 = v26;
          v67 = (__int64)v26;
          v31 = v36;
          if ( &v26[v36] > v29 )
            goto LABEL_46;
        }
LABEL_63:
        ++v30;
      }
      while ( v30 < 0xC );
      v37 = (unsigned __int8 *)v67;
LABEL_46:
      v10 = &v29[v31];
      v38 = v29 - v37;
      if ( v31 == 3 && v38 > 0x1000 )
        break;
      if ( v38 < 0x100 )
        v39 = byte_1801235B0[v38];
      else
        v39 = byte_1801235B0[v38 >> 8] + 8LL;
      v55 += v39;
      v40 = v38 - (1LL << v39);
      v41 = 16 * v39;
      if ( v31 - 3 >= 0xF )
      {
        v42 = v41 + 15;
        v44 = v31 - 18;
        *v18 = v42;
        v45 = v18 + 1;
        if ( v31 - 18 < 0xFF )
        {
          *v45 = v44;
          v43 = v45 + 1;
          v47 = 1LL;
        }
        else
        {
          v46 = v44 + 15;
          *v45 = -1;
          if ( v46 >= 0x10000 )
          {
            *(_WORD *)(v45 + 1) = 0;
            v53 = v45 + 3;
            *v53 = v46;
            v43 = v53 + 1;
            v47 = 7LL;
          }
          else
          {
            *(_WORD *)(v45 + 1) = v46;
            v43 = v45 + 3;
            v47 = 3LL;
          }
        }
        v56 += v47;
      }
      else
      {
        v42 = v31 - 3 + v41;
        *v18 = v42;
        v43 = v18 + 1;
      }
      ++*(_DWORD *)&a6[4 * v42 + 1340960];
      *v43 = v40;
      v18 = (unsigned __int8 *)(v43 + 1);
      if ( v15 <= 0 )
      {
        *v62 = 2 * v15 + 1;
LABEL_53:
        v14 = (int *)v18;
        v62 = (int *)v18;
        v18 += 4;
        v15 = 1;
        goto LABEL_54;
      }
      v14 = v62;
      v15 = 2 * v15 + 1;
LABEL_54:
      v17 = (unsigned __int64)v54;
      v16 = v65;
    }
    v14 = v62;
    v10 = v29;
LABEL_73:
    ++v10;
    ++*(_DWORD *)&a6[4 * (unsigned __int8)v25 + 1339936];
    *v18++ = v25;
    if ( v15 <= 0 )
    {
      *v14 = 2 * v15;
      goto LABEL_53;
    }
    v15 *= 2;
    goto LABEL_54;
  }
  return 3221225659LL;
}

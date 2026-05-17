/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x180107B4C
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x18005F4A0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x18005FD20 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x18006000C (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpMakeXpressCallback @ 0x180108790 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  unsigned __int64 v7; // r13
  unsigned int v8; // esi
  unsigned __int8 *v11; // rbx
  _BYTE *v12; // r15
  __int64 v13; // r10
  unsigned __int8 *v14; // r11
  int *v15; // rbp
  int v16; // esi
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int8 *v19; // rdi
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r15d
  unsigned __int8 *v26; // r8
  int v27; // eax
  unsigned __int8 *v28; // rbp
  unsigned __int8 *v29; // r9
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  int v32; // eax
  int v33; // eax
  unsigned __int8 *v34; // rbx
  _DWORD *v35; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v37; // rbx
  unsigned __int8 *v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  char v42; // cl
  unsigned __int8 v43; // cl
  unsigned __int64 v44; // rax
  _BYTE *v45; // rdi
  _WORD *v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _DWORD *v49; // rdi
  unsigned __int8 v50; // al
  int v51; // eax
  int v52; // esi
  bool v53; // zf
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
  __int64 XpressCallback; // [rsp+F0h] [rbp+38h]
  __int64 v67; // [rsp+F8h] [rbp+40h]

  v63 = (int)a3;
  v7 = a1 + a2;
  v8 = a2;
  v59 = &a3[a4];
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v57 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v11 = (unsigned __int8 *)a1;
    v60[0] = 0LL;
    v12 = a3;
    v60[1] = 0LL;
    v67 = 0LL;
    v61 = v8;
LABEL_5:
    v55 = 0LL;
    v56 = 0LL;
    memset(a6 + 1339936, 0, 0x800uLL);
    v13 = v8;
    v62 = (int *)(a6 + 1342240);
    v14 = (unsigned __int8 *)v7;
    v15 = (int *)(a6 + 1342240);
    v16 = 1;
    if ( (unsigned __int64)(v11 + 0x10000) <= v7 )
      v14 = v11 + 0x10000;
    v17 = (unsigned __int64)&v11[v13];
    v58 = v14;
    v18 = (unsigned __int64)(v14 - 5);
    v54 = v14 - 5;
    if ( (unsigned __int64)(v14 - 5) < v17 )
      v17 = (unsigned __int64)(v14 - 5);
    v19 = a6 + 1342244;
    XpressCallback = v17;
    if ( v11 == (unsigned __int8 *)a1 )
    {
      v16 = 2;
      ++*(_DWORD *)&a6[4 * *v11 + 1339936];
      v20 = *v11++;
      *v19 = v20;
      v19 = a6 + 1342245;
    }
    if ( (unsigned __int64)v11 >= v18 )
      goto LABEL_88;
    v21 = v11;
    v22 = (__int64)&v11[-a1] % 0x20000;
    do
    {
      v23 = (unsigned __int16)XpressHashFunction[*v21] ^ (unsigned __int16)word_180133270[v21[2]] ^ (unsigned __int64)(unsigned __int16)word_180133070[v21[1]];
      v24 = *(_QWORD *)&a6[8 * v23];
      *(_QWORD *)&a6[8 * v23] = v21++;
      *(_QWORD *)&a6[8 * v22 + 0x40000] = v24;
      v22 = ((_DWORD)v22 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v21 < v18 );
    while ( 1 )
    {
      if ( (unsigned __int64)v11 >= v17 )
      {
        if ( (unsigned __int64)v11 >= v18 )
        {
          v12 = v57;
          v14 = v58;
LABEL_88:
          while ( v11 < v14 )
          {
            ++*(_DWORD *)&a6[4 * *v11 + 1339936];
            v50 = *v11++;
            *v19++ = v50;
            if ( v16 <= 0 )
            {
              v51 = 2 * v16;
              v16 = 1;
              *v15 = v51;
              v15 = (int *)v19;
              v19 += 4;
            }
            else
            {
              v16 *= 2;
            }
          }
          while ( v16 > 0 )
            v16 = 2 * v16 + 1;
          *v15 = 2 * v16 + 1;
          if ( (unsigned __int64)v11 < v7 )
          {
            v52 = 0;
          }
          else
          {
            ++*((_DWORD *)a6 + 335240);
            v52 = 1;
          }
          if ( &v12[4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v55 + 31) >> 5)
                  + 258
                  + v56] >= v59 )
            return 3221225507LL;
          v12 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v19, (__int64)v12, v52);
          v57 = v12;
          v53 = v52 == 0;
          v8 = a2;
          if ( !v53 )
          {
            *a5 = (_DWORD)v12 - v63;
            return 0LL;
          }
          goto LABEL_5;
        }
        XpressCallback = RtlpMakeXpressCallback(v60, v18, v11);
      }
      v25 = *(_DWORD *)v11;
      v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v11[-a1] % 0x20000) + 0x40000];
      if ( v26 + 0x10000 <= v11 )
        goto LABEL_68;
      v27 = v25 ^ *(_DWORD *)v26;
      if ( !v27 )
        goto LABEL_19;
      if ( (v27 & 0xFFFFFF) != 0 )
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 + 0x10000 <= v11 )
          goto LABEL_68;
        v32 = v25 ^ *(_DWORD *)v26;
        if ( !v32 )
          goto LABEL_19;
        if ( (v32 & 0xFFFFFF) != 0 )
        {
          v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
          if ( v26 + 0x10000 <= v11 )
            goto LABEL_68;
          v33 = v25 ^ *(_DWORD *)v26;
          if ( !v33 )
          {
LABEL_19:
            v28 = v11 - 0x10000;
            v29 = v11;
            v30 = 0LL;
            v31 = 3LL;
            goto LABEL_31;
          }
          if ( (v33 & 0xFFFFFF) != 0 )
            goto LABEL_68;
        }
      }
      v67 = (__int64)v26;
      v29 = v11;
      v28 = v11 - 0x10000;
      v30 = 0LL;
      v31 = 3LL;
      do
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 <= v28 )
          break;
        if ( v25 == *(_DWORD *)v26 )
        {
          v11 = v29;
LABEL_31:
          v34 = v11 + 4;
          v35 = v26 + 4;
          for ( i = (unsigned __int64)(v34 + 32); ; i += 32LL )
          {
            if ( i >= v7 )
            {
              while ( (unsigned __int64)v34 < v7 && *v34 == *(_BYTE *)v35 )
              {
                ++v34;
                v35 = (_DWORD *)((char *)v35 + 1);
              }
              goto LABEL_59;
            }
            if ( *(_DWORD *)v34 != *v35 )
              goto LABEL_50;
            if ( *((_DWORD *)v34 + 1) != v35[1] )
            {
              v34 += 4;
              ++v35;
              goto LABEL_50;
            }
            if ( *((_DWORD *)v34 + 2) != v35[2] )
            {
              v34 += 8;
              v35 += 2;
              goto LABEL_50;
            }
            if ( *((_DWORD *)v34 + 3) != v35[3] )
            {
              v34 += 12;
              v35 += 3;
              goto LABEL_50;
            }
            if ( *((_DWORD *)v34 + 4) != v35[4] )
            {
              v34 += 16;
              v35 += 4;
              goto LABEL_50;
            }
            if ( *((_DWORD *)v34 + 5) != v35[5] )
            {
              v34 += 20;
              v35 += 5;
              goto LABEL_50;
            }
            if ( *((_DWORD *)v34 + 6) != v35[6] )
            {
              v34 += 24;
              v35 += 6;
              goto LABEL_50;
            }
            if ( *((_DWORD *)v34 + 7) != v35[7] )
              break;
            v35 += 8;
            v34 = (unsigned __int8 *)i;
          }
          v34 += 28;
          v35 += 7;
LABEL_50:
          if ( *v34 == *(_BYTE *)v35 )
          {
            if ( v34[1] == *((_BYTE *)v35 + 1) )
            {
              if ( v34[2] == *((_BYTE *)v35 + 2) )
              {
                v34 += 3;
                v35 = (_DWORD *)((char *)v35 + 3);
              }
              else
              {
                v34 += 2;
                v35 = (_DWORD *)((char *)v35 + 2);
              }
            }
            else
            {
              ++v34;
              v35 = (_DWORD *)((char *)v35 + 1);
            }
          }
LABEL_59:
          v37 = v34 - v29;
          v26 = (unsigned __int8 *)v35 - v37;
          if ( v37 <= v31 )
          {
            v30 += v37;
            goto LABEL_63;
          }
          v38 = v26;
          v67 = (__int64)v26;
          v31 = v37;
          if ( &v26[v37] > v29 )
            goto LABEL_65;
        }
LABEL_63:
        ++v30;
      }
      while ( v30 < 0xC );
      v38 = (unsigned __int8 *)v67;
LABEL_65:
      v11 = &v29[v31];
      v39 = v29 - v38;
      if ( v31 == 3 && v39 > 0x1000 )
        break;
      if ( v39 < 0x100 )
        v40 = XpressHighBitIndexTable[v39];
      else
        v40 = (unsigned int)XpressHighBitIndexTable[v39 >> 8] + 8;
      v55 += v40;
      v41 = v39 - (1LL << v40);
      v42 = 16 * v40;
      if ( v31 - 3 < 0xF )
      {
        v43 = v31 - 3 + v42;
        *v19 = v43;
        v46 = v19 + 1;
      }
      else
      {
        v43 = v42 + 15;
        v44 = v31 - 18;
        *v19 = v43;
        v45 = v19 + 1;
        if ( v31 - 18 >= 0xFF )
        {
          v48 = v44 + 15;
          *v45 = -1;
          if ( v48 >= 0x10000 )
          {
            *(_WORD *)(v45 + 1) = 0;
            v49 = v45 + 3;
            *v49 = v48;
            v46 = v49 + 1;
            v47 = 7LL;
          }
          else
          {
            *(_WORD *)(v45 + 1) = v48;
            v46 = v45 + 3;
            v47 = 3LL;
          }
        }
        else
        {
          *v45 = v44;
          v46 = v45 + 1;
          v47 = 1LL;
        }
        v56 += v47;
      }
      ++*(_DWORD *)&a6[4 * v43 + 1340960];
      *v46 = v41;
      v19 = (unsigned __int8 *)(v46 + 1);
      if ( v16 <= 0 )
      {
        *v62 = 2 * v16 + 1;
        goto LABEL_72;
      }
      v15 = v62;
      v16 = 2 * v16 + 1;
LABEL_70:
      v18 = (unsigned __int64)v54;
      v17 = XpressCallback;
    }
    v15 = v62;
    v11 = v29;
LABEL_68:
    ++v11;
    ++*(_DWORD *)&a6[4 * (unsigned __int8)v25 + 1339936];
    *v19++ = v25;
    if ( v16 > 0 )
    {
      v16 *= 2;
      goto LABEL_70;
    }
    *v15 = 2 * v16;
LABEL_72:
    v15 = (int *)v19;
    v62 = (int *)v19;
    v19 += 4;
    v16 = 1;
    goto LABEL_70;
  }
  return 3221225507LL;
}

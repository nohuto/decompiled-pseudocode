/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x140241D34
 * Callers:
 *     RtlCompressBufferProgress @ 0x140137A60 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x140241C80 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140137838 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140192D80 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x14024373C (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140243B1C (XpressDoHuffmanPass.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v10; // r13
  unsigned __int8 *v14; // rbx
  __int64 v15; // r15
  unsigned int v16; // esi
  __int64 v17; // r10
  unsigned __int8 *v18; // r11
  int *v19; // rbp
  int v20; // esi
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int8 *v23; // rdi
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r15d
  unsigned __int8 *v30; // r8
  int v31; // eax
  unsigned __int8 *v32; // rbp
  unsigned __int8 *v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r11
  int v36; // eax
  int v37; // eax
  unsigned __int8 *v38; // rbx
  _DWORD *v39; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v41; // rbx
  unsigned __int8 *v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  char v46; // cl
  unsigned __int8 v47; // cl
  unsigned __int64 v48; // rax
  _BYTE *v49; // rdi
  _WORD *v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  _DWORD *v53; // rdi
  unsigned __int8 v54; // al
  int v55; // eax
  int v56; // esi
  __int64 v57; // rax
  bool v58; // zf
  unsigned __int64 XpressCallback; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v60; // [rsp+38h] [rbp-90h]
  unsigned __int64 v61; // [rsp+40h] [rbp-88h]
  __int64 v62; // [rsp+48h] [rbp-80h]
  __int64 v63; // [rsp+50h] [rbp-78h]
  __int64 v64; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v65; // [rsp+60h] [rbp-68h]
  unsigned __int64 v66; // [rsp+68h] [rbp-60h]
  _QWORD v67[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v68; // [rsp+80h] [rbp-48h]
  int *v69; // [rsp+D0h] [rbp+8h]
  int v70; // [rsp+E0h] [rbp+18h]

  v70 = a3;
  v10 = a1 + a2;
  v66 = a3 + a4;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v64 = a3;
    v14 = (unsigned __int8 *)a1;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v15 = a3;
    if ( !a7 || (v16 = a9, a9 > a2) )
    {
      v16 = a2;
      a9 = a2;
    }
    v67[0] = a7;
    v67[1] = a8;
    v68 = v16;
    v60 = 0LL;
LABEL_8:
    v62 = 0LL;
    v63 = 0LL;
    memset(a6 + 1339936, 0, 0x800uLL);
    v17 = v16;
    v69 = (int *)(a6 + 1342240);
    v18 = (unsigned __int8 *)v10;
    v19 = (int *)(a6 + 1342240);
    v20 = 1;
    if ( (unsigned __int64)(v14 + 0x10000) <= v10 )
      v18 = v14 + 0x10000;
    v21 = (unsigned __int64)&v14[v17];
    v65 = v18;
    v22 = (unsigned __int64)(v18 - 5);
    v61 = (unsigned __int64)(v18 - 5);
    if ( (unsigned __int64)(v18 - 5) < v21 )
      v21 = (unsigned __int64)(v18 - 5);
    v23 = (unsigned __int8 *)(a6 + 1342244);
    XpressCallback = v21;
    if ( v14 == (unsigned __int8 *)a1 )
    {
      v20 = 2;
      ++*(_DWORD *)&a6[4 * *v14 + 1339936];
      v24 = *v14++;
      *v23 = v24;
      v23 = (unsigned __int8 *)(a6 + 1342245);
    }
    if ( (unsigned __int64)v14 >= v22 )
      goto LABEL_91;
    v25 = v14;
    v26 = (__int64)&v14[-a1] % 0x20000;
    do
    {
      v27 = (unsigned __int16)XpressHashFunction[*v25] ^ (unsigned __int16)word_140297010[v25[2]] ^ (unsigned __int64)(unsigned __int16)word_140296E10[v25[1]];
      v28 = *(_QWORD *)&a6[8 * v27];
      *(_QWORD *)&a6[8 * v27] = v25++;
      *(_QWORD *)&a6[8 * v26 + 0x40000] = v28;
      v26 = ((_DWORD)v26 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v25 < v22 );
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= v21 )
      {
        if ( (unsigned __int64)v14 >= v22 )
        {
          v15 = v64;
          v18 = v65;
LABEL_91:
          while ( v14 < v18 )
          {
            ++*(_DWORD *)&a6[4 * *v14 + 1339936];
            v54 = *v14++;
            *v23++ = v54;
            if ( v20 <= 0 )
            {
              v55 = 2 * v20;
              v20 = 1;
              *v19 = v55;
              v19 = (int *)v23;
              v23 += 4;
            }
            else
            {
              v20 *= 2;
            }
          }
          while ( v20 > 0 )
            v20 = 2 * v20 + 1;
          *v19 = 2 * v20 + 1;
          if ( (unsigned __int64)v14 < v10 )
          {
            v56 = 0;
          }
          else
          {
            ++*((_DWORD *)a6 + 335240);
            v56 = 1;
          }
          if ( v15 + v63 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 1310720) + v62 + 31) >> 5) + 258 >= v66 )
            return 3221225507LL;
          v57 = XpressDoHuffmanPass((int)a6 + 1310720, (int)a6 + 1342240, (_DWORD)v23, v15, v56);
          v64 = v57;
          v58 = v56 == 0;
          v15 = v57;
          v16 = a9;
          if ( !v58 )
          {
            *a5 = v57 - v70;
            return 0LL;
          }
          goto LABEL_8;
        }
        XpressCallback = RtlpMakeXpressCallback((__int64)v67, v22, (__int64)v14);
      }
      v29 = *(_DWORD *)v14;
      v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v14[-a1] % 0x20000) + 0x40000];
      if ( v30 + 0x10000 <= v14 )
        goto LABEL_71;
      v31 = v29 ^ *(_DWORD *)v30;
      if ( !v31 )
        goto LABEL_22;
      if ( (v31 & 0xFFFFFF) != 0 )
      {
        v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
        if ( v30 + 0x10000 <= v14 )
          goto LABEL_71;
        v36 = v29 ^ *(_DWORD *)v30;
        if ( !v36 )
          goto LABEL_22;
        if ( (v36 & 0xFFFFFF) != 0 )
        {
          v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
          if ( v30 + 0x10000 <= v14 )
            goto LABEL_71;
          v37 = v29 ^ *(_DWORD *)v30;
          if ( !v37 )
          {
LABEL_22:
            v32 = v14 - 0x10000;
            v33 = v14;
            v34 = 0LL;
            v35 = 3LL;
            goto LABEL_34;
          }
          if ( (v37 & 0xFFFFFF) != 0 )
            goto LABEL_71;
        }
      }
      v60 = v30;
      v33 = v14;
      v32 = v14 - 0x10000;
      v34 = 0LL;
      v35 = 3LL;
      do
      {
        v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
        if ( v30 <= v32 )
          break;
        if ( v29 == *(_DWORD *)v30 )
        {
          v14 = v33;
LABEL_34:
          v38 = v14 + 4;
          v39 = v30 + 4;
          for ( i = (unsigned __int64)(v38 + 32); ; i += 32LL )
          {
            if ( i >= v10 )
            {
              while ( (unsigned __int64)v38 < v10 && *v38 == *(_BYTE *)v39 )
              {
                ++v38;
                v39 = (_DWORD *)((char *)v39 + 1);
              }
              goto LABEL_62;
            }
            if ( *(_DWORD *)v38 != *v39 )
              goto LABEL_53;
            if ( *((_DWORD *)v38 + 1) != v39[1] )
            {
              v38 += 4;
              ++v39;
              goto LABEL_53;
            }
            if ( *((_DWORD *)v38 + 2) != v39[2] )
            {
              v38 += 8;
              v39 += 2;
              goto LABEL_53;
            }
            if ( *((_DWORD *)v38 + 3) != v39[3] )
            {
              v38 += 12;
              v39 += 3;
              goto LABEL_53;
            }
            if ( *((_DWORD *)v38 + 4) != v39[4] )
            {
              v38 += 16;
              v39 += 4;
              goto LABEL_53;
            }
            if ( *((_DWORD *)v38 + 5) != v39[5] )
            {
              v38 += 20;
              v39 += 5;
              goto LABEL_53;
            }
            if ( *((_DWORD *)v38 + 6) != v39[6] )
            {
              v38 += 24;
              v39 += 6;
              goto LABEL_53;
            }
            if ( *((_DWORD *)v38 + 7) != v39[7] )
              break;
            v39 += 8;
            v38 = (unsigned __int8 *)i;
          }
          v38 += 28;
          v39 += 7;
LABEL_53:
          if ( *v38 == *(_BYTE *)v39 )
          {
            if ( v38[1] == *((_BYTE *)v39 + 1) )
            {
              if ( v38[2] == *((_BYTE *)v39 + 2) )
              {
                v38 += 3;
                v39 = (_DWORD *)((char *)v39 + 3);
              }
              else
              {
                v38 += 2;
                v39 = (_DWORD *)((char *)v39 + 2);
              }
            }
            else
            {
              ++v38;
              v39 = (_DWORD *)((char *)v39 + 1);
            }
          }
LABEL_62:
          v41 = v38 - v33;
          v30 = (unsigned __int8 *)v39 - v41;
          if ( v41 <= v35 )
          {
            v34 += v41;
            goto LABEL_66;
          }
          v42 = v30;
          v60 = v30;
          v35 = v41;
          if ( &v30[v41] > v33 )
            goto LABEL_68;
        }
LABEL_66:
        ++v34;
      }
      while ( v34 < 0xC );
      v42 = v60;
LABEL_68:
      v14 = &v33[v35];
      v43 = v33 - v42;
      if ( v35 == 3 && v43 > 0x1000 )
        break;
      if ( v43 < 0x100 )
        v44 = XpressHighBitIndexTable[v43];
      else
        v44 = XpressHighBitIndexTable[v43 >> 8] + 8LL;
      v62 += v44;
      v45 = v43 - (1LL << v44);
      v46 = 16 * v44;
      if ( v35 - 3 < 0xF )
      {
        v47 = v35 - 3 + v46;
        *v23 = v47;
        v50 = v23 + 1;
      }
      else
      {
        v47 = v46 + 15;
        v48 = v35 - 18;
        *v23 = v47;
        v49 = v23 + 1;
        if ( v35 - 18 >= 0xFF )
        {
          v52 = v48 + 15;
          *v49 = -1;
          if ( v52 >= 0x10000 )
          {
            *(_WORD *)(v49 + 1) = 0;
            v53 = v49 + 3;
            *v53 = v52;
            v50 = v53 + 1;
            v51 = 7LL;
          }
          else
          {
            *(_WORD *)(v49 + 1) = v52;
            v50 = v49 + 3;
            v51 = 3LL;
          }
        }
        else
        {
          *v49 = v48;
          v50 = v49 + 1;
          v51 = 1LL;
        }
        v63 += v51;
      }
      ++*(_DWORD *)&a6[4 * v47 + 1340960];
      *v50 = v45;
      v23 = (unsigned __int8 *)(v50 + 1);
      if ( v20 <= 0 )
      {
        *v69 = 2 * v20 + 1;
        goto LABEL_75;
      }
      v19 = v69;
      v20 = 2 * v20 + 1;
LABEL_73:
      v22 = v61;
      v21 = XpressCallback;
    }
    v19 = v69;
    v14 = v33;
LABEL_71:
    ++v14;
    ++*(_DWORD *)&a6[4 * (unsigned __int8)v29 + 1339936];
    *v23++ = v29;
    if ( v20 > 0 )
    {
      v20 *= 2;
      goto LABEL_73;
    }
    *v19 = 2 * v20;
LABEL_75:
    v19 = (int *)v23;
    v69 = (int *)v23;
    v23 += 4;
    v20 = 1;
    goto LABEL_73;
  }
  return 3221225507LL;
}

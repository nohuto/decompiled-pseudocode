/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x18005F500
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x18005F4A0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x18005FD20 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x18006000C (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpMakeXpressCallback @ 0x180108790 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // rsi
  unsigned __int8 *v7; // rdi
  void *v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // rbp
  int *v14; // r15
  unsigned __int8 *v15; // rbx
  int v16; // esi
  unsigned __int8 v17; // al
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // r11
  _DWORD *v20; // rdx
  __int64 v21; // r8
  unsigned __int8 *v22; // r9
  unsigned __int8 v23; // bp
  unsigned __int8 v24; // r15
  unsigned __int8 v25; // bp
  char *v26; // rax
  unsigned __int8 v27; // r15
  unsigned __int8 v28; // r13
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  char v32; // cl
  unsigned __int64 v33; // r8
  unsigned __int8 v34; // cl
  _WORD *v35; // rbx
  unsigned __int8 v36; // al
  int v37; // esi
  int v38; // r8d
  __int64 v39; // rax
  bool v40; // zf
  __int64 v42; // r8
  unsigned __int8 *v43; // rcx
  __int64 v44; // r8
  unsigned __int8 *v45; // rdx
  __int64 v46; // r8
  unsigned __int8 *v47; // rdx
  int *v48; // rcx
  int v49; // eax
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int8 v52; // al
  unsigned __int64 v53; // r8
  int v54; // eax
  unsigned __int8 *v55; // r8
  unsigned __int64 XpressCallback; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+38h] [rbp-A0h]
  __int64 v58; // [rsp+40h] [rbp-98h]
  __int64 v59; // [rsp+48h] [rbp-90h]
  unsigned __int64 v60; // [rsp+50h] [rbp-88h]
  __int64 v61; // [rsp+58h] [rbp-80h]
  __int64 v62; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v63; // [rsp+70h] [rbp-68h]
  unsigned __int64 v64; // [rsp+78h] [rbp-60h]
  _QWORD v65[2]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v66; // [rsp+90h] [rbp-48h]
  int v68; // [rsp+F0h] [rbp+18h]
  int *v69; // [rsp+110h] [rbp+38h]
  _BYTE *v70; // [rsp+118h] [rbp+40h]

  v68 = a3;
  v62 = a2;
  v6 = a1 + a2;
  v60 = v6;
  v64 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  memset64(a6, a1, 0xAF6uLL);
  v61 = a3;
  v65[0] = 0LL;
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v7 = (unsigned __int8 *)a1;
  v65[1] = 0LL;
  v8 = a6 + 22608;
  v66 = a2;
  v9 = a6 + 23184;
  while ( 2 )
  {
    v10 = 0LL;
    v58 = 0LL;
    v11 = 0LL;
    v59 = 0LL;
    memset(v8, 0, 0x800uLL);
    v12 = (unsigned __int8 *)v6;
    if ( (unsigned __int64)(v7 + 0x10000) <= v6 )
      v12 = v7 + 0x10000;
    v63 = v12;
    XpressCallback = (unsigned __int64)&v7[v62];
    v13 = (unsigned __int64)(v12 - 40);
    v57 = (unsigned __int64)(v12 - 40);
    if ( v12 - 40 < &v7[v62] )
      XpressCallback = (unsigned __int64)(v12 - 40);
    v14 = v9;
    v69 = v9;
    v15 = (unsigned __int8 *)(v9 + 1);
    v16 = 1;
    if ( v7 == (unsigned __int8 *)a1 )
    {
      v16 = 2;
      ++a6[*v7 + 22608];
      v17 = *v7++;
      *v15++ = v17;
    }
    if ( (unsigned __int64)v7 >= v13 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = v7 + 1;
          v19 = v7;
          v20 = &a6[2 * *v7];
          v21 = v7[2] + 4 * (unsigned int)v7[1];
          v22 = *(unsigned __int8 **)&v20[4 * v21];
          *(_QWORD *)&v20[4 * v21] = v7;
          if ( *(_WORD *)v22 != *(_WORD *)v7 || v22[2] != v7[2] || v7 - v22 >= 0x10000 )
            break;
          v23 = v22[3];
          v24 = v7[3];
          if ( v24 != v23 )
          {
            v42 = *v7 + 2 * v21;
            v43 = *(unsigned __int8 **)&a6[2 * v42 + 5612 + 2 * v24];
            *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v23] = v22;
            if ( v7 - v43 >= 0x10000 || *(_DWORD *)v7 != *(_DWORD *)v43 )
              goto LABEL_46;
            v22 = v43;
            *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v7[3]] = v7;
          }
          v25 = v22[4];
          v26 = (char *)(v7 + 4);
          v27 = v7[4];
          v70 = v7 + 4;
          if ( v27 != v25 )
          {
            v44 = 2
                * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(*v7 + v7[3], 3), 1)
                 + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v7 ^ __ROR1__(*v18 + v7[2] + 97, 1), 3));
            v45 = *(unsigned __int8 **)&a6[2 * v44 + 5612 + 2 * v27];
            *(_QWORD *)&a6[2 * v44 + 5612 + 2 * v25] = v22;
            if ( v7 - v45 >= 0x10000 || *(_DWORD *)v7 != *(_DWORD *)v45 || *v70 != v45[4] || v7 == v45 )
            {
              v7 += 4;
              v22 += 4;
              goto LABEL_21;
            }
            v22 = v45;
            *(_QWORD *)&a6[2 * v44 + 5612 + 2 * (unsigned __int8)*v70] = v7;
            v26 = (char *)(v7 + 4);
          }
          v28 = v22[5];
          if ( v7[5] != v28 )
          {
            v46 = 2
                * ((v7[2] ^ (unsigned __int8)__ROL1__(*v7, *v26))
                 + 4
                 * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(v7[3], 3), 1)
                  + (unsigned __int8)__ROL1__(*v26 ^ (__ROR1__(*v7, 1) + 69), 3)));
            v47 = *(unsigned __int8 **)&a6[2 * v46 + 5612 + 2 * v7[5]];
            *(_QWORD *)&a6[2 * v46 + 5612 + 2 * v28] = v22;
            if ( v7 - v47 >= 0x10000
              || *(_DWORD *)v7 != *(_DWORD *)v47
              || *v70 != v47[4]
              || (v52 = v7[5], v52 != v47[5])
              || v7 == v47 )
            {
              v7 += 5;
              v22 += 5;
              goto LABEL_21;
            }
            v22 = v47;
            *(_QWORD *)&a6[2 * v46 + 5612 + 2 * v52] = v7;
          }
          v7 += 6;
          v22 += 6;
          if ( (unsigned __int64)v7 >= v60 - 40 )
          {
LABEL_61:
            while ( (unsigned __int64)v7 < v60 )
            {
              if ( *v7 != *v22 )
                break;
              ++v7;
              ++v22;
            }
          }
          else
          {
            while ( *(_DWORD *)v7 == *(_DWORD *)v22 )
            {
              if ( *((_DWORD *)v7 + 1) != *((_DWORD *)v22 + 1) )
              {
                v7 += 4;
                v22 += 4;
                break;
              }
              if ( *((_DWORD *)v7 + 2) != *((_DWORD *)v22 + 2) )
              {
                v7 += 8;
                v22 += 8;
                break;
              }
              if ( *((_DWORD *)v7 + 3) != *((_DWORD *)v22 + 3) )
              {
                v7 += 12;
                v22 += 12;
                break;
              }
              if ( *((_DWORD *)v7 + 4) != *((_DWORD *)v22 + 4) )
              {
                v7 += 16;
                v22 += 16;
                break;
              }
              if ( *((_DWORD *)v7 + 5) != *((_DWORD *)v22 + 5) )
              {
                v7 += 20;
                v22 += 20;
                break;
              }
              if ( *((_DWORD *)v7 + 6) != *((_DWORD *)v22 + 6) )
              {
                v7 += 24;
                v22 += 24;
                break;
              }
              if ( *((_DWORD *)v7 + 7) != *((_DWORD *)v22 + 7) )
              {
                v7 += 28;
                v22 += 28;
                break;
              }
              v7 += 32;
              v22 += 32;
              if ( (unsigned __int64)v7 >= v60 - 40 )
                goto LABEL_61;
            }
            if ( *v7 == *v22 )
            {
              if ( v7[1] == v22[1] )
              {
                if ( v7[2] != v22[2] )
                {
                  v7 += 2;
                  v22 += 2;
                  goto LABEL_21;
                }
LABEL_46:
                v7 += 3;
                v22 += 3;
                goto LABEL_21;
              }
              ++v7;
              ++v22;
            }
          }
LABEL_21:
          v29 = v7 - v22;
          if ( v7 - v19 == 3 && v29 > 0x1000 )
          {
            v14 = v69;
            v13 = v57;
            break;
          }
          if ( v29 >= 0x100 )
            v30 = (unsigned int)XpressHighBitIndexTable[v29 >> 8] + 8;
          else
            v30 = XpressHighBitIndexTable[v29];
          v10 = v30 + v58;
          v31 = v29 - (1LL << v30);
          v32 = 16 * v30;
          v33 = v7 - v19 - 3;
          v58 = v10;
          if ( v33 >= 0xF )
          {
            v34 = v32 + 15;
            v50 = v7 - v19 - 18;
            *v15 = v34;
            if ( v50 >= 0xFF )
            {
              v53 = v50 + 15;
              v15[1] = -1;
              if ( v53 < 0x10000 )
              {
                *((_WORD *)v15 + 1) = v53;
                v35 = v15 + 4;
                v59 += 3LL;
                goto LABEL_26;
              }
              *((_WORD *)v15 + 1) = 0;
              v51 = 7LL;
              *((_DWORD *)v15 + 1) = v53;
              v35 = v15 + 8;
            }
            else
            {
              v15[1] = v50;
              v51 = 1LL;
              v35 = v15 + 2;
            }
            v59 += v51;
          }
          else
          {
            v34 = v33 + v32;
            *v15 = v34;
            v35 = v15 + 1;
          }
LABEL_26:
          ++a6[v34 + 22864];
          *v35 = v31;
          v15 = (unsigned __int8 *)(v35 + 1);
          if ( v16 <= 0 )
          {
            v48 = v69;
            v49 = 2 * v16 + 1;
            v69 = (int *)v15;
            v16 = 1;
            v15 += 4;
            *v48 = v49;
          }
          else
          {
            v16 = 2 * v16 + 1;
          }
          v14 = v69;
          v13 = v57;
          if ( (unsigned __int64)v7 >= XpressCallback )
          {
            if ( (unsigned __int64)v7 >= v57 )
              goto LABEL_30;
            v55 = v7;
LABEL_99:
            XpressCallback = RtlpMakeXpressCallback(v65, v13, v55);
          }
        }
        v7 = v18;
        ++a6[*v19 + 22608];
        *v15++ = *v19;
        if ( v16 <= 0 )
          break;
        v16 *= 2;
      }
      v69 = (int *)v15;
      *v14 = 2 * v16;
      v16 = 1;
      v14 = (int *)v15;
      v15 += 4;
    }
    while ( (unsigned __int64)v18 < XpressCallback );
    if ( (unsigned __int64)v18 < v13 )
    {
      v55 = v18;
      goto LABEL_99;
    }
    v10 = v58;
LABEL_30:
    v11 = v59;
    v12 = v63;
LABEL_31:
    while ( v7 < v12 )
    {
      ++a6[*v7 + 22608];
      v36 = *v7++;
      *v15++ = v36;
      if ( v16 <= 0 )
      {
        v54 = 2 * v16;
        v16 = 1;
        *v14 = v54;
        v14 = (int *)v15;
        v15 += 4;
      }
      else
      {
        v16 *= 2;
      }
    }
    for ( ; v16 > 0; v16 = 2 * v16 + 1 )
      ;
    *v14 = 2 * v16 + 1;
    if ( (unsigned __int64)v7 < v60 )
    {
      v37 = 0;
    }
    else
    {
      ++a6[22864];
      v37 = 1;
    }
    if ( v11 + 4 * ((unsigned __int64)(v10 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v61 + 258 < v64 )
    {
      v38 = (int)v15;
      v9 = a6 + 23184;
      v39 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v38, v61, v37);
      v40 = v37 == 0;
      v61 = v39;
      v6 = v60;
      v8 = a6 + 22608;
      if ( !v40 )
      {
        *a5 = v39 - v68;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}

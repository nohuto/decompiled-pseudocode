/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1402423BC
 * Callers:
 *     RtlCompressBufferProgress @ 0x140137A60 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x140241C80 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140137838 (RtlpMakeXpressCallback.c)
 *     memset @ 0x140192D80 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x14024373C (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140243B1C (XpressDoHuffmanPass.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int8 *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  unsigned __int8 *v12; // rbx
  unsigned int v13; // ecx
  void *v14; // r9
  _DWORD *v15; // rdi
  __int64 v16; // r15
  _DWORD *v17; // rsi
  unsigned __int64 v18; // r9
  unsigned __int8 *v19; // rcx
  int *v20; // r11
  int v21; // r15d
  unsigned __int64 v22; // rdi
  unsigned __int8 *v23; // rsi
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // r13
  unsigned __int8 *v26; // r12
  _DWORD *v27; // rdx
  __int64 v28; // r10
  unsigned __int8 *v29; // r8
  unsigned __int8 v30; // di
  unsigned __int8 *v31; // r11
  unsigned __int8 v32; // cl
  __int64 v33; // rdx
  unsigned __int8 *v34; // rcx
  unsigned __int8 v35; // bp
  char *v36; // r9
  unsigned __int8 v37; // r10
  __int64 v38; // rdx
  unsigned __int8 *v39; // rcx
  unsigned __int8 v40; // r12
  _BYTE *v41; // r10
  unsigned __int8 v42; // bp
  __int64 v43; // rdx
  unsigned __int8 *v44; // rcx
  unsigned __int64 v45; // rdi
  unsigned __int64 XpressCallback; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  char v49; // cl
  unsigned __int64 v50; // rdx
  unsigned __int8 v51; // cl
  unsigned __int64 v52; // rdx
  _BYTE *v53; // rsi
  __int64 v54; // rax
  _WORD *v55; // rsi
  unsigned __int64 v56; // rdx
  _DWORD *v57; // rsi
  int *v58; // rcx
  int v59; // eax
  unsigned __int8 v60; // al
  int v61; // eax
  int v62; // edi
  __int64 v63; // rax
  bool v64; // zf
  unsigned __int8 *v66; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v67; // [rsp+40h] [rbp-B8h]
  int *v68; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v70; // [rsp+58h] [rbp-A0h]
  __int64 v71; // [rsp+60h] [rbp-98h]
  __int64 v72; // [rsp+68h] [rbp-90h]
  __int64 v73; // [rsp+70h] [rbp-88h]
  unsigned __int64 v74; // [rsp+78h] [rbp-80h]
  unsigned __int8 *v75; // [rsp+80h] [rbp-78h]
  unsigned __int8 *v76; // [rsp+88h] [rbp-70h]
  unsigned __int64 v77; // [rsp+90h] [rbp-68h]
  __int64 v78; // [rsp+98h] [rbp-60h]
  _QWORD v79[2]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v80; // [rsp+B0h] [rbp-48h]
  int v82; // [rsp+110h] [rbp+18h]

  v82 = a3;
  v9 = (unsigned __int8 *)a1;
  v10 = a1 + a2;
  v67 = v10;
  v77 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v73 = a3;
  v11 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v74 = v10 - 40;
  v12 = (unsigned __int8 *)a1;
  if ( !a7 || (v13 = a9, a9 > a2) )
    v13 = a2;
  v79[0] = a7;
  v14 = a6 + 22608;
  v15 = a6 + 23184;
  v16 = v13;
  v79[1] = a8;
  v80 = v13;
  v78 = v13;
  do
  {
    v71 = 0LL;
    v72 = 0LL;
    memset(v14, 0, 0x800uLL);
    v17 = v15;
    v18 = (unsigned __int64)&v12[v16];
    v68 = v15;
    v19 = (unsigned __int8 *)v10;
    v20 = v15;
    if ( (unsigned __int64)(v12 + 0x10000) <= v10 )
      v19 = v12 + 0x10000;
    v21 = 1;
    v76 = v19;
    v22 = (unsigned __int64)(v19 - 40);
    v70 = (unsigned __int64)(v19 - 40);
    if ( (unsigned __int64)(v19 - 40) < v18 )
      v18 = (unsigned __int64)(v19 - 40);
    v23 = (unsigned __int8 *)(v17 + 1);
    v69 = v18;
    if ( v12 == v9 )
    {
      v21 = 2;
      ++a6[*v12 + 22608];
      v24 = *v12++;
      *v23++ = v24;
    }
    if ( (unsigned __int64)v12 < v22 )
    {
      while ( 1 )
      {
        v25 = v12 + 1;
        v26 = v12;
        v66 = v12;
        v27 = &a6[2 * *v12];
        v28 = v12[2] + 4 * (unsigned int)v12[1];
        v29 = *(unsigned __int8 **)&v27[4 * v28];
        *(_QWORD *)&v27[4 * v28] = v12;
        if ( *(_WORD *)v29 != *(_WORD *)v12 || v29[2] != v12[2] || v12 - v29 >= 0x10000 )
          goto LABEL_69;
        v30 = v29[3];
        v31 = v12 + 3;
        v32 = v12[3];
        v75 = v12;
        if ( v32 != v30 )
        {
          v33 = *v12 + 2 * v28;
          v34 = *(unsigned __int8 **)&a6[2 * v33 + 5612 + 2 * v32];
          *(_QWORD *)&a6[2 * v33 + 5612 + 2 * v30] = v29;
          if ( v12 - v34 >= 0x10000 || *(_DWORD *)v12 != *(_DWORD *)v34 )
          {
            v12 += 3;
            goto LABEL_35;
          }
          v29 = v34;
          *(_QWORD *)&a6[2 * v33 + 5612 + 2 * *v31] = v12;
        }
        v35 = v29[4];
        v36 = (char *)(v12 + 4);
        v37 = v12[4];
        if ( v37 != v35 )
        {
          v38 = 2
              * ((unsigned __int8)__ROR1__(*v25 ^ __ROL1__(*v31 + *v12, 3), 1)
               + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v12 ^ __ROR1__(v12[2] + *v25 + 97, 1), 3));
          v39 = *(unsigned __int8 **)&a6[2 * v38 + 5612 + 2 * v37];
          *(_QWORD *)&a6[2 * v38 + 5612 + 2 * v35] = v29;
          if ( v12 - v39 >= 0x10000 || *(_DWORD *)v12 != *(_DWORD *)v39 || *v36 != v39[4] || v12 == v39 )
          {
            v10 = v67;
            v12 += 4;
            v29 += 4;
            goto LABEL_65;
          }
          v29 = v39;
          *(_QWORD *)&a6[2 * v38 + 5612 + 2 * (unsigned __int8)*v36] = v12;
        }
        v40 = v29[5];
        v41 = v12 + 5;
        v42 = v12[5];
        if ( v42 == v40 )
          goto LABEL_33;
        v43 = 2
            * ((v12[2] ^ (unsigned __int8)__ROL1__(*v12, *v36))
             + 4
             * ((unsigned __int8)__ROR1__(*v25 ^ __ROL1__(*v31, 3), 1)
              + (unsigned __int8)__ROL1__(*v36 ^ (__ROR1__(*v12, 1) + 69), 3)));
        v44 = *(unsigned __int8 **)&a6[2 * v43 + 5612 + 2 * v42];
        *(_QWORD *)&a6[2 * v43 + 5612 + 2 * v40] = v29;
        if ( v12 - v44 < 0x10000 && *(_DWORD *)v12 == *(_DWORD *)v44 && *v36 == v44[4] && *v41 == v44[5] && v12 != v44 )
        {
          v29 = v44;
          *(_QWORD *)&a6[2 * v43 + 5612 + 2 * (unsigned __int8)*v41] = v12;
LABEL_33:
          v12 += 6;
          for ( v29 += 6; ; v29 += 32 )
          {
            if ( (unsigned __int64)v12 >= v74 )
            {
              v10 = v67;
              while ( (unsigned __int64)v12 < v67 && *v12 == *v29 )
              {
                ++v12;
                ++v29;
              }
              goto LABEL_65;
            }
            if ( *(_DWORD *)v12 != *(_DWORD *)v29 )
              break;
            if ( *((_DWORD *)v12 + 1) != *((_DWORD *)v29 + 1) )
            {
              v12 += 4;
              v29 += 4;
              break;
            }
            if ( *((_DWORD *)v12 + 2) != *((_DWORD *)v29 + 2) )
            {
              v12 += 8;
              v29 += 8;
              break;
            }
            if ( *((_DWORD *)v12 + 3) != *((_DWORD *)v29 + 3) )
            {
              v12 += 12;
              v29 += 12;
              break;
            }
            if ( *((_DWORD *)v12 + 4) != *((_DWORD *)v29 + 4) )
            {
              v12 += 16;
              v29 += 16;
              break;
            }
            if ( *((_DWORD *)v12 + 5) != *((_DWORD *)v29 + 5) )
            {
              v12 += 20;
              v29 += 20;
              break;
            }
            if ( *((_DWORD *)v12 + 6) != *((_DWORD *)v29 + 6) )
            {
              v12 += 24;
              v29 += 24;
              break;
            }
            if ( *((_DWORD *)v12 + 7) != *((_DWORD *)v29 + 7) )
            {
              v12 += 28;
              v29 += 28;
              break;
            }
            v12 += 32;
          }
          v10 = v67;
          if ( *v12 != *v29 )
            goto LABEL_65;
          if ( v12[1] != v29[1] )
          {
            ++v12;
            ++v29;
            goto LABEL_65;
          }
          v26 = v66;
          if ( v12[2] != v29[2] )
          {
            v12 += 2;
            v29 += 2;
            goto LABEL_66;
          }
          v12 += 3;
LABEL_35:
          v29 += 3;
          goto LABEL_66;
        }
        v10 = v67;
        v12 += 5;
        v29 += 5;
LABEL_65:
        v26 = v66;
LABEL_66:
        v45 = v12 - v29;
        if ( v12 - v75 == 3 && v45 > 0x1000 )
        {
          v22 = v70;
          v18 = v69;
          v20 = v68;
LABEL_69:
          v12 = v25;
          ++a6[*v26 + 22608];
          *v23++ = *v26;
          if ( v21 <= 0 )
          {
            v68 = (int *)v23;
            *v20 = 2 * v21;
            v21 = 1;
            v20 = (int *)v23;
            v23 += 4;
            if ( (unsigned __int64)v25 >= v18 )
              goto LABEL_72;
          }
          else
          {
            v21 *= 2;
          }
        }
        else
        {
          if ( v45 < 0x100 )
            v47 = XpressHighBitIndexTable[v45];
          else
            v47 = XpressHighBitIndexTable[v45 >> 8] + 8LL;
          v71 += v47;
          v48 = v45 - (1LL << v47);
          v49 = 16 * v47;
          v50 = v12 - v75 - 3;
          if ( v50 < 0xF )
          {
            v51 = v50 + v49;
            *v23 = v51;
            v55 = v23 + 1;
          }
          else
          {
            v51 = v49 + 15;
            v52 = v12 - v75 - 18;
            *v23 = v51;
            v53 = v23 + 1;
            if ( v52 >= 0xFF )
            {
              v56 = v52 + 15;
              *v53 = -1;
              if ( v56 >= 0x10000 )
              {
                *(_WORD *)(v53 + 1) = 0;
                v57 = v53 + 3;
                v54 = 7LL;
                *v57 = v56;
                v55 = v57 + 1;
              }
              else
              {
                *(_WORD *)(v53 + 1) = v56;
                v54 = 3LL;
                v55 = v53 + 3;
              }
            }
            else
            {
              *v53 = v52;
              v54 = 1LL;
              v55 = v53 + 1;
            }
            v72 += v54;
          }
          ++a6[v51 + 22864];
          *v55 = v48;
          v23 = (unsigned __int8 *)(v55 + 1);
          if ( v21 <= 0 )
          {
            v58 = v68;
            v59 = 2 * v21 + 1;
            v20 = (int *)v23;
            v68 = (int *)v23;
            v21 = 1;
            v23 += 4;
            *v58 = v59;
          }
          else
          {
            v20 = v68;
            v21 = 2 * v21 + 1;
          }
          v18 = v69;
          v22 = v70;
          if ( (unsigned __int64)v12 >= v69 )
          {
LABEL_72:
            if ( (unsigned __int64)v12 >= v22 )
            {
              v11 = v73;
              v9 = (unsigned __int8 *)a1;
              v19 = v76;
              break;
            }
            XpressCallback = RtlpMakeXpressCallback((__int64)v79, v22, (__int64)v12);
            v20 = v68;
            v18 = XpressCallback;
            v69 = XpressCallback;
          }
        }
      }
    }
    if ( v12 < v19 )
    {
      do
      {
        ++a6[*v12 + 22608];
        v60 = *v12++;
        *v23++ = v60;
        if ( v21 <= 0 )
        {
          v61 = 2 * v21;
          v21 = 1;
          *v20 = v61;
          v20 = (int *)v23;
          v23 += 4;
        }
        else
        {
          v21 *= 2;
        }
      }
      while ( v12 < v19 );
      v9 = (unsigned __int8 *)a1;
    }
    while ( v21 > 0 )
      v21 = 2 * v21 + 1;
    *v20 = 2 * v21 + 1;
    if ( (unsigned __int64)v12 < v10 )
    {
      v62 = 0;
    }
    else
    {
      ++a6[22864];
      v62 = 1;
    }
    if ( v11 + v72 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 15304) + v71 + 31) >> 5) + 258 >= v77 )
      return 3221225507LL;
    v63 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v23, v11, v62);
    v16 = v78;
    v14 = a6 + 22608;
    v73 = v63;
    v64 = v62 == 0;
    v11 = v63;
    v15 = a6 + 23184;
  }
  while ( v64 );
  *a5 = v63 - v82;
  return 0LL;
}

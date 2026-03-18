/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x140290A94
 * Callers:
 *     RtlCompressBufferProgress @ 0x14014ED74 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x140290350 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14014ED2C (RtlpMakeXpressCallback.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x1402927A4 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140292B88 (XpressDoHuffmanPass.c)
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
  unsigned __int8 *v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int8 *v12; // rbx
  unsigned int v13; // ecx
  _DWORD *v14; // rsi
  void *v15; // rdi
  __int64 v16; // r15
  unsigned __int64 v17; // rdi
  unsigned __int8 *v18; // rcx
  int *v19; // r9
  int v20; // r15d
  unsigned __int64 v21; // r11
  unsigned __int8 *v22; // rsi
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // r12
  unsigned __int8 *v25; // rbp
  _DWORD *v26; // rdx
  __int64 v27; // r10
  unsigned __int8 *v28; // r8
  unsigned __int8 v29; // di
  _BYTE *v30; // r13
  unsigned __int8 v31; // cl
  __int64 v32; // rdx
  unsigned __int8 *v33; // rcx
  unsigned __int8 v34; // r11
  char *v35; // r9
  unsigned __int8 v36; // r10
  __int64 v37; // rdx
  unsigned __int8 *v38; // rcx
  unsigned __int8 v39; // bp
  _BYTE *v40; // r10
  unsigned __int8 v41; // r11
  __int64 v42; // rdx
  unsigned __int8 *v43; // rcx
  unsigned __int8 *i; // r8
  unsigned __int64 v45; // rdi
  int v46; // ecx
  int v47; // eax
  unsigned __int64 XpressCallback; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  char v52; // cl
  _BYTE *v53; // rax
  unsigned __int8 v54; // cl
  unsigned __int64 v55; // rdx
  _WORD *v56; // rsi
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  int v59; // eax
  int *v60; // rcx
  unsigned __int8 v61; // al
  int v62; // edi
  int v63; // r8d
  __int64 v64; // rax
  bool v65; // zf
  unsigned __int64 v67; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v68; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v69; // [rsp+48h] [rbp-B0h]
  int *v70; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v71; // [rsp+58h] [rbp-A0h]
  __int64 v72; // [rsp+60h] [rbp-98h]
  __int64 v73; // [rsp+68h] [rbp-90h]
  __int64 v74; // [rsp+70h] [rbp-88h]
  unsigned __int64 v75; // [rsp+78h] [rbp-80h]
  unsigned __int8 *v76; // [rsp+80h] [rbp-78h]
  unsigned __int8 *v77; // [rsp+88h] [rbp-70h]
  unsigned __int64 v78; // [rsp+90h] [rbp-68h]
  __int64 v79; // [rsp+98h] [rbp-60h]
  _QWORD v80[2]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v81; // [rsp+B0h] [rbp-48h]
  int v83; // [rsp+110h] [rbp+18h]

  v83 = a3;
  v9 = (unsigned __int8 *)a1;
  v10 = a1 + a2;
  v69 = v10;
  v78 = a3 + a4;
  if ( a4 >= 0x12C )
  {
    v74 = a3;
    v11 = a3;
    memset64(a6, a1, 0xAF6uLL);
    memset64(a6 + 5612, a1, 0x12EEuLL);
    v75 = v10 - 40;
    v12 = (unsigned __int8 *)a1;
    if ( !a7 || (v13 = a9, a9 > a2) )
      v13 = a2;
    v80[0] = a7;
    v14 = a6 + 23184;
    v15 = a6 + 22608;
    v16 = v13;
    v80[1] = a8;
    v81 = v13;
    v79 = v13;
    while ( 1 )
    {
      v72 = 0LL;
      v73 = 0LL;
      memset(v15, 0, 0x800uLL);
      v17 = (unsigned __int64)&v12[v16];
      v70 = v14;
      v18 = (unsigned __int8 *)v10;
      v19 = v14;
      if ( (unsigned __int64)(v12 + 0x10000) <= v10 )
        v18 = v12 + 0x10000;
      v20 = 1;
      v77 = v18;
      v21 = (unsigned __int64)(v18 - 40);
      v67 = (unsigned __int64)(v18 - 40);
      if ( (unsigned __int64)(v18 - 40) < v17 )
        v17 = (unsigned __int64)(v18 - 40);
      v22 = (unsigned __int8 *)(v14 + 1);
      v71 = v17;
      if ( v12 == v9 )
      {
        v20 = 2;
        ++a6[*v12 + 22608];
        v23 = *v12++;
        *v22++ = v23;
      }
      if ( (unsigned __int64)v12 < v21 )
        break;
LABEL_95:
      while ( v12 < v18 )
      {
        ++a6[*v12 + 22608];
        v61 = *v12++;
        *v22++ = v61;
        if ( v20 <= 0 )
        {
          *v19 = 2 * v20;
          v20 = 1;
          v19 = (int *)v22;
          v22 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      while ( v20 > 0 )
        v20 = 2 * v20 + 1;
      *v19 = 2 * v20 + 1;
      if ( (unsigned __int64)v12 < v10 )
      {
        v62 = 0;
      }
      else
      {
        ++a6[22864];
        v62 = 1;
      }
      if ( v11 + v73 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 15304) + v72 + 31) >> 5) + 258 >= v78 )
        return 3221225507LL;
      v63 = (int)v22;
      v14 = a6 + 23184;
      v64 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v63, v11, v62);
      v16 = v79;
      v65 = v62 == 0;
      v74 = v64;
      v15 = a6 + 22608;
      v11 = v64;
      if ( !v65 )
      {
        *a5 = v64 - v83;
        return 0LL;
      }
    }
    while ( 1 )
    {
      v24 = v12 + 1;
      v25 = v12;
      v68 = v12;
      v26 = &a6[2 * *v12];
      v27 = v12[2] + 4 * (unsigned int)v12[1];
      v28 = *(unsigned __int8 **)&v26[4 * v27];
      *(_QWORD *)&v26[4 * v27] = v12;
      if ( *(_WORD *)v28 != *(_WORD *)v12 || v28[2] != v12[2] || v12 - v28 >= 0x10000 )
        goto LABEL_42;
      v29 = v28[3];
      v30 = v12 + 3;
      v31 = v12[3];
      v76 = v12;
      if ( v31 == v29 )
        goto LABEL_20;
      v32 = *v12 + 2 * v27;
      v33 = *(unsigned __int8 **)&a6[2 * v32 + 5612 + 2 * v31];
      *(_QWORD *)&a6[2 * v32 + 5612 + 2 * v29] = v28;
      if ( v12 - v33 < 0x10000 && *(_DWORD *)v12 == *(_DWORD *)v33 )
        break;
      v12 += 3;
      i = v28 + 3;
LABEL_38:
      v10 = v69;
LABEL_39:
      v45 = v12 - i;
      if ( v12 - v76 != 3 || v45 <= 0x1000 )
      {
        if ( v45 < 0x100 )
          v49 = XpressHighBitIndexTable[v45];
        else
          v49 = (unsigned int)XpressHighBitIndexTable[v45 >> 8] + 8;
        v72 += v49;
        v50 = v12 - v76 - 3;
        v51 = v45 - (1LL << v49);
        v52 = 16 * v49;
        v53 = v22 + 1;
        if ( v50 < 0xF )
        {
          v54 = v50 + v52;
          *v22 = v54;
          v56 = v22 + 1;
        }
        else
        {
          v54 = v52 + 15;
          v55 = v12 - v76 - 18;
          *v22 = v54;
          v56 = v22 + 2;
          if ( v55 >= 0xFF )
          {
            v58 = v55 + 15;
            *v53 = -1;
            if ( v58 >= 0x10000 )
            {
              *v56 = 0;
              v56 = v53 + 7;
              *(_DWORD *)(v53 + 3) = v58;
              v57 = 7LL;
            }
            else
            {
              *v56 = v58;
              v56 = v53 + 3;
              v57 = 3LL;
            }
          }
          else
          {
            *v53 = v55;
            v57 = 1LL;
          }
          v73 += v57;
        }
        ++a6[v54 + 22864];
        v59 = 2 * v20 + 1;
        *v56 = v51;
        v22 = (unsigned __int8 *)(v56 + 1);
        if ( v20 <= 0 )
        {
          v60 = v70;
          v19 = (int *)v22;
          v70 = (int *)v22;
          v20 = 1;
          v22 += 4;
          *v60 = v59;
        }
        else
        {
          v19 = v70;
          v20 = 2 * v20 + 1;
        }
        v17 = v71;
        goto LABEL_73;
      }
      v17 = v71;
      v19 = v70;
LABEL_42:
      v12 = v24;
      ++a6[*v25 + 22608];
      *v22++ = *v25;
      if ( v20 <= 0 )
      {
        *v19 = 2 * v20;
        v20 = 1;
        v19 = (int *)v22;
        v70 = (int *)v22;
        v22 += 4;
LABEL_73:
        if ( (unsigned __int64)v12 >= v17 )
        {
          if ( (unsigned __int64)v12 >= v21 )
          {
            v11 = v74;
            v9 = (unsigned __int8 *)a1;
            v18 = v77;
            goto LABEL_95;
          }
          XpressCallback = RtlpMakeXpressCallback((__int64)v80, v21, (__int64)v12);
          v21 = v67;
          v17 = XpressCallback;
          v19 = v70;
          v71 = XpressCallback;
        }
      }
      else
      {
        v20 *= 2;
      }
    }
    v28 = v33;
    *(_QWORD *)&a6[2 * v32 + 5612 + 2 * (unsigned __int8)HIBYTE(*(_DWORD *)v12)] = v12;
LABEL_20:
    v34 = v28[4];
    v35 = (char *)(v12 + 4);
    v36 = v12[4];
    if ( v36 != v34 )
    {
      v37 = 2
          * ((unsigned __int8)__ROR1__(*v24 ^ __ROL1__(*v12 + *v30, 3), 1)
           + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v12 ^ __ROR1__(v12[2] + *v24 + 97, 1), 3));
      v38 = *(unsigned __int8 **)&a6[2 * v37 + 5612 + 2 * v36];
      *(_QWORD *)&a6[2 * v37 + 5612 + 2 * v34] = v28;
      if ( v12 - v38 >= 0x10000 || *(_DWORD *)v12 != *(_DWORD *)v38 || *v35 != v38[4] || v12 == v38 )
      {
        v12 += 4;
        i = v28 + 4;
LABEL_37:
        v25 = v68;
        v21 = v67;
        goto LABEL_38;
      }
      v28 = v38;
      *(_QWORD *)&a6[2 * v37 + 5612 + 2 * (unsigned __int8)*v35] = v12;
    }
    v39 = v28[5];
    v40 = v12 + 5;
    v41 = v12[5];
    if ( v41 == v39 )
      goto LABEL_33;
    v42 = 2
        * ((v12[2] ^ (unsigned __int8)__ROL1__(*v12, *v35))
         + 4
         * ((unsigned __int8)__ROR1__(*v24 ^ __ROL1__(*v30, 3), 1)
          + (unsigned __int8)__ROL1__(*v35 ^ (__ROR1__(*v12, 1) + 69), 3)));
    v43 = *(unsigned __int8 **)&a6[2 * v42 + 5612 + 2 * v41];
    *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v39] = v28;
    if ( v12 - v43 < 0x10000 && *(_DWORD *)v12 == *(_DWORD *)v43 && *v35 == v43[4] && *v40 == v43[5] && v12 != v43 )
    {
      v28 = v43;
      *(_QWORD *)&a6[2 * v42 + 5612 + 2 * (unsigned __int8)*v40] = v12;
LABEL_33:
      v12 += 6;
      for ( i = v28 + 6; ; i += 32 )
      {
        if ( (unsigned __int64)v12 >= v75 )
        {
          v10 = v69;
          while ( (unsigned __int64)v12 < v69 && *v12 == *i )
          {
            ++v12;
            ++i;
          }
          v21 = v67;
          v25 = v68;
          goto LABEL_39;
        }
        v46 = *(_DWORD *)v12;
        v47 = *(_DWORD *)i;
        if ( *(_DWORD *)v12 != *(_DWORD *)i )
          break;
        v46 = *((_DWORD *)v12 + 1);
        v47 = *((_DWORD *)i + 1);
        if ( v46 != v47 )
        {
          v12 += 4;
          i += 4;
          break;
        }
        v46 = *((_DWORD *)v12 + 2);
        v47 = *((_DWORD *)i + 2);
        if ( v46 != v47 )
        {
          v12 += 8;
          i += 8;
          break;
        }
        v46 = *((_DWORD *)v12 + 3);
        v47 = *((_DWORD *)i + 3);
        if ( v46 != v47 )
        {
          v12 += 12;
          i += 12;
          break;
        }
        v46 = *((_DWORD *)v12 + 4);
        v47 = *((_DWORD *)i + 4);
        if ( v46 != v47 )
        {
          v12 += 16;
          i += 16;
          break;
        }
        v46 = *((_DWORD *)v12 + 5);
        v47 = *((_DWORD *)i + 5);
        if ( v46 != v47 )
        {
          v12 += 20;
          i += 20;
          break;
        }
        v46 = *((_DWORD *)v12 + 6);
        v47 = *((_DWORD *)i + 6);
        if ( v46 != v47 )
        {
          v12 += 24;
          i += 24;
          break;
        }
        v46 = *((_DWORD *)v12 + 7);
        v47 = *((_DWORD *)i + 7);
        if ( v46 != v47 )
        {
          v12 += 28;
          i += 28;
          break;
        }
        v12 += 32;
      }
      if ( (_BYTE)v46 != (_BYTE)v47 )
        goto LABEL_37;
      if ( v12[1] != i[1] )
      {
        ++v12;
        ++i;
        goto LABEL_37;
      }
      v21 = v67;
      v25 = v68;
      v10 = v69;
      if ( v12[2] == i[2] )
      {
        v12 += 3;
        i += 3;
      }
      else
      {
        v12 += 2;
        i += 2;
      }
      goto LABEL_39;
    }
    v12 += 5;
    i = v28 + 5;
    goto LABEL_37;
  }
  return 3221225507LL;
}

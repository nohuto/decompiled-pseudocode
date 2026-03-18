/*
 * XREFs of vVtfdFill_IFIMetrics @ 0x1C0238AAC
 * Callers:
 *     bVtfdLoadFont @ 0x1C0238704 (bVtfdLoadFont.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0235354 (StringCchLengthA.c)
 *     fsSelectionFlags @ 0x1C0235E3C (fsSelectionFlags.c)
 *     cjVTFDIFIMETRICS @ 0x1C0238984 (cjVTFDIFIMETRICS.c)
 *     iDefaultFace @ 0x1C0238A7C (iDefaultFace.c)
 */

char __fastcall vVtfdFill_IFIMetrics(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char *v5; // r14
  char *v6; // r15
  char *v7; // rdi
  unsigned __int64 v8; // r12
  CHAR *v9; // r12
  unsigned __int64 v10; // rax
  int v11; // r11d
  int v12; // r12d
  ULONG BytesInMultiByteString; // r8d
  unsigned int v14; // r13d
  int v15; // r9d
  int v16; // edx
  int v17; // eax
  int v18; // r10d
  int v19; // ecx
  unsigned int v20; // r11d
  int *v21; // rdx
  char v22; // al
  char v23; // al
  __int16 v24; // cx
  char v25; // al
  int v26; // ecx
  signed int v27; // r11d
  __int16 v28; // r9
  __int16 v29; // cx
  __int16 v30; // ax
  __int16 v31; // r8
  __int16 v32; // r10
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // r8
  __int16 v37; // ax
  char v38; // cl
  CHAR v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int16 v42; // ax
  int v43; // ecx
  char v44; // dl
  char v45; // al
  _BYTE v47[20]; // [rsp+30h] [rbp-28h]
  PCHAR MultiByteString; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+50h]
  CHAR v50; // [rsp+B0h] [rbp+58h] BYREF
  size_t pcchLength; // [rsp+B8h] [rbp+60h] BYREF

  v49 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(unsigned __int8 *)(a1 + 105) | (unsigned __int64)((*(unsigned __int8 *)(a1 + 106) | (*(unsigned __int16 *)(a1 + 107) << 8)) << 8);
  *(_DWORD *)(a3 + 4) = 0;
  v9 = (CHAR *)(a1 + v8);
  MultiByteString = v9;
  LODWORD(v10) = cjVTFDIFIMETRICS(a1);
  *(_DWORD *)a3 = v10;
  if ( !(_DWORD)v10 )
    return v10;
  *(_DWORD *)(a3 + 16) = 192;
  *(_DWORD *)(a3 + 8) = 192;
  StringCchLengthA(v9, 0x7FFFFFFFuLL, &pcchLength);
  v12 = -1;
  BytesInMultiByteString = pcchLength + 1;
  v10 = 2LL * (unsigned int)(pcchLength + 1);
  if ( v10 > 0xFFFFFFFF )
    goto LABEL_54;
  LODWORD(v10) = v10 + 3;
  if ( (unsigned int)v10 < 2 * ((int)pcchLength + 1) )
    goto LABEL_54;
  LODWORD(v10) = v11 + (v10 & 0xFFFFFFFC);
  if ( (unsigned int)v10 < v11
    || (v14 = v10,
        (v16 = 2 * pcchLength, LODWORD(v10) = 2 * pcchLength + 192, *(_DWORD *)(a3 + 12) = v10, (int)v10 < v11)
     || (*(_DWORD *)(a3 + 20) = v10, a3 + 192 < a3)) )
  {
    v15 = 0;
    goto LABEL_7;
  }
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 192), v16 + 2, 0LL, MultiByteString, BytesInMultiByteString);
  *(_WORD *)(a3 + *(int *)(a3 + 16) + 2LL * (unsigned int)pcchLength) = 0;
  v17 = iDefaultFace(a1);
  v18 = v15 + 12;
  v19 = v17;
  v20 = v15 + 32;
  if ( v17 != 3 )
  {
    v10 = a3 + (int)v14;
    *(_DWORD *)(a3 + 24) = v14;
    if ( v10 >= a3 )
    {
      LOBYTE(v10) = v14 + 12;
      if ( v14 + 12 >= v14 )
      {
        _mm_lfence();
        v21 = (int *)(a3 + *(int *)(a3 + 24));
        if ( v19 )
        {
          if ( (unsigned int)(v19 - 1) > 1 )
            goto LABEL_26;
          LOBYTE(v10) = (_BYTE)v21 + 12;
          *(_QWORD *)v21 = 0LL;
          v21[2] = v18;
          if ( v21 + 3 >= v21 )
          {
            LOBYTE(v10) = v14 + 32;
            if ( v14 + 32 >= v14 + 12 )
            {
              _mm_lfence();
              v7 = (char *)v21 + v21[2];
              goto LABEL_26;
            }
          }
        }
        else
        {
          LODWORD(v10) = v15 + 52;
          *v21 = v18;
          v21[1] = v20;
          if ( v15 + 52 >= (unsigned int)(v15 + 32) )
            v12 = v15 + 52;
          v21[2] = v12;
          if ( (unsigned int)v10 >= v20 )
          {
            v10 = (unsigned __int64)v21 + *v21;
            if ( v10 >= (unsigned __int64)v21 )
            {
              v10 = (unsigned __int64)v21 + v21[1];
              if ( v10 >= (unsigned __int64)v21 )
              {
                v10 = (unsigned __int64)v21 + v12;
                if ( v10 >= (unsigned __int64)v21 )
                {
                  _mm_lfence();
                  LOBYTE(v10) = v14 + 72;
                  v5 = (char *)v21 + *v21;
                  v6 = (char *)v21 + v21[1];
                  v7 = (char *)v21 + v21[2];
                  if ( v14 + 72 >= v14 + 12 )
                    goto LABEL_26;
                }
              }
            }
          }
        }
LABEL_54:
        *(_DWORD *)a3 = 0;
        return v10;
      }
    }
LABEL_7:
    *(_DWORD *)a3 = v15;
    return v10;
  }
  *(_DWORD *)(a3 + 24) = 0;
LABEL_26:
  *(_BYTE *)(a3 + 44) = *(_BYTE *)(a1 + 85);
  v22 = *(_BYTE *)(a1 + 90);
  *(_BYTE *)(a3 + 45) = v22;
  if ( (v22 & 0xF) != 0 )
    v23 = v22 & 0xF0 | 2;
  else
    v23 = v22 & 0xF0 | 1;
  *(_BYTE *)(a3 + 45) = v23;
  v24 = *(_WORD *)(a1 + 83);
  *(_WORD *)(a3 + 46) = v24;
  if ( (unsigned __int16)(v24 - 1) > 0x3E7u )
    *(_WORD *)(a3 + 46) = 400;
  v25 = *(_BYTE *)(a3 + 45);
  *(_DWORD *)(a3 + 48) = 589844;
  v26 = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 28) = 0;
  if ( (v25 & 0xF) == 1 )
    v26 = 4788244;
  *(_DWORD *)(a3 + 48) = v26;
  *(_WORD *)(a3 + 52) = fsSelectionFlags((_BYTE *)a1);
  *(_WORD *)(a3 + 54) = 0;
  v28 = *(_WORD *)(a1 + 88);
  v29 = *(_WORD *)(a1 + 76);
  *(_WORD *)(a3 + 58) = 0;
  v30 = v28 - v29;
  if ( v29 <= 0 )
    v30 = v28;
  *(_WORD *)(a3 + 56) = v30;
  v31 = *(_WORD *)(a1 + 74);
  *(_WORD *)(a3 + 60) = v31;
  v32 = v28 - v31;
  *(_WORD *)(a3 + 62) = v28 - v31;
  *(_WORD *)(a3 + 64) = v31;
  *(_WORD *)(a3 + 66) = v31 - v28;
  v33 = *(_WORD *)(a1 + 78);
  *(_WORD *)(a3 + 70) = v31;
  *(_WORD *)(a3 + 68) = v33;
  *(_WORD *)(a3 + 74) = v33;
  *(_WORD *)(a3 + 72) = v31 - v28;
  *(_WORD *)(a3 + 76) = *(_WORD *)(a1 + 91);
  v34 = *(unsigned __int8 *)(a1 + 93);
  v35 = *(unsigned __int8 *)(a1 + 94);
  *(_QWORD *)(a3 + 84) = 0LL;
  *(_QWORD *)(a3 + 92) = 0LL;
  *(_WORD *)(a3 + 78) = v34 | (v35 << 8);
  if ( v28 <= 12 )
    v36 = 1;
  else
    v36 = v28 / 12;
  *(_WORD *)(a3 + 100) = v36;
  *(_WORD *)(a3 + 104) = v36;
  v37 = ~(unsigned __int16)(v36 / v27);
  if ( (__int16)(((v36 + 1) >> 1) - v32 + v36 / v27 + 1) > 0 )
    v37 = ((v36 + 1) >> 1) - v32;
  *(_WORD *)(a3 + 102) = v37;
  *(_WORD *)(a3 + 106) = (__int16)(v27
                                 + (*(unsigned __int8 *)(a1 + 74) | (*(unsigned __int8 *)(a1 + 75) << 8))
                                 - (*(unsigned __int8 *)(a1 + 76) | (*(unsigned __int8 *)(a1 + 77) << 8)))
                       / 3;
  *(_BYTE *)(a3 + 108) = *(_BYTE *)(a1 + 95);
  *(_BYTE *)(a3 + 109) = *(_BYTE *)(a1 + 96);
  v38 = *(_BYTE *)(a1 + 95);
  v39 = v38 + *(_BYTE *)(a1 + 98);
  LOBYTE(MultiByteString) = v38 + *(_BYTE *)(a1 + 97);
  *(_BYTE *)(a3 + 110) = (_BYTE)MultiByteString;
  v50 = v39;
  *(_BYTE *)(a3 + 111) = v39;
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 116), v27, 0LL, (PCHAR)&MultiByteString, 1u);
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 118), 2u, 0LL, &v50, 1u);
  v40 = v49;
  v41 = (unsigned int)(*(_DWORD *)(v49 + 12) - 1) + 1LL;
  *(_WORD *)(a3 + 112) = *(_WORD *)(v49 + 16);
  v41 *= 2LL;
  v42 = *(_WORD *)(v40 + 8 * v41);
  LOWORD(v41) = *(_WORD *)(v40 + 8 * v41 + 2);
  *(_DWORD *)(a3 + 80) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_WORD *)(a3 + 114) = v42 + v41 - 1;
  *(_QWORD *)(a3 + 120) = 1LL;
  LODWORD(v40) = *(unsigned __int16 *)(a1 + 70);
  *(_DWORD *)(a3 + 132) = v40;
  v43 = *(unsigned __int16 *)(a1 + 72);
  *(_DWORD *)(a3 + 128) = v43;
  if ( !(_DWORD)v40 )
    *(_DWORD *)(a3 + 132) = 1;
  if ( !v43 )
    *(_DWORD *)(a3 + 128) = 1;
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a3 + 136) = 1;
    *(_DWORD *)(a3 + 140) = 2;
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    *(_DWORD *)(a3 + 140) = 1;
  }
  *(_DWORD *)(a3 + 148) = *(__int16 *)(a3 + 70);
  *(_DWORD *)(a3 + 152) = *(__int16 *)(a3 + 78);
  *(_DWORD *)(a3 + 156) = *(__int16 *)(a3 + 72);
  *(_DWORD *)(a3 + 144) = 0;
  *(_DWORD *)(a3 + 160) = 1852534357;
  *(_QWORD *)(a3 + 164) = 0LL;
  *(_BYTE *)(a3 + 172) = 1;
  *(_BYTE *)(a3 + 173) = (*(_BYTE *)(a3 + 45) & 0xF0) != 32 ? 0 : 0xB;
  v44 = *(_WORD *)(a1 + 83) / 0x64u + 1;
  *(_BYTE *)(a3 + 174) = v44;
  v45 = -(*(_WORD *)(a1 + 86) != 0);
  *(_DWORD *)(a3 + 176) = 0;
  *(_WORD *)(a3 + 180) = 0;
  LOBYTE(v10) = v45 & 9;
  *(_BYTE *)(a3 + 175) = v10;
  if ( *(_DWORD *)(a3 + 24) )
  {
    *(_WORD *)v47 = 0;
    *(_WORD *)&v47[4] = *(_WORD *)(a3 + 46);
    *(_WORD *)&v47[6] = *(_WORD *)(a3 + 52);
    *(_DWORD *)&v47[8] = *(_DWORD *)(a3 + 76);
    *(_QWORD *)&v47[12] = *(_QWORD *)(a3 + 136);
    LOBYTE(v10) = v47[16];
    v47[3] = v44;
    v47[2] = 0;
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)v47;
      *((_DWORD *)v5 + 4) = *(_DWORD *)&v47[16];
      v7[3] = 8;
      *((_WORD *)v5 + 3) |= 0x20u;
      ++*((_WORD *)v5 + 4);
      ++*((_WORD *)v5 + 5);
      *((_WORD *)v5 + 2) = 700;
    }
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v47;
      *((_DWORD *)v6 + 4) = *(_DWORD *)&v47[16];
      *((_WORD *)v6 + 3) |= 1u;
      *((_DWORD *)v6 + 3) = 1;
      *((_DWORD *)v6 + 4) = 2;
    }
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)v47;
      *((_DWORD *)v7 + 4) = *(_DWORD *)&v47[16];
      *((_WORD *)v7 + 3) |= 0x21u;
      ++*((_WORD *)v7 + 4);
      ++*((_WORD *)v7 + 5);
      v7[3] = 8;
      *((_WORD *)v7 + 2) = 700;
      *((_DWORD *)v7 + 3) = 1;
      *((_DWORD *)v7 + 4) = 2;
    }
  }
  return v10;
}

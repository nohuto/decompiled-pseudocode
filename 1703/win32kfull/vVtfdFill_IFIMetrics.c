/*
 * XREFs of vVtfdFill_IFIMetrics @ 0x1C02374E8
 * Callers:
 *     bVtfdLoadFont @ 0x1C023714C (bVtfdLoadFont.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0233DD4 (StringCchLengthA.c)
 *     fsSelectionFlags @ 0x1C02348A8 (fsSelectionFlags.c)
 *     cjVTFDIFIMETRICS @ 0x1C02373CC (cjVTFDIFIMETRICS.c)
 *     iDefaultFace @ 0x1C02374B8 (iDefaultFace.c)
 */

unsigned __int64 __fastcall vVtfdFill_IFIMetrics(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char *v5; // r15
  char *v6; // r13
  char *v7; // rdi
  unsigned __int64 v8; // r14
  char *v9; // r14
  unsigned __int64 result; // rax
  int v11; // r11d
  ULONG BytesInMultiByteString; // r9d
  unsigned int v13; // r12d
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // r8d
  int *v17; // rdx
  char v18; // al
  char v19; // al
  __int16 v20; // cx
  char v21; // al
  int v22; // ecx
  signed int v23; // r11d
  __int16 v24; // r9
  __int16 v25; // r10
  __int16 v26; // ax
  __int16 v27; // r8
  __int16 v28; // r9
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // r8
  __int16 v32; // dx
  CHAR v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // ecx
  char v38; // cl
  char v39; // dl
  int v40; // ecx
  int v41; // ecx
  _BYTE v42[20]; // [rsp+30h] [rbp-28h]
  CHAR MultiByteString; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v44; // [rsp+A8h] [rbp+50h]
  CHAR v45; // [rsp+B0h] [rbp+58h] BYREF
  size_t pcchLength; // [rsp+B8h] [rbp+60h] BYREF

  v44 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(unsigned __int8 *)(a1 + 105) | ((*(unsigned __int8 *)(a1 + 106) | ((unsigned __int64)*(unsigned __int16 *)(a1 + 107) << 8)) << 8);
  *(_DWORD *)(a3 + 4) = 0;
  v9 = (char *)(a1 + v8);
  result = cjVTFDIFIMETRICS(a1);
  *(_DWORD *)a3 = result;
  if ( !(_DWORD)result )
    return result;
  *(_DWORD *)(a3 + 16) = 192;
  *(_DWORD *)(a3 + 8) = 192;
  StringCchLengthA(v9, 0x7FFFFFFFuLL, &pcchLength);
  BytesInMultiByteString = pcchLength + 1;
  result = 2LL * (unsigned int)(pcchLength + 1);
  if ( result > 0xFFFFFFFF || (int)result + 3 < (unsigned int)result )
  {
    *(_DWORD *)a3 = 0;
    return result;
  }
  result = (((_DWORD)result + 3) & 0xFFFFFFFC) + 192;
  if ( (unsigned int)result < v11
    || (v13 = result,
        (v14 = 2 * pcchLength,
         result = (unsigned int)(2 * pcchLength + 192),
         *(_DWORD *)(a3 + 12) = result,
         (int)result < v11)
     || (*(_DWORD *)(a3 + 20) = result, a3 + 192 < a3)) )
  {
    *(_DWORD *)a3 = 0;
    return result;
  }
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 192), v14 + 2, 0LL, v9, BytesInMultiByteString);
  *(_WORD *)(a3 + *(int *)(a3 + 16) + 2LL * (unsigned int)pcchLength) = 0;
  v15 = iDefaultFace(a1);
  if ( v15 == 3 )
  {
    *(_DWORD *)(a3 + 24) = 0;
    goto LABEL_22;
  }
  result = a3 + (int)v13;
  *(_DWORD *)(a3 + 24) = v13;
  if ( result < a3 || (result = v13 + 12, (unsigned int)result < v13) )
  {
LABEL_53:
    *(_DWORD *)a3 = 0;
    return result;
  }
  v16 = v13 + 12;
  _mm_lfence();
  v17 = (int *)(a3 + *(int *)(a3 + 24));
  if ( v15 )
  {
    if ( (unsigned int)(v15 - 1) > 1 )
      goto LABEL_22;
    result = (unsigned __int64)(v17 + 3);
    *(_QWORD *)v17 = 0LL;
    v17[2] = 12;
    if ( v17 + 3 >= v17 )
    {
      result = v13 + 32;
      if ( (unsigned int)result >= v16 )
      {
        _mm_lfence();
        v7 = (char *)v17 + v17[2];
        goto LABEL_22;
      }
    }
    goto LABEL_53;
  }
  *v17 = 12;
  v17[1] = 32;
  v17[2] = 52;
  result = (unsigned __int64)v17 + *v17;
  if ( result < (unsigned __int64)v17 )
    goto LABEL_53;
  result = (unsigned __int64)v17 + v17[1];
  if ( result < (unsigned __int64)v17 )
    goto LABEL_53;
  result = (unsigned __int64)(v17 + 13);
  if ( v17 + 13 < v17 )
    goto LABEL_53;
  _mm_lfence();
  result = v13 + 72;
  v5 = (char *)v17 + *v17;
  v6 = (char *)v17 + v17[1];
  v7 = (char *)v17 + v17[2];
  if ( (unsigned int)result < v16 )
    goto LABEL_53;
LABEL_22:
  *(_BYTE *)(a3 + 44) = *(_BYTE *)(a1 + 85);
  v18 = *(_BYTE *)(a1 + 90);
  *(_BYTE *)(a3 + 45) = v18;
  if ( (v18 & 0xF) != 0 )
    v19 = v18 & 0xF0 | 2;
  else
    v19 = v18 & 0xF0 | 1;
  *(_BYTE *)(a3 + 45) = v19;
  v20 = *(_WORD *)(a1 + 83);
  *(_WORD *)(a3 + 46) = v20;
  if ( (unsigned __int16)(v20 - 1) > 0x3E7u )
    *(_WORD *)(a3 + 46) = 400;
  v21 = *(_BYTE *)(a3 + 45);
  *(_DWORD *)(a3 + 48) = 589844;
  v22 = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 28) = 0;
  if ( (v21 & 0xF) == 1 )
    v22 = 4788244;
  *(_DWORD *)(a3 + 48) = v22;
  *(_WORD *)(a3 + 52) = fsSelectionFlags((_BYTE *)a1);
  *(_WORD *)(a3 + 54) = 0;
  v24 = *(_WORD *)(a1 + 88);
  v25 = v24;
  if ( *(__int16 *)(a1 + 76) <= 0 )
    v26 = *(_WORD *)(a1 + 88);
  else
    v26 = v24 - ((*(unsigned __int8 *)(a1 + 77) << 8) | *(unsigned __int8 *)(a1 + 76));
  *(_WORD *)(a3 + 56) = v26;
  *(_WORD *)(a3 + 58) = 0;
  v27 = *(_WORD *)(a1 + 74);
  *(_WORD *)(a3 + 60) = v27;
  v28 = v24 - v27;
  *(_WORD *)(a3 + 62) = v28;
  *(_WORD *)(a3 + 64) = v27;
  *(_WORD *)(a3 + 66) = -v28;
  v29 = *(_WORD *)(a1 + 78);
  *(_WORD *)(a3 + 70) = v27;
  *(_WORD *)(a3 + 68) = v29;
  *(_WORD *)(a3 + 74) = v29;
  *(_WORD *)(a3 + 72) = -v28;
  *(_WORD *)(a3 + 76) = *(_WORD *)(a1 + 91);
  v30 = *(_WORD *)(a1 + 93);
  *(_QWORD *)(a3 + 84) = 0LL;
  *(_WORD *)(a3 + 78) = v30;
  *(_QWORD *)(a3 + 92) = 0LL;
  if ( v25 <= 12 )
    v31 = 1;
  else
    v31 = v25 / 12;
  *(_WORD *)(a3 + 100) = v31;
  *(_WORD *)(a3 + 104) = v31;
  v32 = -1 - v31 / v23;
  *(_WORD *)(a3 + 102) = v32;
  if ( (__int16)(((v31 + 1) >> 1) - v32 - v28) > 0 )
    *(_WORD *)(a3 + 102) = ((v31 + 1) >> 1) - v28;
  *(_WORD *)(a3 + 106) = (__int16)(v23
                                 + (*(unsigned __int8 *)(a1 + 74) | (*(unsigned __int8 *)(a1 + 75) << 8))
                                 - (*(unsigned __int8 *)(a1 + 76) | (*(unsigned __int8 *)(a1 + 77) << 8)))
                       / 3;
  *(_BYTE *)(a3 + 108) = *(_BYTE *)(a1 + 95);
  *(_BYTE *)(a3 + 109) = *(_BYTE *)(a1 + 96);
  v33 = *(_BYTE *)(a1 + 95) + *(_BYTE *)(a1 + 98);
  MultiByteString = *(_BYTE *)(a1 + 95) + *(_BYTE *)(a1 + 97);
  *(_BYTE *)(a3 + 110) = MultiByteString;
  v45 = v33;
  *(_BYTE *)(a3 + 111) = v33;
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 116), v23, 0LL, &MultiByteString, 1u);
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 118), 2u, 0LL, &v45, 1u);
  v34 = v44;
  v35 = (unsigned int)(*(_DWORD *)(v44 + 12) - 1) + 1LL;
  *(_WORD *)(a3 + 112) = *(_WORD *)(v44 + 16);
  LOWORD(v35) = *(_WORD *)(v34 + 16 * v35) + *(_WORD *)(v34 + 16 * v35 + 2);
  *(_DWORD *)(a3 + 80) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_WORD *)(a3 + 114) = v35 - 1;
  *(_QWORD *)(a3 + 120) = 1LL;
  v36 = *(unsigned __int16 *)(a1 + 70);
  *(_DWORD *)(a3 + 132) = v36;
  if ( !v36 )
    v36 = 1;
  v37 = *(unsigned __int16 *)(a1 + 72);
  *(_DWORD *)(a3 + 132) = v36;
  if ( !v37 )
    v37 = 1;
  *(_DWORD *)(a3 + 128) = v37;
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
  v38 = 0;
  *(_DWORD *)(a3 + 152) = *(__int16 *)(a3 + 78);
  *(_DWORD *)(a3 + 156) = *(__int16 *)(a3 + 72);
  *(_DWORD *)(a3 + 144) = 0;
  *(_DWORD *)(a3 + 160) = 1852534357;
  *(_QWORD *)(a3 + 164) = 0LL;
  *(_BYTE *)(a3 + 172) = 1;
  if ( (*(_BYTE *)(a3 + 45) & 0xF0) == 0x20 )
    v38 = 11;
  *(_BYTE *)(a3 + 173) = v38;
  v39 = *(_WORD *)(a1 + 83) / 0x64u + 1;
  *(_BYTE *)(a3 + 174) = v39;
  v40 = *(unsigned __int16 *)(a1 + 86);
  *(_DWORD *)(a3 + 176) = 0;
  v41 = -v40;
  *(_WORD *)(a3 + 180) = 0;
  result = v41 != 0 ? 9 : 0;
  *(_BYTE *)(a3 + 175) = v41 != 0 ? 9 : 0;
  if ( *(_DWORD *)(a3 + 24) )
  {
    *(_WORD *)&v42[4] = *(_WORD *)(a3 + 46);
    *(_WORD *)&v42[6] = *(_WORD *)(a3 + 52);
    *(_DWORD *)&v42[8] = *(_DWORD *)(a3 + 76);
    *(_QWORD *)&v42[12] = *(_QWORD *)(a3 + 136);
    result = *(unsigned int *)&v42[16];
    v42[3] = v39;
    *(_WORD *)v42 = 0;
    v42[2] = 0;
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)v42;
      *((_DWORD *)v5 + 4) = *(_DWORD *)&v42[16];
      v7[3] = 8;
      *((_WORD *)v5 + 3) |= 0x20u;
      ++*((_WORD *)v5 + 4);
      ++*((_WORD *)v5 + 5);
      *((_WORD *)v5 + 2) = 700;
    }
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v42;
      *((_DWORD *)v6 + 4) = *(_DWORD *)&v42[16];
      *((_WORD *)v6 + 3) |= 1u;
      *((_DWORD *)v6 + 3) = 1;
      *((_DWORD *)v6 + 4) = 2;
    }
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)v42;
      *((_DWORD *)v7 + 4) = *(_DWORD *)&v42[16];
      *((_WORD *)v7 + 3) |= 0x21u;
      ++*((_WORD *)v7 + 4);
      ++*((_WORD *)v7 + 5);
      v7[3] = 8;
      *((_WORD *)v7 + 2) = 700;
      *((_DWORD *)v7 + 3) = 1;
      *((_DWORD *)v7 + 4) = 2;
    }
  }
  return result;
}

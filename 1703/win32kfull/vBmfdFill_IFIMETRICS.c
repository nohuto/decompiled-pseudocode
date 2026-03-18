/*
 * XREFs of vBmfdFill_IFIMETRICS @ 0x1C0234B0C
 * Callers:
 *     bConvertFontRes @ 0x1C0234348 (bConvertFontRes.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0233DD4 (StringCchLengthA.c)
 *     fsSelectionFlags @ 0x1C02348A8 (fsSelectionFlags.c)
 *     vComputeSpecialChars @ 0x1C02351AC (vComputeSpecialChars.c)
 */

HRESULT __fastcall vBmfdFill_IFIMETRICS(__int64 a1, _QWORD *a2)
{
  const char *v2; // r11
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  HRESULT result; // eax
  const CHAR *v10; // r11
  unsigned int v11; // r12d
  int v12; // eax
  ULONG v13; // edx
  unsigned int v14; // eax
  signed int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  char v18; // dl
  __int16 v19; // cx
  char v20; // al
  int v21; // eax
  __int16 v22; // cx
  __int16 v23; // r9
  __int16 v24; // r11
  __int16 v25; // r12
  __int16 v26; // r12
  __int16 v27; // ax
  __int16 v28; // cx
  __int16 v29; // cx
  __int16 v30; // dx
  int v31; // ecx
  __int16 v32; // ax
  __int16 v33; // r8
  __int16 v34; // dx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // edx
  int v38; // ecx
  char v39; // al
  char v40; // cl
  char v41; // cl
  char v42; // dl
  __int16 v43; // cx
  __int16 v44; // cx
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-30h]
  _BYTE v46[20]; // [rsp+30h] [rbp-20h]
  __int16 v47; // [rsp+90h] [rbp+40h]
  size_t pcchLength; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (const char *)a2[2];
  v4 = *a2;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0LL;
  v47 = *(_WORD *)(a1 + 48);
  v8 = 0LL;
  if ( !v2 )
    v2 = (const char *)(v4
                      + (*(unsigned __int8 *)(v4 + 105) | (*(unsigned __int8 *)(v4 + 108) << 24) | ((unsigned __int64)*(unsigned __int16 *)(v4 + 106) << 8)));
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 16) = 192;
  *(_DWORD *)(v6 + 8) = 192;
  result = StringCchLengthA(v2, 0x7FFFFFFFuLL, &pcchLength);
  if ( result >= 0 )
  {
    v11 = pcchLength;
    v12 = 2 * pcchLength + 192;
    v13 = 2 * pcchLength + 2;
    *(_DWORD *)(v6 + 12) = v12;
    *(_DWORD *)(v6 + 20) = v12;
    BytesInMultiByteString = v11 + 1;
    if ( *(_DWORD *)(a1 + 32) )
    {
      RtlMultiByteToUnicodeN((PWCH)(v6 + 194), v13, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v6 + *(int *)(v6 + 16) + 2LL * v11 + 2) = 0;
      *(_WORD *)(*(int *)(v6 + 16) + v6) = 64;
    }
    else
    {
      RtlMultiByteToUnicodeN((PWCH)(v6 + 192), v13, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v6 + *(int *)(v6 + 16) + 2LL * v11) = 0;
    }
    *(_DWORD *)v6 = *(_DWORD *)(a1 + 60);
    v14 = *(_DWORD *)(a1 + 68);
    LODWORD(pcchLength) = 2;
    if ( v14 <= 2 )
    {
      v15 = (*(_DWORD *)(a1 + 56) + 195) & 0xFFFFFFFC;
      v16 = v6 + v15;
      *(_DWORD *)(v6 + 24) = v15;
      v17 = *(_DWORD *)(a1 + 68);
      if ( v17 )
      {
        if ( (unsigned int)(v17 - 1) <= 1 )
        {
          *(_QWORD *)v16 = 0LL;
          v8 = v16 + 12;
          *(_DWORD *)(v16 + 8) = 12;
        }
      }
      else
      {
        v5 = v16 + 12;
        *(_DWORD *)v16 = 12;
        v7 = v16 + 32;
        *(_DWORD *)(v16 + 8) = 52;
        v8 = v16 + 52;
        *(_DWORD *)(v16 + 4) = 32;
      }
    }
    else if ( v14 == 3 )
    {
      *(_DWORD *)(v6 + 24) = 0;
    }
    *(_BYTE *)(v6 + 44) = *(_BYTE *)(v4 + 85);
    v18 = *(_BYTE *)(v4 + 90) & 0xF0;
    *(_BYTE *)(v6 + 45) = v18;
    *(_BYTE *)(v6 + 45) = v18 | (2 - (*(_BYTE *)(v4 + 86) != 0));
    v19 = *(_WORD *)(v4 + 83);
    *(_WORD *)(v6 + 46) = v19;
    if ( (unsigned __int16)(v19 - 1) > 0x3E7u )
      *(_WORD *)(v6 + 46) = 400;
    v20 = *(_BYTE *)(v6 + 45) & 0xF;
    *(_DWORD *)(v6 + 48) = 540674082;
    if ( v20 == 1 )
    {
      v21 = *(_DWORD *)(v6 + 48);
      if ( !v47 )
        v21 = 540678178;
      *(_DWORD *)(v6 + 48) = v21;
      *(_DWORD *)(v6 + 48) |= 0x400000u;
    }
    if ( v47 )
      *(_DWORD *)(v6 + 48) |= 0x10000000u;
    *(_DWORD *)(v6 + 28) = 0;
    *(_WORD *)(v6 + 52) = fsSelectionFlags((_BYTE *)v4);
    *(_WORD *)(v6 + 54) = 0;
    v22 = *(_WORD *)(a1 + 44);
    v23 = *(_WORD *)(v4 + 76);
    if ( v23 > 0 )
      v22 -= v23;
    *(_WORD *)(v6 + 56) = v22;
    *(_WORD *)(v6 + 58) = 0;
    v24 = *(_WORD *)(v4 + 74);
    *(_WORD *)(v6 + 60) = v24;
    v25 = *(_WORD *)(a1 + 44);
    *(_WORD *)(v6 + 64) = v24;
    v26 = v25 - v24;
    *(_WORD *)(v6 + 62) = v26;
    *(_WORD *)(v6 + 66) = -v26;
    v27 = *(unsigned __int8 *)(v4 + 78);
    v28 = *(unsigned __int8 *)(v4 + 79);
    *(_WORD *)(v6 + 72) = -v26;
    v29 = v27 | (v28 << 8);
    *(_WORD *)(v6 + 70) = v24;
    *(_WORD *)(v6 + 68) = v29;
    *(_WORD *)(v6 + 74) = v29;
    *(_WORD *)(v6 + 78) = *(_WORD *)(a1 + 46);
    v30 = *(_WORD *)(v4 + 91);
    *(_WORD *)(v6 + 76) = v30;
    v31 = *(unsigned __int16 *)(a1 + 46);
    *(_QWORD *)(v6 + 84) = 0LL;
    v32 = v24 + v26;
    *(_QWORD *)(v6 + 92) = 0LL;
    if ( v30 > v31 )
      v30 = v31;
    *(_WORD *)(v6 + 76) = v30;
    if ( v32 <= 12 )
      v33 = 1;
    else
      v33 = v32 / 12;
    *(_WORD *)(v6 + 100) = v33;
    *(_WORD *)(v6 + 104) = v33;
    v34 = -1 - v33 / (int)pcchLength;
    *(_WORD *)(v6 + 102) = v34;
    if ( (__int16)(((v33 + 1) >> 1) - v34 - v26) > 0 )
      *(_WORD *)(v6 + 102) = ((v33 + 1) >> 1) - v26;
    *(_WORD *)(v6 + 106) = (__int16)(v24 - v23 + 2) / 3;
    *(_BYTE *)(v6 + 108) = *(_BYTE *)(a1 + 40);
    *(_BYTE *)(v6 + 109) = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(v6 + 111) = *(_BYTE *)(a1 + 40) + *(_BYTE *)(a1 + 43);
    *(_BYTE *)(v6 + 110) = *(_BYTE *)(*a2 + 95LL) + *(_BYTE *)(*a2 + 97LL);
    vComputeSpecialChars(a1 + 36, v6 + 116, v6 + 118);
    v35 = *(_QWORD *)(a1 + 72);
    v36 = (unsigned int)(*(_DWORD *)(v35 + 36) - 1) + 1LL;
    *(_WORD *)(v6 + 112) = *(_WORD *)(v35 + 40);
    LOWORD(v36) = *(_WORD *)(v35 + 16 * v36 + 24) + *(_WORD *)(v35 + 16 * v36 + 26);
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 120) = 1LL;
    *(_WORD *)(v6 + 114) = v36 - 1;
    LODWORD(v36) = *(__int16 *)(v6 + 56);
    *(_WORD *)(v6 + 80) = *(__int16 *)(v6 + 56) / 2;
    *(_WORD *)(v6 + 82) = (int)v36 / 4;
    v37 = *(unsigned __int16 *)(v4 + 70);
    *(_DWORD *)(v6 + 132) = v37;
    if ( !v37 )
      v37 = 1;
    v38 = *(unsigned __int16 *)(v4 + 72);
    *(_DWORD *)(v6 + 132) = v37;
    if ( !v38 )
      v38 = 1;
    *(_DWORD *)(v6 + 128) = v38;
    if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
    {
      *(_DWORD *)(v6 + 136) = 1;
      *(_DWORD *)(v6 + 140) = 2;
    }
    else
    {
      *(_DWORD *)(v6 + 136) = 0;
      *(_DWORD *)(v6 + 140) = 1;
    }
    *(_DWORD *)(v6 + 148) = *(__int16 *)(v6 + 70);
    *(_DWORD *)(v6 + 152) = *(__int16 *)(v6 + 78);
    *(_DWORD *)(v6 + 156) = *(__int16 *)(v6 + 72);
    *(_DWORD *)(v6 + 144) = 0;
    *(_DWORD *)(v6 + 160) = 1852534357;
    v39 = *(_BYTE *)(v6 + 45);
    *(_QWORD *)(v6 + 164) = 0LL;
    if ( (v39 & 0x40) != 0 )
      v40 = 3;
    else
      v40 = (v39 & 0x50) != 0 ? 4 : 2;
    *(_BYTE *)(v6 + 172) = v40;
    v41 = 0;
    if ( (*(_BYTE *)(v6 + 45) & 0xF0) == 0x20 )
      v41 = 11;
    *(_BYTE *)(v6 + 173) = v41;
    v42 = *(_WORD *)(v6 + 46) / 0x64u + 1;
    *(_BYTE *)(v6 + 174) = v42;
    v43 = *(_WORD *)(v4 + 86);
    *(_DWORD *)(v6 + 176) = 0;
    v44 = -v43;
    *(_WORD *)(v6 + 180) = 0;
    result = v44 != 0 ? 9 : 0;
    *(_BYTE *)(v6 + 175) = v44 != 0 ? 9 : 0;
    if ( *(_DWORD *)(v6 + 24) )
    {
      *(_WORD *)&v46[4] = *(_WORD *)(v6 + 46);
      *(_WORD *)&v46[6] = *(_WORD *)(v6 + 52);
      *(_DWORD *)&v46[8] = *(_DWORD *)(v6 + 76);
      *(_QWORD *)&v46[12] = *(_QWORD *)(v6 + 136);
      result = *(_DWORD *)&v46[16];
      v46[3] = v42;
      *(_WORD *)v46 = 0;
      v46[2] = 0;
      if ( v5 )
      {
        *(_OWORD *)v5 = *(_OWORD *)v46;
        *(_DWORD *)(v5 + 16) = *(_DWORD *)&v46[16];
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v5 + 6) |= 0x20u;
        ++*(_WORD *)(v5 + 8);
        ++*(_WORD *)(v5 + 10);
        *(_WORD *)(v5 + 4) = 700;
      }
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)v46;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)&v46[16];
        *(_WORD *)(v7 + 6) |= 1u;
        *(_DWORD *)(v7 + 12) = 1;
        *(_DWORD *)(v7 + 16) = 2;
      }
      if ( v8 )
      {
        *(_OWORD *)v8 = *(_OWORD *)v46;
        *(_DWORD *)(v8 + 16) = *(_DWORD *)&v46[16];
        *(_WORD *)(v8 + 6) |= 0x21u;
        ++*(_WORD *)(v8 + 8);
        ++*(_WORD *)(v8 + 10);
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v8 + 4) = 700;
        *(_DWORD *)(v8 + 12) = 1;
        *(_DWORD *)(v8 + 16) = 2;
      }
    }
  }
  else
  {
    *(_DWORD *)v6 = 0;
  }
  return result;
}

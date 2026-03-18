/*
 * XREFs of vBmfdFill_IFIMETRICS @ 0x1C02360A0
 * Callers:
 *     bConvertFontRes @ 0x1C02358DC (bConvertFontRes.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0235354 (StringCchLengthA.c)
 *     fsSelectionFlags @ 0x1C0235E3C (fsSelectionFlags.c)
 *     vComputeSpecialChars @ 0x1C0236744 (vComputeSpecialChars.c)
 */

char __fastcall vBmfdFill_IFIMETRICS(__int64 a1, _QWORD *a2)
{
  const char *v2; // r11
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  HRESULT v9; // eax
  const CHAR *v10; // r11
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // eax
  signed int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  char v17; // dl
  __int16 v18; // cx
  char v19; // al
  int v20; // eax
  __int16 v21; // r8
  __int16 v22; // ax
  __int16 v23; // r10
  __int16 v24; // r11
  __int16 v25; // r11
  __int16 v26; // ax
  __int16 v27; // cx
  __int16 v28; // cx
  __int16 v29; // dx
  int v30; // ecx
  __int16 v31; // ax
  __int16 v32; // r9
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ecx
  char v37; // al
  char v38; // cl
  char v39; // dl
  __int16 v40; // cx
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-30h]
  _BYTE v43[20]; // [rsp+30h] [rbp-20h]
  __int16 v44; // [rsp+90h] [rbp+40h]
  size_t pcchLength; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (const char *)a2[2];
  v4 = *a2;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0LL;
  v44 = *(_WORD *)(a1 + 48);
  v8 = 0LL;
  if ( !v2 )
    v2 = (const char *)(v4
                      + ((*(unsigned __int8 *)(v4 + 108) << 24) | *(unsigned __int8 *)(v4 + 105) | (unsigned __int64)(*(unsigned __int16 *)(v4 + 106) << 8)));
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 16) = 192;
  *(_DWORD *)(v6 + 8) = 192;
  v9 = StringCchLengthA(v2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v9 >= 0 )
  {
    v11 = pcchLength;
    v12 = 2 * pcchLength;
    *(_DWORD *)(v6 + 12) = 2 * pcchLength + 192;
    *(_DWORD *)(v6 + 20) = v12 + 192;
    BytesInMultiByteString = v11 + 1;
    if ( *(_DWORD *)(a1 + 32) )
    {
      RtlMultiByteToUnicodeN((PWCH)(v6 + 194), v12 + 2, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v6 + *(int *)(v6 + 16) + 2LL * (unsigned int)pcchLength + 2) = 0;
      *(_WORD *)(*(int *)(v6 + 16) + v6) = 64;
    }
    else
    {
      RtlMultiByteToUnicodeN((PWCH)(v6 + 192), v12 + 2, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v6 + *(int *)(v6 + 16) + 2LL * (unsigned int)pcchLength) = 0;
    }
    *(_DWORD *)v6 = *(_DWORD *)(a1 + 60);
    v13 = *(_DWORD *)(a1 + 68);
    LODWORD(pcchLength) = 2;
    if ( v13 <= 2 )
    {
      v14 = (*(_DWORD *)(a1 + 56) + 195) & 0xFFFFFFFC;
      v15 = v6 + v14;
      *(_DWORD *)(v6 + 24) = v14;
      v16 = *(_DWORD *)(a1 + 68);
      if ( v16 )
      {
        if ( (unsigned int)(v16 - 1) <= 1 )
        {
          *(_QWORD *)v15 = 0LL;
          v8 = v15 + 12;
          *(_DWORD *)(v15 + 8) = 12;
        }
      }
      else
      {
        *(_DWORD *)v15 = 12;
        v5 = v15 + 12;
        *(_DWORD *)(v15 + 4) = 32;
        v7 = v15 + 32;
        *(_DWORD *)(v15 + 8) = 52;
        v8 = v15 + 52;
      }
    }
    else if ( v13 == 3 )
    {
      *(_DWORD *)(v6 + 24) = 0;
    }
    *(_BYTE *)(v6 + 44) = *(_BYTE *)(v4 + 85);
    v17 = *(_BYTE *)(v4 + 90) & 0xF0;
    *(_BYTE *)(v6 + 45) = v17;
    *(_BYTE *)(v6 + 45) = v17 | (2 - (*(_BYTE *)(v4 + 86) != 0));
    v18 = *(_WORD *)(v4 + 83);
    *(_WORD *)(v6 + 46) = v18;
    if ( (unsigned __int16)(v18 - 1) > 0x3E7u )
      *(_WORD *)(v6 + 46) = 400;
    v19 = *(_BYTE *)(v6 + 45) & 0xF;
    *(_DWORD *)(v6 + 48) = 540674082;
    if ( v19 == 1 )
    {
      v20 = *(_DWORD *)(v6 + 48);
      if ( !v44 )
        v20 = 540678178;
      *(_DWORD *)(v6 + 48) = v20;
      *(_DWORD *)(v6 + 48) |= 0x400000u;
    }
    if ( v44 )
      *(_DWORD *)(v6 + 48) |= 0x10000000u;
    *(_DWORD *)(v6 + 28) = 0;
    *(_WORD *)(v6 + 52) = fsSelectionFlags((_BYTE *)v4);
    *(_WORD *)(v6 + 54) = 0;
    v21 = *(_WORD *)(v4 + 76);
    v22 = *(_WORD *)(a1 + 44);
    if ( v21 > 0 )
      v22 -= v21;
    *(_WORD *)(v6 + 56) = v22;
    *(_WORD *)(v6 + 58) = 0;
    v23 = *(_WORD *)(v4 + 74);
    *(_WORD *)(v6 + 60) = v23;
    v24 = *(_WORD *)(a1 + 44);
    *(_WORD *)(v6 + 64) = v23;
    v25 = v24 - v23;
    *(_WORD *)(v6 + 62) = v25;
    *(_WORD *)(v6 + 66) = -v25;
    v26 = *(unsigned __int8 *)(v4 + 78);
    v27 = *(unsigned __int8 *)(v4 + 79);
    *(_WORD *)(v6 + 72) = -v25;
    v28 = v26 | (v27 << 8);
    *(_WORD *)(v6 + 70) = v23;
    *(_WORD *)(v6 + 68) = v28;
    *(_WORD *)(v6 + 74) = v28;
    *(_WORD *)(v6 + 78) = *(_WORD *)(a1 + 46);
    v29 = *(_WORD *)(v4 + 91);
    *(_WORD *)(v6 + 76) = v29;
    v30 = *(unsigned __int16 *)(a1 + 46);
    *(_QWORD *)(v6 + 84) = 0LL;
    v31 = v23 + v25;
    *(_QWORD *)(v6 + 92) = 0LL;
    if ( v29 > v30 )
      v29 = v30;
    *(_WORD *)(v6 + 76) = v29;
    if ( v31 <= 12 )
      v32 = 1;
    else
      v32 = v31 / 12;
    *(_WORD *)(v6 + 100) = v32;
    *(_WORD *)(v6 + 104) = v32;
    v33 = ~(unsigned __int16)(v32 / (int)pcchLength);
    if ( (__int16)(((v32 + 1) >> 1) - v25 + v32 / (int)pcchLength + 1) > 0 )
      v33 = ((v32 + 1) >> 1) - v25;
    *(_WORD *)(v6 + 102) = v33;
    *(_WORD *)(v6 + 106) = (__int16)(v23 - v21 + 2) / 3;
    *(_BYTE *)(v6 + 108) = *(_BYTE *)(a1 + 40);
    *(_BYTE *)(v6 + 109) = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(v6 + 111) = *(_BYTE *)(a1 + 40) + *(_BYTE *)(a1 + 43);
    *(_BYTE *)(v6 + 110) = *(_BYTE *)(*a2 + 95LL) + *(_BYTE *)(*a2 + 97LL);
    vComputeSpecialChars(a1 + 36, v6 + 116, v6 + 118);
    v34 = *(_QWORD *)(a1 + 72);
    v35 = (unsigned int)(*(_DWORD *)(v34 + 36) - 1);
    *(_WORD *)(v6 + 112) = *(_WORD *)(v34 + 40);
    LOWORD(v35) = *(_WORD *)(v34 + 16 * (v35 + 1) + 24) + *(_WORD *)(v34 + 16 * (v35 + 1) + 26);
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 120) = 1LL;
    *(_WORD *)(v6 + 114) = v35 - 1;
    LODWORD(v35) = *(__int16 *)(v6 + 56);
    *(_WORD *)(v6 + 80) = *(__int16 *)(v6 + 56) / 2;
    *(_WORD *)(v6 + 82) = (int)v35 / 4;
    LODWORD(v34) = *(unsigned __int8 *)(v4 + 70) | (unsigned __int16)(*(unsigned __int8 *)(v4 + 71) << 8);
    *(_DWORD *)(v6 + 132) = v34;
    v36 = *(unsigned __int8 *)(v4 + 72) | (unsigned __int16)(*(unsigned __int8 *)(v4 + 73) << 8);
    *(_DWORD *)(v6 + 128) = v36;
    if ( !(_DWORD)v34 )
      *(_DWORD *)(v6 + 132) = 1;
    if ( !v36 )
      *(_DWORD *)(v6 + 128) = 1;
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
    v37 = *(_BYTE *)(v6 + 45);
    *(_QWORD *)(v6 + 164) = 0LL;
    if ( (v37 & 0x40) != 0 )
      v38 = 3;
    else
      v38 = (v37 & 0x50) != 0 ? 4 : 2;
    *(_BYTE *)(v6 + 172) = v38;
    *(_BYTE *)(v6 + 173) = (*(_BYTE *)(v6 + 45) & 0xF0) != 32 ? 0 : 0xB;
    v39 = *(_WORD *)(v6 + 46) / 0x64u + 1;
    *(_BYTE *)(v6 + 174) = v39;
    LOWORD(v9) = *(unsigned __int8 *)(v4 + 86);
    v40 = *(unsigned __int8 *)(v4 + 87);
    *(_DWORD *)(v6 + 176) = 0;
    *(_WORD *)(v6 + 180) = 0;
    LOBYTE(v9) = ((unsigned __int16)v9 | (unsigned __int16)(v40 << 8)) != 0 ? 9 : 0;
    *(_BYTE *)(v6 + 175) = v9;
    if ( *(_DWORD *)(v6 + 24) )
    {
      *(_WORD *)&v43[4] = *(_WORD *)(v6 + 46);
      *(_WORD *)&v43[6] = *(_WORD *)(v6 + 52);
      *(_DWORD *)&v43[8] = *(_DWORD *)(v6 + 76);
      *(_QWORD *)&v43[12] = *(_QWORD *)(v6 + 136);
      LOBYTE(v9) = v43[16];
      v43[3] = v39;
      *(_WORD *)v43 = 0;
      v43[2] = 0;
      if ( v5 )
      {
        *(_OWORD *)v5 = *(_OWORD *)v43;
        *(_DWORD *)(v5 + 16) = *(_DWORD *)&v43[16];
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v5 + 6) |= 0x20u;
        ++*(_WORD *)(v5 + 8);
        ++*(_WORD *)(v5 + 10);
        *(_WORD *)(v5 + 4) = 700;
      }
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)v43;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)&v43[16];
        *(_WORD *)(v7 + 6) |= 1u;
        *(_DWORD *)(v7 + 12) = 1;
        *(_DWORD *)(v7 + 16) = 2;
      }
      if ( v8 )
      {
        *(_OWORD *)v8 = *(_OWORD *)v43;
        *(_DWORD *)(v8 + 16) = *(_DWORD *)&v43[16];
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
  return v9;
}

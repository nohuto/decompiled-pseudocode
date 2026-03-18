/*
 * XREFs of vFill_IFIMETRICS @ 0x1C022B88C
 * Callers:
 *     bLoadTTF @ 0x1C022910C (bLoadTTF.c)
 * Callees:
 *     IsAnyCharsetDbcs @ 0x1C00B41BC (IsAnyCharsetDbcs.c)
 *     IsBogusSignature @ 0x1C02274D4 (IsBogusSignature.c)
 *     IsCurrentCodePageDBCS @ 0x1C02275D8 (IsCurrentCodePageDBCS.c)
 *     bContainGlyphSet @ 0x1C022827C (bContainGlyphSet.c)
 *     bConvertExtras @ 0x1C02282EC (bConvertExtras.c)
 *     bValidRangeKERN @ 0x1C0229ED4 (bValidRangeKERN.c)
 *     fsSelectionTTFD @ 0x1C022B0F0 (fsSelectionTTFD.c)
 *     pjTable @ 0x1C022B138 (pjTable.c)
 *     vFillIFICharsets @ 0x1C022B3D0 (vFillIFICharsets.c)
 */

char __fastcall vFill_IFIMETRICS(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v8; // rcx
  _WORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  _DWORD *v14; // rcx
  unsigned __int8 *v15; // r8
  __int64 v16; // rax
  int v17; // r9d
  unsigned __int16 v18; // ax
  __int64 v19; // r10
  int v20; // r11d
  __int16 v21; // r15
  __int16 v22; // dx
  __int16 v23; // r8
  __int16 v24; // cx
  __int16 v25; // dx
  __int16 v26; // cx
  __int16 v27; // ax
  int v28; // r9d
  __int16 v29; // cx
  unsigned __int16 v30; // ax
  unsigned __int8 v31; // cl
  bool v32; // cf
  int v33; // ecx
  BOOL v34; // eax
  unsigned __int32 v35; // edx
  int v36; // eax
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // r8
  int v39; // eax
  char v40; // al
  __int64 v41; // rsi
  int v42; // edx
  char v43; // al
  unsigned __int8 v44; // al
  char v45; // cl
  char v46; // al
  __int16 v47; // cx
  __int16 v48; // ax
  char v49; // al
  char v50; // al
  char v51; // cl
  char v52; // cl
  char v53; // al
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int8 v59; // al
  unsigned __int8 v60; // al
  _DWORD *v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // r8
  _DWORD *v71; // rcx
  char result; // al
  _WORD *v73; // [rsp+30h] [rbp-38h]
  __int64 v74; // [rsp+38h] [rbp-30h]
  _BYTE v75[20]; // [rsp+40h] [rbp-28h]
  unsigned __int32 AnsiCodePage; // [rsp+B0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v78; // [rsp+C0h] [rbp+58h]
  __int64 v79; // [rsp+C8h] [rbp+60h]

  v79 = a4;
  v78 = a3;
  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(unsigned int *)(a1 + 128);
  v8 = *(unsigned int *)(a1 + 160);
  v9 = (_WORD *)(v4 + v6);
  v74 = v4;
  v10 = *(unsigned int *)(a1 + 216);
  v73 = (_WORD *)(v4 + *(unsigned int *)(a1 + 136));
  if ( !(_DWORD)v10 || (v11 = v4 + v10, *(_DWORD *)(a1 + 220) < 0x10u) )
    v11 = 0LL;
  v12 = *(unsigned int *)(a1 + 176);
  v13 = v4 + v12;
  if ( !(_DWORD)v12 )
    v13 = 0LL;
  *(_DWORD *)a2 = *a3;
  *(_DWORD *)(a2 + 4) = 12;
  *(_DWORD *)(a2 + 192) = 0;
  *(_DWORD *)(a2 + 200) = (unsigned __int16)__ROR2__(*(_WORD *)(v8 + v4 + 4), 8);
  bConvertExtras(a2, (__int64)a3);
  v14 = v78;
  *(_DWORD *)(a2 + 8) = v78[23];
  *(_DWORD *)(a2 + 20) = v14[26];
  *(_DWORD *)(a2 + 16) = v14[27];
  *(_DWORD *)(a2 + 12) = v14[25];
  *(_DWORD *)(a2 + 48) = 688241;
  if ( *(_DWORD *)(a1 + 272) )
  {
    v15 = *(unsigned __int8 **)(a1 + 64);
    v16 = 4 * (v15[11] | ((v15[10] | ((v15[9] | (v15[8] << 8)) << 8)) << 8)) + 12;
    if ( (v15[v16 + 3] | ((v15[v16 + 2] | (((v15[v16] << 8) | v15[v16 + 1]) << 8)) << 8)) != 0x44534947 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( pjTable(1195987780, a1, &AnsiCodePage) && AnsiCodePage )
LABEL_11:
    *(_DWORD *)(a2 + 48) = 950385;
LABEL_12:
  if ( *((_QWORD *)v78 + 3) )
    *(_DWORD *)(a2 + 48) |= 0x8000000u;
  if ( v11 )
  {
    if ( _byteswap_ulong(*(_DWORD *)(v11 + 12)) )
    {
      v17 = *(_DWORD *)(a2 + 48) | 0x400000;
      *(_DWORD *)(a2 + 48) = v17;
      if ( (__int16)__ROR2__(v9[18], 8) >= 0
        && __ROR2__(v9[20], 8) <= __ROR2__(
                                    *(_WORD *)(v4
                                             + *(unsigned int *)(a1 + 144)
                                             + 4LL * ((unsigned int)(unsigned __int16)__ROR2__(v73[17], 8) - 1)),
                                    8) )
      {
        *(_DWORD *)(a2 + 48) = v17 | 0x20000000;
      }
    }
  }
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  v18 = fsSelectionTTFD(v4, a1 + 112);
  *(_WORD *)(a2 + 52) = v18;
  v21 = HIBYTE(v18);
  if ( v13 )
    v22 = __ROR2__(*(_WORD *)(v13 + 8), 8) & 0xE;
  else
    v22 = v20;
  *(_WORD *)(a2 + 54) = v22;
  *(_WORD *)(a2 + 56) = __ROR2__(v9[9], 8);
  *(_WORD *)(a2 + 58) = __ROR2__(v9[23], 8);
  v23 = __ROR2__(*(_WORD *)(v19 + 4), 8);
  *(_WORD *)(a2 + 64) = v23;
  v24 = __ROR2__(*(_WORD *)(v19 + 6), 8);
  *(_WORD *)(a2 + 66) = v24;
  v25 = __ROR2__(*(_WORD *)(v19 + 8), 8);
  *(_WORD *)(a2 + 68) = v25;
  if ( v13 )
  {
    *(_WORD *)(a2 + 60) = __ROR2__(*(_WORD *)(v13 + 74), 8);
    *(_WORD *)(a2 + 62) = __ROR2__(*(_WORD *)(v13 + 76), 8);
    *(_WORD *)(a2 + 70) = __ROR2__(*(_WORD *)(v13 + 68), 8);
    *(_WORD *)(a2 + 72) = __ROR2__(*(_WORD *)(v13 + 70), 8);
    *(_WORD *)(a2 + 74) = __ROR2__(*(_WORD *)(v13 + 72), 8);
  }
  else
  {
    *(_WORD *)(a2 + 60) = v23;
    *(_WORD *)(a2 + 70) = v23;
    *(_WORD *)(a2 + 62) = -v24;
    *(_WORD *)(a2 + 72) = v24;
    *(_WORD *)(a2 + 74) = v25;
  }
  *(_DWORD *)(a2 + 144) = (__int16)__ROR2__(v9[18], 8);
  *(_DWORD *)(a2 + 148) = (__int16)__ROR2__(v9[21], 8);
  *(_DWORD *)(a2 + 152) = (__int16)__ROR2__(v9[20], 8);
  v26 = *(_WORD *)(a2 + 152) - *(_WORD *)(a2 + 144);
  *(_DWORD *)(a2 + 156) = (__int16)__ROR2__(v9[19], 8);
  *(_WORD *)(a2 + 78) = v26;
  if ( v13 )
  {
    v27 = __ROR2__(*(_WORD *)(v13 + 2), 8);
    *(_WORD *)(a2 + 76) = v27;
    if ( !v27 )
      *(_WORD *)(a2 + 76) = v26 / 2;
  }
  else
  {
    *(_WORD *)(a2 + 76) = 2 * v26 / 3;
  }
  v28 = *(__int16 *)(a2 + 56);
  *(_WORD *)(a2 + 80) = *(__int16 *)(a2 + 56) / 2;
  *(_WORD *)(a2 + 82) = v28 / 4;
  if ( v11 )
  {
    *(_WORD *)(a2 + 100) = __ROR2__(*(_WORD *)(v11 + 10), 8);
    *(_WORD *)(a2 + 102) = __ROR2__(*(_WORD *)(v11 + 8), 8);
  }
  else
  {
    *(_WORD *)(a2 + 100) = (__int16)(v28 + 7) / 14;
    *(_WORD *)(a2 + 102) = (v28 + 5) / -10;
  }
  if ( v13 )
  {
    *(_WORD *)(a2 + 84) = __ROR2__(*(_WORD *)(v13 + 10), 8);
    *(_WORD *)(a2 + 86) = __ROR2__(*(_WORD *)(v13 + 12), 8);
    *(_WORD *)(a2 + 88) = __ROR2__(*(_WORD *)(v13 + 14), 8);
    *(_WORD *)(a2 + 90) = __ROR2__(*(_WORD *)(v13 + 16), 8);
    *(_WORD *)(a2 + 92) = __ROR2__(*(_WORD *)(v13 + 18), 8);
    *(_WORD *)(a2 + 94) = __ROR2__(*(_WORD *)(v13 + 20), 8);
    *(_WORD *)(a2 + 96) = __ROR2__(*(_WORD *)(v13 + 22), 8);
    *(_WORD *)(a2 + 98) = __ROR2__(*(_WORD *)(v13 + 24), 8);
    *(_WORD *)(a2 + 104) = __ROR2__(*(_WORD *)(v13 + 26), 8);
    *(_WORD *)(a2 + 106) = __ROR2__(*(_WORD *)(v13 + 28), 8);
  }
  else
  {
    v29 = *(_WORD *)(a2 + 100);
    *(_QWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 92) = 0LL;
    *(_WORD *)(a2 + 104) = v29;
    *(_WORD *)(a2 + 106) = v23 / 3;
  }
  *(_DWORD *)(a2 + 168) = v20;
  if ( v13 )
  {
    v30 = __ROR2__(*(_WORD *)(v13 + 4), 8);
    *(_WORD *)(a2 + 46) = v30;
    if ( v30 < 0xAu )
      *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[v30];
    *(_QWORD *)(a2 + 172) = *(_QWORD *)(v13 + 32);
    *(_WORD *)(a2 + 180) = *(_WORD *)(v13 + 40);
  }
  else
  {
    *(_WORD *)(a2 + 172) = 2;
    v31 = (__ROR2__(v9[22], 8) & 1) != 0 ? 8 : 5;
    v32 = (*(_DWORD *)(a2 + 48) & 0x400000) != 0;
    *(_BYTE *)(a2 + 174) = v31;
    *(_DWORD *)(a2 + 176) = 0;
    *(_WORD *)(a2 + 180) = 0;
    *(_BYTE *)(a2 + 175) = v32 ? 9 : 0;
    *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[v31];
  }
  *(_DWORD *)(a2 + 36) = v20;
  if ( (*(_DWORD *)(a1 + 300) & 2) != 0 )
  {
    v52 = *(_BYTE *)(v19 + 22);
    *(_BYTE *)(a2 + 108) = v52;
    *(_BYTE *)(a2 + 109) = *(_BYTE *)(v19 + 24);
    *(_BYTE *)(a2 + 110) = -107;
    *(_BYTE *)(a2 + 111) = v52 + *(_BYTE *)(v19 + 28);
    v53 = *(_BYTE *)(v19 + 30);
    v54 = *(int *)(a2 + 8);
    if ( v53 == -56 )
      v53 = v20;
    *(_BYTE *)(a2 + 44) = v53;
    if ( (!_wcsicmp((const wchar_t *)(a2 + v54), L"ZapfDingbats")
       || !_wcsicmp((const wchar_t *)(a2 + *(int *)(a2 + 8)), L"Symbol"))
      && !*(_BYTE *)(a2 + 44) )
    {
      *(_BYTE *)(a2 + 44) = 2;
    }
  }
  else
  {
    if ( !v13
      || *(_WORD *)v13 == (_WORD)v20
      || (v33 = _byteswap_ulong(*(_DWORD *)(v13 + 78))) == 0
      || (v34 = IsBogusSignature(v33, a1), LOBYTE(v20) = 0, v34) )
    {
      if ( *(_DWORD *)(a1 + 316) == 5 )
      {
        switch ( *(_WORD *)(a1 + 312) )
        {
          case 2:
            *(_BYTE *)(a2 + 44) = 0x80;
            *(_DWORD *)(a1 + 288) = 932;
            break;
          case 3:
            *(_BYTE *)(a2 + 44) = -122;
            *(_DWORD *)(a1 + 288) = 936;
            break;
          case 4:
            *(_BYTE *)(a2 + 44) = -120;
            *(_DWORD *)(a1 + 288) = 950;
            break;
          case 5:
            *(_BYTE *)(a2 + 44) = -127;
            *(_DWORD *)(a1 + 288) = 949;
            break;
          default:
            *(_BYTE *)(a2 + 44) = v20;
            *(_DWORD *)(a1 + 288) = 1252;
            break;
        }
      }
      else
      {
        v41 = *(_QWORD *)(a1 + 88);
        if ( bContainGlyphSet(0xFF71u, v41)
          && bContainGlyphSet(0xFF72u, v41)
          && bContainGlyphSet(0xFF73u, v41)
          && bContainGlyphSet(0xFF74u, v41)
          && bContainGlyphSet(0xFF75u, v41) )
        {
          *(_BYTE *)(a2 + 44) = 0x80;
          *(_DWORD *)(a1 + 288) = 932;
        }
        else if ( bContainGlyphSet(0x61D4u, v41) && bContainGlyphSet(0x9EE2u, v41) )
        {
          *(_BYTE *)(a2 + 44) = -122;
          *(_DWORD *)(a1 + 288) = 936;
        }
        else if ( bContainGlyphSet(0x9F98u, v41) && bContainGlyphSet(0x9F79u, v41) )
        {
          *(_BYTE *)(a2 + 44) = -120;
          *(_DWORD *)(a1 + 288) = 950;
        }
        else if ( bContainGlyphSet(0xAC00u, v41) && bContainGlyphSet(0xD558u, v41) )
        {
          *(_BYTE *)(a2 + 44) = -127;
          *(_DWORD *)(a1 + 288) = 949;
        }
        else if ( bContainGlyphSet(0xE000u, v41) && IsCurrentCodePageDBCS() )
        {
          RtlGetDefaultCodePage((PUSHORT)&AnsiCodePage, &OemCodePage);
          v42 = (unsigned __int16)AnsiCodePage;
          switch ( (unsigned __int16)AnsiCodePage )
          {
            case 0x3A4u:
              *(_BYTE *)(a2 + 44) = 0x80;
              break;
            case 0x3A8u:
              *(_BYTE *)(a2 + 44) = -122;
              break;
            case 0x3B5u:
              *(_BYTE *)(a2 + 44) = -127;
              break;
            case 0x3B6u:
              *(_BYTE *)(a2 + 44) = -120;
              break;
            case 0x551u:
              *(_BYTE *)(a2 + 44) = -126;
              break;
          }
          *(_DWORD *)(a1 + 288) = v42;
        }
        else
        {
          *(_BYTE *)(a2 + 44) = v21;
          if ( !(_BYTE)v21 && *(_BYTE *)(a2 + 172) == 5 )
          {
            v43 = 0;
            if ( *(_DWORD *)(a1 + 316) == 4 )
              v43 = 2;
            *(_BYTE *)(a2 + 44) = v43;
          }
          *(_DWORD *)(a1 + 288) = 1252;
        }
      }
    }
    else
    {
      v35 = _byteswap_ulong(*(_DWORD *)(v13 + 78));
      if ( (v35 & 0x1E0000) != 0 )
      {
        if ( (gfsCurSignature & v35) != 0 )
        {
          RtlGetDefaultCodePage((PUSHORT)&AnsiCodePage, &OemCodePage);
          v36 = (unsigned __int16)AnsiCodePage;
          *(_BYTE *)(a2 + 44) = gjCurCharset;
          *(_DWORD *)(a1 + 288) = v36;
        }
        else if ( (v35 & 1) != 0 )
        {
          *(_BYTE *)(a2 + 44) = 0;
          *(_DWORD *)(a1 + 288) = 1252;
        }
        else if ( (v35 & 0x20000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = 0x80;
          *(_DWORD *)(a1 + 288) = 932;
        }
        else if ( (v35 & 0x100000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = -120;
          *(_DWORD *)(a1 + 288) = 950;
        }
        else if ( (v35 & 0x40000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = -122;
          *(_DWORD *)(a1 + 288) = 936;
        }
        else if ( (v35 & 0x80000) != 0 )
        {
          *(_BYTE *)(a2 + 44) = -127;
          *(_DWORD *)(a1 + 288) = 949;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 44) = v21;
        if ( !(_BYTE)v21 && *(_BYTE *)(a2 + 172) == 5 )
        {
          v40 = 0;
          if ( *(_DWORD *)(a1 + 316) == 4 )
            v40 = 2;
          *(_BYTE *)(a2 + 44) = v40;
        }
        *(_DWORD *)(a1 + 288) = 1252;
      }
    }
    if ( *(_WORD *)(a1 + 310) == 3 && v13 )
    {
      v37 = __ROR2__(*(_WORD *)(v13 + 64), 8);
      v38 = __ROR2__(*(_WORD *)(v13 + 66), 8);
      if ( v38 <= 0xFFu )
      {
        *(_BYTE *)(a2 + 109) = v38;
      }
      else
      {
        if ( v37 > 0xFFu )
        {
          *(_BYTE *)(a2 + 44) = 2;
          *(_BYTE *)(a2 + 108) = 32;
          *(_DWORD *)(a2 + 36) = v37 - 32;
          v39 = v38 - v37 + 32;
          if ( v39 > 255 )
            LOBYTE(v39) = -1;
          *(_BYTE *)(a2 + 109) = v39;
LABEL_118:
          v44 = *(_BYTE *)(a2 + 108);
          if ( v44 >= 2u )
            *(_BYTE *)(a2 + 108) = v44 - 2;
          v45 = *(_BYTE *)(a2 + 44);
          if ( v45 == (char)0x80 )
          {
            v46 = *(_BYTE *)(a2 + 108);
            *(_BYTE *)(a2 + 110) = -91;
            v47 = (unsigned __int8)(v46 + 2);
            *(_WORD *)(a2 + 116) = -155;
            *(_BYTE *)(a2 + 111) = v47;
            *(_WORD *)(a2 + 118) = v47;
            goto LABEL_146;
          }
          if ( ((v45 + 122) & 0xFD) != 0 )
          {
            if ( v45 == -127 )
            {
              *(_WORD *)(a2 + 110) = 8063;
              goto LABEL_125;
            }
            v49 = *(_BYTE *)(a2 + 108) + 1;
            *(_BYTE *)(a2 + 110) = v49;
            v50 = v49 + 1;
          }
          else
          {
            v50 = *(_BYTE *)(a2 + 108) + 2;
            *(_BYTE *)(a2 + 110) = 32;
          }
          *(_BYTE *)(a2 + 111) = v50;
          if ( v45 != -127 && ((v45 + 122) & 0xFD) != 0 )
          {
            v48 = *(unsigned __int8 *)(a2 + 110);
            goto LABEL_131;
          }
LABEL_125:
          v48 = 9633;
LABEL_131:
          *(_WORD *)(a2 + 116) = v48;
          *(_WORD *)(a2 + 118) = *(unsigned __int8 *)(a2 + 111);
          goto LABEL_146;
        }
        *(_BYTE *)(a2 + 109) = -1;
      }
      *(_BYTE *)(a2 + 108) = v37;
      goto LABEL_118;
    }
    v51 = *(_BYTE *)(a2 + 44);
    *(_WORD *)(a2 + 108) = -226;
    if ( v51 == (char)0x80 )
    {
      *(_WORD *)(a2 + 110) = 8357;
      *(_DWORD *)(a2 + 116) = 2162533;
    }
    else
    {
      if ( ((v51 + 122) & 0xFD) != 0 )
        *(_WORD *)(a2 + 110) = 8223;
      else
        *(_WORD *)(a2 + 110) = 8224;
      if ( ((v51 + 122) & 0xFD) != 0 )
        *(_DWORD *)(a2 + 116) = 2097183;
      else
        *(_DWORD *)(a2 + 116) = 2106785;
    }
  }
LABEL_146:
  v55 = *(_QWORD *)(a1 + 88);
  v56 = (unsigned int)(*(_DWORD *)(v55 + 12) - 1);
  *(_WORD *)(a2 + 112) = *(_WORD *)(v55 + 16);
  *(_WORD *)(a2 + 114) = *(_WORD *)(v55 + 16 * (v56 + 1)) + *(_WORD *)(v55 + 16 * (v56 + 1) + 2) - 1;
  *(_QWORD *)(a2 + 120) = 1LL;
  *(_DWORD *)(a2 + 128) = 1;
  *(_DWORD *)(a2 + 132) = 1;
  *(_DWORD *)(a2 + 136) = (__int16)__ROR2__(v73[10], 8);
  *(_DWORD *)(a2 + 140) = (__int16)__ROR2__(v73[9], 8);
  if ( v11 )
    *(_DWORD *)(a2 + 32) = (__int16)((10 * _byteswap_ulong(*(_DWORD *)(v11 + 4))) >> 16);
  else
    *(_DWORD *)(a2 + 32) = 0;
  if ( v13 )
  {
    *(_BYTE *)(a2 + 160) = *(_BYTE *)(v13 + 58);
    *(_BYTE *)(a2 + 161) = *(_BYTE *)(v13 + 59);
    *(_BYTE *)(a2 + 162) = *(_BYTE *)(v13 + 60);
    *(_BYTE *)(a2 + 163) = *(_BYTE *)(v13 + 61);
  }
  else
  {
    *(_DWORD *)(a2 + 160) = 1852534357;
  }
  v57 = *(unsigned int *)(a1 + 200);
  v58 = v74 + v57;
  if ( !(_DWORD)v57 )
    v58 = 0LL;
  if ( v58 )
  {
    if ( !(unsigned int)bValidRangeKERN(v58, *(_DWORD *)(a1 + 204), (_DWORD *)(a2 + 164)) )
      *(_QWORD *)(a1 + 200) = 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 164) = 0;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 44) + 0x80) <= 1u )
  {
    if ( *(_BYTE *)(a2 + 172) == 3 )
    {
      *(_BYTE *)(a2 + 45) = 64;
    }
    else
    {
      v60 = *(_BYTE *)(a2 + 173);
      if ( v60 < 0x10u )
        *(_BYTE *)(a2 + 45) = byte_1C02ECE38[v60];
      else
        *(_BYTE *)(a2 + 45) = 0;
    }
    if ( *(_BYTE *)(a2 + 175) == 9 )
      *(_DWORD *)(a2 + 48) |= 0x10400000u;
  }
  else if ( *(_BYTE *)(a2 + 172) == 3 )
  {
    *(_BYTE *)(a2 + 45) = 64;
  }
  else if ( *(_BYTE *)(a2 + 172) == 4 )
  {
    *(_BYTE *)(a2 + 45) = 80;
  }
  else if ( *(_BYTE *)(a2 + 175) == 9 )
  {
    *(_BYTE *)(a2 + 45) = 48;
  }
  else
  {
    v59 = *(_BYTE *)(a2 + 173);
    if ( v59 < 0x10u )
      *(_BYTE *)(a2 + 45) = ajPanoseFamilyForTtfd[v59];
    else
      *(_BYTE *)(a2 + 45) = 0;
  }
  v61 = v78;
  v62 = (int)v78[1];
  *(_DWORD *)(a2 + 24) = v62;
  if ( (_DWORD)v62 )
  {
    v63 = a2 + v62;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    if ( (*(_WORD *)(a2 + 52) & 0x21) != 0 )
    {
      if ( (*(_WORD *)(a2 + 52) & 0x21) == 1 || (*(_WORD *)(a2 + 52) & 0x21) == 0x20 )
      {
        *(_QWORD *)v63 = 0LL;
        v66 = v63 + 12;
        *(_DWORD *)(v63 + 8) = 12;
      }
    }
    else
    {
      *(_DWORD *)v63 = 12;
      *(_DWORD *)(v63 + 4) = 32;
      v64 = v63 + 12;
      *(_DWORD *)(v63 + 8) = 52;
      v65 = v63 + 32;
      v66 = v63 + 52;
    }
    *(_WORD *)v75 = 0;
    v75[3] = *(_BYTE *)(a2 + 174);
    *(_WORD *)&v75[4] = *(_WORD *)(a2 + 46);
    v75[2] = 0;
    *(_WORD *)&v75[6] = *(_WORD *)(a2 + 52) & 0xFFBF;
    *(_DWORD *)&v75[8] = *(_DWORD *)(a2 + 76);
    *(_QWORD *)&v75[12] = *(_QWORD *)(a2 + 136);
    if ( v64 )
    {
      *(_OWORD *)v64 = *(_OWORD *)v75;
      *(_DWORD *)(v64 + 16) = *(_DWORD *)&v75[16];
      *(_BYTE *)(v66 + 3) = 8;
      *(_WORD *)(v64 + 6) |= 0x20u;
      ++*(_WORD *)(v64 + 8);
      ++*(_WORD *)(v64 + 10);
      *(_WORD *)(v64 + 4) = 700;
    }
    if ( v65 )
    {
      *(_OWORD *)v65 = *(_OWORD *)v75;
      *(_DWORD *)(v65 + 16) = *(_DWORD *)&v75[16];
      *(_WORD *)(v65 + 6) |= 1u;
      *(_DWORD *)(v65 + 12) = 7;
      *(_DWORD *)(v65 + 16) = 33;
    }
    if ( v66 )
    {
      *(_OWORD *)v66 = *(_OWORD *)v75;
      *(_DWORD *)(v66 + 16) = *(_DWORD *)&v75[16];
      ++*(_WORD *)(v66 + 8);
      *(_WORD *)(v66 + 6) |= 0x21u;
      ++*(_WORD *)(v66 + 10);
      *(_BYTE *)(v66 + 3) = 8;
      *(_WORD *)(v66 + 4) = 700;
      *(_DWORD *)(v66 + 12) = 7;
      *(_DWORD *)(v66 + 16) = 33;
    }
  }
  v67 = (int)v61[21];
  *(_DWORD *)(a2 + 40) = v67;
  vFillIFICharsets(a1, a2, (_BYTE *)(a2 + v67), v74, v13, v79);
  v68 = (int)v61[22];
  *(_DWORD *)(a2 + 196) = v68;
  if ( (_DWORD)v68 )
  {
    v69 = a2 + v68;
    v70 = 4LL;
    v71 = (_DWORD *)(a2 + v68);
    do
    {
      *v71 = _byteswap_ulong(*(_DWORD *)((char *)v71 + v13 - (a2 + v68) + 42));
      ++v71;
      --v70;
    }
    while ( v70 );
    if ( *(_WORD *)v13 )
    {
      if ( IsBogusSignature(_byteswap_ulong(*(_DWORD *)(v13 + 78)), a1) )
        *(_DWORD *)(v69 + 16) = 0x20000;
      else
        *(_DWORD *)(v69 + 16) = _byteswap_ulong(*(_DWORD *)(v13 + 78));
      *(_DWORD *)(v69 + 20) = _byteswap_ulong(*(_DWORD *)(v13 + 82));
    }
    else
    {
      *(_QWORD *)(v69 + 16) = 0LL;
    }
  }
  if ( (unsigned int)IsAnyCharsetDbcs(a1 + 352) )
  {
    *(_DWORD *)(a1 + 300) |= 0x100u;
    if ( *(_BYTE *)(a2 + 175) == 9 )
      *(_DWORD *)(a2 + 48) |= 0x10400000u;
  }
  result = 2 - ((*(_DWORD *)(a2 + 48) & 0x400000) != 0);
  *(_BYTE *)(a2 + 45) |= result;
  return result;
}

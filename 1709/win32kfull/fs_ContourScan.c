/*
 * XREFs of fs_ContourScan @ 0x1C02B4134
 * Callers:
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C022EBD0 (lGetGlyphBitmap.c)
 * Callees:
 *     fs_ConvertGrayLevels @ 0x1C02B4A14 (fs_ConvertGrayLevels.c)
 *     fs_SetUpKey @ 0x1C02B5FE4 (fs_SetUpKey.c)
 *     fsc_CalcGrayMap @ 0x1C02BA17C (fsc_CalcGrayMap.c)
 *     fsc_FillGlyph @ 0x1C02BA658 (fsc_FillGlyph.c)
 *     sbit_Embolden @ 0x1C02BCD94 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02BD348 (sbit_EmboldenGray.c)
 *     sbit_EmboldenGrayFromMono @ 0x1C02BD704 (sbit_EmboldenGrayFromMono.c)
 *     sbit_EmboldenSubPixel @ 0x1C02BD92C (sbit_EmboldenSubPixel.c)
 *     sbit_ExpandGrayFromMono @ 0x1C02BDD68 (sbit_ExpandGrayFromMono.c)
 *     sbit_GetBitmap @ 0x1C02BDF14 (sbit_GetBitmap.c)
 *     fsg_GetContourData @ 0x1C02C1828 (fsg_GetContourData.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02C2890 (fsg_UpdateWorkSpaceElement.c)
 *     fsc_OverscaleToBold @ 0x1C02C5F4C (fsc_OverscaleToBold.c)
 *     fsc_OverscaleToSubPixel @ 0x1C02C6458 (fsc_OverscaleToSubPixel.c)
 */

__int64 __fastcall fs_ContourScan(__int64 a1, __int64 a2)
{
  __int16 v3; // bx
  __int16 v4; // r15
  __int64 v5; // rax
  int v6; // r11d
  __int64 v7; // rdi
  __int64 result; // rax
  __int16 v9; // r14
  __int16 v10; // ax
  __int16 v11; // cx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rax
  __int16 v19; // ax
  __int16 v20; // cx
  _DWORD *v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // rbx
  __int16 *v24; // rbx
  __int64 v25; // rax
  __int16 *v26; // r9
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rax
  __int16 v30; // cx
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v33; // dx
  __int16 v34; // r8
  __int16 v35; // ax
  int v36; // r9d
  unsigned __int16 *v37; // rbx
  __int16 v38; // ax
  int v39; // ecx
  __int16 v40; // cx
  __int16 v41; // ax
  __int16 v42; // cx
  int v43; // r15d
  __int16 v44; // ax
  __int16 v45; // ax
  __int16 v46; // cx
  __int64 v47; // rdx
  __int16 v48; // [rsp+20h] [rbp-79h]
  __int16 v49; // [rsp+50h] [rbp-49h] BYREF
  _WORD *v50; // [rsp+58h] [rbp-41h] BYREF
  __int16 *v51; // [rsp+60h] [rbp-39h] BYREF
  __int16 *v52; // [rsp+68h] [rbp-31h] BYREF
  __int64 v53; // [rsp+70h] [rbp-29h] BYREF
  __int64 v54; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v55[14]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v57; // [rsp+110h] [rbp+77h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = fs_SetUpKey(a1, 62LL, &v57);
  v7 = v5;
  if ( !v5 )
    return (unsigned int)v57;
  v9 = v6;
  if ( *(_DWORD *)(v5 + 1152) != v6 )
  {
    v9 = 1;
    if ( *(_WORD *)(v5 + 1072) != 1 || *(_WORD *)(v5 + 1074) != (_WORD)v6 )
      v9 = -1;
    if ( *(_DWORD *)(v5 + 844) != v6 && *(_WORD *)(v5 + 1002) != (_WORD)v6 )
      v9 = -1;
    v10 = *(_WORD *)(a1 + 106);
    v11 = *(_WORD *)(a1 + 104);
    if ( v10 > v11 && (v10 < *(__int16 *)(v7 + 694) || v11 > *(__int16 *)(v7 + 698)) )
      v9 = -1;
  }
  if ( *(_DWORD *)(v7 + 948) == v6 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 24LL);
    if ( *(_QWORD *)(v7 + 264) != v12 )
    {
      *(_QWORD *)(v7 + 432) = v12 + *(unsigned int *)(v7 + 480);
      *(_QWORD *)(v7 + 440) = v12 + *(unsigned int *)(v7 + 484);
      *(_QWORD *)(v7 + 448) = v12 + *(unsigned int *)(v7 + 488);
      *(_QWORD *)(v7 + 456) = v12 + *(unsigned int *)(v7 + 492);
      *(_QWORD *)(v7 + 464) = v12 + *(unsigned int *)(v7 + 496);
      *(_QWORD *)(v7 + 472) = v12 + *(unsigned int *)(v7 + 548);
      fsg_UpdateWorkSpaceElement();
      *(_QWORD *)(v7 + 264) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 24LL);
    }
    v13 = *(_QWORD **)(v7 + 232);
    v14 = *(unsigned int *)(v7 + 552);
    v15 = v13[3];
    v16 = v13[7];
    v17 = v15 + v14;
    if ( !(_DWORD)v14 )
      v17 = v13[6];
    v18 = *(unsigned int *)(v7 + 556);
    v57 = v17;
    if ( (_DWORD)v18 )
      v16 = v15 + v18;
    if ( *(_DWORD *)(v7 + 844) != v6 && (*(_BYTE *)(v7 + 1076) & 1) == 0 )
    {
      v19 = *(_WORD *)(a1 + 106);
      v20 = *(_WORD *)(a1 + 104);
      if ( v19 > v20 && (v19 < *(__int16 *)(v7 + 694) || v20 > *(__int16 *)(v7 + 698)) )
        return 6147LL;
      if ( v9 == 1 )
      {
        v3 = *(_WORD *)(v7 + 1060);
        v4 = *(_WORD *)(v7 + 1062);
        *(_DWORD *)(v7 + 1060) = v6;
      }
      result = sbit_GetBitmap(v7 + 964, v7, *(_QWORD *)(a1 + 48), v17);
      if ( !(_DWORD)result )
      {
        if ( v9 == 1 )
        {
          *(_WORD *)(v7 + 1060) = v3;
          *(_WORD *)(v7 + 1062) = v4;
        }
        if ( v9 )
          sbit_ExpandGrayFromMono(
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v7 + 700) - *(_WORD *)(v7 + 696)),
            (unsigned __int16)(*(_WORD *)(v7 + 694) - *(_WORD *)(v7 + 698)),
            *(_WORD *)(v7 + 1156));
        if ( v9 == 1 && *(_WORD *)(v7 + 992) != 3 )
          sbit_EmboldenGrayFromMono(
            *(_QWORD *)(a1 + 48),
            (unsigned __int16)(*(_WORD *)(v7 + 700) - *(_WORD *)(v7 + 696)),
            (unsigned __int16)(*(_WORD *)(v7 + 694) - *(_WORD *)(v7 + 698)));
        *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 40LL);
        if ( !*(_DWORD *)(v7 + 836) )
          return 0LL;
        result = fs_ConvertGrayLevels(a2, *(unsigned __int16 *)(v7 + 832), *(unsigned __int16 *)(v7 + 1058));
        if ( !(_DWORD)result )
          return 0LL;
      }
      return result;
    }
    *(_QWORD *)(v7 + 760) = v15 + *(unsigned int *)(v7 + 548);
    fsg_GetContourData(
      v7 + 432,
      0,
      0,
      (unsigned int)&v52,
      (__int64)&v53,
      (__int64)&v50,
      (__int64)&v51,
      (__int64)&v54,
      (__int64)v55,
      (__int64)&v49);
  }
  else
  {
    v21 = *(_DWORD **)(a1 + 112);
    if ( *v21 != 755809197 )
      return 5632LL;
    v22 = *(int *)(v7 + 736);
    v23 = v21 + 72;
    *(_QWORD *)(v7 + 760) = v23;
    v24 = (__int16 *)((char *)v23 + v22);
    v49 = *v24;
    v50 = v24 + 1;
    v25 = v49;
    v26 = &v24[v25 + 1];
    v51 = v26;
    v52 = &v26[v25];
    v27 = (unsigned __int16)(v26[v49 - 1] + 1);
    v53 = (__int64)&v26[2 * v27 + v25];
    v54 = 4 * v27 + v53;
    v28 = *(_DWORD *)(v27 + v54) == 165;
    v55[0] = v55[5];
    if ( !v28 )
      return 5632LL;
    v29 = *(_QWORD *)(v7 + 232);
    v17 = *(_QWORD *)(v29 + 48);
    v16 = *(_QWORD *)(v29 + 56);
    v57 = v17;
  }
  if ( !v16 )
    *(_WORD *)(v7 + 312) = 2;
  *(_QWORD *)(v7 + 728) = *(_QWORD *)(a1 + 48);
  v30 = *(_WORD *)(a1 + 106);
  *(_WORD *)(v7 + 690) = v30;
  v31 = *(_WORD *)(a1 + 104);
  *(_WORD *)(v7 + 692) = v31;
  if ( v30 <= v31 )
  {
    *(_WORD *)(v7 + 690) = *(_WORD *)(v7 + 694);
    *(_WORD *)(v7 + 692) = *(_WORD *)(v7 + 698);
  }
  v32 = *(_WORD *)(v7 + 690);
  v33 = *(_WORD *)(v7 + 694);
  v34 = *(_WORD *)(v7 + 698);
  if ( v32 > v33 )
    v32 = *(_WORD *)(v7 + 694);
  *(_WORD *)(v7 + 690) = v32;
  v35 = *(_WORD *)(v7 + 692);
  if ( v35 < v34 )
    v35 = v34;
  *(_WORD *)(v7 + 692) = v35;
  if ( *(_WORD *)(v7 + 680) == 3 && (*(_QWORD *)(v7 + 288) != v17 || *(_QWORD *)(v7 + 296) != v16) )
    *(_WORD *)(v7 + 680) = 2;
  v36 = *(unsigned __int16 *)(v7 + 680);
  if ( (_WORD)v36 )
  {
    if ( (_WORD)v36 == 1 )
    {
      v39 = *(__int16 *)(v7 + 690) - *(__int16 *)(v7 + 692);
      if ( *(_DWORD *)(v7 + 836) )
        v39 *= *(unsigned __int16 *)(v7 + 832);
      if ( v39 > *(__int16 *)(v7 + 682) )
        return 4107LL;
      *(_WORD *)(v7 + 312) = 2;
    }
  }
  else if ( *(_WORD *)(v7 + 690) != v33 || *(_WORD *)(v7 + 692) != v34 )
  {
    if ( *(_DWORD *)(v7 + 836) )
      return 5891LL;
    *(_WORD *)(v7 + 312) = 2;
  }
  v37 = (unsigned __int16 *)(v7 + 688);
  if ( *(_DWORD *)(v7 + 836) )
  {
    v38 = *(_WORD *)(v7 + 690);
    v37 = (unsigned __int16 *)(v7 + 784);
    if ( v38 == v33 )
    {
      *(_WORD *)(v7 + 786) = *(_WORD *)(v7 + 790);
    }
    else
    {
      v40 = v38 * *(_WORD *)(v7 + 832);
      if ( v40 > *(__int16 *)(v7 + 790) )
        v40 = *(_WORD *)(v7 + 790);
      *(_WORD *)(v7 + 786) = v40;
    }
    v41 = *(_WORD *)(v7 + 692);
    if ( v41 == v34 )
    {
      *(_WORD *)(v7 + 788) = *(_WORD *)(v7 + 794);
    }
    else
    {
      v42 = v41 * *(_WORD *)(v7 + 832);
      if ( v42 < *(__int16 *)(v7 + 794) )
        v42 = *(_WORD *)(v7 + 794);
      *(_WORD *)(v7 + 788) = v42;
    }
    *(_QWORD *)(v7 + 824) = *(_QWORD *)(a1 + 72);
  }
  if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 )
  {
    v37 = (unsigned __int16 *)(v7 + 784);
    *(_QWORD *)(v7 + 824) = *(_QWORD *)(a1 + 72);
    *(_WORD *)(v7 + 786) = *(_WORD *)(v7 + 790);
    *(_WORD *)(v7 + 788) = *(_WORD *)(v7 + 794);
  }
  *(_QWORD *)(v7 + 768) = v57;
  v48 = *(_WORD *)(v7 + 312);
  *(_QWORD *)(v7 + 776) = v16;
  result = fsc_FillGlyph((unsigned int)&v49, (_DWORD)v37, (int)v7 + 736, v36, v48);
  if ( !(_DWORD)result )
  {
    if ( !*(_DWORD *)(v7 + 836)
      || (result = fsc_CalcGrayMap(v7 + 784, v7 + 688, *(unsigned __int16 *)(v7 + 832)), !(_DWORD)result) )
    {
      v43 = *(_DWORD *)(v7 + 1148);
      if ( v43 )
      {
        if ( !*(_DWORD *)(v7 + 1068)
          || (v44 = *(_WORD *)(v7 + 1076), (v44 & 1) == 0)
          || *(_DWORD *)(v7 + 844)
          || *(_WORD *)(v7 + 1072) != 1
          || *(_WORD *)(v7 + 1074)
          || (v44 & 8) != 0 )
        {
          v43 = 0;
        }
        v45 = *(_WORD *)(a1 + 106);
        v46 = *(_WORD *)(a1 + 104);
        if ( v45 > v46 && (v45 < *(__int16 *)(v7 + 694) || v46 > *(__int16 *)(v7 + 698)) )
          v43 = 0;
      }
      if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 && !v43 )
        fsc_OverscaleToSubPixel(v7 + 784, 0LL, v7 + 688);
      if ( *(_DWORD *)(v7 + 1068) )
      {
        if ( *(_DWORD *)(v7 + 836) )
        {
          sbit_EmboldenGray(
            *(void **)(v7 + 728),
            *(_WORD *)(v7 + 832) * *(_WORD *)(v7 + 832) + 1,
            *(_WORD *)(v7 + 1072),
            *(_WORD *)(v7 + 1074));
        }
        else if ( (*(_BYTE *)(v7 + 1076) & 1) != 0 )
        {
          if ( v43 )
          {
            fsc_OverscaleToBold(*(unsigned __int16 *)(v7 + 996), v7 + 784, v7 + 688);
            fsc_OverscaleToSubPixel(v7 + 784, v47, v7 + 688);
          }
          else
          {
            sbit_EmboldenSubPixel(*(void **)(v7 + 728), *(_WORD *)(v7 + 1072), *(_WORD *)(v7 + 1074));
          }
        }
        else
        {
          if ( v9 != 1 )
            sbit_Embolden(
              *((_QWORD *)v37 + 5),
              (unsigned __int16)(v37[6] - v37[4]),
              (unsigned __int16)(v37[1] - v37[2]),
              *v37,
              *(_WORD *)(v7 + 1072),
              *(_WORD *)(v7 + 1074));
          if ( v9 )
            sbit_ExpandGrayFromMono(
              *((_QWORD *)v37 + 5),
              *((_QWORD *)v37 + 5),
              (unsigned __int16)(v37[6] - v37[4]),
              (unsigned __int16)(v37[1] - v37[2]),
              *(_WORD *)(v7 + 1156));
          if ( v9 == 1 )
            sbit_EmboldenGrayFromMono(
              *((_QWORD *)v37 + 5),
              (unsigned __int16)(v37[6] - v37[4]),
              (unsigned __int16)(v37[1] - v37[2]));
        }
      }
      if ( *(_WORD *)(v7 + 680) == 2 )
      {
        *(_WORD *)(v7 + 680) = 3;
        *(_QWORD *)(v7 + 288) = v57;
        *(_QWORD *)(v7 + 296) = v16;
      }
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(*(_QWORD *)(v7 + 232) + 40LL);
      return 0LL;
    }
  }
  return result;
}

/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00ACEF0
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00AC960 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02707E0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0270990 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C003A9F0 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C003BB68 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C003BB88 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C003BF88 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C003BFAC (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C00AC708 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z @ 0x1C00AC740 (-bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00ADA24 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00ADCB4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C010F628 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C0112028 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0138C48 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C013FFE0 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02944AC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  struct PFE *v4; // r10
  int v5; // r12d
  IFIOBJ *v10; // r14
  struct PFE *v11; // rdx
  int v12; // ebp
  __int64 v13; // r11
  __int64 v14; // rsi
  char v15; // cl
  char v16; // al
  char v17; // cl
  int v18; // edx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // cl
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned __int8 v25; // si
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int8 v28; // dl
  struct PFE *v29; // r13
  MAPPER *v30; // rcx
  int v31; // esi
  __int64 v32; // rax
  __int16 *v33; // rax
  signed int v34; // ebp
  int v35; // r15d
  int v36; // ecx
  unsigned int v37; // edx
  int v38; // ebp
  int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  __int64 v43; // r15
  unsigned __int64 v44; // rcx
  __int64 v45; // rbp
  MAPPER *v46; // r11
  int v47; // r8d
  int v48; // r8d
  int v49; // r9d
  char v50; // dl
  char v51; // dl
  int v52; // eax
  _DWORD *v53; // r15
  int v54; // r13d
  int v55; // edx
  int v56; // eax
  int v57; // r13d
  int v58; // r12d
  unsigned int v59; // eax
  unsigned int v60; // ecx
  struct PFE *v61; // rbp
  int v62; // r8d
  int v63; // r11d
  char *v64; // rcx
  int v65; // eax
  _BYTE *v66; // r9
  unsigned __int64 v67; // rcx
  unsigned int v68; // eax
  unsigned int v69; // r9d
  unsigned int v70; // r8d
  char v71; // al
  int v72; // eax
  int v73; // r13d
  unsigned int v74; // ebp
  __int64 v75; // r11
  unsigned int v76; // r10d
  int v77; // r11d
  int v78; // ecx
  int v79; // r9d
  unsigned int v80; // edx
  int v81; // eax
  int v82; // r9d
  int v83; // r10d
  int v84; // eax
  int v85; // eax
  struct tagPvtData *v86; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v91; // rax
  unsigned __int64 v92; // r8
  MAPPER *v93; // rdx
  int v94; // r8d
  int v95; // r9d
  __int64 v96; // rdx
  unsigned int v97; // eax
  unsigned int v98; // ecx
  MAPPER *v99; // r8
  __int64 v100; // rdx
  char *v101; // rdx
  int v102; // r8d
  unsigned int v103; // eax
  unsigned int v104; // [rsp+20h] [rbp-58h]
  unsigned int v105; // [rsp+24h] [rbp-54h] BYREF
  struct PFE *v106; // [rsp+28h] [rbp-50h]
  _QWORD v107[2]; // [rsp+30h] [rbp-48h] BYREF
  int v108; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *Str2; // [rsp+88h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0;
  *((_DWORD *)this + 63) &= 0xFFFFB7FF;
  v106 = v4;
  Str2 = 0LL;
  if ( *a2 == gppfeMapperDefault )
    *((_DWORD *)this + 63) |= 0x4000u;
  v10 = (MAPPER *)((char *)this + 256);
  *((_QWORD *)this + 32) = *((_QWORD *)*a2 + 4);
  v11 = *a2;
  if ( (*((_DWORD *)v11 + 3) & 2) != 0 )
    goto LABEL_200;
  v107[0] = *(_QWORD *)v11;
  if ( *(struct PFT **const *)(v107[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v107) )
      goto LABEL_200;
    v4 = v106;
  }
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_200;
  if ( *(struct PFT **const *)(*(_QWORD *)*a2 + 128LL) != gpPFTPrivate )
    goto LABEL_7;
  v107[0] = *(_QWORD *)*a2;
  v86 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v107);
  if ( v86 )
  {
    if ( (*((_DWORD *)v86 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_200:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v4 = v106;
LABEL_7:
  v12 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v12 < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v4 + 10) )
  {
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  v13 = *(_QWORD *)v10;
  v14 = *((_QWORD *)this + 1);
  v15 = *(_BYTE *)(*(_QWORD *)v10 + 45LL);
  v16 = *(_BYTE *)(v14 + 27) & 3;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v17 = v15 & 2;
      v18 = v17 != 0 ? 0x3A98 : 0;
      if ( !v17 )
        goto LABEL_12;
    }
    else
    {
      if ( (v15 & 2) != 0 )
        goto LABEL_12;
      v18 = 350;
    }
  }
  else
  {
    if ( (v15 & 1) == 0 )
      goto LABEL_12;
    v18 = 1;
  }
  *((_DWORD *)this + 46) = v18;
  if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
    return 0LL;
  v4 = v106;
LABEL_12:
  v19 = *(_BYTE *)(v13 + 45) & 0x70;
  v20 = *(_BYTE *)(v14 + 27) & 0x70;
  if ( !v20 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v20 = *(_BYTE *)(v13 + 45) & 0x70;
    }
    else if ( v19 )
    {
      if ( (v12 & 0x800000) != 0 )
        v20 = 16;
      else
        v20 = 32;
    }
  }
  if ( (v20 & 0xF0u) < 0x60 )
    Str2 = (wchar_t *)gpwszFamilyDefaultFonts[(unsigned __int64)v20 >> 4];
  if ( v20 == v19 )
    goto LABEL_25;
  v21 = 0;
  if ( !v19 )
  {
    v22 = 8000;
    goto LABEL_24;
  }
  if ( v20 > 0x30u )
  {
    if ( v19 > 0x30u )
      goto LABEL_23;
    goto LABEL_196;
  }
  if ( v19 > 0x30u )
LABEL_196:
    v21 = 50;
LABEL_23:
  v22 = v21 + 9000;
LABEL_24:
  *((_DWORD *)this + 46) += v22;
  v23 = *((_DWORD *)this + 46);
  v24 = *((_DWORD *)this + 45);
  if ( v23 >= v24 && (v23 != v24 || (v12 & 0x1000080) != 0 || *((_DWORD *)v4 + 22) >= *((_DWORD *)this + 52)) )
    return 0LL;
LABEL_25:
  v25 = *((_BYTE *)this + 284);
  if ( v25 != 1 && (v12 & 0x8000000) == 0 )
  {
    v26 = *((_QWORD *)*a2 + 4);
    v27 = *(int *)(v26 + 40);
    if ( (_DWORD)v27 )
    {
      v28 = *(_BYTE *)(v26 + v27);
      v66 = (_BYTE *)(v26 + v27);
      v67 = v26 + v27 + 16;
      if ( (unsigned __int64)v66 >= v67 )
      {
LABEL_128:
        if ( *((_QWORD *)*a2 + 16) )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
          for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v91 = (char *)Flink + Blink_low;
              v92 = (unsigned __int64)&Flink[1] + Blink_low;
              if ( (unsigned __int64)v91 < v92 )
              {
                while ( *v91 != v25 )
                {
                  if ( *v91 != 1 && (unsigned __int64)++v91 < v92 )
                    continue;
                  goto LABEL_221;
                }
LABEL_215:
                v28 = v25;
                break;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v25 )
            {
              goto LABEL_215;
            }
LABEL_221:
            ;
          }
          v4 = v106;
        }
      }
      else
      {
        while ( *v66 != v25 )
        {
          if ( *v66 != 1 && (unsigned __int64)++v66 < v67 )
            continue;
          goto LABEL_128;
        }
        v28 = *((_BYTE *)this + 284);
      }
    }
    else
    {
      v28 = *(_BYTE *)(v26 + 44);
    }
    *a3 = v28;
    if ( v25 != v28 )
    {
      if ( (v12 & 0x4000000) == 0 )
        goto LABEL_149;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
        return 0LL;
    }
    goto LABEL_30;
  }
  v71 = jMapCharset(v25, (struct PFEOBJ *)a2);
  *a3 = v71;
  if ( v25 != 1 || (v12 & 0x8000000) != 0 )
  {
LABEL_30:
    v29 = v106;
    goto LABEL_31;
  }
  v29 = v106;
  if ( MAPPER::DefaultCharset != v71 )
  {
    *((_DWORD *)this + 46) += 2;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
LABEL_31:
  if ( a4 )
  {
    if ( (unsigned int)PFEOBJ::bCheckFamilyName(
                         (PFEOBJ *)a2,
                         *((const unsigned __int16 **)this + 2),
                         0,
                         (unsigned int *)&v108) )
    {
      if ( v108 )
        ++*((_DWORD *)this + 46);
    }
    else
    {
      *((_DWORD *)this + 46) += !Str2
                             || _wcsicmp(
                                  (const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)),
                                  Str2)
                              ? 10000
                              : 9000;
    }
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  v30 = *(MAPPER **)v10;
  v31 = *((_DWORD *)this + 63);
  v32 = *(int *)(*(_QWORD *)v10 + 8LL);
  if ( (v31 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)((char *)v30 + v32) != 64 )
      goto LABEL_149;
  }
  else if ( *(_WORD *)((char *)v30 + v32) == 64 )
  {
    goto LABEL_149;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x3000010) == 0 )
  {
    if ( (v31 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_149;
    v31 = *((_DWORD *)this + 63);
    v33 = *(__int16 **)v10;
    if ( (v31 & 2) != 0 )
      v34 = v33[28];
    else
      v34 = v33[30] + v33[31];
    v35 = *((_DWORD *)this + 41);
    if ( v34 < v35
      && (LOBYTE(v30) = (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x100000) != 0,
          ((unsigned __int8)v30 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
      && v35 > 7 * v34 / 4 )
    {
      if ( !MAPPER::bWin31BitmapHeightScaling(v30, v35, v34, &v108) )
        return 0LL;
      v81 = v108;
      if ( (unsigned int)v108 > 8 )
        v81 = 8;
      *((_DWORD *)this + 49) = v81;
    }
    else
    {
      *((_DWORD *)this + 49) = 1;
    }
    v36 = *((_DWORD *)this + 49);
    v37 = 0;
    if ( v36 > 1 )
    {
      if ( (v31 & 0x800) == 0 && v36 + 2 >= v34 )
        return 0LL;
      v34 *= v36;
      v37 = (20 * v36) | (5 * (v36 - 1));
    }
    if ( v35 >= v34 )
    {
      v39 = 150 * (v35 - v34);
    }
    else
    {
      v38 = v34 - v35;
      if ( (v31 & 0x1080) == 0x1080 )
      {
        if ( v38 > 1 )
          v37 += 150 * (v38 + 20);
LABEL_45:
        if ( v37 )
        {
          *((_DWORD *)this + 46) += v37;
          v40 = *((_DWORD *)this + 46);
          v41 = *((_DWORD *)this + 45);
          if ( v40 >= v41 && (v40 != v41 || (v31 & 0x1000080) != 0 || *((_DWORD *)v29 + 22) >= *((_DWORD *)this + 52)) )
            return 0LL;
          if ( v37 >= 0x2710 && (v31 & 0x4800) == 0 )
            return 0LL;
        }
        goto LABEL_50;
      }
      v39 = 150 * (v38 + 4);
    }
    v37 += v39;
    goto LABEL_45;
  }
LABEL_50:
  v43 = *(_QWORD *)this;
  v44 = *(_QWORD *)(**(_QWORD **)this + 80LL);
  if ( (*(_DWORD *)(v44 + 104) & 1) != 0 && IFIOBJ::lfOutPrecision(v10) == 6 && (v31 & 0x4000) == 0 )
  {
    v93 = *(MAPPER **)v10;
    v94 = *((_DWORD *)this + 61);
    v95 = *(_DWORD *)(*(_QWORD *)v10 + 128LL);
    if ( v94 != v95 || *((_DWORD *)this + 62) != *((_DWORD *)v93 + 33) )
    {
      v44 = (unsigned int)(v95 * *((_DWORD *)this + 62));
      if ( v94 * *((_DWORD *)v93 + 33) != (_DWORD)v44 )
        goto LABEL_149;
    }
  }
  v45 = *((_QWORD *)this + 1);
  v46 = *(MAPPER **)v10;
  if ( *(_BYTE *)(v45 + 20) )
  {
    if ( (*((_BYTE *)v46 + 52) & 1) == 0 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic(v10) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v72 = 1;
      }
      else
      {
        v72 = 4;
      }
      *((_DWORD *)this + 46) += v72;
      if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
        return 0LL;
    }
  }
  else if ( (*((_BYTE *)v46 + 52) & 1) != 0 )
  {
    *((_DWORD *)this + 46) += 4;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  v47 = *((unsigned __int16 *)v46 + 23) - *((_DWORD *)this + 43);
  if ( (v31 & 0x200000) != 0 )
  {
    *((_DWORD *)this + 46) += (int)(19 * abs32(v47)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  else if ( v47 )
  {
    if ( v47 < 0 )
    {
      v47 = *((_DWORD *)this + 43) - *((unsigned __int16 *)v46 + 23);
      if ( v47 > 150 )
      {
        if ( IFIOBJ::pvSimBold(v10) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v47 -= 120;
        }
      }
    }
    *((_DWORD *)this + 46) += (73 * v47) >> 8;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  v48 = v31 & 0x80;
  if ( (v31 & 0x80) == 0 )
  {
    v49 = *((_DWORD *)v46 + 12);
    if ( (v49 & 1) == 0
      && (v49 & 2) != 0
      && ((v31 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v43 + 72LL) < 0
       || ((v31 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62)) && (v49 & 0x40000000) == 0) )
    {
      goto LABEL_149;
    }
    v50 = *(_BYTE *)(v45 + 24);
    if ( v50 == 7 && IFIOBJ::lfOutPrecision(v10) != 8 )
      goto LABEL_149;
    if ( v50 == 10 && v49 >= 0 )
      goto LABEL_149;
  }
  v51 = *(_BYTE *)(v45 + 24);
  if ( v51 == 9
    || (v44 = gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v51 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v43 + 72LL) & 0x20000000) != 0 )
  {
    if ( v48 || (v52 = *((_DWORD *)v46 + 12), (v52 & 1) == 0) && ((v52 & 2) != 0 || (v52 & 4) != 0 || (v52 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v68 = *((_DWORD *)this + 46);
      v44 = *((unsigned int *)this + 45);
      if ( v68 >= (unsigned int)v44
        && (v68 != (_DWORD)v44 || (v31 & 0x1000080) != 0 || *((_DWORD *)v29 + 22) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  v53 = (_DWORD *)((char *)v46 + 48);
  if ( (*((_DWORD *)v46 + 12) & 0x2000010) != 0 )
    goto LABEL_76;
  v54 = *((__int16 *)v46 + 38);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v45 + 4) )
  {
    if ( (v31 & 0x8000) == 0 && (*v53 & 0x100000) != 0 )
    {
      v73 = *((_DWORD *)this + 62);
      v74 = *((_DWORD *)this + 61);
      if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v73), v74, &v108) )
        return 0LL;
      v104 = *(_DWORD *)(v75 + 132);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v75 + 128)), v104, &Str2)
        || (unsigned int)SafeDivide<long,long,long>((unsigned int)Str2, *((unsigned int *)this + 49), &v105) )
      {
        return 0LL;
      }
      v78 = 0;
      if ( v77 != v104 || v74 != v73 )
      {
        v79 = v108;
        if ( v108 <= (3 * v105) >> 1 )
        {
LABEL_194:
          if ( !v76 )
            goto LABEL_149;
          v5 += 30 * abs32(v79 - (int)Str2 * *((_DWORD *)this + 48) / v76);
LABEL_164:
          v61 = v106;
          if ( !v5 )
            goto LABEL_77;
          *((_DWORD *)this + 46) += v5;
          if ( !(unsigned int)MAPPER::bNoMatch(this, v61) )
            goto LABEL_77;
          return 0LL;
        }
        if ( !v105 )
          goto LABEL_149;
        *((_DWORD *)this + 48) = v108 / v105;
LABEL_160:
        v80 = *((_DWORD *)this + 48);
        if ( v80 > 5 )
          v80 = 5;
        *((_DWORD *)this + 48) = v80;
        v5 = 20 * v80;
        if ( v78 && v80 == v76 )
          goto LABEL_164;
        goto LABEL_194;
      }
      v78 = 1;
      if ( v76 != 1 )
      {
        v79 = v108;
        *((_DWORD *)this + 48) = v76;
        goto LABEL_160;
      }
    }
LABEL_76:
    v61 = v106;
    goto LABEL_77;
  }
  if ( (v31 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_149;
  v31 = *((_DWORD *)this + 63);
  v53 = (_DWORD *)(*(_QWORD *)v10 + 48LL);
  LOBYTE(v44) = (v31 & 0x8000) == 0;
  if ( ((unsigned __int8)v44 & ((*v53 & 0x100000) != 0)) != 0 && (v55 = *((_DWORD *)this + 42), v55 > v54) )
  {
    if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v44, v55, v54, &v108) )
      return 0LL;
    v85 = v108;
    if ( (unsigned int)v108 > 5 )
      v85 = 5;
    *((_DWORD *)this + 48) = v85;
  }
  else if ( (*v53 & 0x1000000) != 0 )
  {
    v96 = (unsigned int)(*(__int16 *)(*(_QWORD *)v10 + 60LL) + *(__int16 *)(*(_QWORD *)v10 + 62LL));
    v108 = *((_DWORD *)this + 41) * v54;
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v108, v96, &v108) )
      return 0LL;
    v54 = v108;
  }
  v56 = *((_DWORD *)this + 48);
  if ( v56 > 1 )
  {
    v54 *= v56;
    v5 = (v56 - 1) | (20 * v56);
  }
  if ( *((_DWORD *)this + 42) - v54 < 0 )
    v57 = v54 - *((_DWORD *)this + 42);
  else
    v57 = *((_DWORD *)this + 42) - v54;
  v58 = 50 * v57 + v5;
  if ( !v58 )
    goto LABEL_76;
  *((_DWORD *)this + 46) += v58;
  v59 = *((_DWORD *)this + 46);
  v60 = *((_DWORD *)this + 45);
  if ( v59 < v60 )
    goto LABEL_76;
  if ( v59 != v60 || (v31 & 0x1000080) != 0 )
    return 0LL;
  v61 = v106;
  if ( *((_DWORD *)v106 + 22) < *((_DWORD *)this + 52) )
  {
LABEL_77:
    v62 = *((_DWORD *)this + 48);
    if ( v62 <= 1 && *((int *)this + 49) <= 1 )
    {
LABEL_79:
      if ( (*v53 & 0x10) != 0 || (v31 & 0x41000) == 0x41000 )
        goto LABEL_80;
      if ( (v31 & 0x80000) != 0 || (unsigned int)MAPPER::bCalcOrientation(this) )
      {
        v69 = *((_DWORD *)this + 44);
        v70 = v69 - *((_DWORD *)*a2 + 17);
        if ( v70 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
        {
          v97 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
          if ( v70 <= v69 )
            v97 = *((_DWORD *)this + 44) - *((_DWORD *)*a2 + 17);
          v70 = v97 % 0x384;
        }
        if ( !v70 )
          goto LABEL_80;
        if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x200000) != 0 )
        {
          v98 = -v70;
          if ( v70 <= v69 )
            v98 = v70;
          v70 = v98 % 0x384;
        }
        if ( !v70 )
        {
LABEL_80:
          v63 = *((_DWORD *)this + 63);
          if ( (v63 & 0x400000) != 0 )
          {
            ++*((_DWORD *)this + 46);
            if ( (unsigned int)MAPPER::bNoMatch(this, v61) )
              return 0LL;
          }
          if ( v63 < 0 )
            v64 = (char *)this + 92;
          else
            v64 = (char *)(*((_QWORD *)this + 1) + 348LL);
          v65 = *((_DWORD *)v64 + 1);
          if ( !v65 )
            return 1LL;
          v99 = *(MAPPER **)v10;
          if ( *(_DWORD *)(*(_QWORD *)v10 + 4LL) >= 0x10u )
          {
            v100 = *((int *)v99 + 51);
            if ( (_DWORD)v100 )
            {
              v101 = (char *)v99 + v100;
              if ( v101 )
              {
                v102 = *((_DWORD *)v101 + 1);
                if ( v102 && v65 == v102 && *((_DWORD *)this + 46) <= 0x88B8u )
                  *((_QWORD *)this + 36) = v61;
                v103 = *((_DWORD *)v101 + 1);
                if ( *((_DWORD *)v64 + 1) == v103 && !memcmp(v64 + 8, v101 + 8, 4LL * v103) )
                  return 1LL;
              }
            }
          }
        }
      }
      goto LABEL_149;
    }
    *((_DWORD *)this + 46) += 50;
    v82 = *((_DWORD *)this + 49);
    v83 = *((_DWORD *)this + 46);
    if ( v62 < v82 )
    {
      if ( v62 )
      {
        if ( v62 == 1 )
          v84 = 100 * v82;
        else
          v84 = (100 * v82 + v62 / 2) / v62;
        goto LABEL_189;
      }
    }
    else
    {
      if ( v62 <= v82 )
        goto LABEL_181;
      if ( v82 )
      {
        if ( v82 == 1 )
        {
          *((_DWORD *)this + 46) = v83 + 400 * v62;
LABEL_181:
          if ( (unsigned int)MAPPER::bNoMatch(this, v61) )
            return 0LL;
          goto LABEL_79;
        }
        v84 = (100 * v62 + v82 / 2) / v82;
LABEL_189:
        *((_DWORD *)this + 46) = v83 + 4 * v84;
        goto LABEL_181;
      }
    }
LABEL_149:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  return 0LL;
}

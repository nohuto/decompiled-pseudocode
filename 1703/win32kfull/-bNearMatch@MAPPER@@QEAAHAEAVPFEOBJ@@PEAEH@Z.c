/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0
 * Callers:
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C00563D0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0056630 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0273F98 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C002E9A8 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEAAEXZ @ 0x1C002FAE8 (-lfOutPrecision@IFIOBJ@@QEAAEXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C002FB08 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00301CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00301F0 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0056250 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z @ 0x1C0056288 (-bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0057784 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0057A14 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00FD680 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C010452C (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0133E70 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C013949C (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0297DDC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  struct PFE *v4; // r10
  int v5; // r12d
  IFIOBJ *v10; // r14
  __int64 v11; // rcx
  struct PFT **v12; // rdx
  struct PFE *v13; // rcx
  int v14; // ebp
  MAPPER *v15; // r11
  __int64 v16; // rsi
  char v17; // al
  int v18; // eax
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
  __int64 v44; // rbp
  MAPPER *v45; // r11
  int v46; // r8d
  int v47; // r8d
  int v48; // ecx
  char v49; // dl
  char v50; // dl
  MAPPER *v51; // rcx
  _DWORD *v52; // r15
  struct PFE *v53; // rbp
  int v54; // r8d
  int v55; // r11d
  char *v56; // rcx
  int v57; // eax
  _BYTE *v58; // r9
  unsigned __int64 v59; // rcx
  unsigned int v60; // eax
  int v61; // r13d
  int v62; // edx
  int v63; // eax
  int v64; // r13d
  int v65; // r12d
  unsigned int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  char v70; // al
  int v71; // eax
  int v72; // r13d
  unsigned int v73; // ebp
  __int64 v74; // r11
  unsigned int v75; // r10d
  int v76; // r11d
  int v77; // ecx
  int v78; // r9d
  unsigned int v79; // edx
  int v80; // eax
  int v81; // r9d
  int v82; // r10d
  int v83; // eax
  int v84; // eax
  struct tagPvtData *v85; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v90; // rax
  unsigned __int64 v91; // r8
  MAPPER *v92; // rdx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rdx
  unsigned int v96; // eax
  unsigned int v97; // ecx
  MAPPER *v98; // r8
  __int64 v99; // rdx
  char *v100; // rdx
  int v101; // r8d
  unsigned int v102; // eax
  unsigned int v103; // [rsp+20h] [rbp-58h]
  unsigned int v104; // [rsp+24h] [rbp-54h] BYREF
  struct PFE *v105; // [rsp+28h] [rbp-50h]
  _QWORD v106[2]; // [rsp+30h] [rbp-48h] BYREF
  int v107; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *Str2; // [rsp+88h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0;
  *((_DWORD *)this + 63) &= 0xFFFFB7FF;
  v105 = v4;
  Str2 = 0LL;
  if ( *a2 == gppfeMapperDefault )
    *((_DWORD *)this + 63) |= 0x4000u;
  v10 = (MAPPER *)((char *)this + 256);
  *((_QWORD *)this + 32) = *((_QWORD *)*a2 + 4);
  if ( (*((_DWORD *)*a2 + 3) & 2) != 0 )
    goto LABEL_209;
  v11 = *(_QWORD *)*a2;
  v12 = gpPFTPrivate;
  v106[0] = v11;
  if ( *(struct PFT **const *)(v11 + 128) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v106) )
      goto LABEL_209;
    v12 = gpPFTPrivate;
    v4 = v105;
  }
  v13 = *a2;
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_209;
  if ( *(struct PFT **)(*(_QWORD *)v13 + 128LL) != *v12 )
    goto LABEL_7;
  v106[0] = *(_QWORD *)v13;
  v85 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v106);
  if ( v85 )
  {
    if ( (*((_DWORD *)v85 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_209:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v4 = v105;
LABEL_7:
  v14 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v14 < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v4 + 10) )
  {
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  v15 = *(MAPPER **)v10;
  v16 = *((_QWORD *)this + 1);
  v17 = *(_BYTE *)(v16 + 27) & 3;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v18 = (*((_BYTE *)v15 + 45) & 2) != 0 ? 0x3A98 : 0;
      if ( !v18 )
        goto LABEL_12;
    }
    else
    {
      if ( (*((_BYTE *)v15 + 45) & 2) != 0 )
        goto LABEL_12;
      v18 = 350;
    }
  }
  else
  {
    if ( (*((_BYTE *)v15 + 45) & 1) == 0 )
      goto LABEL_12;
    v18 = 1;
  }
  *((_DWORD *)this + 46) = v18;
  if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
    return 0LL;
  v4 = v105;
LABEL_12:
  v19 = *((_BYTE *)v15 + 45) & 0x70;
  v20 = *(_BYTE *)(v16 + 27) & 0x70;
  if ( !v20 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v20 = *((_BYTE *)v15 + 45) & 0x70;
    }
    else if ( v19 )
    {
      if ( (v14 & 0x800000) != 0 )
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
    goto LABEL_205;
  }
  if ( v19 > 0x30u )
LABEL_205:
    v21 = 50;
LABEL_23:
  v22 = v21 + 9000;
LABEL_24:
  *((_DWORD *)this + 46) += v22;
  v23 = *((_DWORD *)this + 46);
  v24 = *((_DWORD *)this + 45);
  if ( v23 >= v24 && (v23 != v24 || (v14 & 0x1000080) != 0 || *((_DWORD *)v4 + 22) >= *((_DWORD *)this + 52)) )
    return 0LL;
LABEL_25:
  v25 = *((_BYTE *)this + 284);
  if ( v25 != 1 && (v14 & 0x8000000) == 0 )
  {
    v26 = *((_QWORD *)*a2 + 4);
    v27 = *(int *)(v26 + 40);
    if ( (_DWORD)v27 )
    {
      v28 = *(_BYTE *)(v26 + v27);
      v58 = (_BYTE *)(v26 + v27);
      v59 = v26 + v27 + 16;
      if ( (unsigned __int64)v58 >= v59 )
      {
LABEL_118:
        if ( *((_QWORD *)*a2 + 16) )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
          for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v90 = (char *)Flink + Blink_low;
              v91 = (unsigned __int64)&Flink[1] + Blink_low;
              if ( (unsigned __int64)v90 < v91 )
              {
                while ( *v90 != v25 )
                {
                  if ( *v90 != 1 && (unsigned __int64)++v90 < v91 )
                    continue;
                  goto LABEL_229;
                }
LABEL_230:
                v28 = v25;
                break;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v25 )
            {
              goto LABEL_230;
            }
LABEL_229:
            ;
          }
          v4 = v105;
        }
      }
      else
      {
        while ( *v58 != v25 )
        {
          if ( *v58 != 1 && (unsigned __int64)++v58 < v59 )
            continue;
          goto LABEL_118;
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
      if ( (v14 & 0x4000000) == 0 )
        goto LABEL_141;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
        return 0LL;
    }
    goto LABEL_30;
  }
  v70 = jMapCharset(v25, (struct PFEOBJ *)a2);
  *a3 = v70;
  if ( v25 != 1 || (v14 & 0x8000000) != 0 )
  {
LABEL_30:
    v29 = v105;
    goto LABEL_31;
  }
  v29 = v105;
  if ( MAPPER::DefaultCharset != v70 )
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
                         (unsigned int *)&v107) )
    {
      if ( v107 )
        ++*((_DWORD *)this + 46);
    }
    else
    {
      *((_DWORD *)this + 46) += Str2
                             && !_wcsicmp(
                                   (const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)),
                                   Str2)
                              ? 9000
                              : 10000;
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
      goto LABEL_141;
  }
  else if ( *(_WORD *)((char *)v30 + v32) == 64 )
  {
    goto LABEL_141;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x3000010) == 0 )
  {
    if ( (v31 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_141;
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
      if ( !MAPPER::bWin31BitmapHeightScaling(v30, v35, v34, &v107) )
        return 0LL;
      v80 = v107;
      if ( (unsigned int)v107 > 8 )
        v80 = 8;
      *((_DWORD *)this + 49) = v80;
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
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 104LL) & 1) != 0
    && IFIOBJ::lfOutPrecision(v10) == 6
    && (v31 & 0x4000) == 0 )
  {
    v92 = *(MAPPER **)v10;
    v93 = *((_DWORD *)this + 61);
    v94 = *(_DWORD *)(*(_QWORD *)v10 + 128LL);
    if ( (v93 != v94 || *((_DWORD *)this + 62) != *((_DWORD *)v92 + 33))
      && v93 * *((_DWORD *)v92 + 33) != v94 * *((_DWORD *)this + 62) )
    {
      goto LABEL_141;
    }
  }
  v44 = *((_QWORD *)this + 1);
  v45 = *(MAPPER **)v10;
  if ( *(_BYTE *)(v44 + 20) )
  {
    if ( (*((_BYTE *)v45 + 52) & 1) == 0 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic(v10) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v71 = 1;
      }
      else
      {
        v71 = 4;
      }
      *((_DWORD *)this + 46) += v71;
      if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
        return 0LL;
    }
  }
  else if ( (*((_BYTE *)v45 + 52) & 1) != 0 )
  {
    *((_DWORD *)this + 46) += 4;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  v46 = *((unsigned __int16 *)v45 + 23) - *((_DWORD *)this + 43);
  if ( (v31 & 0x200000) != 0 )
  {
    *((_DWORD *)this + 46) += (int)(19 * abs32(v46)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  else if ( v46 )
  {
    if ( v46 < 0 )
    {
      v46 = *((_DWORD *)this + 43) - *((unsigned __int16 *)v45 + 23);
      if ( v46 > 150 )
      {
        if ( IFIOBJ::pvSimBold(v10) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v46 -= 120;
        }
      }
    }
    *((_DWORD *)this + 46) += (73 * v46) >> 8;
    if ( (unsigned int)MAPPER::bNoMatch(this, v29) )
      return 0LL;
  }
  v47 = v31 & 0x80;
  if ( (v31 & 0x80) == 0 )
  {
    v48 = *(_DWORD *)(*(_QWORD *)v10 + 48LL);
    if ( (v48 & 1) == 0
      && (v48 & 2) != 0
      && ((v31 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v43 + 72LL) < 0
       || ((v31 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62))
       && (*((_DWORD *)v45 + 12) & 0x40000000) == 0) )
    {
      goto LABEL_141;
    }
    v49 = *(_BYTE *)(v44 + 24);
    if ( v49 == 7 && IFIOBJ::lfOutPrecision(v10) != 8 )
      goto LABEL_141;
    if ( v49 == 10 && *((int *)v45 + 12) >= 0 )
      goto LABEL_141;
  }
  v50 = *(_BYTE *)(v44 + 24);
  if ( v50 == 9
    || (v51 = (MAPPER *)gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v50 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v43 + 72LL) & 0x20000000) != 0 )
  {
    if ( v47
      || (v51 = (MAPPER *)*(unsigned int *)(*(_QWORD *)v10 + 48LL), ((unsigned __int8)v51 & 1) == 0)
      && (((unsigned __int8)v51 & 2) != 0 || ((unsigned __int8)v51 & 4) != 0 || ((unsigned __int8)v51 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v60 = *((_DWORD *)this + 46);
      v51 = (MAPPER *)*((unsigned int *)this + 45);
      if ( v60 >= (unsigned int)v51
        && (v60 != (_DWORD)v51 || (v31 & 0x1000080) != 0 || *((_DWORD *)v29 + 22) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  v52 = (_DWORD *)((char *)v45 + 48);
  if ( (*((_DWORD *)v45 + 12) & 0x2000010) != 0 )
    goto LABEL_65;
  v61 = *((__int16 *)v45 + 38);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v44 + 4) )
  {
    if ( (v31 & 0x8000) == 0 && (*v52 & 0x100000) != 0 )
    {
      v72 = *((_DWORD *)this + 62);
      v73 = *((_DWORD *)this + 61);
      if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v72), v73, &v107) )
        return 0LL;
      v103 = *(_DWORD *)(v74 + 132);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v74 + 128)), v103, &Str2)
        || (unsigned int)SafeDivide<long,long,long>((unsigned int)Str2, *((unsigned int *)this + 49), &v104) )
      {
        return 0LL;
      }
      v77 = 0;
      if ( v76 != v103 || v73 != v72 )
      {
        v78 = v107;
        if ( v107 <= (3 * v104) >> 1 )
        {
LABEL_203:
          if ( !v75 )
            goto LABEL_141;
          v5 += 30 * abs32(v78 - (int)Str2 * *((_DWORD *)this + 48) / v75);
LABEL_165:
          v53 = v105;
          if ( !v5 )
            goto LABEL_66;
          *((_DWORD *)this + 46) += v5;
          if ( !(unsigned int)MAPPER::bNoMatch(this, v53) )
            goto LABEL_66;
          return 0LL;
        }
        if ( !v104 )
          goto LABEL_141;
        *((_DWORD *)this + 48) = v107 / v104;
LABEL_161:
        v79 = *((_DWORD *)this + 48);
        if ( v79 > 5 )
          v79 = 5;
        *((_DWORD *)this + 48) = v79;
        v5 = 20 * v79;
        if ( v77 && v79 == v75 )
          goto LABEL_165;
        goto LABEL_203;
      }
      v77 = 1;
      if ( v75 != 1 )
      {
        v78 = v107;
        *((_DWORD *)this + 48) = v75;
        goto LABEL_161;
      }
    }
LABEL_65:
    v53 = v105;
    goto LABEL_66;
  }
  if ( (v31 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_141;
  v31 = *((_DWORD *)this + 63);
  v52 = (_DWORD *)(*(_QWORD *)v10 + 48LL);
  LOBYTE(v51) = (v31 & 0x8000) == 0;
  if ( ((unsigned __int8)v51 & ((*v52 & 0x100000) != 0)) != 0 && (v62 = *((_DWORD *)this + 42), v62 > v61) )
  {
    if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling(v51, v62, v61, &v107) )
      return 0LL;
    v84 = v107;
    if ( (unsigned int)v107 > 5 )
      v84 = 5;
    *((_DWORD *)this + 48) = v84;
  }
  else if ( (*v52 & 0x1000000) != 0 )
  {
    v95 = (unsigned int)(*(__int16 *)(*(_QWORD *)v10 + 60LL) + *(__int16 *)(*(_QWORD *)v10 + 62LL));
    v107 = *((_DWORD *)this + 41) * v61;
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v107, v95, &v107) )
      return 0LL;
    v61 = v107;
  }
  v63 = *((_DWORD *)this + 48);
  if ( v63 > 1 )
  {
    v61 *= v63;
    v5 = (v63 - 1) | (20 * v63);
  }
  if ( *((_DWORD *)this + 42) - v61 < 0 )
    v64 = v61 - *((_DWORD *)this + 42);
  else
    v64 = *((_DWORD *)this + 42) - v61;
  v65 = 50 * v64 + v5;
  if ( !v65 )
    goto LABEL_65;
  *((_DWORD *)this + 46) += v65;
  v66 = *((_DWORD *)this + 46);
  v67 = *((_DWORD *)this + 45);
  if ( v66 < v67 )
    goto LABEL_65;
  if ( v66 != v67 || (v31 & 0x1000080) != 0 )
    return 0LL;
  v53 = v105;
  if ( *((_DWORD *)v105 + 22) < *((_DWORD *)this + 52) )
  {
LABEL_66:
    v54 = *((_DWORD *)this + 48);
    if ( v54 <= 1 && *((int *)this + 49) <= 1 )
    {
LABEL_68:
      if ( (*v52 & 0x10) != 0 || (v31 & 0x41000) == 0x41000 )
        goto LABEL_69;
      if ( (v31 & 0x80000) != 0 || (unsigned int)MAPPER::bCalcOrientation(this) )
      {
        v68 = *((_DWORD *)this + 44);
        v69 = v68 - *((_DWORD *)*a2 + 17);
        if ( v69 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
        {
          v96 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
          if ( v69 <= v68 )
            v96 = *((_DWORD *)this + 44) - *((_DWORD *)*a2 + 17);
          v69 = v96 % 0x384;
        }
        if ( !v69 )
          goto LABEL_69;
        if ( (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x200000) != 0 )
        {
          v97 = -v69;
          if ( v69 <= v68 )
            v97 = v69;
          v69 = v97 % 0x384;
        }
        if ( !v69 )
        {
LABEL_69:
          v55 = *((_DWORD *)this + 63);
          if ( (v55 & 0x400000) != 0 )
          {
            ++*((_DWORD *)this + 46);
            if ( (unsigned int)MAPPER::bNoMatch(this, v53) )
              return 0LL;
          }
          if ( v55 < 0 )
            v56 = (char *)this + 92;
          else
            v56 = (char *)(*((_QWORD *)this + 1) + 348LL);
          v57 = *((_DWORD *)v56 + 1);
          if ( !v57 )
            return 1LL;
          v98 = *(MAPPER **)v10;
          if ( *(_DWORD *)(*(_QWORD *)v10 + 4LL) >= 0x10u )
          {
            v99 = *((int *)v98 + 51);
            if ( (_DWORD)v99 )
            {
              v100 = (char *)v98 + v99;
              if ( v100 )
              {
                v101 = *((_DWORD *)v100 + 1);
                if ( v101 && v57 == v101 && *((_DWORD *)this + 46) <= 0x88B8u )
                  *((_QWORD *)this + 36) = v53;
                v102 = *((_DWORD *)v100 + 1);
                if ( *((_DWORD *)v56 + 1) == v102 && !memcmp(v56 + 8, v100 + 8, 4LL * v102) )
                  return 1LL;
              }
            }
          }
        }
      }
      goto LABEL_141;
    }
    *((_DWORD *)this + 46) += 50;
    v81 = *((_DWORD *)this + 49);
    v82 = *((_DWORD *)this + 46);
    if ( v54 < v81 )
    {
      if ( v54 )
      {
        if ( v54 == 1 )
          v83 = 100 * v81;
        else
          v83 = (100 * v81 + v54 / 2) / v54;
        goto LABEL_197;
      }
    }
    else
    {
      if ( v54 <= v81 )
        goto LABEL_190;
      if ( v81 )
      {
        if ( v81 == 1 )
        {
          *((_DWORD *)this + 46) = v82 + 400 * v54;
LABEL_190:
          if ( (unsigned int)MAPPER::bNoMatch(this, v53) )
            return 0LL;
          goto LABEL_68;
        }
        v83 = (100 * v54 + v81 / 2) / v81;
LABEL_197:
        *((_DWORD *)this + 46) = v82 + 4 * v83;
        goto LABEL_190;
      }
    }
LABEL_141:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  return 0LL;
}

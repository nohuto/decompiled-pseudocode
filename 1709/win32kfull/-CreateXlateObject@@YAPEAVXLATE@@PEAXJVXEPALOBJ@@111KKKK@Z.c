/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340
 * Callers:
 *     GreDrawStream @ 0x1C000E420 (GreDrawStream.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0101654 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C009BA0C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C0298194 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02B075C (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

__int64 CreateXlateObject(__int64 a1, int a2, __int64 a3, ...)
{
  unsigned int v6; // r13d
  __int64 result; // rax
  __int64 v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rdx
  BOOL v12; // edx
  struct PALETTE *v13; // r14
  __int64 v14; // r8
  struct _TRANSLATE *v15; // r9
  struct _TRANSLATE *v16; // r10
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rsi
  int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edx
  int v25; // r10d
  int v26; // r9d
  int v27; // esi
  int v28; // ebx
  int v29; // r11d
  int v30; // ecx
  int v31; // eax
  int *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // esi
  int *v36; // rcx
  void *v37; // rcx
  size_t v38; // r8
  int v39; // esi
  int v40; // edx
  unsigned int v41; // r11d
  int v42; // ebx
  int NearestIndexFromColorref; // eax
  unsigned int v44; // esi
  __int64 v45; // r9
  unsigned int v46; // eax
  _DWORD *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  unsigned int *v50; // r13
  unsigned int v51; // eax
  _DWORD *v52; // rcx
  _DWORD *v53; // rsi
  __int64 v54; // r10
  __int64 v55; // r9
  unsigned int *v56; // rdx
  unsigned int v57; // eax
  _DWORD *v58; // rcx
  unsigned int i; // r8d
  __int64 v60; // rax
  int v61; // eax
  unsigned int v62; // ecx
  unsigned int *v63; // r8
  unsigned int v64; // eax
  __int64 v65; // rdx
  struct _TRANSLATE *v66; // rdx
  int v67; // eax
  unsigned int v68; // edx
  __int64 v69; // rax
  int v70; // eax
  unsigned int v71; // ecx
  unsigned int *v72; // rdx
  unsigned int v73; // eax
  __int64 v74; // rbx
  __int64 v75; // rdi
  __int64 v76; // r14
  __int64 v77; // rbx
  struct PALETTE *v78; // r14
  unsigned int v79; // r14d
  __int64 v80; // rsi
  int v81; // eax
  unsigned int v82; // esi
  int v83; // eax
  __int64 v84; // rcx
  __int16 v85; // [rsp+20h] [rbp-48h]
  int v86; // [rsp+24h] [rbp-44h]
  BOOL v87; // [rsp+28h] [rbp-40h]
  int v88; // [rsp+28h] [rbp-40h]
  int v89; // [rsp+28h] [rbp-40h]
  struct _TRANSLATE *v90; // [rsp+30h] [rbp-38h]
  struct _TRANSLATE *v91; // [rsp+38h] [rbp-30h]
  struct PALETTE *j; // [rsp+40h] [rbp-28h] BYREF
  __int64 v93; // [rsp+48h] [rbp-20h]
  __int64 v94; // [rsp+50h] [rbp-18h]
  int v95; // [rsp+B0h] [rbp+48h]
  __int64 v96; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  __int64 v98; // [rsp+C0h] [rbp+58h]
  __int64 v99; // [rsp+C8h] [rbp+60h]
  __int64 v100; // [rsp+D0h] [rbp+68h]
  __int64 v101; // [rsp+D8h] [rbp+70h]
  __int64 v102; // [rsp+E0h] [rbp+78h]
  __int64 v103; // [rsp+E8h] [rbp+80h]
  va_list va1; // [rsp+F0h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v96 = va_arg(va1, _QWORD);
  v98 = va_arg(va1, _QWORD);
  v99 = va_arg(va1, _QWORD);
  v100 = va_arg(va1, _QWORD);
  v101 = va_arg(va1, _QWORD);
  v102 = va_arg(va1, _QWORD);
  v103 = va_arg(va1, _QWORD);
  v93 = a3;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 28);
  else
    v6 = 256;
  result = AllocThreadBufferWithTag(4 * v6 + 88, 1953265735LL, 0LL);
  v8 = result;
  if ( !result )
    return result;
  v9 = 0;
  *(_DWORD *)result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  if ( v6 )
  {
    *(_DWORD *)(result + 4) = 2;
    *(_QWORD *)(result + 16) = result + 80;
    *(_DWORD *)(result + 76) = 0;
  }
  else
  {
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 76) = 512;
  }
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 36) = -1;
  *(_QWORD *)(result + 40) = 0LL;
  *(_QWORD *)(result + 48) = 0LL;
  *(_QWORD *)(result + 56) = 0LL;
  v10 = ghsemPalette;
  v94 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  *(_DWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 64) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      *(_DWORD *)(v8 + 72) = a2;
      *(_QWORD *)(v8 + 64) = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v11) = 14;
        v48 = HmgShareLockCheck(a1, v11);
        if ( v48 )
        {
          *(_DWORD *)(v8 + 4) |= 0x10u;
          DEC_SHARE_REF_CNT(v48);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v49 = *(_DWORD *)(v8 + 4) | 0x20;
        *(_DWORD *)(v8 + 4) = v49;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v8 + 4) = v49 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)(v8 + 4) |= 0x20u;
      *(_DWORD *)(v8 + 72) = a2;
      *(_QWORD *)(v8 + 64) = 0LL;
    }
  }
  v12 = (*(_DWORD *)(v8 + 4) & 8) != 0;
  v87 = v12;
  if ( !v96 || (*(_DWORD *)(v96 + 24) & 0x800) != 0 )
  {
    v13 = (struct PALETTE *)v99;
    v14 = 1LL;
    v95 = 1;
    j = (struct PALETTE *)v99;
    if ( !*(_QWORD *)(v99 + 72) )
    {
      v13 = ppalDefault;
      j = ppalDefault;
    }
    if ( (v103 & 0x2000) == 0 )
    {
      *(_DWORD *)(v8 + 76) |= 0x800u;
      if ( v96 )
        *(_DWORD *)(v8 + 76) |= 0x1000u;
    }
  }
  else
  {
    v13 = (struct PALETTE *)v99;
    v14 = 0LL;
    j = (struct PALETTE *)v99;
    v95 = 0;
  }
  *(_QWORD *)(v8 + 40) = a3;
  *(_QWORD *)(v8 + 48) = v96;
  *(_QWORD *)(v8 + 56) = v13;
  v15 = (struct _TRANSLATE *)*((_QWORD *)v13 + 9);
  v16 = (struct _TRANSLATE *)*((_QWORD *)v13 + 10);
  v90 = v15;
  v91 = v16;
  if ( a3 )
  {
    v17 = *(_DWORD *)(a3 + 24);
    v18 = v17 & 0x800;
    v85 = v17;
    v86 = v18;
    if ( (v17 & 0x800) == 0 || v15 != v16 && (v103 & 0x4000) == 0 )
    {
      v19 = v96;
      if ( (v17 & 0x8000) == 0 )
        goto LABEL_17;
      if ( !v96 )
        goto LABEL_111;
      v14 = *(unsigned int *)(v96 + 24);
      if ( (v14 & 0x8000) == 0 )
      {
LABEL_15:
        if ( (v14 & 0x800) == 0 || v15 != v16 )
        {
LABEL_16:
          LODWORD(v14) = v95;
LABEL_17:
          if ( v18 && !v19 )
          {
            v56 = (unsigned int *)(v8 + 80);
            v57 = 0;
            v58 = (_DWORD *)(v8 + 80);
            do
              *v58++ = v57++;
            while ( v57 < 0x100 );
            for ( i = 0;
                  i < *((_DWORD *)v13 + 7);
                  *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v16 + v60 + 4) + 80) = *((unsigned __int8 *)v15 + v60 + 4) )
            {
              v60 = i++;
            }
            v61 = *(_DWORD *)(a3 + 24);
            if ( (v61 & 0x1000) != 0 )
            {
              *v56 = 0;
              *(_DWORD *)(v8 + 1100) = 255;
            }
            else if ( (v61 & 0x10000) == 0 )
            {
              v62 = 0;
              v63 = (unsigned int *)(v8 + 1064);
              do
              {
                *v56 = v62;
                v64 = v62 + 246;
                ++v62;
                *v63++ = v64;
                ++v56;
              }
              while ( v62 < 0xA );
            }
            goto LABEL_23;
          }
          if ( (v17 & 0x2000) != 0 )
          {
            if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
            {
              *(_DWORD *)(v8 + 80) = 0;
              *(_DWORD *)(v8 + 84) = v41;
            }
            else
            {
              v42 = v100;
              if ( v40 )
              {
                v44 = v101;
                *(_DWORD *)(v8 + 84) = v101;
                *(_DWORD *)(v8 + 80) = v42;
              }
              else
              {
                NearestIndexFromColorref = ulGetNearestIndexFromColorref(v19, v13, (unsigned int)v100, v41);
                v44 = v101;
                *(_DWORD *)(v8 + 80) = NearestIndexFromColorref;
                *(_DWORD *)(v8 + 84) = ulGetNearestIndexFromColorref(v96, v13, v44, 1LL);
              }
              *(_DWORD *)(v8 + 76) |= 0x100u;
              *(_DWORD *)(v8 + 28) = v42;
              *(_DWORD *)(v8 + 32) = v44;
            }
            goto LABEL_23;
          }
          if ( !v6 )
          {
            if ( v19 && (*(_DWORD *)(v19 + 24) & 0x2000) != 0 )
            {
              v35 = v102;
              *(_DWORD *)(v8 + 80) = ulGetNearestIndexFromColorref(a3, v98, (unsigned int)v102, 1LL);
              *(_DWORD *)(v8 + 4) |= 4u;
              *(_DWORD *)(v8 + 24) = v35;
              *(_QWORD *)(v8 + 16) = v8 + 80;
            }
            goto LABEL_23;
          }
          if ( !v19 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
          {
            if ( v12 )
            {
              v65 = 4LL * v6;
              do
              {
                v65 -= 4LL;
                *(_DWORD *)(v65 + v8 + 80) = *(_DWORD *)(v65 + *(_QWORD *)(a3 + 120));
                --v6;
              }
              while ( v6 );
            }
            else
            {
              if ( !(_DWORD)v14 || (v88 = v103 & 0x2000, (v103 & 0x2000) != 0) )
              {
                v13 = (struct PALETTE *)v19;
                v88 = v103 & 0x2000;
                if ( (v103 & 0x2000) != 0 )
                  *(_DWORD *)(v8 + 76) |= 0x2000u;
              }
              for ( j = v13; ; v13 = j )
              {
                --v6;
                *(_DWORD *)(v8 + 4LL * v6 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                                    &j,
                                                    *((unsigned int *)v13 + 24),
                                                    *(unsigned int *)(*(_QWORD *)(a3 + 120) + 4LL * v6));
                if ( !v6 )
                  break;
              }
              if ( v95 && !v88 )
              {
                v66 = v90;
                if ( v96 )
                  v66 = v91;
                XLATE::vMapNewXlate((XLATE *)v8, v66);
              }
            }
            goto LABEL_23;
          }
          v37 = (void *)(v8 + 80);
          v38 = 4LL * v6;
          goto LABEL_66;
        }
LABEL_111:
        if ( (unsigned int)bEqualRGB_In_Palette(a3, v13, v14) )
        {
LABEL_76:
          v46 = 0;
          v47 = (_DWORD *)(v8 + 80);
          do
            *v47++ = v46++;
          while ( v46 < 0x100 );
          *(_DWORD *)(v8 + 4) |= 1u;
          goto LABEL_23;
        }
        LOWORD(v17) = v85;
        v18 = v86;
        v12 = v87;
        v15 = v90;
        v16 = v91;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v96 + 28) != 256 || *(_DWORD *)(a3 + 28) != 256 )
      {
LABEL_44:
        v15 = (struct _TRANSLATE *)*((_QWORD *)v13 + 9);
        goto LABEL_15;
      }
      if ( (v14 & 0x100) != 0 )
      {
        v54 = *(_QWORD *)(v96 + 72);
        if ( !v54 )
        {
LABEL_109:
          v16 = (struct _TRANSLATE *)*((_QWORD *)v13 + 10);
          goto LABEL_44;
        }
        LODWORD(v55) = 256;
        while ( 1 )
        {
          v55 = (unsigned int)(v55 - 1);
          if ( *(unsigned __int8 *)(v55 + v54 + 4) != (_DWORD)v55 )
            break;
          if ( !(_DWORD)v55 )
            goto LABEL_73;
        }
      }
      else
      {
LABEL_73:
        LODWORD(v45) = 256;
        while ( 1 )
        {
          v45 = (unsigned int)(v45 - 1);
          if ( ((*(_DWORD *)(*(_QWORD *)(v96 + 120) + 4 * v45) ^ *(_DWORD *)(*(_QWORD *)(a3 + 120) + 4 * v45)) & 0xFFFFFF) != 0 )
            break;
          if ( !(_DWORD)v45 )
            goto LABEL_76;
        }
      }
      v18 = *(_DWORD *)(a3 + 24) & 0x800;
      goto LABEL_109;
    }
  }
  if ( !v15 )
  {
    v15 = (struct _TRANSLATE *)&defaultTranslate;
    v90 = (struct _TRANSLATE *)&defaultTranslate;
    v16 = (struct _TRANSLATE *)&defaultTranslate;
    v91 = (struct _TRANSLATE *)&defaultTranslate;
    v13 = ppalDefault;
    j = ppalDefault;
    *(_QWORD *)(v8 + 56) = ppalDefault;
  }
  v50 = (unsigned int *)(v8 + 80);
  v51 = 0;
  v52 = (_DWORD *)(v8 + 80);
  do
    *v52++ = v51++;
  while ( v51 < 0x100 );
  v53 = (_DWORD *)v96;
  if ( !v96 )
  {
    *(_DWORD *)(v8 + 4) |= 1u;
    goto LABEL_23;
  }
  v89 = *(_DWORD *)(v96 + 24);
  v67 = v89 & 0x8000;
  if ( (v89 & 0x8000) != 0 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v96, v13, v14) )
    {
      *(_DWORD *)(v8 + 4) |= 1u;
      goto LABEL_23;
    }
    v67 = v89 & 0x8000;
    v15 = v90;
    v16 = v91;
  }
  if ( v67 && a3 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v53, a3, v14) )
    {
      *(_DWORD *)(v8 + 4) |= 1u;
      goto LABEL_23;
    }
    v15 = v90;
    v16 = v91;
  }
  if ( (v89 & 0x800) != 0 )
  {
    if ( v16 == v15 )
    {
      *(_DWORD *)(v8 + 4) |= 1u;
    }
    else
    {
      v68 = 0;
      if ( *((_DWORD *)v13 + 7) )
      {
        do
        {
          v69 = v68++;
          *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v15 + v69 + 4) + 80) = *((unsigned __int8 *)v16 + v69 + 4);
        }
        while ( v68 < *((_DWORD *)v13 + 7) );
        v53 = (_DWORD *)v96;
      }
      v70 = v53[6];
      if ( (v70 & 0x1000) != 0 )
      {
        *v50 = 0;
        *(_DWORD *)(v8 + 1100) = 255;
      }
      else if ( (v70 & 0x10000) == 0 )
      {
        v71 = 0;
        v72 = (unsigned int *)(v8 + 1064);
        do
        {
          *v50 = v71;
          v73 = v71 + 246;
          ++v71;
          *v72++ = v73;
          ++v50;
        }
        while ( v71 < 0xA );
      }
    }
    goto LABEL_23;
  }
  if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
  {
    if ( v53[7] != 256 )
    {
      memset((void *)(v8 + 80), 0, 0x400uLL);
      v53 = (_DWORD *)v96;
    }
    v74 = 40LL;
    v75 = 0LL;
    v76 = 10LL;
    while ( 1 )
    {
      v50[v75] = XEPALOBJ::ulDispatchGFPEFunction(
                   (__int64 *)va,
                   (unsigned int)v53[24],
                   *(unsigned int *)(v75 * 4 + logDefaultPal + 4));
      *(_DWORD *)(v74 + v8 + 1024) = XEPALOBJ::ulDispatchGFPEFunction(
                                       (__int64 *)va,
                                       *(unsigned int *)(v96 + 96),
                                       *(unsigned int *)(v74 + logDefaultPal + 4));
      v74 += 4LL;
      ++v75;
      if ( !--v76 )
        break;
      v53 = (_DWORD *)v96;
    }
    v77 = v93;
    v10 = v94;
    v78 = j;
    if ( (v103 & 0x2000) != 0 )
    {
      v79 = 0;
      if ( *(_DWORD *)(v93 + 28) )
      {
        do
        {
          v80 = v79;
          v81 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va,
                  *(unsigned int *)(v96 + 96),
                  *(unsigned int *)(*(_QWORD *)(v77 + 120) + 4LL * v79++));
          *(_DWORD *)(v8 + 4 * v80 + 80) = v81;
        }
        while ( v79 < *(_DWORD *)(v77 + 28) );
      }
      *(_DWORD *)(v8 + 76) |= 0x2000u;
    }
    else if ( v90 )
    {
      v82 = 0;
      if ( *((_DWORD *)j + 7) )
      {
        do
        {
          v83 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va,
                  *(unsigned int *)(v96 + 96),
                  *(unsigned int *)(*((_QWORD *)v78 + 15) + 4LL * v82));
          v84 = *((unsigned __int8 *)v90 + v82++ + 4);
          *(_DWORD *)(v8 + 4 * v84 + 80) = v83;
        }
        while ( v82 < *((_DWORD *)v78 + 7) );
      }
    }
    goto LABEL_23;
  }
  v38 = 1024LL;
  v37 = (void *)(v8 + 80);
LABEL_66:
  memset(v37, 0, v38);
  v39 = v102;
  *(_DWORD *)(v8 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(a3, v98, (unsigned int)v102, 1LL) + 80) = 1;
  *(_DWORD *)(v8 + 4) |= 4u;
  *(_DWORD *)(v8 + 24) = v39;
LABEL_23:
  v20 = *(_DWORD *)(v8 + 4);
  if ( (v20 & 9) == 0 )
  {
    v21 = *(_DWORD *)(v8 + 12);
    if ( v21 )
    {
      v33 = *(_QWORD *)(v8 + 40);
      if ( !v33 || (v34 = *(_QWORD *)(v8 + 48)) == 0 || *(_DWORD *)(v33 + 28) == *(_DWORD *)(v34 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v8 + 16) + 4LL * v9) == v9 )
        {
          if ( ++v9 >= v21 )
            goto LABEL_37;
        }
      }
    }
    else
    {
      v22 = *(_QWORD *)(v8 + 40);
      v23 = *(_QWORD *)(v8 + 48);
      if ( v22 && v23 && !*(_DWORD *)(v23 + 28) )
      {
        v24 = *(_DWORD *)(v22 + 24);
        v25 = 65280;
        v26 = 16711680;
        if ( (v24 & 2) != 0 )
        {
          v32 = *(int **)(v22 + 120);
          v28 = *v32;
          v27 = v32[1];
          v29 = v32[2];
        }
        else
        {
          v27 = 65280;
          if ( (v24 & 4) != 0 )
          {
            v28 = 255;
            v29 = 16711680;
          }
          else
          {
            v28 = 16711680;
            v29 = 255;
          }
        }
        v30 = *(_DWORD *)(v23 + 24);
        if ( (v30 & 2) != 0 )
        {
          v36 = *(int **)(v23 + 120);
          v31 = *v36;
          v25 = v36[1];
          v26 = v36[2];
        }
        else if ( (v30 & 4) != 0 )
        {
          v31 = 255;
        }
        else
        {
          v31 = 16711680;
          v26 = 255;
        }
        if ( v28 == v31 && v27 == v25 && v29 == v26 )
LABEL_37:
          *(_DWORD *)(v8 + 4) = v20 | 1;
      }
    }
  }
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
    GreReleaseSemaphoreInternal(v10);
  }
  return v8;
}

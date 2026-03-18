/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C0086090 (GreDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C00F3980 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C00963D0 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C029B9EC (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02B69E4 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

__int64 CreateXlateObject(__int64 a1, int a2, __int64 a3, ...)
{
  unsigned int v6; // r13d
  __int64 result; // rax
  __int64 v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rdx
  struct PALETTE *v12; // r8
  __int64 v13; // r9
  BOOL v14; // edx
  struct PALETTE *v15; // r14
  struct _TRANSLATE *v16; // r10
  struct _TRANSLATE *v17; // r11
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rsi
  int v21; // r8d
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  int v26; // r10d
  int v27; // r9d
  int v28; // ebx
  int v29; // esi
  int v30; // r11d
  int v31; // ecx
  int v32; // eax
  int *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // esi
  int *v37; // rcx
  int v38; // esi
  int v39; // edx
  int v40; // ebx
  int NearestIndexFromColorref; // eax
  unsigned int v42; // esi
  __int64 v43; // r9
  unsigned int v44; // eax
  _DWORD *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned int *v48; // r13
  unsigned int v49; // eax
  _DWORD *v50; // rcx
  _DWORD *v51; // rsi
  __int64 v52; // r10
  __int64 v53; // r9
  unsigned int *v54; // rdx
  unsigned int v55; // eax
  _DWORD *v56; // rcx
  unsigned int j; // r8d
  __int64 v58; // rax
  int v59; // eax
  unsigned int v60; // ecx
  unsigned int *v61; // r8
  unsigned int v62; // eax
  __int64 v63; // rdx
  struct _TRANSLATE *v64; // rdx
  int v65; // eax
  unsigned int v66; // edx
  __int64 v67; // rax
  int v68; // eax
  unsigned int v69; // ecx
  unsigned int *v70; // rdx
  unsigned int v71; // eax
  int v72; // esi
  __int64 v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // rbx
  struct PALETTE *v78; // r14
  unsigned int v79; // r14d
  __int64 v80; // rsi
  int v81; // eax
  unsigned int v82; // esi
  int v83; // eax
  __int64 v84; // rcx
  BOOL v85; // [rsp+20h] [rbp-48h]
  int v86; // [rsp+20h] [rbp-48h]
  int v87; // [rsp+20h] [rbp-48h]
  struct _TRANSLATE *v88; // [rsp+28h] [rbp-40h]
  __int16 v89; // [rsp+30h] [rbp-38h]
  int v90; // [rsp+34h] [rbp-34h]
  struct PALETTE *i; // [rsp+38h] [rbp-30h] BYREF
  struct _TRANSLATE *v92; // [rsp+40h] [rbp-28h]
  __int64 v93; // [rsp+48h] [rbp-20h]
  __int64 v94; // [rsp+50h] [rbp-18h]
  __int64 v95; // [rsp+58h] [rbp-10h]
  unsigned int v96; // [rsp+B0h] [rbp+48h]
  __int64 v97; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  __int64 v99; // [rsp+C0h] [rbp+58h]
  __int64 v100; // [rsp+C8h] [rbp+60h]
  __int64 v101; // [rsp+D0h] [rbp+68h]
  __int64 v102; // [rsp+D8h] [rbp+70h]
  __int64 v103; // [rsp+E0h] [rbp+78h]
  __int64 v104; // [rsp+E8h] [rbp+80h]
  va_list va1; // [rsp+F0h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v97 = va_arg(va1, _QWORD);
  v99 = va_arg(va1, _QWORD);
  v100 = va_arg(va1, _QWORD);
  v101 = va_arg(va1, _QWORD);
  v102 = va_arg(va1, _QWORD);
  v103 = va_arg(va1, _QWORD);
  v104 = va_arg(va1, _QWORD);
  v93 = a3;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 28);
  else
    v6 = 256;
  result = AllocThreadBufferWithTag(4 * v6 + 88, 1953265735LL, 0LL);
  v95 = result;
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
        v46 = HmgShareLockCheck(a1, v11);
        if ( v46 )
        {
          *(_DWORD *)(v8 + 4) |= 0x10u;
          DEC_SHARE_REF_CNT(v46);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v47 = *(_DWORD *)(v8 + 4) | 0x20;
        *(_DWORD *)(v8 + 4) = v47;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            *(_DWORD *)(v8 + 4) = v47 | 8;
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
  v12 = ppalDefault;
  v13 = 1LL;
  v14 = (*(_DWORD *)(v8 + 4) & 8) != 0;
  v85 = v14;
  if ( !v97 || (*(_DWORD *)(v97 + 24) & 0x800) != 0 )
  {
    v15 = (struct PALETTE *)v100;
    v96 = 1;
    i = (struct PALETTE *)v100;
    if ( !*(_QWORD *)(v100 + 72) )
    {
      v15 = ppalDefault;
      i = ppalDefault;
    }
    if ( (v104 & 0x2000) == 0 )
    {
      *(_DWORD *)(v8 + 76) |= 0x800u;
      if ( v97 )
        *(_DWORD *)(v8 + 76) |= 0x1000u;
    }
  }
  else
  {
    v15 = (struct PALETTE *)v100;
    v13 = 0LL;
    i = (struct PALETTE *)v100;
    v96 = 0;
  }
  *(_QWORD *)(v8 + 40) = a3;
  *(_QWORD *)(v8 + 48) = v97;
  *(_QWORD *)(v8 + 56) = v15;
  v16 = (struct _TRANSLATE *)*((_QWORD *)v15 + 9);
  v17 = (struct _TRANSLATE *)*((_QWORD *)v15 + 10);
  v88 = v16;
  v92 = v17;
  if ( a3 )
  {
    v18 = *(_DWORD *)(a3 + 24);
    v19 = v18 & 0x800;
    v89 = v18;
    v90 = v19;
    if ( (v18 & 0x800) == 0 || v16 != v17 && (v104 & 0x4000) == 0 )
    {
      v20 = v97;
      if ( (v18 & 0x8000) == 0 )
        goto LABEL_16;
      if ( !v97 )
      {
LABEL_110:
        if ( (unsigned int)bEqualRGB_In_Palette(a3, v15, v12, v13) )
        {
LABEL_74:
          v44 = 0;
          v45 = (_DWORD *)(v8 + 80);
          do
            *v45++ = v44++;
          while ( v44 < 0x100 );
          *(_DWORD *)(v8 + 4) |= 1u;
          goto LABEL_22;
        }
        LOWORD(v18) = v89;
        v19 = v90;
        v14 = v85;
        LODWORD(v13) = v96;
        v16 = v88;
        v17 = v92;
LABEL_16:
        if ( !v19 || v20 )
        {
          if ( (v18 & 0x2000) != 0 )
          {
            if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
            {
              *(_DWORD *)(v8 + 80) = 0;
              *(_DWORD *)(v8 + 84) = 1;
            }
            else
            {
              v40 = v101;
              if ( v39 )
              {
                v42 = v102;
                *(_DWORD *)(v8 + 84) = v102;
                *(_DWORD *)(v8 + 80) = v40;
              }
              else
              {
                NearestIndexFromColorref = ulGetNearestIndexFromColorref(v20, v15, (unsigned int)v101, 1LL);
                v42 = v102;
                *(_DWORD *)(v8 + 80) = NearestIndexFromColorref;
                *(_DWORD *)(v8 + 84) = ulGetNearestIndexFromColorref(v97, v15, v42, 1LL);
              }
              *(_DWORD *)(v8 + 76) |= 0x100u;
              *(_DWORD *)(v8 + 28) = v40;
              *(_DWORD *)(v8 + 32) = v42;
            }
          }
          else if ( v6 )
          {
            if ( v20 && (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
            {
              memset((void *)(v8 + 80), 0, 4LL * v6);
              v38 = v103;
              *(_DWORD *)(v8 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(a3, v99, (unsigned int)v103, 1LL) + 80) = 1;
              *(_DWORD *)(v8 + 4) |= 4u;
              *(_DWORD *)(v8 + 24) = v38;
            }
            else if ( v14 )
            {
              v63 = 4LL * v6;
              do
              {
                v63 -= 4LL;
                *(_DWORD *)(v63 + v8 + 80) = *(_DWORD *)(v63 + *(_QWORD *)(a3 + 120));
                --v6;
              }
              while ( v6 );
            }
            else
            {
              if ( !(_DWORD)v13 || (v86 = v104 & 0x2000, (v104 & 0x2000) != 0) )
              {
                v15 = (struct PALETTE *)v20;
                v86 = v104 & 0x2000;
                if ( (v104 & 0x2000) != 0 )
                  *(_DWORD *)(v8 + 76) |= 0x2000u;
              }
              for ( i = v15; ; v15 = i )
              {
                --v6;
                *(_DWORD *)(v8 + 4LL * v6 + 80) = XEPALOBJ::ulDispatchGFPEFunction(
                                                    &i,
                                                    *((unsigned int *)v15 + 24),
                                                    *(unsigned int *)(*(_QWORD *)(a3 + 120) + 4LL * v6));
                if ( !v6 )
                  break;
              }
              if ( v96 && !v86 )
              {
                v64 = v88;
                if ( v97 )
                  v64 = v92;
                XLATE::vMapNewXlate((XLATE *)v8, v64);
              }
            }
          }
          else if ( v20 && (*(_DWORD *)(v20 + 24) & 0x2000) != 0 )
          {
            v36 = v103;
            *(_DWORD *)(v8 + 80) = ulGetNearestIndexFromColorref(a3, v99, (unsigned int)v103, 1LL);
            *(_DWORD *)(v8 + 4) |= 4u;
            *(_DWORD *)(v8 + 24) = v36;
            *(_QWORD *)(v8 + 16) = v8 + 80;
          }
        }
        else
        {
          v54 = (unsigned int *)(v8 + 80);
          v55 = 0;
          v56 = (_DWORD *)(v8 + 80);
          do
            *v56++ = v55++;
          while ( v55 < 0x100 );
          for ( j = 0;
                j < *((_DWORD *)v15 + 7);
                *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v17 + v58 + 4) + 80) = *((unsigned __int8 *)v16 + v58 + 4) )
          {
            v58 = j++;
          }
          v59 = *(_DWORD *)(a3 + 24);
          if ( (v59 & 0x1000) != 0 )
          {
            *v54 = 0;
            *(_DWORD *)(v8 + 1100) = 255;
          }
          else if ( (v59 & 0x10000) == 0 )
          {
            v60 = 0;
            v61 = (unsigned int *)(v8 + 1064);
            do
            {
              *v54 = v60;
              v62 = v60 + 246;
              ++v60;
              *v61++ = v62;
              ++v54;
            }
            while ( v60 < 0xA );
          }
        }
        goto LABEL_22;
      }
      v12 = (struct PALETTE *)*(unsigned int *)(v97 + 24);
      if ( ((unsigned __int16)v12 & 0x8000) == 0 )
      {
LABEL_15:
        if ( ((unsigned __int16)v12 & 0x800) == 0 || v16 != v17 )
          goto LABEL_16;
        goto LABEL_110;
      }
      if ( *(_DWORD *)(v97 + 28) != 256 || *(_DWORD *)(a3 + 28) != 256 )
      {
LABEL_43:
        v13 = v96;
        goto LABEL_15;
      }
      if ( ((unsigned __int16)v12 & 0x100) != 0 )
      {
        v52 = *(_QWORD *)(v97 + 72);
        if ( !v52 )
        {
LABEL_108:
          v16 = v88;
          goto LABEL_43;
        }
        LODWORD(v53) = 256;
        while ( 1 )
        {
          v53 = (unsigned int)(v53 - 1);
          if ( *(unsigned __int8 *)(v53 + v52 + 4) != (_DWORD)v53 )
            break;
          if ( !(_DWORD)v53 )
            goto LABEL_71;
        }
      }
      else
      {
LABEL_71:
        LODWORD(v43) = 256;
        while ( 1 )
        {
          v43 = (unsigned int)(v43 - 1);
          if ( ((*(_DWORD *)(*(_QWORD *)(v97 + 120) + 4 * v43) ^ *(_DWORD *)(*(_QWORD *)(a3 + 120) + 4 * v43)) & 0xFFFFFF) != 0 )
            break;
          if ( !(_DWORD)v43 )
            goto LABEL_74;
        }
        v17 = v92;
      }
      v19 = *(_DWORD *)(a3 + 24) & 0x800;
      goto LABEL_108;
    }
  }
  if ( !v16 )
  {
    v15 = ppalDefault;
    v16 = (struct _TRANSLATE *)&defaultTranslate;
    i = ppalDefault;
    v17 = (struct _TRANSLATE *)&defaultTranslate;
    *(_QWORD *)(v8 + 56) = ppalDefault;
    v88 = (struct _TRANSLATE *)&defaultTranslate;
    v92 = (struct _TRANSLATE *)&defaultTranslate;
  }
  v48 = (unsigned int *)(v8 + 80);
  v49 = 0;
  v50 = (_DWORD *)(v8 + 80);
  do
    *v50++ = v49++;
  while ( v49 < 0x100 );
  v51 = (_DWORD *)v97;
  if ( v97 )
  {
    v87 = *(_DWORD *)(v97 + 24);
    v65 = v87 & 0x8000;
    if ( (v87 & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v97, v15, ppalDefault, v13) )
      {
        *(_DWORD *)(v8 + 4) |= 1u;
        goto LABEL_22;
      }
      v65 = v87 & 0x8000;
      v16 = v88;
      v17 = v92;
    }
    if ( v65 && a3 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v51, a3, v12, v13) )
      {
        *(_DWORD *)(v8 + 4) |= 1u;
        goto LABEL_22;
      }
      v16 = v88;
      v17 = v92;
    }
    if ( (v87 & 0x800) != 0 )
    {
      if ( v17 == v16 )
      {
        *(_DWORD *)(v8 + 4) |= 1u;
      }
      else
      {
        v66 = 0;
        if ( *((_DWORD *)v15 + 7) )
        {
          do
          {
            v67 = v66++;
            *(_DWORD *)(v8 + 4LL * *((unsigned __int8 *)v16 + v67 + 4) + 80) = *((unsigned __int8 *)v17 + v67 + 4);
          }
          while ( v66 < *((_DWORD *)v15 + 7) );
          v51 = (_DWORD *)v97;
        }
        v68 = v51[6];
        if ( (v68 & 0x1000) != 0 )
        {
          *v48 = 0;
          *(_DWORD *)(v8 + 1100) = 255;
        }
        else if ( (v68 & 0x10000) == 0 )
        {
          v69 = 0;
          v70 = (unsigned int *)(v8 + 1064);
          do
          {
            *v48 = v69;
            v71 = v69 + 246;
            ++v69;
            *v70++ = v71;
            ++v48;
          }
          while ( v69 < 0xA );
        }
      }
    }
    else if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      memset((void *)(v8 + 80), 0, 0x400uLL);
      v72 = v103;
      *(_DWORD *)(v8 + 4LL * (unsigned int)ulGetNearestIndexFromColorref(a3, v99, (unsigned int)v103, 1LL) + 80) = 1;
      *(_DWORD *)(v8 + 4) |= 4u;
      *(_DWORD *)(v8 + 24) = v72;
    }
    else
    {
      if ( v51[7] != 256 )
      {
        memset((void *)(v8 + 80), 0, 0x400uLL);
        v51 = (_DWORD *)v97;
      }
      v73 = 40LL;
      v74 = 0LL;
      v75 = v8 + 1024;
      v76 = 10LL;
      while ( 1 )
      {
        v48[v74] = XEPALOBJ::ulDispatchGFPEFunction(
                     (__int64 *)va,
                     (unsigned int)v51[24],
                     *(unsigned int *)(v74 * 4 + logDefaultPal + 4));
        *(_DWORD *)(v75 + v73) = XEPALOBJ::ulDispatchGFPEFunction(
                                   (__int64 *)va,
                                   *(unsigned int *)(v97 + 96),
                                   *(unsigned int *)(v73 + logDefaultPal + 4));
        v73 += 4LL;
        ++v74;
        if ( !--v76 )
          break;
        v51 = (_DWORD *)v97;
      }
      v77 = v93;
      v10 = v94;
      v78 = i;
      v8 = v95;
      if ( (v104 & 0x2000) != 0 )
      {
        v79 = 0;
        if ( *(_DWORD *)(v93 + 28) )
        {
          do
          {
            v80 = v79;
            v81 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va,
                    *(unsigned int *)(v97 + 96),
                    *(unsigned int *)(*(_QWORD *)(v77 + 120) + 4LL * v79++));
            *(_DWORD *)(v8 + 4 * v80 + 80) = v81;
          }
          while ( v79 < *(_DWORD *)(v77 + 28) );
        }
        *(_DWORD *)(v8 + 76) |= 0x2000u;
      }
      else if ( v88 )
      {
        v82 = 0;
        if ( *((_DWORD *)i + 7) )
        {
          do
          {
            v83 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va,
                    *(unsigned int *)(v97 + 96),
                    *(unsigned int *)(*((_QWORD *)v78 + 15) + 4LL * v82));
            v84 = *((unsigned __int8 *)v88 + v82++ + 4);
            *(_DWORD *)(v8 + 4 * v84 + 80) = v83;
          }
          while ( v82 < *((_DWORD *)v78 + 7) );
        }
      }
    }
    goto LABEL_22;
  }
  *(_DWORD *)(v8 + 4) |= 1u;
LABEL_22:
  v21 = *(_DWORD *)(v8 + 4);
  if ( (v21 & 9) == 0 )
  {
    v22 = *(_DWORD *)(v8 + 12);
    if ( v22 )
    {
      v34 = *(_QWORD *)(v8 + 40);
      if ( !v34 || (v35 = *(_QWORD *)(v8 + 48)) == 0 || *(_DWORD *)(v34 + 28) == *(_DWORD *)(v35 + 28) )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v8 + 16) + 4LL * v9) == v9 )
        {
          if ( ++v9 >= v22 )
            goto LABEL_36;
        }
      }
    }
    else
    {
      v23 = *(_QWORD *)(v8 + 40);
      v24 = *(_QWORD *)(v8 + 48);
      if ( v23 && v24 && !*(_DWORD *)(v24 + 28) )
      {
        v25 = *(_DWORD *)(v23 + 24);
        v26 = 65280;
        v27 = 16711680;
        if ( (v25 & 2) != 0 )
        {
          v33 = *(int **)(v23 + 120);
          v29 = *v33;
          v28 = v33[1];
          v30 = v33[2];
        }
        else
        {
          v28 = 65280;
          if ( (v25 & 4) != 0 )
          {
            v29 = 255;
            v30 = 16711680;
          }
          else
          {
            v29 = 16711680;
            v30 = 255;
          }
        }
        v31 = *(_DWORD *)(v24 + 24);
        if ( (v31 & 2) != 0 )
        {
          v37 = *(int **)(v24 + 120);
          v32 = *v37;
          v26 = v37[1];
          v27 = v37[2];
        }
        else if ( (v31 & 4) != 0 )
        {
          v32 = 255;
        }
        else
        {
          v32 = 16711680;
          v27 = 255;
        }
        if ( v29 == v32 && v28 == v26 && v30 == v27 )
LABEL_36:
          *(_DWORD *)(v8 + 4) = v21 | 1;
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

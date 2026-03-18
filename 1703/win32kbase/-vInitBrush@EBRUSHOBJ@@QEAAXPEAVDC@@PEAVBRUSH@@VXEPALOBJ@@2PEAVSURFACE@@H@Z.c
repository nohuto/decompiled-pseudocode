/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50
 * Callers:
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     rgbFromColorref @ 0x1C002B6D0 (rgbFromColorref.c)
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C0059B80 (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C005A384 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005A6A0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00E81B0 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00FD960 (ulGetNearestIndexFromColorref.c)
 */

__int64 __fastcall EBRUSHOBJ::vInitBrush(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  void *v18; // r13
  unsigned int v19; // eax
  __int64 result; // rax
  int v21; // edx
  unsigned int v22; // r11d
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // r13d
  __int64 v26; // rdi
  volatile signed __int32 *v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int MatchingIndexFromColorref; // eax
  unsigned int v34; // r15d
  int v35; // edx
  volatile signed __int32 *v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // edi
  bool v41; // zf
  volatile signed __int32 *v42; // rcx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  _DWORD *v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int NearestIndexFromColorref; // eax
  unsigned int v49; // edi
  unsigned int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // [rsp+20h] [rbp-48h]
  unsigned int v54; // [rsp+80h] [rbp+18h]

  v7 = a5;
  if ( !a5 || (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v12 = *(_QWORD *)(a5 + 128);
    if ( v12 == a5 )
      v13 = *(_DWORD *)(a5 + 32);
    else
      v13 = *(_DWORD *)(v12 + 32);
  }
  *((_QWORD *)a1 + 10) = a6;
  v14 = *(_QWORD *)(a2 + 80);
  v15 = *(_DWORD *)(a2 + 112);
  v16 = *(_DWORD *)(v14 + 40);
  v17 = *(_DWORD *)(v14 + 32);
  v18 = *(void **)(v14 + 112);
  v52 = v16;
  v54 = v17;
  if ( *(_DWORD *)(a3 + 52) == a1[33]
    && ((v19 = a1[32], (v19 & 1) == 0) || a1[12] == v16)
    && ((v19 & 2) == 0 || a1[13] == v17) )
  {
    result = *(_QWORD *)(a4 + 128);
    if ( result == a4 )
      v21 = *(_DWORD *)(a4 + 32);
    else
      v21 = *(_DWORD *)(result + 32);
    v22 = a7;
    if ( (struct BRUSH *)a3 != gpbrDCBrush
      && v21 == a1[11]
      && v13 == a1[10]
      && (struct BRUSH *)a3 != gpbrDCPen
      && a1[18] == v15
      && *((void **)a1 + 8) == v18
      && a7 == a1[34] )
    {
      return result;
    }
  }
  else
  {
    v22 = a7;
  }
  a1[32] = *(_DWORD *)(a3 + 48);
  *((_QWORD *)a1 + 15) = a3;
  a1[33] = *(_DWORD *)(a3 + 52);
  a1[12] = v16;
  a1[13] = v17;
  v23 = *(_QWORD *)(a4 + 128);
  if ( v23 == a4 )
    v24 = *(_DWORD *)(a4 + 32);
  else
    v24 = *(_DWORD *)(v23 + 32);
  a1[4] = 0;
  a1[11] = v24;
  a1[10] = v13;
  a1[34] = v22;
  if ( (v15 & 7) == 0 )
    goto LABEL_22;
  v39 = a1[32];
  if ( (v39 & 0x20030) == 0 )
  {
    if ( (v39 & 0x80u) == 0 )
      goto LABEL_22;
    v40 = v15 & 1;
    if ( (v15 & 1) == 0 || !v18 )
      goto LABEL_94;
    v41 = BRUSH::hFindIcmDIB((BRUSH *)a3, v18) == 0LL;
    goto LABEL_93;
  }
  v40 = v15 & 1;
  if ( (v15 & 1) == 0
    || (v39 & 0x20010) != 0 && ((v39 & 3) != 0 || (struct BRUSH *)a3 == gpbrDCBrush || (struct BRUSH *)a3 == gpbrDCPen) )
  {
    goto LABEL_94;
  }
  if ( (*(_DWORD *)(a3 + 48) & 0x400) == 0 )
  {
    if ( !v18 )
      goto LABEL_94;
    v41 = (*(_DWORD *)(*(_QWORD *)(a2 + 80) + 8LL) & 0x40000) == 0;
LABEL_93:
    if ( !v41 )
      goto LABEL_94;
LABEL_22:
    a1[18] = 0;
    *((_QWORD *)a1 + 8) = 0LL;
    v25 = 0;
    goto LABEL_23;
  }
  if ( v18 )
  {
    v41 = (*(_DWORD *)(*(_QWORD *)(a2 + 80) + 8LL) & 0x80000) == 0;
    goto LABEL_93;
  }
LABEL_94:
  a1[18] = v15;
  *((_QWORD *)a1 + 8) = v18;
  if ( (v15 & 5) != 0 )
  {
    a1[4] |= 2u;
  }
  else if ( (v15 & 2) != 0 )
  {
    a1[4] |= 1u;
  }
  if ( v40 && v18 && (v15 & 0x10000000) != 0 && (a1[32] & 0x10) != 0 )
  {
    a1[4] |= 4u;
    v25 = 1;
  }
  else
  {
    v25 = 0;
  }
LABEL_23:
  v26 = *(_QWORD *)(a6 + 48);
  if ( !v26 )
    v26 = *(_QWORD *)(a2 + 48);
  v27 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 12) = a4;
  *((_QWORD *)a1 + 11) = v7;
  *((_QWORD *)a1 + 13) = *(_QWORD *)(v26 + 1824);
  a1[28] = *(_DWORD *)(v26 + 2124);
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v27, 1LL);
    *((_QWORD *)a1 + 4) = 0LL;
    v7 = a5;
  }
  v28 = *((_QWORD *)a1 + 1);
  if ( v28 )
  {
    v42 = (volatile signed __int32 *)(v28 - 16);
    if ( _InterlockedExchangeAdd(v42, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v42, 0LL);
    *((_QWORD *)a1 + 1) = 0LL;
    v7 = a5;
  }
  v29 = a1[32];
  v30 = v29 & 0x10;
  if ( (v29 & 0x10) != 0 )
  {
    if ( (v29 & 1) != 0 )
    {
      a1[6] = a1[12];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_43;
      v43 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 44LL);
    }
    else if ( (v29 & 2) != 0 )
    {
      a1[6] = a1[13];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_43;
      v43 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 36LL);
    }
    else if ( (struct BRUSH *)a3 == gpbrDCBrush )
    {
      v37 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 48LL);
      if ( (v37 & 1) == 0 )
        goto LABEL_43;
      v43 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 52LL);
    }
    else
    {
      if ( (struct BRUSH *)a3 != gpbrDCPen )
        goto LABEL_32;
      v44 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
      if ( (v44 & 1) == 0 )
        goto LABEL_43;
      v43 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 60LL);
    }
    a1[35] = v43;
    goto LABEL_43;
  }
  if ( (v29 & 0x20) == 0 )
    goto LABEL_43;
LABEL_32:
  v31 = a1[18];
  v32 = *(_DWORD *)(a3 + 84);
  a1[6] = v32;
  if ( (v31 & 1) != 0 )
  {
    a1[35] = v32;
    v45 = *(_DWORD **)(a2 + 80);
    if ( (*(_DWORD *)(a3 + 48) & 0x400) != 0 )
    {
      if ( (v45[2] & 0x80000) == 0 )
        goto LABEL_43;
      v46 = v45[35];
    }
    else
    {
      if ( (v45[2] & 0x40000) == 0 )
        goto LABEL_43;
      v46 = v45[34];
    }
    a1[6] = v46;
  }
LABEL_43:
  result = *(unsigned int *)(a3 + 108);
  if ( (_DWORD)result == -1
    || (v35 = *(_DWORD *)(a3 + 48), (v35 & 1) != 0) && (_DWORD)result != v52
    || (v35 & 2) != 0 && (result = v54, *(_DWORD *)(a3 + 112) != v54)
    || (result = a1[11], *(_DWORD *)(a3 + 116) != (_DWORD)result)
    || (result = a1[10], *(_DWORD *)(a3 + 120) != (_DWORD)result)
    || *(_QWORD *)(a3 + 136) != v26
    || (struct BRUSH *)a3 == gpbrDCBrush
    || (struct BRUSH *)a3 == gpbrDCPen )
  {
    if ( !v30 )
    {
      a1[7] = -1;
      *a1 = -1;
      return result;
    }
    if ( v25 )
    {
      v34 = a1[6];
      a1[7] = v34;
      *a1 = v34;
    }
    else
    {
      if ( (*(_DWORD *)(v26 + 1840) & 0x800000) != 0 )
      {
        v47 = a7;
        if ( a7 )
        {
          v34 = a1[6];
          a1[7] = v34;
          *a1 = -1;
          goto LABEL_124;
        }
      }
      MatchingIndexFromColorref = ulGetMatchingIndexFromColorref(v7, a4, a1[6]);
      v34 = a1[6];
      *a1 = MatchingIndexFromColorref;
      result = rgbFromColorref(v7, a4, v34);
      a1[7] = result;
    }
    if ( *a1 != -1 || v25 )
    {
LABEL_40:
      if ( !*(_DWORD *)(a3 + 104) && !_InterlockedExchange((volatile __int32 *)(a3 + 104), 1) )
      {
        *(_DWORD *)(a3 + 112) = a1[13];
        *(_DWORD *)(a3 + 116) = a1[11];
        *(_DWORD *)(a3 + 120) = a1[10];
        *(_QWORD *)(a3 + 128) = *a1;
        v38 = a1[7];
        *(_DWORD *)(a3 + 48) |= 0x80000000;
        *(_DWORD *)(a3 + 144) = v38;
        return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 108), a1[12]);
      }
      return result;
    }
    v47 = a7;
LABEL_124:
    if ( ((a1[32] & 4) != 0 || (*(_DWORD *)(v26 + 1840) & 0x800000) != 0) && v47 )
    {
      if ( (!v7 || v7 == *(_QWORD *)(v26 + 1824)) && (result = *(unsigned int *)(v26 + 1840), (result & 0x20) != 0)
        || (result = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a5), (_DWORD)result) && (*(_DWORD *)(v26 + 1840) & 0x400) != 0 )
      {
        a1[7] = v34;
        return result;
      }
    }
    if ( *(_DWORD *)(a6 + 96) == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v7, a4, v54, 0LL);
      *a1 = NearestIndexFromColorref;
      v49 = NearestIndexFromColorref;
      result = rgbFromColorref(v7, a4, v54);
      a1[7] = result;
      if ( v54 != a1[6] )
      {
        *a1 = 1 - v49;
        result = *(_QWORD *)(v7 + 120);
        a1[7] = *(_DWORD *)(result + 4LL * (1 - v49));
      }
    }
    else
    {
      v50 = ulGetNearestIndexFromColorref(v7, a4, v34, 0LL);
      v51 = a1[6];
      *a1 = v50;
      result = rgbFromColorref(v7, a4, v51);
      a1[7] = result;
    }
    goto LABEL_40;
  }
  if ( v35 < 0 )
  {
    *a1 = *(_DWORD *)(a3 + 128);
  }
  else
  {
    v36 = *(volatile signed __int32 **)(a3 + 128);
    if ( (v35 & 0x40000000) != 0 )
      *((_QWORD *)a1 + 4) = v36;
    else
      *((_QWORD *)a1 + 1) = v36 + 4;
    _InterlockedAdd(v36, 1u);
    *a1 = -1;
  }
  result = *(unsigned int *)(a3 + 144);
  a1[7] = result;
  return result;
}

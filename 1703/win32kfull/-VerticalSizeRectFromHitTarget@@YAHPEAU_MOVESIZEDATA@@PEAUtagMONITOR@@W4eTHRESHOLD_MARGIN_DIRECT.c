/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01F17B4
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01F03C8 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01F1200 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F099C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // r13d
  __int64 v7; // r10
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rax
  __int128 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // esi
  int v18; // r14d
  bool v19; // cc
  __int64 v20; // rdi
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r9
  int v32; // r8d
  __int64 v33; // rax
  __int128 *v34; // rax
  __int64 v35; // rax
  int v36; // r14d
  int v37; // eax
  int v38; // r12d
  int v39; // edx
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // r9
  int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int128 *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r9
  int v53; // r8d
  __int64 v54; // rax
  __int128 *v55; // rax
  __int64 v56; // rax
  int v57; // esi
  int v58; // eax
  int v59; // r12d
  int v60; // eax
  int v61; // esi
  int v62; // eax
  int v64; // [rsp+20h] [rbp-40h] BYREF
  int v65; // [rsp+24h] [rbp-3Ch]
  __int128 v66; // [rsp+28h] [rbp-38h]
  __int64 v67; // [rsp+38h] [rbp-28h] BYREF
  __int64 v68; // [rsp+40h] [rbp-20h] BYREF
  __int128 v69; // [rsp+48h] [rbp-18h] BYREF

  v67 = 0LL;
  v5 = 0;
  v68 = a2;
  v7 = a2;
  v9 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF;
  if ( !v10
    && (v11 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
  {
    v12 = (__int128 *)(*(_QWORD *)(v7 + 40) + 92LL);
  }
  else if ( v10 == 1
         && (v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    v12 = (__int128 *)(*(_QWORD *)(v7 + 40) + 108LL);
  }
  else
  {
    v12 = (__int128 *)(*(_QWORD *)(v7 + 40) + 76LL);
  }
  v66 = *v12;
  if ( a4 )
  {
    if ( !v10
      && (v14 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 52LL) & 1) != 0 )
    {
      v15 = *(_QWORD *)(a4 + 40) + 92LL;
    }
    else if ( v10 == 1
           && (v16 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) != 0 )
    {
      v15 = *(_QWORD *)(a4 + 40) + 108LL;
    }
    else
    {
      v15 = *(_QWORD *)(a4 + 40) + 76LL;
    }
    v17 = HIDWORD(v66);
    v18 = DWORD1(v66);
    if ( *(_DWORD *)(v15 + 12) > SHIDWORD(v66) )
      v17 = *(_DWORD *)(v15 + 12);
    v19 = *(_DWORD *)(v15 + 4) < SDWORD1(v66);
    HIDWORD(v66) = v17;
    if ( v19 )
      v18 = *(_DWORD *)(v15 + 4);
    DWORD1(v66) = v18;
  }
  else
  {
    v17 = HIDWORD(v66);
    v18 = DWORD1(v66);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v5;
    v20 = *(_QWORD *)(a1 + 216);
    while ( 1 )
    {
      v21 = *(_QWORD *)a1;
      v22 = *(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF;
      if ( !v22
        && (v23 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 52LL) & 1) != 0 )
      {
        v24 = *(_QWORD *)(v20 + 40);
        v25 = v24 + 92;
      }
      else if ( v22 == 1
             && (v26 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) != 0 )
      {
        v24 = *(_QWORD *)(v20 + 40);
        v25 = v24 + 108;
      }
      else
      {
        v24 = *(_QWORD *)(v20 + 40);
        v25 = v24 + 76;
      }
      if ( v22 == 2 || v20 == v7 )
      {
        if ( !v22
          && (v27 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 52LL) & 1) != 0 )
        {
          v28 = (__int128 *)(v24 + 92);
        }
        else if ( v22 == 1
               && (v29 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 52LL) & 1) != 0 )
        {
          v28 = (__int128 *)(v24 + 108);
        }
        else
        {
          v28 = (__int128 *)(v24 + 76);
        }
        v69 = *v28;
      }
      else
      {
        v69 = *(_OWORD *)(v24 + 76);
        PhysicalToLogicalDPIRect(&v69, &v69, 0LL, &v68);
      }
      if ( IsDockTargetActive(a1, v20, 0) && (int)v69 <= a5 && a5 < SDWORD2(v69) )
        break;
      v30 = *(_QWORD *)(v20 + 456);
      if ( v30 == gpDispInfo + 160LL )
        v30 = *(_QWORD *)(gpDispInfo + 160LL);
      v20 = v30 - 456;
      if ( v20 == *(_QWORD *)(a1 + 216) )
        return v5;
    }
    v31 = *(_QWORD *)a1;
    v5 = 1;
    v67 = v20;
    v32 = *(_DWORD *)(v31 + 368) & 0xF;
    if ( v32 == 2 || *(_WORD *)(*(_QWORD *)(v20 + 40) + 128LL) == *(_WORD *)(*(_QWORD *)(v7 + 40) + 128LL) )
    {
      v36 = *(_DWORD *)(v25 + 4);
      DWORD1(v66) = v36;
    }
    else
    {
      v67 = v7;
      v20 = v7;
      v32 = *(_DWORD *)(v31 + 368) & 0xF;
      if ( !v32
        && (v33 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 52LL) & 1) != 0 )
      {
        v34 = (__int128 *)(*(_QWORD *)(v7 + 40) + 92LL);
      }
      else if ( v32 == 1
             && (v35 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v35 + 8) + 52LL) & 1) != 0 )
      {
        v34 = (__int128 *)(*(_QWORD *)(v7 + 40) + 108LL);
      }
      else
      {
        v34 = (__int128 *)(*(_QWORD *)(v7 + 40) + 76LL);
      }
      v66 = *v34;
      v17 = HIDWORD(v66);
      v36 = DWORD1(v66);
    }
    v37 = *(_DWORD *)(a1 + 24);
    v38 = *(_DWORD *)(a1 + 32);
    LODWORD(v66) = v37;
    DWORD2(v66) = v38;
    if ( v32 != 2 && v20 != *(_QWORD *)(a1 + 192) )
    {
      v65 = 0;
      v64 = v37;
      LogicalToPhysicalDPIPoint(&v64, &v64, 0LL, a1 + 192);
      PhysicalToLogicalDPIPoint(&v64, &v64, 0LL, &v67);
      LODWORD(v66) = (__int16)v64;
      v64 = v38;
      LogicalToPhysicalDPIPoint(&v64, &v64, 0LL, a1 + 192);
      PhysicalToLogicalDPIPoint(&v64, &v64, 0LL, &v67);
      DWORD2(v66) = (__int16)v64;
    }
    v39 = *(_DWORD *)(a1 + 92);
    if ( v17 - v36 < v39 )
      DWORD1(v66) = v17 - v39;
    v40 = *(_DWORD *)(a1 + 100);
    if ( v17 - v36 >= v40 )
      DWORD1(v66) = v17 - v40;
  }
  else
  {
    v41 = *(_QWORD *)(a1 + 216);
    while ( 1 )
    {
      v42 = *(_QWORD *)a1;
      v43 = *(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF;
      if ( !v43
        && (v44 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v44 + 8) + 52LL) & 1) != 0 )
      {
        v45 = *(_QWORD *)(v41 + 40);
        v46 = v45 + 92;
      }
      else if ( v43 == 1
             && (v47 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 52LL) & 1) != 0 )
      {
        v45 = *(_QWORD *)(v41 + 40);
        v46 = v45 + 108;
      }
      else
      {
        v45 = *(_QWORD *)(v41 + 40);
        v46 = v45 + 76;
      }
      if ( v43 == 2 || v41 == v7 )
      {
        if ( !v43
          && (v48 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v48 + 8) + 52LL) & 1) != 0 )
        {
          v49 = (__int128 *)(v45 + 92);
        }
        else if ( v43 == 1
               && (v50 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v50 + 8) + 52LL) & 1) != 0 )
        {
          v49 = (__int128 *)(v45 + 108);
        }
        else
        {
          v49 = (__int128 *)(v45 + 76);
        }
        v69 = *v49;
      }
      else
      {
        v69 = *(_OWORD *)(v45 + 76);
        PhysicalToLogicalDPIRect(&v69, &v69, 0LL, &v68);
      }
      if ( IsDockTargetActive(a1, v41, 3) && (int)v69 <= a5 && a5 < SDWORD2(v69) )
        break;
      v51 = *(_QWORD *)(v41 + 456);
      if ( v51 == gpDispInfo + 160LL )
        v51 = *(_QWORD *)(gpDispInfo + 160LL);
      v41 = v51 - 456;
      if ( v41 == *(_QWORD *)(a1 + 216) )
        return v5;
    }
    v52 = *(_QWORD *)a1;
    v5 = 1;
    v67 = v41;
    v53 = *(_DWORD *)(v52 + 368) & 0xF;
    if ( v53 == 2 || *(_WORD *)(*(_QWORD *)(v41 + 40) + 128LL) == *(_WORD *)(*(_QWORD *)(v7 + 40) + 128LL) )
    {
      v57 = *(_DWORD *)(v46 + 12);
      HIDWORD(v66) = v57;
    }
    else
    {
      v67 = v7;
      v41 = v7;
      v53 = *(_DWORD *)(v52 + 368) & 0xF;
      if ( !v53
        && (v54 = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v54 + 8) + 52LL) & 1) != 0 )
      {
        v55 = (__int128 *)(*(_QWORD *)(v7 + 40) + 92LL);
      }
      else if ( v53 == 1
             && (v56 = *(_QWORD *)(*(_QWORD *)(v52 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v56 + 8) + 52LL) & 1) != 0 )
      {
        v55 = (__int128 *)(*(_QWORD *)(v7 + 40) + 108LL);
      }
      else
      {
        v55 = (__int128 *)(*(_QWORD *)(v7 + 40) + 76LL);
      }
      v66 = *v55;
      v57 = HIDWORD(v66);
      v18 = DWORD1(v66);
    }
    v58 = *(_DWORD *)(a1 + 24);
    v59 = *(_DWORD *)(a1 + 32);
    LODWORD(v66) = v58;
    DWORD2(v66) = v59;
    if ( v53 != 2 && v41 != *(_QWORD *)(a1 + 192) )
    {
      v65 = 0;
      v64 = v58;
      LogicalToPhysicalDPIPoint(&v64, &v64, 0LL, a1 + 192);
      PhysicalToLogicalDPIPoint(&v64, &v64, 0LL, &v67);
      LODWORD(v66) = (__int16)v64;
      v64 = v59;
      LogicalToPhysicalDPIPoint(&v64, &v64, 0LL, a1 + 192);
      PhysicalToLogicalDPIPoint(&v64, &v64, 0LL, &v67);
      DWORD2(v66) = (__int16)v64;
    }
    v60 = *(_DWORD *)(a1 + 92);
    v61 = v57 - v18;
    if ( v61 < v60 )
      HIDWORD(v66) = v18 + v60;
    v62 = *(_DWORD *)(a1 + 100);
    if ( v61 >= v62 )
      HIDWORD(v66) = v18 + v62;
  }
  if ( (*(_DWORD *)(a1 + 180) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 56) = v66;
  else
    *(_OWORD *)(a1 + 24) = v66;
  return v5;
}

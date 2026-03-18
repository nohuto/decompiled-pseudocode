/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8
 * Callers:
 *     xxxArrangeWindow @ 0x1C01F62C4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F099C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01F0EF0 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01F1040 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F43E4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01F7344 (xxxEvaluateDestRectForMonitorMigration.c)
 */

__int64 __fastcall xxxApplyArrangeAction(__int64 a1, int a2, int a3, int a4, struct _MOVESIZEDATA *a5)
{
  __int64 v5; // r13
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rax
  _DWORD *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  _OWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // r9
  __int16 v42; // r10
  __int64 v43; // r14
  __int64 v44; // rax
  __int16 *v45; // rdx
  __int16 *v46; // rax
  __int64 v47; // rax
  __int16 v48; // r14
  int v49; // ecx
  unsigned int v50; // edx
  int v51; // r8d
  int v52; // esi
  __int64 *v54; // [rsp+20h] [rbp-50h]
  _DWORD v55[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v56; // [rsp+38h] [rbp-38h] BYREF
  __int64 v57; // [rsp+40h] [rbp-30h] BYREF
  __int64 v58; // [rsp+48h] [rbp-28h]
  __int64 v59[2]; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0LL;
  v55[0] = a4;
  v59[0] = 0LL;
  v59[1] = 0LL;
  v8 = 1;
  if ( !a5 || (v9 = 1, (*((_DWORD *)a5 + 66) & 8) == 0) )
    v9 = 0;
  if ( !a3 )
  {
    v52 = 2;
    v54 = v59;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v52 = 6;
    v50 = 3;
    v51 = v52 | 0x10;
    return xxxMinMaximizeEx((struct tagWND *)a1, v50, v51, 0LL, (struct tagRECT *)v54) != 0;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    v54 = 0LL;
    v49 = 0;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v49 = 4;
    v50 = 6;
    v51 = v49 | gdwPUDFlags & 0x10000;
    return xxxMinMaximizeEx((struct tagWND *)a1, v50, v51, 0LL, (struct tagRECT *)v54) != 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    xxxSysCommand((struct tagWND *)a1, 61730, 0LL);
    return v8;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v56 = 0LL;
    if ( a2 == 4 )
    {
      *((_DWORD *)a5 + 56) = 4;
      UpdateCheckpoint(a1);
    }
    v35 = *((_QWORD *)a5 + 27);
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)a5 + 368LL) & 0xF) == 2 || v35 == *((_QWORD *)a5 + 24) )
      {
        if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
          && (v36 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 52LL) & 1) != 0 )
        {
          v37 = (_OWORD *)(*(_QWORD *)(v35 + 40) + 92LL);
        }
        else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
               && (v38 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 52LL) & 1) != 0 )
        {
          v37 = (_OWORD *)(*(_QWORD *)(v35 + 40) + 108LL);
        }
        else
        {
          v37 = (_OWORD *)(*(_QWORD *)(v35 + 40) + 76LL);
        }
        *(_OWORD *)v59 = *v37;
      }
      else
      {
        *(_OWORD *)v59 = *(_OWORD *)(*(_QWORD *)(v35 + 40) + 76LL);
        PhysicalToLogicalDPIRect(v59, v59, 0LL, (char *)a5 + 192);
      }
      if ( IsDockTargetActive((__int64)a5, v35, 0) && SLODWORD(v59[0]) <= SLOWORD(v55[0]) )
      {
        if ( SLOWORD(v55[0]) <= SLODWORD(v59[1]) )
          v40 = v35;
        v56 = v40;
      }
      if ( IsDockTargetActive((__int64)a5, v39, 3) && SLODWORD(v59[0]) <= v42 && v42 <= SLODWORD(v59[1]) )
        v5 = v35;
      v43 = *(_QWORD *)(v35 + 456);
      if ( v43 == gpDispInfo + 160LL )
        v43 = *(_QWORD *)(gpDispInfo + 160LL);
      v35 = v43 - 456;
    }
    while ( v35 != *((_QWORD *)a5 + 27) );
    if ( !v5 || !v41 )
      return 0;
    if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
      && (v44 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v44 + 8) + 52LL) & 1) != 0 )
    {
      v45 = *(__int16 **)(v41 + 40);
      v46 = v45 + 48;
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
           && (v47 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 52LL) & 1) != 0 )
    {
      v45 = *(__int16 **)(v41 + 40);
      v46 = v45 + 56;
    }
    else
    {
      v45 = *(__int16 **)(v41 + 40);
      v46 = v45 + 40;
    }
    v48 = *v46;
    if ( (*(_DWORD *)(*(_QWORD *)a5 + 368LL) & 0xF) != 2 && *(_WORD *)(*(_QWORD *)(v5 + 40) + 128LL) != v45[64] )
    {
      v55[1] = 0;
      v5 = v41;
      v55[0] = v42;
      LogicalToPhysicalDPIPoint(v55, v55, 0LL, (char *)a5 + 192);
      PhysicalToLogicalDPIPoint(v55, v55, 0LL, &v56);
      v42 = v55[0];
    }
    SizeRect(
      a5,
      (unsigned __int16)(v42 + *((_WORD *)a5 + 76)) | ((unsigned __int16)(v48 + *((_WORD *)a5 + 78)) << 16),
      (struct tagMONITOR *)v5,
      0LL);
    goto LABEL_108;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v28 = *((_QWORD *)a5 + 27);
    v31 = 1LL;
    if ( a2 == 2 && !v9 )
    {
      v32 = *(_QWORD *)(v28 + 464);
      if ( v32 == gpDispInfo + 160LL )
        v32 = *(_QWORD *)(gpDispInfo + 168LL);
      v31 = 2LL;
      v28 = v32 - 456;
    }
    v57 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v57;
    v58 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    goto LABEL_64;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v28 = *((_QWORD *)a5 + 27);
    v29 = 2;
    if ( a2 == 3 && !v9 )
    {
      v30 = *(_QWORD *)(v28 + 456);
      if ( v30 == gpDispInfo + 160LL )
        v30 = *(_QWORD *)(gpDispInfo + 160LL);
      v29 = 1;
      v28 = v30 - 456;
    }
    v57 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v57;
    v58 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    v31 = v29;
LABEL_64:
    v8 = xxxProgrammaticSemiMaximize(a5, v28, v31);
    ThreadUnlock1(v34, v33);
    return v8;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v16 = *((_QWORD *)a5 + 27);
      v17 = *(_QWORD *)(v16 + 464);
      if ( v17 == gpDispInfo + 160LL )
        v17 = *(_QWORD *)(gpDispInfo + 168LL);
      v18 = v17 - 456;
      if ( v18 != v16 )
      {
        while ( a2 )
        {
          v57 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v57;
          v58 = v18;
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(a2, (_DWORD)a5, a1, v18, 0) )
            goto LABEL_34;
          v21 = *(_QWORD *)(v18 + 464);
          ThreadUnlock1(v20, v19);
          if ( v21 == gpDispInfo + 160LL )
            v21 = *(_QWORD *)(gpDispInfo + 168LL);
          v18 = v21 - 456;
          if ( v18 == *((_QWORD *)a5 + 27) )
            return 0;
        }
LABEL_48:
        SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v18, 1);
LABEL_108:
        *(_OWORD *)((char *)a5 + 8) = *(_OWORD *)((char *)a5 + 24);
        xxxCommitMoveSize((struct tagWND *)a1, a5);
        return v8;
      }
    }
  }
  else
  {
    v22 = *((_QWORD *)a5 + 27);
    v23 = *(_QWORD *)(v22 + 456);
    if ( v23 == gpDispInfo + 160LL )
      v23 = *(_QWORD *)(gpDispInfo + 160LL);
    v18 = v23 - 456;
    if ( v18 != v22 )
    {
      while ( a2 )
      {
        v57 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v57;
        v58 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(a2, (_DWORD)a5, a1, v18, 0) )
        {
LABEL_34:
          if ( a2 == 1 )
          {
            *((_DWORD *)a5 + 40) = 3;
            SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v18, 1);
            if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
              && (v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
              && (v20 = **(_QWORD **)(v25 + 8), (*(_DWORD *)(v20 + 52) & 1) != 0) )
            {
              v26 = (_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL);
            }
            else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
                   && (v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
                   && (v20 = **(_QWORD **)(v27 + 8), (*(_DWORD *)(v20 + 52) & 1) != 0) )
            {
              v26 = (_DWORD *)(*(_QWORD *)(v18 + 40) + 108LL);
            }
            else
            {
              v26 = (_DWORD *)(*(_QWORD *)(v18 + 40) + 76LL);
            }
            v19 = (unsigned int)((v26[2] - *v26) >> 31);
            *((_DWORD *)a5 + 71) = *v26 + (v26[2] - *v26) / 2;
            *((_DWORD *)a5 + 71) = v26[1];
          }
          else if ( (unsigned int)(a2 - 2) <= 1 )
          {
            SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v18, 1);
          }
          ThreadUnlock1(v20, v19);
          goto LABEL_108;
        }
        v24 = *(_QWORD *)(v18 + 456);
        ThreadUnlock1(v20, v19);
        if ( v24 == gpDispInfo + 160LL )
          v24 = *(_QWORD *)(gpDispInfo + 160LL);
        v18 = v24 - 456;
        if ( v18 == *((_QWORD *)a5 + 27) )
          return 0;
      }
      goto LABEL_48;
    }
  }
  return 0;
}

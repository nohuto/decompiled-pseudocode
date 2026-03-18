/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0
 * Callers:
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     UpdateCheckpoint @ 0x1C004B848 (UpdateCheckpoint.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01D86B4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01D8C34 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01D8D68 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DB798 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01DE61C (xxxEvaluateDestRectForMonitorMigration.c)
 */

__int64 __fastcall xxxApplyArrangeAction(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _MOVESIZEDATA *a5)
{
  int v5; // r14d
  unsigned int v7; // esi
  int v8; // ecx
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  struct tagMONITOR **v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned int v29; // r12d
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r15d
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  struct tagMONITOR *v40; // rsi
  __int64 v41; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v43; // rdx
  __int16 v44; // r14
  __int64 v45; // r9
  __int64 v46; // rbx
  bool v47; // zf
  struct tagMONITOR *v48; // r15
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // ebx
  int v53; // ecx
  int v54; // r12d
  __int64 ThreadWin32Thread; // rax
  _DWORD v57[2]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v58; // [rsp+38h] [rbp-69h] BYREF
  __int64 v59; // [rsp+40h] [rbp-61h] BYREF
  __int64 v60; // [rsp+48h] [rbp-59h]
  struct tagMONITOR *v61; // [rsp+58h] [rbp-49h] BYREF
  __int128 v62; // [rsp+68h] [rbp-39h] BYREF
  char v63; // [rsp+78h] [rbp-29h] BYREF
  __int128 v64; // [rsp+88h] [rbp-19h] BYREF
  __int128 v65; // [rsp+98h] [rbp-9h] BYREF
  __int128 v66; // [rsp+A8h] [rbp+7h] BYREF

  v57[0] = a4;
  v62 = 0uLL;
  v5 = a2;
  v7 = 1;
  if ( !a5 || (v8 = 1, (*((_DWORD *)a5 + 70) & 8) == 0) )
    v8 = 0;
  if ( !(_DWORD)a3 )
  {
    v54 = 2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v54 = 6;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v59 = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = &v59;
    v60 = 0LL;
    v7 = xxxMinMaximizeEx(a1, 3u, v54 | 0x10u, 0LL, &v62) != 0;
    goto LABEL_94;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    v53 = 0;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v53 = 4;
    return xxxMinMaximizeEx(a1, 6u, v53 | gdwPUDFlags & 0x10000u, 0LL, 0LL) != 0;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    xxxSysCommand((__int64)a1, 61730, 0LL);
    return v7;
  }
  v11 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v11 )
  {
    v38 = 4LL;
    v58 = 0LL;
    v61 = 0LL;
    if ( v5 == 4 )
    {
      *((_DWORD *)a5 + 60) = 4;
      UpdateCheckpoint((__int64)a1);
    }
    v39 = *((_QWORD *)a5 + 29);
    v40 = v61;
    do
    {
      v41 = *(unsigned int *)(*((_QWORD *)a5 + 2) + 368LL);
      LOBYTE(v41) = v41 & 0xF;
      if ( (_BYTE)v41 == 2 || v39 == *((_QWORD *)a5 + 26) )
      {
        v66 = *GetMonitorWorkRectForWindow(&v64, v39, a1);
      }
      else
      {
        v66 = *(_OWORD *)(*(_QWORD *)(v39 + 40) + 44LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v41, v38, v11, a4);
        PhysicalToLogicalDPIRect(&v66, &v66, CurrentThreadDpiAwarenessContext, (char *)a5 + 208);
      }
      v44 = v57[0];
      if ( IsDockTargetActive((__int64)a5, v39, 0) && (int)v66 <= SLOWORD(v57[0]) )
      {
        v45 = v58;
        if ( SLOWORD(v57[0]) <= SDWORD2(v66) )
          v45 = v39;
        v58 = v45;
      }
      if ( IsDockTargetActive((__int64)a5, v43, 3) && (int)v66 <= SLOWORD(v57[0]) && SLOWORD(v57[0]) <= SDWORD2(v66) )
        v40 = (struct tagMONITOR *)v39;
      v46 = *(_QWORD *)(v39 + 568);
      if ( v46 == gpDispInfo + 136LL )
        v46 = *(_QWORD *)(gpDispInfo + 136LL);
      v39 = v46 - 568;
    }
    while ( v39 != *((_QWORD *)a5 + 29) );
    v61 = v40;
    v47 = v40 == 0LL;
    v7 = 1;
    if ( v47 || !a4 )
      return 0;
    v48 = v61;
    *(_QWORD *)&v62 = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(&v65, v39, a1));
    if ( (*(_DWORD *)(*((_QWORD *)a5 + 2) + 368LL) & 0xF) != 2 )
    {
      v50 = *((_QWORD *)v61 + 5);
      v51 = *(unsigned __int16 *)(*(_QWORD *)(v58 + 40) + 64LL);
      if ( *(_WORD *)(v50 + 64) != (_WORD)v51 )
      {
        v57[1] = 0;
        v48 = (struct tagMONITOR *)v58;
        v57[0] = SLOWORD(v57[0]);
        v52 = W32GetCurrentThreadDpiAwarenessContext(v51, v50, v58, v49);
        LogicalToPhysicalDPIPoint(v57, v57, v52, (char *)a5 + 208);
        PhysicalToLogicalDPIPoint(v57, v57, v52, &v58);
        v44 = v57[0];
      }
    }
    SizeRect(
      a5,
      (unsigned __int16)(v44 + *((_WORD *)a5 + 84)) | ((unsigned __int16)(v62 + *((_WORD *)a5 + 86)) << 16),
      v48,
      0LL);
    goto LABEL_85;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
    v28 = *((_QWORD *)a5 + 29);
    v35 = 1;
    if ( (_DWORD)a2 == 2 && !v8 )
    {
      v36 = *(_QWORD *)(v28 + 576);
      if ( v36 == gpDispInfo + 136LL )
        v36 = *(_QWORD *)(gpDispInfo + 144LL);
      v28 = v36 - 568;
      v35 = 2;
    }
    v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v12, a4);
    v59 = *(_QWORD *)(v37 + 392);
    *(_QWORD *)(v37 + 392) = &v59;
    v60 = v28;
    if ( v28 )
      _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
    v32 = v35;
    goto LABEL_51;
  }
  v13 = (unsigned int)(v12 - 1);
  if ( !(_DWORD)v13 )
  {
    v28 = *((_QWORD *)a5 + 29);
    v29 = 2;
    if ( (_DWORD)a2 == 3 && !v8 )
    {
      v30 = *(_QWORD *)(v28 + 568);
      if ( v30 == gpDispInfo + 136LL )
        v30 = *(_QWORD *)(gpDispInfo + 136LL);
      v29 = 1;
      v28 = v30 - 568;
    }
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v13, a4);
    v59 = *(_QWORD *)(v31 + 392);
    *(_QWORD *)(v31 + 392) = &v59;
    v60 = v28;
    if ( v28 )
      _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
    v32 = v29;
LABEL_51:
    v7 = xxxProgrammaticSemiMaximize(a5, v28, v32);
LABEL_94:
    ThreadUnlock1(v34, v33);
    return v7;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( (_DWORD)v14 )
  {
    if ( (_DWORD)v14 == 1 )
    {
      v15 = *((_QWORD *)a5 + 29);
      v16 = *(_QWORD *)(v15 + 576);
      if ( v16 == gpDispInfo + 136LL )
        v16 = *(_QWORD *)(gpDispInfo + 144LL);
      v17 = v16 - 568;
      if ( v17 != v15 )
      {
        while ( v5 )
        {
          v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v14, a4);
          v59 = *(_QWORD *)(v18 + 392);
          *(_QWORD *)(v18 + 392) = &v59;
          v60 = v17;
          if ( v17 )
            _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
          if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v5, (_DWORD)a5, (_DWORD)a1, v17, 0) )
          {
            if ( v5 != 1 )
              goto LABEL_39;
            *((_DWORD *)a5 + 44) = 3;
            SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
            v23 = &v61;
            goto LABEL_38;
          }
          v21 = *(_QWORD *)(v17 + 576);
          ThreadUnlock1(v20, v19);
          if ( v21 == gpDispInfo + 136LL )
            v21 = *(_QWORD *)(gpDispInfo + 144LL);
          v17 = v21 - 568;
          if ( v17 == *((_QWORD *)a5 + 29) )
            return 0;
        }
LABEL_42:
        SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_85:
        *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 40);
        xxxCommitMoveSize(a1, a5);
        return v7;
      }
    }
  }
  else
  {
    v24 = *((_QWORD *)a5 + 29);
    v25 = *(_QWORD *)(v24 + 568);
    if ( v25 == gpDispInfo + 136LL )
      v25 = *(_QWORD *)(gpDispInfo + 136LL);
    v17 = v25 - 568;
    if ( v17 != v24 )
    {
      while ( v5 )
      {
        v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v14, a4);
        v59 = *(_QWORD *)(v26 + 392);
        *(_QWORD *)(v26 + 392) = &v59;
        v60 = v17;
        if ( v17 )
          _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
        if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v5, (_DWORD)a5, (_DWORD)a1, v17, 0) )
        {
          if ( v5 == 1 )
          {
            *((_DWORD *)a5 + 44) = 3;
            SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
            v23 = (struct tagMONITOR **)&v63;
LABEL_38:
            *((_DWORD *)a5 + 75) = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(v23, v22, a1));
          }
          else
          {
LABEL_39:
            if ( (unsigned int)(v5 - 2) <= 1 )
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
          }
          ThreadUnlock1(v20, v19);
          goto LABEL_85;
        }
        v27 = *(_QWORD *)(v17 + 568);
        ThreadUnlock1(v20, v19);
        if ( v27 == gpDispInfo + 136LL )
          v27 = *(_QWORD *)(gpDispInfo + 136LL);
        v17 = v27 - 568;
        if ( v17 == *((_QWORD *)a5 + 29) )
          return 0;
      }
      goto LABEL_42;
    }
  }
  return 0;
}

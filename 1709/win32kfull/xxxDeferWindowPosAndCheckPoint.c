/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B9428 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C005F4DC (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z @ 0x1C005F570 (-GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z.c)
 *     _DeferWindowPos @ 0x1C0066DC0 (_DeferWindowPos.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     FindOldMonitor @ 0x1C00CA0DC (FindOldMonitor.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CA23C (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C00CA2B4 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C00CA8C4 (IsValidMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C00CA98C (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01B735C (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     EvaluateArrangeState @ 0x1C01DCDE8 (EvaluateArrangeState.c)
 *     MigrateRectMonitors @ 0x1C01DCF04 (MigrateRectMonitors.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01DE61C (xxxEvaluateDestRectForMonitorMigration.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C023A6EC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        __int64 a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v9; // r13d
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int16 v14; // si
  unsigned int DpiForSystem; // eax
  unsigned __int16 v16; // cx
  struct tagRECT *Prop; // rsi
  __int64 v18; // rax
  int OldMonitor; // eax
  __int64 v20; // rax
  struct tagMONITOR *NewMonitor; // r12
  __int64 v22; // r10
  _QWORD *v23; // rax
  LONG left; // eax
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  struct tagMONITOR *v28; // rdi
  unsigned int v29; // r8d
  _QWORD *v30; // rax
  __m128i *MonitorRectForDpi; // rax
  unsigned __int16 v32; // r8
  __int64 v33; // xmm7_8
  __m128i *MonitorWorkRectForDpi; // rax
  unsigned __int16 v35; // r8
  __m128i *v36; // rax
  unsigned __int16 v37; // r8
  __int64 v38; // xmm6_8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  BOOL v42; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagWND *v46; // rcx
  int v47; // r9d
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v49; // r9
  int v51; // [rsp+58h] [rbp-B0h]
  _QWORD v53[3]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v54; // [rsp+80h] [rbp-88h] BYREF
  __m128i v55; // [rsp+90h] [rbp-78h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v57; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v58; // [rsp+C0h] [rbp-48h] BYREF
  __m256i v59; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v60[2]; // [rsp+F0h] [rbp-18h]
  struct tagRECT v61; // [rsp+100h] [rbp-8h] BYREF
  __m128i v62; // [rsp+110h] [rbp+8h]
  _QWORD v63[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v64[72]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v65[77]; // [rsp+2D0h] [rbp+1C8h] BYREF

  v51 = 0;
  v59.m256i_i64[2] = a5;
  v60[0] = a4;
  *(_QWORD *)&v58.left = 0LL;
  *(_QWORD *)&v58.right = 0LL;
  v9 = 9;
  memset(v64, 0, sizeof(v64));
  memset(v65, 0, 0x260uLL);
  v65[5] = v64;
  v10 = 1;
  if ( (dword_1C03217CC & 1) != 0 && (*(_BYTE *)(a2 + 305) & 3) != 0 )
  {
    v11 = 3;
    v51 = EvaluateArrangeState(a2);
    memset(v63, 0, 0x158uLL);
    v12 = *(unsigned int *)(a2 + 128);
    v13 = *(_DWORD *)(a2 + 136) - v12;
    v63[2] = a2;
    v14 = v12 + v13 / 2;
    if ( v51 == 3 )
    {
      DpiForSystem = GetDpiForSystem(v12, (unsigned int)(v13 >> 31));
      v16 = *(_WORD *)(a2 + 132) + GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    }
    else
    {
      v16 = *(_WORD *)(a2 + 132) + 2;
    }
    HIDWORD(v63[24]) = HIDWORD(v63[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, v63, 9LL, v14 | (v16 << 16), 11);
  }
  else
  {
    v11 = (*(unsigned __int8 *)(a2 + 60) >> 5) & 2;
  }
  Prop = (struct tagRECT *)GetProp(a2, atomCheckpointProp, 1);
  if ( !Prop )
    goto LABEL_25;
  v18 = v59.m256i_i64[2];
  if ( !v59.m256i_i64[2] )
    goto LABEL_25;
  Prop[2].left &= ~8u;
  OldMonitor = FindOldMonitor(a2, a3, v18);
  if ( OldMonitor == -1 )
    goto LABEL_25;
  if ( v11 != 3 )
  {
    NormalizeRect((struct tagWND *)a2, (struct tagRECT *)v59.m256i_i64[2], Prop, a3, OldMonitor, v11);
    goto LABEL_25;
  }
  v59.m256i_i64[0] = 48LL * OldMonitor;
  v20 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v59.m256i_i64[0] + 48));
  NewMonitor = (struct tagMONITOR *)v20;
  if ( !v20 || !(unsigned int)IsValidMonitor(v20) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + v59.m256i_i64[0] + 8));
    if ( NewMonitor )
      goto LABEL_17;
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo() + 88);
  }
  v22 = v59.m256i_i64[0];
LABEL_17:
  if ( (a7 & 1) != 0 )
  {
    v23 = (_QWORD *)v63[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v64, (struct tagMONITORRECTS *)((char *)a3 + v22 + 8));
    v23 = v65;
  }
  v59.m256i_i64[0] = (__int64)v23;
  if ( (unsigned int)MigrateRectMonitors(
                       a2,
                       v59.m256i_i32[4],
                       (_DWORD)v23,
                       (unsigned int)&v61,
                       (__int64)NewMonitor,
                       0LL,
                       (__int64)v63,
                       0) )
    *Prop = v61;
  if ( (*(_BYTE *)(a2 + 71) & 0x20) != 0 )
  {
    left = Prop[2].left;
    if ( (left & 0x20) != 0 )
    {
      if ( (left & 0x40) != 0 )
      {
LABEL_42:
        v59.m256i_i64[2] = (__int64)&Prop[2].top;
        if ( (unsigned int)MigrateRectMonitors(
                             a2,
                             (int)Prop + 36,
                             v59.m256i_i32[0],
                             (unsigned int)&v61,
                             (__int64)NewMonitor,
                             0LL,
                             (__int64)v63,
                             v9) )
          *(struct tagRECT *)v59.m256i_i64[2] = v61;
        else
          Prop[2].left &= 0xFFFFFF9F;
        goto LABEL_25;
      }
    }
    else if ( (left & 0x40) == 0 )
    {
      goto LABEL_25;
    }
    if ( (left & 0x40) != 0 )
    {
      v9 = 11;
    }
    else if ( (left & 0x20) != 0 )
    {
      v9 = 13;
    }
    goto LABEL_42;
  }
LABEL_25:
  v25 = FindOldMonitor(a2, a3, v60[0]);
  if ( v25 != -1 )
  {
    if ( v11 == 3 )
    {
      v26 = 48LL * v25;
      v27 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v26 + 48));
      v28 = (struct tagMONITOR *)v27;
      if ( !v27 || !(unsigned int)IsValidMonitor(v27) )
      {
        v28 = FindNewMonitor((struct tagRECT *)((char *)a3 + v26 + 8));
        if ( !v28 )
          v28 = *(struct tagMONITOR **)(GetDispInfo() + 88);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v64, (struct tagMONITORRECTS *)((char *)a3 + v26 + 8));
      v29 = *(_DWORD *)(a2 + 368);
      v30 = v65;
      if ( (a7 & 1) != 0 )
        v30 = (_QWORD *)v63[29];
      v63[29] = v30;
      MonitorRectForDpi = GetMonitorRectForDpi(&v54, (__int64)v65, (v29 >> 8) & 0x1FF);
      v32 = (*(_DWORD *)(a2 + 368) >> 8) & 0x1FF;
      *(__m128i *)v59.m256i_i8 = *MonitorRectForDpi;
      v33 = v59.m256i_i64[0];
      MonitorWorkRectForDpi = GetMonitorWorkRectForDpi(&v55, (__int64)v65, v32);
      v35 = (*(_DWORD *)(a2 + 368) >> 8) & 0x1FF;
      *(__m128i *)v60 = *MonitorWorkRectForDpi;
      v36 = GetMonitorRectForDpi(&v56, (__int64)v28, v35);
      v37 = (*(_DWORD *)(a2 + 368) >> 8) & 0x1FF;
      v62 = *v36;
      v38 = v62.m128i_i64[0];
      *(__m128i *)&v59.m256i_u64[2] = *GetMonitorWorkRectForDpi(&v57, (__int64)v28, v37);
      v42 = v33 == v38
         && __PAIR128__((unsigned __int64)v60[0], v62.m128i_u64[1]) == *(_OWORD *)&v59.m256i_u64[1]
         && v60[1] == (struct tagRECT *)v59.m256i_i64[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41);
      v53[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v53;
      v53[1] = v28;
      if ( v28 )
        _InterlockedAdd((volatile signed __int32 *)v28 + 2, 1u);
      if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v51, (unsigned int)v63, a2, (_DWORD)v28, v42) )
      {
        a6 |= 0x100000u;
        v58 = *(struct tagRECT *)&v63[5];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1(v45, v44);
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow((struct tagWND *)a2) )
      {
        v11 = 1;
      }
      else if ( (*(_DWORD *)(a2 + 304) & 0x8000) != 0 )
      {
        v11 = 2;
      }
      NormalizeRect(v46, &v58, v60[0], a3, v47, v11);
      if ( (*(_BYTE *)(a2 + 61) & 8) == 0 )
        return DeferWindowPos(a1, a2, 0LL, v58.left, v58.top, v58.right - v58.left, v58.bottom - v58.top, a6, 0);
      WindowCompositedDpi = GetWindowCompositedDpi((struct tagWND *)a2);
      *(_QWORD *)(a2 + 216) = GetMonitorRegionForDpi(v49, WindowCompositedDpi);
    }
    if ( v10 )
      return DeferWindowPos(a1, a2, 0LL, v58.left, v58.top, v58.right - v58.left, v58.bottom - v58.top, a6, 0);
  }
  return a1;
}

/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC
 * Callers:
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C009C968 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     SetMinimize @ 0x1C00E8A70 (SetMinimize.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01C0AC8 (TransformRegionBetweenCoordinateSpaces.c)
 *     TransformVector @ 0x1C01D1D30 (TransformVector.c)
 *     WindowArrangementAllowed @ 0x1C01EDF7C (WindowArrangementAllowed.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01F0AEC (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01F0B08 (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01F0B24 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01F12F8 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F1700 (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxMS_TrackMove(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4, struct _MOVESIZEDATA *a5)
{
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  __int128 v11; // xmm1
  unsigned int v12; // edx
  int v13; // r13d
  int v14; // ebx
  BOOL v15; // ecx
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // r10d
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r15
  __int16 v27; // di
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  int v32; // edi
  int v33; // ebx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // r8d
  int v39; // eax
  __int64 DesktopWindow; // rax
  __int64 v41; // rdx
  int v42; // ebx
  int v43; // edi
  _OWORD *v44; // r15
  __int64 v45; // rcx
  char v46; // al
  char *v47; // rax
  __int128 v48; // xmm0
  __int64 v49; // rcx
  int v50; // ebx
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // edi
  struct tagWND *v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rbx
  int v59; // ecx
  __int128 v60; // xmm0
  float *v61; // r11
  int *v62; // r9
  float *v63; // r11
  int *v64; // r9
  float *v65; // r11
  __int64 v66; // r13
  __int64 v67; // rbx
  _DWORD *v68; // rbx
  char CurrentThreadDpiAwarenessContext; // al
  _DWORD *v70; // rax
  int v71; // r15d
  int v72; // ecx
  _DWORD *v73; // rax
  _DWORD *v74; // rax
  __int64 v75; // rcx
  int v76; // eax
  int *v77; // r13
  char v78; // al
  _DWORD *v79; // rax
  _DWORD *v80; // rcx
  int v81; // ecx
  _DWORD *v82; // rax
  unsigned int v83; // ecx
  int v84; // ecx
  int v85; // [rsp+30h] [rbp-61h]
  int v86; // [rsp+30h] [rbp-61h]
  unsigned __int64 v87; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v88; // [rsp+40h] [rbp-51h]
  int v89; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v90; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v91; // [rsp+58h] [rbp-39h] BYREF
  __int64 v92; // [rsp+60h] [rbp-31h] BYREF
  __int128 v93; // [rsp+68h] [rbp-29h] BYREF
  __int64 v94; // [rsp+78h] [rbp-19h] BYREF
  __int128 v95; // [rsp+80h] [rbp-11h] BYREF
  int v96; // [rsp+90h] [rbp-1h] BYREF
  int v97; // [rsp+94h] [rbp+3h]
  int v98; // [rsp+98h] [rbp+7h]
  int v99; // [rsp+9Ch] [rbp+Bh]

  v91 = a3;
  v88 = a4;
  LODWORD(v90) = (__int16)a4;
  HIDWORD(v90) = SWORD1(a4);
  v7 = a2 - 256;
  if ( v7 )
  {
    v8 = v7 - 4;
    if ( v8 )
    {
      v9 = v8 - 252;
      if ( v9 )
      {
        if ( v9 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v10 = *((_DWORD *)a5 + 45);
        if ( (v10 & 0x2000000) != 0 )
        {
          v11 = *(_OWORD *)((char *)a5 + 40);
          *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 8) = v11;
        }
        *((_DWORD *)a5 + 45) = v10 & 0xFFFFFFFD;
LABEL_82:
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
        {
          v38 = *((_DWORD *)a5 + 45);
          if ( (v38 & 0x800) == 0 || (((v38 & 0x20) != 0) & *(_BYTE *)(a1 + 71)) == 0 )
            xxxDrawDragRectEx(a5);
          *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
        }
        goto LABEL_87;
      }
      v12 = a4;
LABEL_9:
      xxxTM_MoveDragRect(a5, v12);
      return;
    }
  }
  v85 = 0;
  v13 = 0;
  LOWORD(v14) = 0;
  v15 = (GetKeyState(0x11u) & 0x8000u) != 0LL;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 == 13 )
    goto LABEL_82;
  if ( (_DWORD)a3 != 27 )
  {
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 42) )
        {
          v16 = *((_DWORD *)a5 + 41) == 0;
          *((_DWORD *)a5 + 42) = dword_1C02EE6C4[a3];
LABEL_33:
          if ( !v16 )
          {
            v19 = *((_DWORD *)a5 + 45);
            *((_DWORD *)a5 + 66) &= ~2u;
            *((_DWORD *)a5 + 56) = 4;
            *((_DWORD *)a5 + 45) = v19 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 19) = 0LL;
          goto LABEL_48;
        }
        if ( v15
          || ((W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
            ? (v17 = *(_DWORD *)(gpsi + 2004LL))
            : (v17 = *(_DWORD *)(gpsi + 2392LL)),
              v17 < 4) )
        {
          v13 = 1;
        }
        else
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            v18 = *(_DWORD *)(gpsi + 2004LL);
          else
            v18 = *(_DWORD *)(gpsi + 2392LL);
          v13 = v18 / 2;
        }
        if ( a3 == 38 )
          v13 = -v13;
        goto LABEL_48;
      }
      if ( (_DWORD)a3 != 39 )
      {
        if ( (_DWORD)a3 != 40 )
          return;
        goto LABEL_17;
      }
    }
    if ( !*((_DWORD *)a5 + 41) )
    {
      v16 = *((_DWORD *)a5 + 42) == 0;
      *((_DWORD *)a5 + 41) = dword_1C02EE6C4[a3];
      goto LABEL_33;
    }
    if ( v15
      || ((W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
        ? (v20 = *(_DWORD *)(gpsi + 2000LL))
        : (v20 = *(_DWORD *)(gpsi + 2388LL)),
          v20 < 4) )
    {
      v14 = 1;
      v85 = 1;
    }
    else
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v21 = *(_DWORD *)(gpsi + 2000LL);
      else
        v21 = *(_DWORD *)(gpsi + 2388LL);
      v14 = v21 / 2;
      v85 = v21 / 2;
    }
    if ( a3 == 37 )
    {
      v14 = -v14;
      v85 = v14;
    }
LABEL_48:
    v22 = *((_DWORD *)a5 + 40);
    if ( v22 == 9 )
    {
      v23 = *((unsigned __int16 *)a5 + 6);
      v24 = *((unsigned __int16 *)a5 + 4);
    }
    else
    {
      v23 = *(unsigned __int16 *)(gptiCurrent + 680LL);
      v24 = *(unsigned __int16 *)(gptiCurrent + 676LL);
    }
    v25 = *((int *)a5 + 41);
    v26 = v24 | (v23 << 16);
    v88 = v26;
    if ( (_DWORD)v25 )
    {
      v27 = v14 + *((_WORD *)a5 + 2 * dword_1C02EE728[v25] + 12);
      LOWORD(v88) = v27;
      LODWORD(v26) = v88;
    }
    else
    {
      v27 = v88;
    }
    v28 = *((int *)a5 + 42);
    if ( (_DWORD)v28 )
    {
      WORD1(v88) = v13 + *((_WORD *)a5 + 2 * dword_1C02EE6F8[v28] + 12);
      LODWORD(v26) = v88;
    }
    if ( v22 != 9 )
    {
      v29 = v25 + v28;
      LODWORD(v28) = 0;
      *((_DWORD *)a5 + 40) = v29;
      if ( a1 )
        v28 = *(_QWORD *)a1;
      xxxSendMessage(a1, 32, v28, (unsigned __int16)(v29 + 9) | 0x2000000);
    }
    LODWORD(v90) = v27 - *((_DWORD *)a5 + 38);
    HIDWORD(v90) = SWORD1(v26) - *((_DWORD *)a5 + 39);
    v30 = *(_QWORD *)(a1 + 104);
    v31 = v90;
    v88 = v90;
    if ( *(_QWORD *)(v30 + 216) )
    {
      v92 = *(_QWORD *)(v30 + 216);
      v32 = TransformRegionBetweenCoordinateSpaces(a1, v30, &v92);
      v33 = GrePtInRegion(v92, (unsigned int)v90, HIDWORD(v88));
      if ( v32 )
        GreDeleteObject(v92);
      if ( !v33 )
        goto LABEL_78;
      v31 = v90;
    }
    else if ( !PtInRect((_DWORD *)a5 + 18, v90) )
    {
LABEL_78:
      v12 = v26;
      goto LABEL_9;
    }
    v94 = *((_QWORD *)a5 + 24);
    v87 = v31;
    LogicalToPhysicalDPIPoint(&v87, &v90, 0LL, &v94);
    if ( ((v91 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v34 = v87;
      if ( ((v91 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        v35 = HIDWORD(v87);
      }
      else
      {
        v35 = *(_DWORD *)&gptCursorAsync[2];
        HIDWORD(v87) = v35;
        if ( (_DWORD)v87 == *(_DWORD *)gptCursorAsync )
        {
          v36 = -1;
          if ( v85 > 0 )
            v36 = 1;
          v34 = v36 + v87;
          LODWORD(v87) = v36 + v87;
        }
      }
    }
    else
    {
      v35 = HIDWORD(v87);
      v34 = *(_DWORD *)gptCursorAsync;
      LODWORD(v87) = *(_DWORD *)gptCursorAsync;
      if ( HIDWORD(v87) == *(_DWORD *)&gptCursorAsync[2] )
      {
        v37 = -1;
        if ( v13 > 0 )
          v37 = 1;
        v35 = v37 + HIDWORD(v87);
        HIDWORD(v87) += v37;
      }
    }
    zzzInternalSetCursorPos(v34, v35, 2);
    goto LABEL_78;
  }
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5);
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
LABEL_87:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v39 = *((_DWORD *)a5 + 45) | 8;
  *((_DWORD *)a5 + 45) = v39;
  if ( (v39 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 172), HIDWORD(*(_QWORD *)((char *)a5 + 172)), 1);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v41 == DesktopWindow )
  {
    v42 = 0;
    v43 = 0;
  }
  else
  {
    v43 = *(_DWORD *)(v41 + 144);
    v42 = *(_DWORD *)(v41 + 148);
  }
  v44 = (_OWORD *)((char *)a5 + 8);
  v45 = *((_QWORD *)a5 + 1) - *((_QWORD *)a5 + 15);
  if ( !v45 )
    v45 = *((_QWORD *)a5 + 2) - *((_QWORD *)a5 + 16);
  if ( v45 )
  {
    if ( (unsigned int)xxxCallHook(0, *(_QWORD *)a1, (__int64)a5 + 8, 5u) )
    {
      v48 = *(_OWORD *)((char *)a5 + 120);
      *((_QWORD *)a5 + 24) = *((_QWORD *)a5 + 25);
      *v44 = v48;
    }
    else if ( *((_DWORD *)a5 + 40) == 9 )
    {
      if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
      {
        LODWORD(v95) = *((_DWORD *)a5 + 30) - v43;
        DWORD2(v95) = *((_DWORD *)a5 + 32) - v43;
        DWORD1(v95) = *((_DWORD *)a5 + 31) - v42;
        HIDWORD(v95) = *((_DWORD *)a5 + 33) - v42;
        v47 = CkptRestore(a1, &v95);
        if ( v47 )
          *((_DWORD *)v47 + 8) |= 1u;
      }
    }
    else
    {
      v46 = *(_BYTE *)(a1 + 71);
      if ( (v46 & 0x20) != 0 )
      {
        LODWORD(v95) = *((_DWORD *)a5 + 30) - v43;
        DWORD2(v95) = *((_DWORD *)a5 + 32) - v43;
        DWORD1(v95) = *((_DWORD *)a5 + 31) - v42;
        HIDWORD(v95) = *((_DWORD *)a5 + 33) - v42;
        CkptRestore(a1, &v95);
        SetMinimize(a1, 0);
      }
      else if ( (v46 & 1) != 0 )
      {
        SetOrClrWF(0, (_DWORD *)a1, 0xF01u, 1);
      }
    }
  }
  v49 = *(_QWORD *)(a1 + 104);
  v50 = -v42;
  if ( (*(_BYTE *)(v49 + 66) & 0x40) != 0 )
  {
    v51 = *(_DWORD *)(v49 + 152);
    *((_DWORD *)a5 + 5) += v50;
    v52 = -v51;
    *(_DWORD *)v44 += v52;
    *((_DWORD *)a5 + 4) += v52;
    *((_DWORD *)a5 + 3) += v50;
    v53 = -*(_DWORD *)v44;
    *(_DWORD *)v44 = -*((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = v53;
  }
  else
  {
    *((_DWORD *)a5 + 5) += v50;
    v54 = -v43;
    *(_DWORD *)v44 += v54;
    *((_DWORD *)a5 + 4) += v54;
    *((_DWORD *)a5 + 3) += v50;
  }
  if ( *(_QWORD *)(a1 + 104) != GetDesktopWindow(a1) )
    goto LABEL_228;
  LODWORD(v87) = *(_BYTE *)(a1 + 64) & 0x88;
  if ( WindowArrangementAllowed(v55) )
  {
    if ( *(char *)(a1 + 64) >= 0 )
    {
      v57 = 0LL;
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    {
      v57 = *(unsigned int *)(gpsi + 2084LL);
    }
    else
    {
      v57 = *(unsigned int *)(gpsi + 2472LL);
    }
  }
  else
  {
    if ( *(char *)(a1 + 64) >= 0 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v56 = *(_DWORD *)(gpsi + 1896LL);
      else
        v56 = *(_DWORD *)(gpsi + 2284LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    {
      v56 = *(_DWORD *)(gpsi + 2084LL);
    }
    else
    {
      v56 = *(_DWORD *)(gpsi + 2472LL);
    }
    v57 = (unsigned int)(v56 - 1);
  }
  v86 = v57;
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    v59 = *((_DWORD *)a5 + 3) + v57;
    v60 = *v44;
    v61 = *(float **)(a1 + 288);
    v89 = v59;
    v93 = v60;
    if ( v61 )
    {
      LODWORD(v91) = 0;
      TransformVector(v61, (int *)&v91, &v89, 0LL, 0);
      TransformVector(v63, (int *)&v93, (int *)&v93 + 1, v62, 0);
      TransformVector(v65, (int *)&v93 + 2, (int *)&v93 + 3, v64, 0);
      v59 = v89;
    }
    v66 = *(_QWORD *)(gpDispInfo + 96LL);
    while ( v66 )
    {
      v67 = *(_QWORD *)(v66 + 40);
      if ( (*(_DWORD *)(v67 + 24) & 1) != 0 )
      {
        v68 = (_DWORD *)((_DWORD)v87 ? v67 + 28 : v67 + 76);
        if ( v59 >= v68[1]
          && v59 < v68[3]
          && (!WindowArrangementAllowed((struct tagWND *)a1)
           || SDWORD2(v93) >= *v68 && SDWORD2(v93) < v68[2]
           || (int)v93 >= *v68 && (int)v93 < v68[2]) )
        {
          goto LABEL_228;
        }
      }
      v66 = *(_QWORD *)(v66 + 56);
      v59 = v89;
    }
    v58 = MonitorFromRect((int *)a5 + 2, 2u);
  }
  else
  {
    v58 = *(_QWORD *)(GetDispInfo(v57) + 88);
  }
  if ( !WindowArrangementAllowed((struct tagWND *)a1) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (_DWORD)v87 )
    {
      if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v70 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 48LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v70 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 64LL);
      }
      else
      {
        v70 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 32LL);
      }
      v71 = v86;
      v72 = *((_DWORD *)a5 + 3);
      if ( v72 > *v70 - v86 )
        goto LABEL_164;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v73 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 48LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v73 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 64LL);
      }
      else
      {
        v73 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 32LL);
      }
    }
    else
    {
      if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v74 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 96LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v74 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 112LL);
      }
      else
      {
        v74 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 80LL);
      }
      v71 = v86;
      v72 = *((_DWORD *)a5 + 3);
      if ( v72 > *v74 - v86 )
        goto LABEL_164;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v73 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 96LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v73 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 112LL);
      }
      else
      {
        v73 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 80LL);
      }
    }
    v72 = *v73 - v71;
LABEL_164:
    *((_DWORD *)a5 + 3) = v72;
    goto LABEL_228;
  }
  v75 = *(_QWORD *)(a1 + 216);
  if ( v75 )
  {
    GreGetRgnBox(v75, &v96);
    v76 = *(_DWORD *)v44;
    v77 = &v96;
    v97 += *((_DWORD *)a5 + 3) - *(_DWORD *)(a1 + 132);
    v96 = v76;
    v98 = *((_DWORD *)a5 + 4);
    v99 = *(_DWORD *)(a1 + 140) + *((_DWORD *)a5 + 5) - v99;
  }
  else
  {
    v77 = (int *)((char *)a5 + 8);
  }
  v78 = W32GetCurrentThreadDpiAwarenessContext();
  if ( (_DWORD)v87 )
  {
    if ( (v78 & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v79 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 48LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v79 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 64LL);
    }
    else
    {
      v79 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 32LL);
    }
    if ( v77[1] >= *v79 )
      goto LABEL_228;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v80 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 48LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v80 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 64LL);
    }
    else
    {
      v80 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 32LL);
    }
  }
  else
  {
    if ( (v78 & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v82 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 96LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v82 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 112LL);
    }
    else
    {
      v82 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 80LL);
    }
    if ( v77[1] >= *v82 )
      goto LABEL_228;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v80 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 96LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v80 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 112LL);
    }
    else
    {
      v80 = (_DWORD *)(*(_QWORD *)(v58 + 40) + 80LL);
    }
  }
  v81 = *v80 - v77[1];
  *((_DWORD *)a5 + 3) += v81;
  *((_DWORD *)a5 + 5) += v81;
LABEL_228:
  if ( IsSizingLEFT(*((_DWORD *)a5 + 40)) || v83 - 3 <= 2 || IsSizingRIGHT(v83) || (unsigned int)(v84 - 6) <= 2 )
    TraceWindowResizeTelemetry((HWND *)a1);
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    *(_DWORD *)(a1 + 304) &= ~0x80000u;
    RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  }
}

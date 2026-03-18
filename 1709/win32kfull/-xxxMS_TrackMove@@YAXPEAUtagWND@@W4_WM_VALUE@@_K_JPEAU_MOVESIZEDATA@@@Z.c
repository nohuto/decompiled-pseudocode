/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48
 * Callers:
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     SetMinimize @ 0x1C004BB24 (SetMinimize.c)
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00E7558 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01C4214 (TransformRegionBetweenCoordinateSpaces.c)
 *     TransformVector @ 0x1C01D6334 (TransformVector.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C01D8888 (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C01D88A4 (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01D88C0 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01D9024 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01D93BC (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     WindowArrangementAllowed @ 0x1C01F841C (WindowArrangementAllowed.c)
 */

void __fastcall xxxMS_TrackMove(ULONG_PTR a1, int a2, unsigned __int64 a3, __int64 a4, struct _MOVESIZEDATA *a5)
{
  __int64 v7; // rdx
  int v8; // edx
  int v9; // eax
  __int128 v10; // xmm1
  unsigned int v11; // edx
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rdx
  _BOOL8 v15; // rcx
  bool v16; // zf
  unsigned int v17; // eax
  int DpiDependentMetric; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int DpiForSystem; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // r10d
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r15
  __int16 v33; // bx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rbx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v44; // ecx
  unsigned int v45; // edx
  int v46; // eax
  int v47; // eax
  int v48; // r8d
  int v49; // eax
  __int64 DesktopWindow; // rax
  __int64 v51; // rdx
  int v52; // r15d
  int v53; // r12d
  _OWORD *v54; // rbx
  __int64 v55; // rcx
  char v56; // al
  char *v57; // rax
  __int128 v58; // xmm0
  __int64 v59; // rcx
  int v60; // r15d
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // r12d
  int v65; // r12d
  __int64 v66; // rcx
  unsigned int v67; // eax
  __int64 v68; // rcx
  int v69; // r15d
  unsigned int v70; // eax
  __int64 v71; // r14
  __int128 v72; // xmm0
  float *v73; // r11
  int v74; // ecx
  int *v75; // r9
  float *v76; // r11
  int *v77; // r9
  float *v78; // r11
  __int64 v79; // r12
  __int64 v80; // r13
  unsigned __int64 v81; // r15
  int v82; // eax
  __int64 v83; // rax
  int v84; // ecx
  _OWORD *MonitorWorkRect; // rax
  __int64 v86; // rcx
  int v87; // eax
  int *v88; // r15
  _OWORD *MonitorRect; // rax
  int v90; // ecx
  __int64 v91; // rax
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // ecx
  int v95; // [rsp+20h] [rbp-51h]
  int v96; // [rsp+20h] [rbp-51h]
  __int64 v97; // [rsp+30h] [rbp-41h] BYREF
  int v98; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v99; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v100; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v101; // [rsp+50h] [rbp-21h]
  __int128 v102; // [rsp+58h] [rbp-19h] BYREF
  __int128 v103; // [rsp+68h] [rbp-9h] BYREF
  int v104; // [rsp+78h] [rbp+7h] BYREF
  int v105; // [rsp+7Ch] [rbp+Bh]
  int v106; // [rsp+80h] [rbp+Fh]
  int v107; // [rsp+84h] [rbp+13h]

  v101 = a3;
  v97 = a4;
  LODWORD(v100) = (__int16)a4;
  HIDWORD(v100) = SWORD1(a4);
  v7 = (unsigned int)(a2 - 256);
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = v7 - 252;
      if ( v8 )
      {
        if ( v8 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v9 = *((_DWORD *)a5 + 49);
        if ( (v9 & 0x2000000) != 0 )
        {
          v10 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v10;
        }
        *((_DWORD *)a5 + 49) = v9 & 0xFFFFFFFD;
LABEL_68:
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x10) != 0 )
        {
          v48 = *((_DWORD *)a5 + 49);
          if ( (v48 & 0x800) == 0 || (((v48 & 0x20) != 0) & *(_BYTE *)(a1 + 71)) == 0 )
            xxxDrawDragRectEx(a5);
          *(_DWORD *)(gptiCurrent + 464LL) &= ~0x10u;
        }
        goto LABEL_73;
      }
      v11 = a4;
LABEL_9:
      xxxTM_MoveDragRect(a5, v11);
      return;
    }
  }
  v12 = 0;
  v13 = 0;
  v15 = (GetKeyState(0x11u, v7, a3, a4) & 0x8000u) != 0LL;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 == 13 )
    goto LABEL_68;
  if ( (_DWORD)a3 != 27 )
  {
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v16 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02EAE34[a3];
LABEL_27:
          if ( !v16 )
          {
            v22 = *((_DWORD *)a5 + 49);
            *((_DWORD *)a5 + 70) &= ~2u;
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 49) = v22 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( v15
          || (v17 = GetDpiForSystem(v15, v14),
              DpiDependentMetric = GetDpiDependentMetric(13LL, v17),
              v20 = (unsigned int)(DpiDependentMetric >> 31),
              DpiDependentMetric / 2 <= 1) )
        {
          v12 = 1;
        }
        else
        {
          LODWORD(v20) = DpiDependentMetric % 2;
          DpiForSystem = GetDpiForSystem(v19, v20);
          v12 = (int)GetDpiDependentMetric(13LL, DpiForSystem) / 2;
        }
        if ( a3 == 38 )
          v12 = -v12;
        goto LABEL_36;
      }
      if ( (_DWORD)a3 != 39 )
      {
        if ( (_DWORD)a3 != 40 )
          return;
        goto LABEL_17;
      }
    }
    if ( !*((_DWORD *)a5 + 45) )
    {
      v16 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02EAE34[a3];
      goto LABEL_27;
    }
    if ( v15
      || (v23 = GetDpiForSystem(v15, v14),
          v24 = GetDpiDependentMetric(12LL, v23),
          v26 = (unsigned int)(v24 >> 31),
          v24 / 2 <= 1) )
    {
      v13 = 1;
    }
    else
    {
      LODWORD(v26) = v24 % 2;
      v27 = GetDpiForSystem(v25, v26);
      v13 = (int)GetDpiDependentMetric(12LL, v27) / 2;
    }
    if ( a3 == 37 )
      v13 = -v13;
LABEL_36:
    v28 = *((_DWORD *)a5 + 44);
    if ( v28 == 9 )
    {
      v29 = *((unsigned __int16 *)a5 + 14);
      v30 = *((unsigned __int16 *)a5 + 12);
    }
    else
    {
      v29 = *(unsigned __int16 *)(gptiCurrent + 736LL);
      v30 = *(unsigned __int16 *)(gptiCurrent + 732LL);
    }
    v31 = *((int *)a5 + 45);
    v32 = v30 | (unsigned int)(v29 << 16);
    v97 = v32;
    if ( (_DWORD)v31 )
    {
      v33 = v13 + *((_WORD *)a5 + 2 * dword_1C02EAE98[v31] + 20);
      LOWORD(v97) = v33;
      LODWORD(v32) = v97;
    }
    else
    {
      v33 = v97;
    }
    v34 = *((int *)a5 + 46);
    if ( (_DWORD)v34 )
    {
      WORD1(v97) = v12 + *((_WORD *)a5 + 2 * dword_1C02EAE68[v34] + 20);
      LODWORD(v32) = v97;
    }
    if ( v28 != 9 )
    {
      *((_DWORD *)a5 + 44) = v31 + v34;
      xxxSendMessage(a1);
    }
    LODWORD(v100) = v33 - *((_DWORD *)a5 + 42);
    HIDWORD(v100) = SWORD1(v32) - *((_DWORD *)a5 + 43);
    v35 = *(_QWORD *)(a1 + 104);
    v36 = v100;
    v99 = v100;
    if ( *(_QWORD *)(v35 + 216) )
    {
      v97 = *(_QWORD *)(v35 + 216);
      v37 = TransformRegionBetweenCoordinateSpaces(a1, v35, &v97);
      v40 = GrePtInRegion(v97, (unsigned int)v36, HIDWORD(v99));
      if ( v37 )
        GreDeleteObject(v97);
      if ( !v40 )
        goto LABEL_64;
      v36 = v100;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v100) )
    {
LABEL_64:
      v11 = v32;
      goto LABEL_9;
    }
    v99 = *((_QWORD *)a5 + 26);
    v97 = v36;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v39, v38, v41, v42);
    LogicalToPhysicalDPIPoint(&v97, &v100, CurrentThreadDpiAwarenessContext, &v99);
    if ( ((v101 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v44 = v97;
      if ( ((v101 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        v45 = HIDWORD(v97);
      }
      else
      {
        v45 = gptCursorAsync[1];
        HIDWORD(v97) = v45;
        if ( (_DWORD)v97 == gptCursorAsync[0] )
        {
          v46 = -1;
          if ( v13 > 0 )
            v46 = 1;
          v44 = v46 + v97;
          LODWORD(v97) = v46 + v97;
        }
      }
    }
    else
    {
      v45 = HIDWORD(v97);
      v44 = gptCursorAsync[0];
      LODWORD(v97) = gptCursorAsync[0];
      if ( HIDWORD(v97) == gptCursorAsync[1] )
      {
        v47 = -1;
        if ( v12 > 0 )
          v47 = 1;
        v45 = v47 + HIDWORD(v97);
        HIDWORD(v97) += v47;
      }
    }
    zzzInternalSetCursorPos(v44, v45, 2, 0);
    goto LABEL_64;
  }
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5);
    *(_DWORD *)(gptiCurrent + 464LL) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
LABEL_73:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL);
  xxxReleaseCapture();
  v49 = *((_DWORD *)a5 + 49) | 8;
  *((_DWORD *)a5 + 49) = v49;
  if ( (v49 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v51 == DesktopWindow )
  {
    v52 = 0;
    v53 = 0;
  }
  else
  {
    v53 = *(_DWORD *)(v51 + 144);
    v52 = *(_DWORD *)(v51 + 148);
  }
  v54 = (_OWORD *)((char *)a5 + 24);
  v55 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v55 )
    v55 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v55 )
  {
    if ( (unsigned int)xxxCallHook(0, *(_QWORD *)a1, (__int64)a5 + 24, 5u) )
    {
      v58 = *(_OWORD *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v54 = v58;
    }
    else if ( *((_DWORD *)a5 + 44) == 9 )
    {
      if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
      {
        LODWORD(v103) = *((_DWORD *)a5 + 34) - v53;
        DWORD2(v103) = *((_DWORD *)a5 + 36) - v53;
        DWORD1(v103) = *((_DWORD *)a5 + 35) - v52;
        HIDWORD(v103) = *((_DWORD *)a5 + 37) - v52;
        v57 = CkptRestore(a1, &v103);
        if ( v57 )
          *((_DWORD *)v57 + 8) |= 1u;
      }
    }
    else
    {
      v56 = *(_BYTE *)(a1 + 71);
      if ( (v56 & 0x20) != 0 )
      {
        LODWORD(v103) = *((_DWORD *)a5 + 34) - v53;
        DWORD2(v103) = *((_DWORD *)a5 + 36) - v53;
        DWORD1(v103) = *((_DWORD *)a5 + 35) - v52;
        HIDWORD(v103) = *((_DWORD *)a5 + 37) - v52;
        CkptRestore(a1, &v103);
        SetMinimize(a1, 0);
      }
      else if ( (v56 & 1) != 0 )
      {
        SetOrClrWF(0, (_DWORD *)a1, 0xF01u, 1);
      }
    }
  }
  v59 = *(_QWORD *)(a1 + 104);
  v60 = -v52;
  if ( (*(_BYTE *)(v59 + 66) & 0x40) != 0 )
  {
    v61 = *(_DWORD *)(v59 + 152);
    *((_DWORD *)a5 + 9) += v60;
    v62 = -v61;
    *(_DWORD *)v54 += v62;
    *((_DWORD *)a5 + 8) += v62;
    *((_DWORD *)a5 + 7) += v60;
    v63 = -*(_DWORD *)v54;
    *(_DWORD *)v54 = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v63;
  }
  else
  {
    *((_DWORD *)a5 + 9) += v60;
    v64 = -v53;
    *(_DWORD *)v54 += v64;
    *((_DWORD *)a5 + 8) += v64;
    *((_DWORD *)a5 + 7) += v60;
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
  {
    v65 = *(_BYTE *)(a1 + 64) & 0x88;
    LODWORD(v99) = v65;
    if ( (unsigned int)WindowArrangementAllowed(a1) )
    {
      if ( *(char *)(a1 + 64) >= 0 )
      {
        v69 = 0;
      }
      else
      {
        v70 = GetDpiForSystem(v66, 0LL);
        v69 = GetDpiDependentMetric(22LL, v70);
      }
    }
    else
    {
      if ( *(char *)(a1 + 64) >= 0 )
      {
        v67 = GetDpiForSystem(v66, 0LL);
        v68 = 2LL;
      }
      else
      {
        v67 = GetDpiForSystem(v66, 0LL);
        v68 = 22LL;
      }
      v69 = GetDpiDependentMetric(v68, v67) - 1;
    }
    LODWORD(v101) = v69;
    *(_QWORD *)&v103 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v72 = *v54;
      v73 = *(float **)(a1 + 288);
      v74 = v69 + *((_DWORD *)a5 + 7);
      v98 = v74;
      v102 = v72;
      if ( v73 )
      {
        LODWORD(v97) = 0;
        TransformVector(v73, (int *)&v97, &v98, 0LL, 0);
        TransformVector(v76, (int *)&v102, (int *)&v102 + 1, v75, (unsigned int)v75 & v95);
        TransformVector(v78, (int *)&v102 + 2, (int *)&v102 + 3, v77, (unsigned int)v77 & v96);
        v74 = v98;
      }
      v79 = *(_QWORD *)(v103 + 96);
      if ( v79 )
      {
        while ( 1 )
        {
          v80 = *(_QWORD *)(v79 + 40);
          if ( (*(_DWORD *)(v80 + 24) & 1) != 0 )
          {
            v81 = -(__int64)((_DWORD)v99 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v74 >= *(_DWORD *)(v81 + v80 + 48) && v74 < *(_DWORD *)(v81 + v80 + 56) )
            {
              if ( !(unsigned int)WindowArrangementAllowed(a1) )
                goto LABEL_136;
              v82 = *(_DWORD *)(v81 + v80 + 44);
              if ( SDWORD2(v102) >= v82 && SDWORD2(v102) < *(_DWORD *)(v81 + v80 + 52) )
                goto LABEL_136;
              if ( (int)v102 >= v82 && (int)v102 < *(_DWORD *)(v81 + v80 + 52) )
                goto LABEL_136;
            }
          }
          v79 = *(_QWORD *)(v79 + 56);
          v74 = v98;
          if ( !v79 )
          {
            v69 = v101;
            break;
          }
        }
      }
      v83 = MonitorFromRect((struct tagRECT *)((char *)a5 + 24), 2u, 0);
      v65 = v99;
      v71 = v83;
    }
    else
    {
      v71 = *(_QWORD *)(GetDispInfo(v66) + 88);
    }
    if ( (unsigned int)WindowArrangementAllowed(a1) )
    {
      v86 = *(_QWORD *)(a1 + 216);
      if ( v86 && (unsigned int)GreGetRgnBox(v86, &v104) )
      {
        v87 = *(_DWORD *)v54;
        v88 = &v104;
        v105 += *((_DWORD *)a5 + 7) - *(_DWORD *)(a1 + 132);
        v104 = v87;
        v106 = *((_DWORD *)a5 + 8);
        v107 = *(_DWORD *)(a1 + 140) + *((_DWORD *)a5 + 9) - v107;
      }
      else
      {
        v88 = (int *)((char *)a5 + 24);
      }
      if ( v65 )
        MonitorRect = GetMonitorRect(&v102, v71);
      else
        MonitorRect = GetMonitorWorkRect(&v102, v71);
      v90 = v88[1];
      v91 = HIDWORD(*(_QWORD *)MonitorRect);
      if ( v90 < (int)v91 )
      {
        v92 = v91 - v90;
        *((_DWORD *)a5 + 7) += v92;
        *((_DWORD *)a5 + 9) += v92;
      }
    }
    else
    {
      if ( v65 )
      {
        v84 = HIDWORD(*(_QWORD *)GetMonitorRect(&v102, v71)) - v69;
        if ( *((_DWORD *)a5 + 7) > v84 )
          v84 = *((_DWORD *)a5 + 7);
      }
      else
      {
        MonitorWorkRect = GetMonitorWorkRect(&v102, v71);
        v84 = *((_DWORD *)a5 + 7);
        if ( v84 <= (int)(HIDWORD(*(_QWORD *)MonitorWorkRect) - v69) )
          v84 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v103, v71)) - v69;
      }
      *((_DWORD *)a5 + 7) = v84;
    }
  }
LABEL_136:
  if ( IsSizingLEFT(*((_DWORD *)a5 + 44)) || v93 - 3 <= 2 || IsSizingRIGHT(v93) || (unsigned int)(v94 - 6) <= 2 )
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

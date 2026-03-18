/*
 * XREFs of xxxEndSetWindowArrangement @ 0x1C01F6D98
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B608C (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01EFBD8 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?ArrangementStyleFromOverlap@@YAKK@Z @ 0x1C01EFCAC (-ArrangementStyleFromOverlap@@YAKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01F02C0 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01F0A30 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01F0AD0 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01F14CC (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01F31C8 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C01F5AB8 (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  BOOL v6; // r13d
  unsigned int v7; // ebx
  struct tagRECT *v9; // r15
  __int64 v10; // r14
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v13; // rax
  struct tagRECT *v14; // rsi
  __int64 v15; // rax
  char OverlapCoordinatesForArrangement; // al
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  unsigned int v25; // r14d
  __int64 v26; // rsi
  __int64 v27; // r8
  _OWORD *Prop; // rax
  __int64 v29; // r8
  int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  struct tagRECT *v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  _QWORD v36[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v37[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v38[5]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39[42]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v40; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v41[2]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v42[2]; // [rsp+230h] [rbp+130h] BYREF

  v34 = a2;
  v32 = a4 & 2;
  v5 = gptiCurrent;
  v6 = (a4 & 1) == 0;
  v7 = 0;
  v35 = gptiCurrent;
  v9 = a2;
  v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 328LL);
  if ( !v10 )
    return 0LL;
  v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v36;
  v36[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  if ( *(_QWORD *)(gptiCurrent + 592LL) )
    goto LABEL_54;
  MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v10);
  v33 = MonitorFromRect(&v9->left, MonitorFlagsFromWindow);
  a2 = (struct tagRECT *)v33;
  if ( !v33 )
    goto LABEL_54;
  if ( (*(_DWORD *)(v10 + 368) & 0xF) == 0
    && (v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    v14 = (struct tagRECT *)(*(_QWORD *)(v33 + 40) + 92LL);
  }
  else if ( (*(_DWORD *)(v10 + 368) & 0xF) == 1
         && (v15 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 52LL) & 1) != 0 )
  {
    v14 = (struct tagRECT *)(*(_QWORD *)(v33 + 40) + 108LL);
  }
  else
  {
    v14 = (struct tagRECT *)(*(_QWORD *)(v33 + 40) + 76LL);
  }
  if ( !(unsigned int)IntersectRect((int *)v41, &v9->left, &v14->left) )
    goto LABEL_54;
  v5 = v41[0] - *(_QWORD *)&v9->left;
  if ( v41[0] == *(_QWORD *)&v9->left )
    v5 = v41[1] - *(_QWORD *)&v9->right;
  if ( v5 )
    goto LABEL_54;
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v14, v9, 1);
  v17 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
  if ( !v17 )
    goto LABEL_54;
  if ( v17 == 63747 )
    goto LABEL_54;
  v18 = (v17 != 63745) + 4;
  if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v18) )
    goto LABEL_54;
  v30 = EvaluateArrangeState((__int64)a1);
  if ( v30 == 6 || (*((_BYTE *)a1 + 71) & 0x10) == 0 )
    goto LABEL_54;
  if ( a3 )
  {
    if ( !(unsigned int)IntersectRect((int *)v42, (int *)a3, &v14->left) )
      goto LABEL_54;
    v5 = v42[0] - *(_QWORD *)a3;
    if ( v42[0] == *(_QWORD *)a3 )
      v5 = v42[1] - *(_QWORD *)(a3 + 8);
    if ( v5
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) == 0
      && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*((_DWORD *)a1 + 92) & 0xF)
      && !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v10) )
    {
      goto LABEL_54;
    }
  }
  v19 = v33;
  v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v37;
  v37[1] = v19;
  ++*(_DWORD *)(v19 + 8);
  memset(v39, 0, 0x148uLL);
  xxxInitializeMoveSizeDataProgrammaticArrangement((__int64)a1, v18, v30, 1, (__int64)v39, &v31);
  v40 = *v34;
  TransformShellProvidedRectangles(v39, v19, (v18 != 4) + 1, &v40, 0LL, v10, &v40.left, 0LL);
  if ( v19 != MonitorFromWindow((__int64)a1, 2u) )
  {
    v20 = 1;
LABEL_34:
    v21 = v39[27];
    if ( v20 )
      v21 = v19;
    v39[27] = v21;
    *(struct tagRECT *)&v39[29] = v40;
    if ( !v6 )
      HIDWORD(v39[40]) |= 0x20u;
    xxxApplyArrangeAction((__int64)a1, v30, v18, v31, (struct _MOVESIZEDATA *)v39);
    goto LABEL_39;
  }
  v20 = 0;
  if ( (v30 != 2 || v18 != 4) && (v30 != 3 || v18 != 5) )
    goto LABEL_34;
  if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v40) )
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v40.left,
      (unsigned int)v40.top,
      v40.right - v40.left,
      v40.bottom - v40.top,
      v6 ? 3146244 : 3146260);
LABEL_39:
  ThreadUnlock1(v23, v22);
  if ( *((char *)a1 + 60) < 0 )
    goto LABEL_54;
  v24 = *((_BYTE *)a1 + 305) & 3;
  if ( v24 == 3 || !v24 )
    goto LABEL_54;
  if ( v6 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 88LL) != a1) )
  {
    *(_DWORD *)(v35 + 440) |= 0x20u;
    xxxActivateWindow(a1, 1LL);
  }
  if ( !IsLeftOrRightArranged(a1) )
  {
LABEL_54:
    v25 = 2;
    goto LABEL_55;
  }
  SetOrClrWF(1, a1, 0xFB01u, 1);
  v25 = 0;
LABEL_55:
  v26 = ThreadUnlock1(v5, a2);
  if ( v26 )
  {
    if ( !v32 )
    {
      memset(v38, 0, sizeof(v38));
      v38[0] = *(_QWORD *)a1;
      v38[2] = v25;
      LODWORD(v38[1]) = 2;
      v38[3] = 0LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v38);
    }
    if ( v6 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v26 + 16), 0);
    if ( !v25 )
    {
      if ( a3 )
      {
        Prop = (_OWORD *)GetProp((__int64)a1, atomCheckpointProp, 1);
        if ( Prop )
          *Prop = *(_OWORD *)a3;
      }
    }
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, v27) )
      xxxNotifyShellTrackedWindowPosChanged((__int64)a1, 1, v29);
  }
  LOBYTE(v7) = v25 == 0;
  return v7;
}

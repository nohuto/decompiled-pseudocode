/*
 * XREFs of xxxEndSetWindowArrangement @ 0x1C01DDFF4
 * Callers:
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B9320 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01D7A48 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01D7FD8 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01D8748 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01D87E8 (-IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01D91F8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01DAB38 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C01DCDE8 (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxEndSetWindowArrangement(struct tagWND *a1, struct tagRECT *a2, __int64 a3, char a4)
{
  unsigned int v5; // r13d
  __int64 v6; // r9
  BOOL v7; // r14d
  unsigned int v8; // ebx
  __int64 v12; // r15
  __int64 v14; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  char OverlapCoordinatesForArrangement; // al
  int v19; // r12d
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r15
  _OWORD *Prop; // rax
  __int64 v42; // r8
  unsigned int v43; // [rsp+44h] [rbp-BCh]
  unsigned int v44; // [rsp+48h] [rbp-B8h]
  unsigned int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  struct tagRECT *v48; // [rsp+60h] [rbp-A0h]
  struct tagRECT v49; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v50[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v51[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v52[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[6]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v55[44]; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v56; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v57[2]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v58[2]; // [rsp+280h] [rbp+180h] BYREF

  v5 = 2;
  v48 = a2;
  v6 = a4 & 2;
  v46 = v6;
  v7 = (a4 & 1) == 0;
  v47 = gptiCurrent;
  v8 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 328LL);
  if ( !v12 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, v6);
  v51[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v51;
  v51[1] = v12;
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( !*(_QWORD *)(v47 + 648) )
  {
    v16 = MonitorFromRect(a2, 0, 0x12u);
    v17 = v16;
    if ( !v16 )
      goto LABEL_58;
    v49 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v53, v16, (struct tagWND *)v12);
    if ( !(unsigned int)IntersectRect(v57, &a2->left, &v49.left) )
      goto LABEL_58;
    ThreadWin32Thread = v57[0] - *(_QWORD *)&a2->left;
    if ( v57[0] == *(_QWORD *)&a2->left )
      ThreadWin32Thread = v57[1] - *(_QWORD *)&a2->right;
    if ( ThreadWin32Thread )
      goto LABEL_58;
    OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v49, a2, 1);
    v14 = 63745LL;
    if ( (OverlapCoordinatesForArrangement & 3) != 3 )
      v14 = 0LL;
    if ( (OverlapCoordinatesForArrangement & 9) == 9 )
      v14 = 63745LL;
    ThreadWin32Thread = (unsigned int)v14 | 0xF902;
    if ( (OverlapCoordinatesForArrangement & 6) != 6 )
      ThreadWin32Thread = (unsigned int)v14;
    v19 = ThreadWin32Thread | 0xF902;
    if ( (OverlapCoordinatesForArrangement & 0xC) != 0xC )
      v19 = ThreadWin32Thread;
    if ( !v19 )
      goto LABEL_58;
    if ( v19 == 63747 )
      goto LABEL_58;
    v44 = (v19 != 63745) + 4;
    if ( !(unsigned int)ArrangeActionCompatibleWithStyle((__int64)a1, v44) )
      goto LABEL_58;
    v43 = EvaluateArrangeState((__int64)a1);
    if ( v43 == 6 || (*((_BYTE *)a1 + 71) & 0x10) == 0 )
      goto LABEL_58;
    if ( a3 )
    {
      if ( !(unsigned int)IntersectRect(v58, (int *)a3, &v49.left) )
        goto LABEL_58;
      ThreadWin32Thread = v58[0] - *(_QWORD *)a3;
      if ( v58[0] == *(_QWORD *)a3 )
        ThreadWin32Thread = v58[1] - *(_QWORD *)(a3 + 8);
      if ( ThreadWin32Thread
        || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v22, v23) + 456) + 224LL) & 1) == 0
        && (v24 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v20, v21) + 456),
            (*(_BYTE *)(v24 + 224) & 0x20) == 0)
        && (CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v24, v14, v20, v21),
            v14 = 511LL,
            ((*((_DWORD *)a1 + 92) >> 8) & 0x1FF) != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF))
        && !(unsigned int)TransformRectBetweenCoordinateSpaces(a3, a3, a1, v12) )
      {
LABEL_58:
        v5 = 2;
        goto LABEL_59;
      }
    }
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v20, v21);
    v52[0] = *(_QWORD *)(v26 + 392);
    *(_QWORD *)(v26 + 392) = v52;
    v52[1] = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    memset(v55, 0, 0x158uLL);
    if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
      __fastfail(3u);
    v55[1] = &gActiveMoveSizeDataList;
    v55[0] = gActiveMoveSizeDataList;
    *(_QWORD *)(gActiveMoveSizeDataList + 8) = v55;
    gActiveMoveSizeDataList = (__int64)v55;
    PushW32ThreadLock((__int64)v55, v50, (__int64)EditionRemoveFromMsdList, v27);
    xxxInitializeMoveSizeDataProgrammaticArrangement((__int64)a1, v44, v43, 1, (__int64)v55, &v45);
    v56 = *v48;
    TransformShellProvidedRectangles((__int64)v55, v17, (v19 != 63745) + 1, &v56, 0LL, v12, &v56.left, 0LL);
    if ( (struct tagMONITOR *)v17 == _MonitorFromWindowInternal(a1, 2, 0) )
    {
      v28 = 0;
      if ( v43 == 2 && v19 == 63745 || v43 == 3 && v19 != 63745 )
      {
        if ( !(unsigned int)IsEqualRectToArrangedWindow(a1, &v56) )
          xxxSetWindowPos(
            a1,
            0LL,
            (unsigned int)v56.left,
            (unsigned int)v56.top,
            v56.right - v56.left,
            v56.bottom - v56.top,
            16 * !v7 + 3146244);
        goto LABEL_40;
      }
    }
    else
    {
      v28 = 1;
    }
    v29 = v55[29];
    if ( v28 )
      v29 = v17;
    v55[29] = v29;
    *(struct tagRECT *)&v55[31] = v56;
    if ( !v7 )
      HIDWORD(v55[42]) |= 0x20u;
    xxxApplyArrangeAction(a1, v43, v44, v45, (struct _MOVESIZEDATA *)v55);
LABEL_40:
    ThreadUnlock1(v31, v30);
    if ( *((char *)a1 + 60) >= 0 )
    {
      v35 = *((_BYTE *)a1 + 305) & 3;
      if ( v35 != 3 )
      {
        if ( v35 )
        {
          if ( v7 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 120LL) != a1) )
          {
            *(_DWORD *)(v47 + 464) |= 0x20u;
            xxxActivateWindow(a1, 1LL);
          }
          if ( IsLeftOrRightArranged(a1) )
          {
            SetOrClrWF(1, a1, 0xFB01u, 1);
            v5 = 0;
          }
          else
          {
            v5 = 2;
          }
          PopAndFreeAlwaysW32ThreadLock((__int64)v50, v36, v37, v38);
          goto LABEL_59;
        }
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v50, v32, v33, v34);
    goto LABEL_58;
  }
LABEL_59:
  v40 = ThreadUnlock1(ThreadWin32Thread, v14);
  if ( v40 )
  {
    if ( !v46 )
    {
      memset(v54, 0, 0x28uLL);
      v54[0] = *(_QWORD *)a1;
      v54[2] = v5;
      LODWORD(v54[1]) = 2;
      v54[3] = 0LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v54);
    }
    if ( v7 )
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v40 + 16), 0);
    if ( !v5 )
    {
      if ( a3 )
      {
        Prop = (_OWORD *)GetProp((__int64)a1, atomCheckpointProp, 1);
        if ( Prop )
          *Prop = *(_OWORD *)a3;
      }
    }
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, v39) )
      xxxNotifyShellTrackedWindowPosChanged((__int64)a1, 1, v42);
  }
  LOBYTE(v8) = v5 == 0;
  return v8;
}

/*
 * XREFs of ProcessQueuedMouseEvents @ 0x1C00FF6A4
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00EB950 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01D5280 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0221A98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     RawInputRequestedForMouse @ 0x1C00BD9C8 (RawInputRequestedForMouse.c)
 *     PostMove @ 0x1C00CC9B8 (PostMove.c)
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C010CDD0 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C019CB40 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C019EE08 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     UnqueueMouseEvent @ 0x1C01A0E54 (UnqueueMouseEvent.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 */

__int64 ProcessQueuedMouseEvents()
{
  unsigned __int64 *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  BOOL v7; // r9d
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // [rsp+28h] [rbp-59h]
  __int64 v24; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int16 v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-31h]
  __int64 v28; // [rsp+58h] [rbp-29h]
  unsigned int v29[2]; // [rsp+60h] [rbp-21h]
  __int64 v30; // [rsp+68h] [rbp-19h]
  void *v31; // [rsp+70h] [rbp-11h]
  int v32; // [rsp+78h] [rbp-9h]
  unsigned __int64 v33; // [rsp+7Ch] [rbp-5h] BYREF
  BOOL v34; // [rsp+84h] [rbp+3h]
  _MOUSE_INPUT_DATA v35; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+A8h] [rbp+27h]

  if ( (gdwMitConfig & 1) != 0 )
    return ProcessMouseEvent();
  EtwTraceStartProcessQueuedMouseEvents();
  while ( (unsigned int)UnqueueMouseEvent(&v26) )
  {
    EnterCrit(0LL, 1LL);
    v1 = 0LL;
    if ( (unsigned int)IsDwmInputThread(v3, v2, v4, v5, v23) && (v32 & 1) != 0 && (v32 & 0x800) != 0 )
    {
      v6 = v33;
      v1 = &v33;
      v7 = v34;
    }
    else
    {
      v8 = *(_QWORD *)(gptiCurrent + 376LL);
      v6 = *(_QWORD *)(v8 + 824);
      v7 = *(int *)(v8 + 12) < 0;
    }
    if ( (v32 & 0x20) == 0 && (v32 & 1) != 0 )
    {
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 380LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v6 <= (unsigned int)v9 )
          {
            if ( (_DWORD)v6 != (_DWORD)v9
              || (v10 = HIDWORD(v6), v11 = HIDWORD(v9), (_DWORD)v10 != (_DWORD)v11)
              && (_DWORD)v10 != -1
              && (_DWORD)v11 != -1 )
            {
              if ( !v7 )
              {
                EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
    LODWORD(v23) = 0;
    CInputGlobals::UpdateInputGlobals(gpInputGlobals, *(_QWORD *)v29, 2LL, v26);
    *(_QWORD *)(gpsi + 5368LL) = v28;
    *(_QWORD *)(gpsi + 5360LL) = v36;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      PostRawMouseInput(gpqForeground, v29[0], v31, &v35);
      v12 = (__int64 *)gpsi;
    }
    v13 = *v12;
    if ( qword_1C03388A0 != *(_QWORD *)(*v12 + 5368) )
    {
      v16 = 1;
LABEL_30:
      if ( (v32 & 0x200) == 0 )
      {
        gdwMouseMoveExtraInfo = v27;
        qword_1C03388A0 = *(_QWORD *)(v13 + 5368);
        qword_1C0338898 = *(_QWORD *)(v13 + 5360);
        if ( gHidCounters[1] )
          PostRawMouseInput(gpqForeground, v29[0], v31, &v35);
        if ( gpqForeground )
        {
          v18 = *(_QWORD *)(gpqForeground + 72LL);
          if ( v18 )
            v17 = *(_QWORD *)(v18 + 16);
          else
            v17 = *(_QWORD *)(gpqForeground + 56LL);
        }
        else
        {
          v17 = 0LL;
        }
        if ( (unsigned int)HasHidTable(v17)
          && (v19 = *(_QWORD *)(v17 + 376), (*(_DWORD *)(*(_QWORD *)(v19 + 776) + 100LL) & 2) != 0) )
        {
          v20 = *(unsigned int *)(v17 + 340);
          if ( (int)v20 < 0 )
            v20 = *(unsigned int *)(v19 + 280);
          v21 = (unsigned int)MonitorFlagsFromDpiAwarenessContext(v20);
          PhysicalToLogicalDPIPoint(&v24, gpsi + 5368LL, v21, 0LL);
          UpdateLogicalCursorPos(v24, (unsigned int)v21);
        }
        else
        {
          GetMouseEventInputSource(&v26, v25);
          v22 = zzzSetFMouseMovedWorker(v30, v25, (unsigned __int8)(v32 & 2) >> 1, v1, v16 ^ 1u);
          if ( v22 )
          {
            if ( (v32 & 2) != 0 )
            {
              v13 = *(unsigned int *)(v22 + 340);
              if ( (v13 & 0x20) != 0 )
              {
                gdwMouseMoveExtraInfo = v27;
                PostMove((struct tagQ *)v22, 1);
              }
            }
          }
        }
        gdwMouseMoveExtraInfo = v27;
      }
      goto LABEL_48;
    }
    v16 = 0;
    if ( qword_1C0338898 != *(_QWORD *)(v13 + 5360) )
      goto LABEL_30;
LABEL_48:
    if ( v26 )
      xxxDoButtonEvent((struct tagMOUSEEVENT *)&v26);
LABEL_21:
    if ( (v32 & 0x80u) != 0 )
      WakeInjectedFlushWaiter();
    UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  }
  return EtwTraceStopProcessQueuedMouseEvents();
}

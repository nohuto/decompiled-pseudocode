/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C00BBD80 (EditionCommitMousePosAndMove.c)
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     xxxMoveEvent @ 0x1C01A1E40 (xxxMoveEvent.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01D57B4 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00BC228 (UpdateCursorImageForMonitorDpi.c)
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 *     UsingPenCursors @ 0x1C00BD648 (UsingPenCursors.c)
 *     EditionPostRawMouseInputMessage @ 0x1C00BD670 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C00BD9C8 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C00BD9F0 (FixupPromotedMouseExtraInfoForHook.c)
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v12; // r9
  __int64 v14; // rdx
  unsigned int v15; // r11d
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // esi
  unsigned int v20; // r11d
  __int64 Valid; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v29; // r14d
  int v30; // ebx
  unsigned int v31; // esi
  __int64 v32; // rcx
  unsigned __int16 v33; // bx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int16 v44; // ax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _WORD v54[2]; // [rsp+38h] [rbp-59h] BYREF
  int v55; // [rsp+3Ch] [rbp-55h]
  int v56; // [rsp+40h] [rbp-51h]
  int v57; // [rsp+44h] [rbp-4Dh]
  int v58; // [rsp+48h] [rbp-49h]
  int v59; // [rsp+4Ch] [rbp-45h]
  int v60; // [rsp+50h] [rbp-41h] BYREF
  int v61; // [rsp+58h] [rbp-39h] BYREF
  __int64 v62; // [rsp+60h] [rbp-31h]
  int v63[6]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v64; // [rsp+80h] [rbp-11h]

  v12 = a2;
  v14 = gptiRit;
  v15 = 1;
  v16 = *(__int64 **)(gptiRit + 416LL);
  v17 = *v16;
  v18 = (unsigned int)(*(_DWORD *)(gptiRit + 600LL) | *(_DWORD *)(*v16 + 16));
  if ( ((*(_WORD *)(gptiRit + 600LL) | *(_WORD *)(*v16 + 16)) & 0x8000) != 0 )
  {
    v19 = 0;
    v63[2] = 0;
    v63[0] = a1;
    v63[1] = v12;
    v63[3] = a8;
    v63[4] = a6;
    v64 = FixupPromotedMouseExtraInfoForHook(a5, a3);
    EnterCrit(0LL, v20);
    Valid = PhkFirstValid(gptiRit, 14);
    if ( Valid )
    {
      v26 = *(_QWORD *)(gptiCurrent + 1248LL);
      *(_QWORD *)(gptiCurrent + 1248LL) = v63;
      v27 = xxxCallHook2(Valid, 0, 512LL, v63, &v60) == 0;
      *(_QWORD *)(gptiCurrent + 1248LL) = v26;
      v28 = *(_QWORD *)(gptiCurrent + 400LL);
      LOBYTE(v19) = !v27;
      v23 = *(unsigned __int16 *)(v28 + 4);
      v22 = (unsigned __int16)(v23 & *(_WORD *)(v28 + 10));
      if ( (v22 & 0xFFFFFDFF) != 0 )
        SetWakeBit(gptiCurrent, v23 & 0xFDFF);
    }
    UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
    if ( v19 )
      return 0LL;
    v15 = 1;
  }
  v29 = 1;
  v30 = 2;
  if ( a5 && (unsigned int)RawInputRequestedForMouse(v17, v14, v18, v12) )
  {
    EnterCrit(0LL, v15);
    v44 = *(_WORD *)(a5 + 2);
    v62 = a4;
    v54[0] = v44 & 0xFE7F;
    v55 = *(_DWORD *)(a5 + 4);
    v56 = *(_DWORD *)(a5 + 8);
    v57 = *(_DWORD *)(a5 + 12);
    v58 = *(_DWORD *)(a5 + 16);
    v59 = *(_DWORD *)(a5 + 20);
    v61 = a4 != 0 ? 2 : 0;
    if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a6, &v61, v54) )
    {
      v29 = 5;
      *(_WORD *)a5 = -1;
    }
    UserSessionSwitchLeaveCrit(v46, v45, v47, v48);
    v15 = 1;
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 416LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, v15);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8LL, 1LL);
    UserSessionSwitchLeaveCrit(v50, v49, v51, v52);
  }
  v31 = 0;
  if ( a5 && (*(_BYTE *)(a5 + 2) & 1) == 0 )
  {
    EnterCrit(0LL, 1LL);
    v43 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v31 = 2;
      if ( gspwndInternalCapture )
      {
        v43 = *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 592LL);
        if ( v43 )
        {
          if ( (*(_DWORD *)(v43 + 180) & 0xC00) != 0 )
            v31 = 3;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v43, v40, v41, v42);
  }
  v32 = a2;
  *(_DWORD *)gptCursorAsync = a1;
  *(_DWORD *)&gptCursorAsync[2] = a2;
  if ( a10
    && (unsigned __int8)CCursorClip::BoundPoint(gpCursorClip, *(_QWORD *)gptCursorAsync, v31, *(_QWORD *)gptCursorAsync) )
  {
    v29 |= 2u;
  }
  if ( !a5 || (v32 = 256LL, (*(_WORD *)(a5 + 2) & 0x100) == 0) )
    v30 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v32, v14, v18, v12) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
    }
    EtwTraceGreMovePointerBegin(a6, *(unsigned int *)gptCursorAsync, *(unsigned int *)&gptCursorAsync[2]);
    GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)gptCursorAsync, *(_DWORD *)&gptCursorAsync[2], v30);
    EtwTraceGreMovePointerEnd(a6, *(unsigned int *)gptCursorAsync, *(unsigned int *)&gptCursorAsync[2]);
  }
  v33 = 0;
  gqpcMouseMoveTimeStamp = a7;
  gdwMouseMoveTimeStamp = a6;
  if ( a9 )
  {
    EnterCrit(0LL, 1LL);
    v34 = ValidateHmonitorNoRip(ghCursorMonitor);
    if ( v34 )
      v33 = *(_WORD *)(*(_QWORD *)(v34 + 40) + 128LL);
    if ( MonitorFromPoint(*(__int64 *)gptCursorAsync, 0x22u) )
      ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(__int64 *)gptCursorAsync, 0x22u);
    else
      ghCursorMonitor = 0LL;
    UpdateCursorImageForMonitorDpi(v33);
    UserSessionSwitchLeaveCrit(v36, v35, v37, v38);
  }
  if ( !gProtocolType )
  {
    if ( gMouseTrails )
      _InterlockedExchange(&gMouseTrailsToHide, gMouseTrails + 1);
  }
  return v29;
}

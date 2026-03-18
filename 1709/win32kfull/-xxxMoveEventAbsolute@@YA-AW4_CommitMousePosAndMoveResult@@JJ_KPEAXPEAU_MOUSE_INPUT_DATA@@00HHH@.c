/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C0052890 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0052930 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C0052C90 (RawInputRequestedForMouse.c)
 *     UsingPenCursors @ 0x1C0053348 (UsingPenCursors.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0053368 (UpdateCursorImageForMonitorDpi.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        unsigned int a1,
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
  __int64 v12; // rbx
  int v13; // esi
  __int64 Valid; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // ebx
  int v25; // ebx
  unsigned __int16 v26; // bx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD v38[2]; // [rsp+30h] [rbp-61h] BYREF
  _WORD v39[2]; // [rsp+40h] [rbp-51h] BYREF
  int v40; // [rsp+44h] [rbp-4Dh]
  int v41; // [rsp+48h] [rbp-49h]
  int v42; // [rsp+4Ch] [rbp-45h]
  int v43; // [rsp+50h] [rbp-41h]
  int v44; // [rsp+54h] [rbp-3Dh]
  _BYTE v45[8]; // [rsp+58h] [rbp-39h] BYREF
  _DWORD v46[6]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v47; // [rsp+78h] [rbp-19h]

  v12 = a4;
  v38[0] = a4;
  if ( ((*(_DWORD *)(gptiRit + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiRit + 440LL) + 16LL)) & 0x8000) != 0 )
  {
    v13 = 0;
    v46[2] = 0;
    v46[0] = a1;
    v46[1] = a2;
    v46[3] = a8;
    v46[4] = a6;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v47 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14LL);
    UserSessionSwitchLeaveCrit(v16, v15);
    if ( Valid )
    {
      EnterCrit(0LL, 1LL);
      v17 = PhkFirstValid(gptiRit, 14LL);
      if ( v17 )
      {
        v20 = *(_QWORD *)(gptiCurrent + 1336LL);
        *(_QWORD *)(gptiCurrent + 1336LL) = v46;
        v21 = xxxCallHook2(v17, 0, 512, (unsigned int)v46, (__int64)v45) == 0;
        *(_QWORD *)(gptiCurrent + 1336LL) = v20;
        v22 = *(_QWORD *)(gptiCurrent + 424LL);
        LOBYTE(v13) = !v21;
        v18 = *(unsigned __int16 *)(v22 + 4);
        if ( ((unsigned __int16)v18 & *(_WORD *)(v22 + 10) & 0xFDFF) != 0 )
          SetWakeBit(gptiCurrent, (unsigned int)v18 & 0xFFFFFDFF);
      }
      UserSessionSwitchLeaveCrit(v19, v18);
      if ( v13 )
        return 0LL;
    }
    v12 = v38[0];
  }
  v23 = 1;
  if ( a5 && (unsigned int)RawInputRequestedForMouse() )
  {
    EnterCrit(0LL, 1LL);
    v33 = *(_WORD *)(a5 + 2);
    v38[1] = v12;
    v39[0] = v33 & 0xFE7F;
    v40 = *(_DWORD *)(a5 + 4);
    v41 = *(_DWORD *)(a5 + 8);
    v42 = *(_DWORD *)(a5 + 12);
    v43 = *(_DWORD *)(a5 + 16);
    v44 = *(_DWORD *)(a5 + 20);
    LODWORD(v38[0]) = v12 != 0 ? 2 : 0;
    if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a6, (__int64)v38, (__int64)v39) )
    {
      v23 = 5;
      *(_WORD *)a5 = -1;
    }
    UserSessionSwitchLeaveCrit(v35, v34);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 440LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8, 1);
    UserSessionSwitchLeaveCrit(v37, v36);
  }
  v24 = 0;
  if ( a5 && (*(_BYTE *)(a5 + 2) & 1) == 0 )
  {
    EnterCrit(0LL, 1LL);
    v32 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v24 = 2;
      if ( gspwndInternalCapture )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 648LL);
        if ( v32 )
        {
          if ( (*(_DWORD *)(v32 + 196) & 0xC00) != 0 )
            v24 = 3;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v32, v31);
  }
  gptCursorAsync[0] = a1;
  gptCursorAsync[1] = a2;
  if ( a10
    && (unsigned __int8)CCursorClip::BoundPoint(gpCursorClip, *(_QWORD *)gptCursorAsync, v24, *(_QWORD *)gptCursorAsync) )
  {
    v23 |= 2u;
  }
  if ( a5 && (*(_WORD *)(a5 + 2) & 0x100) != 0 )
    v25 = 2;
  else
    v25 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors() )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
    }
    EtwTraceGreMovePointerBegin(a6, gptCursorAsync[0], gptCursorAsync[1]);
    GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), gptCursorAsync[0], gptCursorAsync[1], v25);
    EtwTraceGreMovePointerEnd(a6, gptCursorAsync[0], gptCursorAsync[1]);
  }
  v26 = 0;
  gqpcMouseMoveTimeStamp = a7;
  gdwMouseMoveTimeStamp = a6;
  if ( a9 )
  {
    EnterCrit(0LL, 1LL);
    v27 = ValidateHmonitorNoRip(ghCursorMonitor);
    if ( v27 )
      v26 = *(_WORD *)(*(_QWORD *)(v27 + 40) + 64LL);
    if ( MonitorFromPoint(*(_QWORD *)gptCursorAsync, 2LL, 18LL) )
      ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)gptCursorAsync, 2LL, 18LL);
    else
      ghCursorMonitor = 0LL;
    UpdateCursorImageForMonitorDpi(v26);
    UserSessionSwitchLeaveCrit(v29, v28);
  }
  if ( !gProtocolType )
  {
    if ( gMouseTrails )
      _InterlockedExchange(&gMouseTrailsToHide, gMouseTrails + 1);
  }
  return v23;
}

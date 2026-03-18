/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00EB950
 * Callers:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     CheckGrantedAccess @ 0x1C00EBE68 (CheckGrantedAccess.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C01A1E40 (xxxMoveEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  __int16 v21; // ax
  int v22; // esi
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // edi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  ULONG v32; // eax
  __int64 v33; // r8
  int v34; // eax
  int v35; // [rsp+90h] [rbp-51h]
  unsigned __int16 v36; // [rsp+94h] [rbp-4Dh]
  int v38; // [rsp+9Ch] [rbp-45h]
  __int64 v40; // [rsp+A8h] [rbp-39h]
  __int64 v41; // [rsp+B0h] [rbp-31h] BYREF
  __int16 v42; // [rsp+B8h] [rbp-29h] BYREF
  __int16 v43; // [rsp+BAh] [rbp-27h]
  unsigned int v44; // [rsp+BCh] [rbp-25h]
  int v45; // [rsp+C0h] [rbp-21h]
  unsigned int v46; // [rsp+C4h] [rbp-1Dh]
  unsigned int v47; // [rsp+C8h] [rbp-19h]
  int v48; // [rsp+CCh] [rbp-15h]

  v35 = 1;
  v41 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput
    && ((unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 776LL), 32LL)
     || PsGetCurrentProcess(v12) == gpepCSRSS) )
  {
    if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
      return 1LL;
    v38 = a4 & 0x100000;
    if ( (a4 & 0x100000) != 0 )
    {
      if ( (a4 & 0x1FF) != 0 )
        return 1LL;
    }
    else if ( gpqForeground )
    {
      v13 = *(_QWORD *)(gptiCurrent + 376LL);
      v14 = *(_QWORD *)(gpqForeground + 380LL);
      v15 = *(_QWORD *)(v13 + 824);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v15 <= (unsigned int)v14 )
        {
          if ( (_DWORD)v15 != (_DWORD)v14
            || (v30 = HIDWORD(v15), v31 = HIDWORD(v14), (_DWORD)v30 != (_DWORD)v31)
            && (_DWORD)v31 != -1
            && (_DWORD)v30 != -1 )
          {
            if ( *(int *)(v13 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
            {
              EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
              return 1LL;
            }
          }
        }
      }
    }
    v16 = a5;
    EtwTraceBeginInjectMouse((unsigned int)a5, a1, a2);
    if ( a5 )
    {
      v17 = a6;
    }
    else
    {
      v16 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v17 = MilliSecsToQpcCount(v16);
    }
    v40 = v17;
    gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
    if ( (a4 & 0x50000) != 0x50000 )
    {
      v18 = 0LL;
      v19 = a4 & 0x187E;
      v36 = 0;
      if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
      {
        v19 = a4 & 0x7E;
      }
      else if ( (a4 & 0x1800) == 0x1800 )
      {
        v19 = a4 & 0x7E;
      }
      else if ( (a4 & 0x1800) != 0 )
      {
        if ( a3 > 32766 )
        {
          v18 = 0x7FFFLL;
        }
        else
        {
          v18 = (unsigned int)a3;
          if ( a3 < -32768 )
            v18 = 4294934528LL;
        }
        v36 = v18;
      }
      else if ( (a3 & 0xFFFFFFFC) == 0 )
      {
        if ( (a4 & 0x80u) != 0 )
        {
          if ( (a3 & 1) != 0 )
            v19 |= 0x80u;
          if ( (a3 & 2) != 0 )
            v19 |= 0x200u;
        }
        if ( (a4 & 0x100) != 0 )
        {
          if ( (a3 & 1) != 0 )
            v19 |= 0x100u;
          if ( (a3 & 2) != 0 )
            v19 |= 0x400u;
        }
      }
      v20 = v19 >> 1;
      v42 = -2;
      v21 = (a4 & 0x8000) != 0;
      v43 = v21;
      if ( (a4 & 0x4000) != 0 )
      {
        v21 |= 2u;
        v43 = v21;
      }
      if ( (a4 & 0x2000) != 0 )
      {
        v21 |= 8u;
        v43 = v21;
      }
      if ( (a4 & 0x20000) != 0 )
      {
        v21 |= 0x20u;
        v43 = v21;
      }
      v22 = 16;
      if ( (a4 & 0x10000) != 0 )
      {
        v21 |= 0x10u;
        v35 = 0;
        v43 = v21;
      }
      v23 = 64LL;
      if ( (a4 & 0x40000) != 0 )
      {
        v35 = 0;
        v43 = v21 | 0x40;
      }
      v44 = v20;
      v24 = HIWORD(v20);
      if ( (_DWORD)v18 )
        v24 = v18;
      v46 = a1;
      v45 = 0;
      HIWORD(v44) = v24;
      v47 = a2;
      v48 = a7;
      if ( gdwInAtomicOperation )
      {
        v23 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v23, gdwInAtomicOperation, v18, 1LL);
      if ( (gdwMitConfig & 1) != 0 )
      {
        if ( (a4 & 1) != 0 )
        {
          if ( !v35 )
            v22 = 18;
        }
        else
        {
          v46 = 0;
          v22 = 24;
          v47 = 0;
          v43 &= ~1u;
        }
        v25 = v22 | 0xA0;
        if ( !v38 )
          v25 = v22;
        v26 = v25;
        if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) < 0 )
          v26 = v25 | 0x40;
        v27 = v26 | 0x100;
        if ( a8 )
          v27 = v26;
        SynthesizeMouseInput(0LL, &v42, v16, v40, v27);
        v28 = a1;
      }
      else
      {
        if ( (a4 & 1) != 0 )
        {
          v33 = a4;
          v28 = a1;
          xxxMoveEvent(a1, a2, v33, a7);
        }
        else
        {
          v28 = a1;
        }
        if ( !gbEnforceUIPI || (v34 = 1, *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) >= 0) )
          v34 = 0;
        QueueMouseEvent(
          (unsigned __int16)v20,
          v36,
          a7,
          *(_DWORD *)gptCursorAsync,
          v16,
          v40,
          0LL,
          (__int64)&v42,
          (__int64)&v41,
          1,
          0,
          v38 != 0,
          0,
          v34,
          v38 != 0,
          0,
          0LL,
          0LL);
      }
      if ( a8 )
        ProcessQueuedMouseEvents();
      EnterCrit(0LL, 1LL);
      if ( (gdwPUDFlags & 0x100) != 0 )
        ResetAccessibilityCountersOnMouseInput();
      EtwTraceEndInjectMouse((unsigned int)v16, v28, a2);
      return 1LL;
    }
  }
  else
  {
    v32 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v32);
  }
  return 0LL;
}

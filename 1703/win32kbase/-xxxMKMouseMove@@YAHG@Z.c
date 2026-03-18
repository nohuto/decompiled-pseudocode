/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C01193C0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     MouseMove @ 0x1C012EE50 (MouseMove.c)
 *     ApiSetEditionMouseMove @ 0x1C013B70C (ApiSetEditionMouseMove.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013C5B4 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall xxxMKMouseMove(__int16 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rbx
  LARGE_INTEGER v15; // r8
  void (__fastcall *v16)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  __int64 v18; // [rsp+20h] [rbp-18h]

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    gMKDeltaX = (char)a1;
    gMKDeltaY = SHIBYTE(a1);
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    v1 = (unsigned int)gMKDeltaX;
    v2 = (unsigned int)gMKDeltaY;
    if ( (dword_1C018AD44 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v3 = 4 * (unsigned __int8)byte_1C018AC82;
      v1 = (unsigned int)(v3 * gMKDeltaX);
      v2 = (unsigned int)(v3 * gMKDeltaY);
    }
    if ( (gdwMitConfig & 1) != 0 )
      MouseMove(v1, v2);
    else
      ApiSetEditionMouseMove(v1, v2);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
    if ( v12 )
    {
      v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v13.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v13.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
      if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v18) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v15.QuadPart,
          0LL,
          v18,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    if ( !dword_1C018AD78 || (gdwPUDFlags & 0x2000) != 0 )
    {
      giMouseMoveTable = 0;
      v16 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v16 = xxxMKMoveAccelCursorTimer;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v16);
    }
  }
  return 0LL;
}

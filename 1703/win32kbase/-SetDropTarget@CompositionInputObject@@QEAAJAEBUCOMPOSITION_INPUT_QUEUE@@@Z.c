/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0010728
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C0087D80 (NtCompositionSetDropTarget.c)
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010890 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0011130 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(
        PVOID Object,
        const struct COMPOSITION_INPUT_QUEUE *a2,
        __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  int v14; // ebx
  CInputSink *v16; // [rsp+60h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Object, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v11) = byte_1C0186D98 - 1;
      Template_xqx(
        v11,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v13,
        v12.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  v14 = CompositionSurfaceObject::LockForWrite(Object, &v16);
  if ( v14 >= 0 )
  {
    v14 = CInputSink::SetDropTarget(v16, a2);
    CInputSink::UnlockAndRelease(v16);
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v14;
}

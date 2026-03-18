/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119850
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     MouseMove @ 0x1C012EE50 (MouseMove.c)
 *     ApiSetEditionMouseMove @ 0x1C013B70C (ApiSetEditionMouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1)
{
  char v1; // al
  int v2; // ebx
  unsigned int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rbx
  LARGE_INTEGER v17; // r8
  __int64 v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]

  if ( (dword_1C018AD44 & 0x40) == 0 )
    goto LABEL_6;
  v1 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v1 & 3) != 0 )
  {
    v2 = 1;
    goto LABEL_7;
  }
  if ( (v1 & 0xC) == 0 )
  {
LABEL_6:
    v3 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C018AC81;
    v2 = (unsigned __int8)byte_1C018AC82[v3];
    giMouseMoveTable = v3 + 1;
    if ( !v2 )
      return;
    goto LABEL_7;
  }
  v2 = 4 * (unsigned __int8)byte_1C018AC82[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  v4 = (unsigned int)(v2 * gMKDeltaY);
  v5 = (unsigned int)(v2 * gMKDeltaX);
  if ( (gdwMitConfig & 1) != 0 )
    MouseMove(v5, v4);
  else
    ApiSetEditionMouseMove(v5, v4);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v12, v11, v13);
  if ( v14 )
  {
    v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v19 = 0;
      LOBYTE(v15.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v15.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v17.QuadPart,
        v16.QuadPart,
        v19,
        gullUserCritAcquireToken);
    }
    if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v18) = 1000 * v16.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v17.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
}

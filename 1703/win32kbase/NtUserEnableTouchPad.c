/*
 * XREFs of NtUserEnableTouchPad @ 0x1C00E0CE0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceUIPISystemError @ 0x1C0088050 (EtwTraceUIPISystemError.c)
 *     EnablePTPDevices @ 0x1C00D8C90 (EnablePTPDevices.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER v12; // r8
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-28h]
  char v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h]

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v7, v6, v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v10.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v10.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v12.QuadPart,
        v11.QuadPart,
        0,
        gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v18) = 1000 * v11.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  v19 = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v19);
  v20 = -4294955008LL;
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 824LL), -4294955008LL, 0) )
  {
    v13 = EnablePTPDevices(v3 != 0);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 47), 0LL, 13);
    v13 = 0;
    UserSetLastError(5LL, v14, v15, v16);
  }
  if ( !v19 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v19);
  }
  UserSessionSwitchLeaveCrit();
  return v13;
}

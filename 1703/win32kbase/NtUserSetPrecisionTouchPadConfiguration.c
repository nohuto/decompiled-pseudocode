/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560
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
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00D8DC0 (_SetPrecisionTouchPadConfiguration.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C013DE44 (ApiSetTelemPTPConfigUpdate.c)
 *     UserSetLastStatus @ 0x1C013E9C8 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r14
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rsi
  LARGE_INTEGER v12; // r8
  bool v13; // al
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-68h]
  _BYTE v20[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int128 v22; // [rsp+60h] [rbp-28h] BYREF
  __int64 v23; // [rsp+70h] [rbp-18h]

  v21 = 0xFFFFFFFF00002000uLL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v7, v6, v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v13 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v13 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v10.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v10.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v12.QuadPart,
          v11.QuadPart,
          0,
          gullUserCritAcquireToken,
          0);
      }
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v19) = 1000 * v11.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12.QuadPart,
        0LL,
        v19,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  v20[0] = 0;
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v20);
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 824LL), v21, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 4 > (unsigned __int64)W32UserProbeAddress || a1 + 4 < a1 )
      *(_BYTE *)W32UserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v14 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > (unsigned __int64)W32UserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)W32UserProbeAddress = 0;
      v22 = *(_OWORD *)a1;
      v23 = *(_QWORD *)(a1 + 16);
      LODWORD(v22) = 0;
      v14 = SetPrecisionTouchPadConfiguration(&v22);
      if ( v14 )
        ApiSetTelemPTPConfigUpdate();
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 47), 0LL, 13);
    v14 = 0;
    UserSetLastError(5LL, v15, v16, v17);
  }
  if ( !v20[0] )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v20);
  }
  UserSessionSwitchLeaveCrit();
  return v14;
}

/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C007D3B0 (_GetPrecisionTouchPadConfiguration.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     UserSetLastStatus @ 0x1C013E9C8 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(char *Address)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v3; // r15
  __int64 v4; // r14
  int v5; // ecx
  LARGE_INTEGER v6; // rdi
  int v7; // r8d
  int PrecisionTouchPadConfiguration; // edi
  __int64 CurrentProcessWow64Process; // rax
  bool v11; // al
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  char v14; // [rsp+88h] [rbp+10h] BYREF

  v12 = 0uLL;
  v13 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v4 = PsGetCurrentThreadWin32Thread();
  if ( v4 )
  {
    v6 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v11 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v11 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v5) = byte_1C0186D98 - 1;
        Template_xqx(
          v5,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v7,
          v6.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v6.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v7,
        0,
        1000 * v6.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v4 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  v14 = 0;
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v14);
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( Address + 4 > (char *)W32UserProbeAddress || Address + 4 < Address )
    *(_BYTE *)W32UserProbeAddress = 0;
  LODWORD(v12) = *(_DWORD *)Address;
  if ( (_DWORD)v12 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration(&v12);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(Address, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)Address = v12;
      *((_QWORD *)Address + 2) = v13;
    }
  }
  if ( !v14 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
  }
  UserSessionSwitchLeaveCrit();
  return PrecisionTouchPadConfiguration;
}

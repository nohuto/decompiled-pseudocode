/*
 * XREFs of NtUserSetSysColors @ 0x1C0063820
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     xxxSetSysColors @ 0x1C0058C04 (xxxSetSysColors.c)
 *     CreateProfileUserName @ 0x1C0063B50 (CreateProfileUserName.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetSysColors(__int64 a1, char *a2, char *a3, unsigned int a4)
{
  char *v6; // rdi
  char *v7; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // ecx
  LARGE_INTEGER v15; // rbx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rbx
  char *v19; // rax
  char *v20; // rax
  __int64 ProfileUserName; // rbx
  int v22; // r14d
  bool v24; // al
  _BYTE v25[24]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v26[24]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v27[32]; // [rsp+90h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+E0h] [rbp+8h]

  v28 = a1;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v24 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v24 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v14,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v16,
          v15.LowPart,
          0,
          (char)gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v16,
        0,
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v6 = 0LL;
    v7 = 0LL;
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( (*((_DWORD *)v9 + 110) & 0x20000000) != 0 )
    v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 47) + 720LL) + 24LL) & 8;
  else
    v17 = 0;
  if ( v17
    || !(unsigned int)CheckAccessForIntegrityLevelEx(
                        *(_QWORD *)(*((_QWORD *)v9 + 47) + 824LL),
                        0xFFFFFFFF00002000uLL,
                        0LL) )
  {
    v22 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( v28 )
    {
      v18 = 4LL * v28;
      if ( v18 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( &a2[v18] > (char *)W32UserProbeAddress || &a2[v18] < a2 )
          *(_BYTE *)W32UserProbeAddress = 0;
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( &a3[v18] > (char *)W32UserProbeAddress || &a3[v18] < a3 )
          *(_BYTE *)W32UserProbeAddress = 0;
      }
      v19 = (char *)Win32AllocPoolWithQuota(4LL * v28, 0x72637355u);
      v6 = v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      memmove(v19, a2, 4LL * v28);
      v20 = (char *)Win32AllocPoolWithQuota(4LL * v28, 0x76637355u);
      v7 = v20;
      if ( !v20 )
        ExRaiseStatus(-1073741801);
      memmove(v20, a3, 4LL * v28);
    }
    PushW32ThreadLock(v6, v27, Win32FreePool);
    PushW32ThreadLock(v7, v26, Win32FreePool);
    ProfileUserName = CreateProfileUserName(v25);
    v22 = xxxSetSysColors(ProfileUserName, v28, v6, v7, a4);
    if ( ProfileUserName )
      PopAndFreeAlwaysW32ThreadLock(v25);
    PopW32ThreadLock(v26);
    PopW32ThreadLock(v27);
    if ( v6 )
      Win32FreePool((__int64)v6);
    if ( v7 )
      Win32FreePool((__int64)v7);
  }
  UserSessionSwitchLeaveCrit();
  return v22;
}

/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C0057D70
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0055910 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C0056D60 (DrvLogDiagDisplayChange.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        unsigned int a3,
        void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // r8d
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v23; // rcx
  _QWORD v24[8]; // [rsp+50h] [rbp-88h] BYREF

  memset(v24, 0, sizeof(v24));
  EtwActivityIdControl(3u, (LPGUID)&v24[1]);
  v24[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v24[3]) = 26;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v16 = PsGetCurrentThreadWin32Thread(v14, v13, v15);
  if ( v16 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v17) = byte_1C0186D98 - 1;
      Template_xqx(
        v17,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v19,
        v18.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v19,
        0,
        1000 * v18.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)v12 + 110) & 0x20000000) != 0 )
      v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 47) + 720LL) + 24LL) & 0x10;
    else
      v20 = 0;
    if ( (v20
       || !(unsigned int)CheckAccessForIntegrityLevelEx(
                           *(_QWORD *)(*((_QWORD *)v12 + 47) + 824LL),
                           0xFFFFFFFF00002000uLL,
                           0LL))
      && a3 != 34 )
    {
      v23 = 5LL;
LABEL_27:
      v21 = -1;
      UserSetLastError(v23);
      goto LABEL_14;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v23 = 87LL;
      goto LABEL_27;
    }
    DrvLogDiagDisplayChange(0LL, 8);
    v21 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v24);
  }
  else
  {
    v21 = -1;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v21;
}

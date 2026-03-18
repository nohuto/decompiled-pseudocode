/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C006B430
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     CoreMsgOpenConnection @ 0x1C006B624 (CoreMsgOpenConnection.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(__int64 a1, CTouchProcessor *a2, __int64 a3)
{
  CTouchProcessor *v3; // rsi
  int v4; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  struct tagTHREADINFO *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LONGLONG v10; // rdx
  LONGLONG v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  LARGE_INTEGER v15; // r14
  PVOID CurrentProcess; // rax
  BOOL v17; // ecx
  int v18; // ebx
  HANDLE *v19; // r8
  unsigned int v20; // ebx
  bool v22; // al
  __int128 v23; // [rsp+58h] [rbp-70h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  _OWORD v25[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v26; // [rsp+90h] [rbp-38h]

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v14 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    v10 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v22 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v22 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v11,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v12,
          v15.LowPart,
          0,
          (char)gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v10 = 1000 * v15.QuadPart % gliQpcFreq.QuadPart;
      v11 = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        Template_xqx(
          v11,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10, v12, v13);
  v17 = 0;
  if ( CurrentProcess )
    v17 = CurrentProcess == g_pepDwm;
  if ( v17 )
  {
    if ( (CTouchProcessor *)((char *)v3 + 40) < v3 || (CTouchProcessor *)((char *)v3 + 40) > W32UserProbeAddress )
      v3 = W32UserProbeAddress;
    v23 = *((_OWORD *)v3 + 1);
    v24 = *((_QWORD *)v3 + 4);
    v25[0] = *(_OWORD *)v3;
    v25[1] = v23;
    v26 = v24;
    if ( v4 )
    {
      v18 = v4 - 1;
      if ( v18 )
      {
        if ( v18 != 1 )
        {
          v20 = -1073741811;
LABEL_18:
          UserSessionSwitchLeaveCrit();
          return v20;
        }
        v19 = &gInputFocusConnectionHandle;
      }
      else
      {
        v19 = &gInputDeliveryConnectionHandle;
      }
    }
    else
    {
      v19 = &gCursorManagementConnectionHandle;
    }
    if ( *v19 )
      v20 = -1073741823;
    else
      v20 = CoreMsgOpenConnection(0LL, v25);
    goto LABEL_18;
  }
  UserSessionSwitchLeaveCrit();
  return 3221225506LL;
}

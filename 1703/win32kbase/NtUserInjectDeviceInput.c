/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00E2230
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectDeviceInput @ 0x1C010A680 (RIMIDEInjectDeviceInput.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r15
  int v6; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rbx
  LARGE_INTEGER v15; // r8
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  size_t v22; // rsi
  void *v23; // rax
  __int64 v24; // rbx
  __int64 v26; // [rsp+20h] [rbp-58h]

  v3 = (unsigned int)a3;
  v6 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v16 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
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
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v26) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v26,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  if ( !(_DWORD)v3 )
    goto LABEL_32;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v20 = 5LL;
LABEL_33:
    UserSetLastError(v20, v17, v18, v19);
    goto LABEL_34;
  }
  v21 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
LABEL_32:
    v20 = 87LL;
    goto LABEL_33;
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( &a2[v21] > (char *)W32UserProbeAddress || &a2[v21] < a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v22 = (unsigned int)v21;
  v23 = (void *)Win32AllocPoolWithQuota((unsigned int)v21, 0x74697355u);
  v24 = (__int64)v23;
  if ( !v23 )
    ExRaiseStatus(-1073741801);
  memmove(v23, a2, v22);
  if ( (int)RIMIDEInjectDeviceInput(a1, v24, (unsigned int)v3) >= 0 )
    v6 = 1;
  if ( v24 )
    Win32FreePool(v24);
LABEL_34:
  UserSessionSwitchLeaveCrit();
  return v6;
}

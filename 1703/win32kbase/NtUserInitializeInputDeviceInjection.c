/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00E1C70
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     HMValidateSharedHandle @ 0x1C002810C (HMValidateSharedHandle.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C010C490 (RIMIDE_InitializeDeviceInjection.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        CTouchProcessor *a7)
{
  __int64 v7; // r12
  unsigned __int16 v9; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  LARGE_INTEGER v16; // rcx
  LARGE_INTEGER v17; // rbx
  LARGE_INTEGER v18; // r8
  bool v19; // al
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // ebx
  void *v28; // rax
  CTouchProcessor *v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-40h]
  __int64 v33; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int16 v34; // [rsp+A0h] [rbp+8h]

  v34 = a1;
  v7 = a4;
  v9 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  if ( v15 )
  {
    v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v19 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v19 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v16.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v16.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v18.QuadPart,
          v17.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v31) = 1000 * v17.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v18.QuadPart,
        0LL,
        v31,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  v20 = 0LL;
  v21 = 0LL;
  v33 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v25 = 5LL;
LABEL_40:
    v27 = 0;
    UserSetLastError(v25, v22, v23, v24);
    goto LABEL_41;
  }
  v26 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v25 = 87LL;
    goto LABEL_40;
  }
  if ( !a5 || (v21 = HMValidateSharedHandle(a5)) != 0 )
  {
    if ( v26 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( &a3[v26] > (char *)W32UserProbeAddress || &a3[v26] < a3 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v28 = (void *)Win32AllocPoolWithQuota((unsigned int)v26, 0x74697355u);
    v20 = (__int64)v28;
    v32 = (__int64)v28;
    if ( !v28 )
      ExRaiseStatus(-1073741801);
    memmove(v28, a3, 32 * v7);
    v27 = RIMIDE_InitializeDeviceInjection(v34, v9, v20, v7, v21, a6, (__int64)&v33);
    if ( v27 )
    {
      v29 = a7;
      if ( a7 >= W32UserProbeAddress )
        v29 = W32UserProbeAddress;
      *(_QWORD *)v29 = *(_QWORD *)v29;
      *(_QWORD *)a7 = v33;
      v20 = v32;
    }
  }
  else
  {
    v27 = 0;
  }
  if ( v20 )
    Win32FreePool(v20);
LABEL_41:
  UserSessionSwitchLeaveCrit();
  return v27;
}

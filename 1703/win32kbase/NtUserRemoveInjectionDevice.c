/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C00E3270
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01020DC (RIMIDERemoveInjectionDevice.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

_BOOL8 __fastcall NtUserRemoveInjectionDevice(char *a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER v12; // r8
  __int64 v13; // rcx
  BOOL v14; // ebx
  __int64 CurrentProcessWin32Process; // rax
  PVOID v16; // rdi
  __int64 v17; // rcx
  char *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-28h]
  int v21; // [rsp+20h] [rbp-28h]
  PVOID v22; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

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
      v21 = 0;
      LOBYTE(v10.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v10.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v12.QuadPart,
        v11.QuadPart,
        v21,
        gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v20) = 1000 * v11.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12.QuadPart,
        0LL,
        v20,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  v22 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v22) < 0 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v16 = v22;
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 840);
    if ( !v17
      || (v18 = *(char **)(v17 + 88)) == 0LL
      || (Object = 0LL, (int)RawInputManagerDeviceObjectResolveHandle(v18, 3u, 1, &Object) < 0)
      || (v14 = v16 != Object, ObfDereferenceObject(Object), v14) )
    {
      RIMIDERemoveInjectionDevice(v16);
    }
    ObfDereferenceObject(v16);
  }
  UserSessionSwitchLeaveCrit();
  return v14;
}

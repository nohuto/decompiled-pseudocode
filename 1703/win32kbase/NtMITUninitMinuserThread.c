/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C00E06B0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ProtectHandle @ 0x1C0044EA0 (ProtectHandle.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // rbx
  LARGE_INTEGER v11; // r8
  int v12; // edx
  __int64 ThreadWin32Thread; // rbx
  __int64 v14; // rdi
  int v15; // eax
  void *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v19 = 0;
      LOBYTE(v9.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v9.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v11.QuadPart,
        v10.QuadPart,
        v19,
        gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v18) = 1000 * v10.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v11.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = 0LL;
  v15 = *(_DWORD *)(ThreadWin32Thread + 1096);
  if ( (v15 & 0x1000000) != 0 )
  {
    v16 = *(void **)(ThreadWin32Thread + 640);
    *(_DWORD *)(ThreadWin32Thread + 1096) = v15 & 0xFEFFFFFF;
    ProtectHandle(v16, v12, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 648));
    *(_QWORD *)(ThreadWin32Thread + 648) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 640) = 0LL;
    v14 = 1LL;
  }
  qword_1C018E820 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v14;
}

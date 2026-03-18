/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C00E6A4C
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00103F8 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     LockProcessByClientIdEx @ 0x1C008BF84 (LockProcessByClientIdEx.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     HMFindEntry @ 0x1C00DE7D0 (HMFindEntry.c)
 */

__int64 __fastcall UserFindBaseWindowHandle(__int64 a1, int *a2, __int64 a3)
{
  int *v3; // r14
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rdi
  LARGE_INTEGER v15; // r8
  void *v16; // rcx
  int v17; // edx
  char *v19; // rdi
  __int64 v20; // [rsp+20h] [rbp-40h]
  _QWORD v21[4]; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+98h] [rbp+38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      15,
      18,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(v20) = 0;
      LOBYTE(v13.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v13.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v15.QuadPart,
        v14.QuadPart,
        v20,
        gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v20) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v20,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gWndLock, 0LL);
  v16 = (void *)*v3;
  v22 = -1;
  if ( LockProcessByClientIdEx(v16, (PEPROCESS *)&Object, &v22) < 0 )
    goto LABEL_19;
  if ( v22 != gSessionId )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
LABEL_19:
    WPP_RECORDER_SF_q(gBaseLog, 2u, 0xFu, 0x14u, (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids, *v3);
    goto LABEL_20;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gHmLock, 0LL);
  v21[0] = a1;
  v21[2] = 0LL;
  v21[1] = PsGetProcessWin32Process(Object);
  v19 = HMFindEntry((__int64)v21, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
  ObfDereferenceObject(Object);
  if ( v19 )
  {
    v6 = **((_QWORD **)gpKernelHandleTable + 2 * (unsigned int)((v19 - (_BYTE *)qword_1C0189E38) >> 5));
    ExReleasePushLockSharedEx(&gHmLock, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(gBaseLog, 5u, 0xFu, 0x13u, (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids, a1, *v3);
  ExReleasePushLockSharedEx(&gHmLock, 0LL);
  KeLeaveCriticalRegion();
LABEL_20:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      15,
      21,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
  }
LABEL_22:
  ExReleasePushLockSharedEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v6;
}

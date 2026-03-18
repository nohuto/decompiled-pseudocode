/*
 * XREFs of ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A820
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004F3E0 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C0090A10 (ApiSetEditionInputExtensibilityCallout.c)
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C009A6C0 (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C009A738 (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeWithDeviceLock(
        InputExtensibilityCallout *this,
        struct DEVICEINFO *a2,
        struct _CLIENT_DEVICE_NOTIFICATION *a3)
{
  __int64 v3; // rdi
  bool v7; // bl
  struct RawInputManagerDeviceObject *v8; // r15
  char v9; // r12
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  int v20; // ecx
  LARGE_INTEGER v21; // rbx
  int v22; // r8d

  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v7 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v3 + 40);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
    KeBugCheck(0x164u);
  v8 = (struct RawInputManagerDeviceObject *)*((_QWORD *)a2 + 4);
  v9 = *((_DWORD *)a3 + 1) == 0;
  if ( InputExtensibilityCallout::PrepareForUserModeCallout(this, v8, v9) )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList) )
    {
      v10 = 1;
      ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    }
    else
    {
      v10 = 0;
    }
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, (__int64)a3);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v11, v13);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v19 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
    if ( v19 )
    {
      v21 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v20) = byte_1C0186D98 - 1;
        Template_xqx(
          v20,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v22,
          v21.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v21.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v22,
          0,
          1000 * v21.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v19 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    if ( v10 )
      ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    InputExtensibilityCallout::UserModeCalloutCompleted(this, v8, v9);
  }
}

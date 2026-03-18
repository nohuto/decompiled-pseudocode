/*
 * XREFs of ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0019E30 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0095F48 (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0095FC8 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0095FEC (-ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C00961F4 (ApiSetEditionInputExtensibilityCallout.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeWithDeviceLock(
        InputExtensibilityCallout *this,
        struct DEVICEINFO *a2,
        struct _CLIENT_DEVICE_NOTIFICATION *a3)
{
  __int64 v3; // rdi
  bool v7; // bl
  int v8; // r12d
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  InputExtensibilityCallout *v19; // rcx
  __int64 v20; // rbx
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v28; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v7 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v3 + 40);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
    KeBugCheck(0x164u);
  v8 = *((_DWORD *)a3 + 1);
  v9 = (_QWORD *)*((_QWORD *)a2 + 4);
  if ( InputExtensibilityCallout::PrepareForUserModeCallout(this, (struct RawInputManagerDeviceObject *)v9, v8 == 0) )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList) )
    {
      v13 = 1;
      ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    }
    else
    {
      v13 = 0;
    }
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v10, v11, v12);
    ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a3);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16, v17);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v21 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v23, v22, v24, v25);
    gptiCurrent = v21;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v28);
    v26 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v26[2];
        v26[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v26);
        RIMLockExclusive((__int64)DomainLockRef);
        v26 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v28);
    if ( v13 )
      ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    v20 = v9[51];
    *((_QWORD *)gptiCurrent + 162) = 0LL;
    if ( !v8 )
      RIMLockExclusive(v20 + 96);
    if ( InputExtensibilityCallout::ShouldUpdateInputBufferLockState(v19, (const struct RawInputManagerObject *)v20) )
      RIMLockExclusive(v20 + 696);
    *(_BYTE *)(v20 + 75) = 0;
    ObfDereferenceObject(v9);
    *((_BYTE *)this + 8) = 0;
    InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(this);
  }
}

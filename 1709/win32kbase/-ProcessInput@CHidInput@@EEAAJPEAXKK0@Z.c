/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0011110 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C00A5510 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0101244 (RIMCompleteSecondaryRimReads.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C0119000 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0124014 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012B348 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C012BDD0 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, _DWORD *a2, __int64 a3, __int64 a4, char *a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 *DomainLockRef; // rbx
  CBaseInput *v17; // rcx
  char *v18; // rdi
  _DWORD *v19; // r15
  __int64 v20; // rbx
  int IsInjectionDeviceFromKernelHandle; // r12d
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DEVICEINFO *v27; // rbx
  unsigned int v28; // r8d
  CTouchProcessor *v29; // rcx
  void *v30; // r10
  int v31; // eax
  int v32; // eax
  tagObjLock *v34; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+20h]

  v35 = a4;
  v5 = a4;
  v6 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v12, v11, v13, v14);
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v34);
  v15 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v15[2];
      v15[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v15);
      RIMLockExclusive((__int64)DomainLockRef);
      v15 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v34);
  v18 = a5;
  v19 = a2;
  if ( (v6 & 0x1C) != 0 )
  {
    v20 = *((_QWORD *)this + 2);
    IsInjectionDeviceFromKernelHandle = a2[12];
    if ( v20 )
    {
      if ( *(_QWORD *)(v20 + 48) )
      {
        HMAssignmentUnlock((__int64 *)(v20 + 48));
        *(_QWORD *)(v20 + 48) = 0LL;
      }
      if ( *(_QWORD *)(v20 + 56) )
      {
        HMAssignmentUnlock((__int64 *)(v20 + 56));
        *(_QWORD *)(v20 + 56) = 0LL;
      }
      v5 = v35;
    }
  }
  else
  {
    v19 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(v17, a5);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, v18, IsInjectionDeviceFromKernelHandle);
  v27 = DeviceInfo;
  if ( DeviceInfo )
  {
    v24 = *((unsigned int *)DeviceInfo + 50);
    if ( (v24 & 0x40) == 0 )
    {
      v28 = 3;
      if ( v6 == 4 )
      {
        v28 = 12;
      }
      else if ( v6 == 16 )
      {
        v28 = 10;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v28,
        0,
        0,
        0);
    }
    v25 = *((_QWORD *)v27 + 59);
    if ( v25 )
    {
      if ( CHidInput::IsTouchpadDevice((CHidInput *)v24, v27) )
      {
        v24 = *(_QWORD *)(v25 + 960);
        if ( v24 )
          CPTPProcessor::ProcessInput(
            (CPTPProcessor *)v24,
            (unsigned __int64)v30,
            (struct RIMCOMPLETEFRAME *)a2,
            -__CFSHR__(*((_DWORD *)v27 + 46), 13),
            -__CFSHR__(*(_DWORD *)(v25 + 276), 7),
            v19[13]);
      }
      else
      {
        CTouchProcessor::ProcessInput(
          v29,
          v30,
          (struct RIMCOMPLETEFRAME *)a2,
          -__CFSHR__(*((_DWORD *)v27 + 46), 13),
          -__CFSHR__(*(_DWORD *)(v25 + 276), 7));
      }
    }
    else
    {
      v31 = *((_DWORD *)v27 + 50);
      if ( (v31 & 0x100) != 0 || (v31 & 0x200) != 0 )
      {
        if ( (int)IsEditionRimDeviceReadNotificationSupported() >= 0 )
          EditionRimDeviceReadNotification(a2, v6, v5, v18);
      }
      else if ( !v19 )
      {
        v32 = *((_DWORD *)v27 + 46);
        if ( (v32 & 0x1000) != 0 && (v32 & 0x8000) != 0 )
          v18 = (char *)*((_QWORD *)v27 + 44);
        RIMCompleteSecondaryRimReads(v18, a2);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return 0LL;
}

/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C009A210 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0100E00 (RIMCompleteSecondaryRimReads.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C011A388 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C012C6A8 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, _DWORD *a2, __int64 a3, unsigned int a4, void *a5)
{
  unsigned int v5; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  CBaseInput *v13; // rcx
  __int64 v14; // rsi
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  _DWORD *v17; // r15
  __int64 v18; // rbx
  int IsInjectionDeviceFromKernelHandle; // r12d
  struct DEVICEINFO *DeviceInfo; // rax
  struct DEVICEINFO *v21; // rbx
  CHidInput *v22; // rcx
  unsigned int v23; // r8d
  CTouchProcessor *v24; // rcx
  __int64 v25; // r8
  void *v26; // r10
  CPTPProcessor *v27; // rcx
  int v28; // eax
  __int64 v30; // [rsp+20h] [rbp-38h]
  int v31; // [rsp+28h] [rbp-30h]

  v5 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v14 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v14 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v13) = byte_1C0186D98 - 1;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        v31 = (int)gullUserCritAcquireToken;
        Template_xqx((__int64)v13, &AcquiredExclusiveUserCritEvent, v16.QuadPart, v15.QuadPart, 0);
      }
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      v31 = (int)gullUserCritAcquireToken;
      LODWORD(v30) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx((__int64)gullUserCritAcquireToken, &AcquiredExclusiveUserCritTelemetryEvent, v16.QuadPart, 0LL, v30);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gbValidateHandleForIL = 1;
  v17 = a2;
  gptiCurrent = v9;
  if ( (v5 & 0x1C) != 0 )
  {
    v18 = *((_QWORD *)this + 2);
    IsInjectionDeviceFromKernelHandle = a2[12];
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 48) )
      {
        HMAssignmentUnlock((__int64 *)(v18 + 48));
        *(_QWORD *)(v18 + 48) = 0LL;
      }
      if ( *(_QWORD *)(v18 + 56) )
      {
        HMAssignmentUnlock((__int64 *)(v18 + 56));
        *(_QWORD *)(v18 + 56) = 0LL;
      }
    }
  }
  else
  {
    v17 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(v13, a5);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, (char *)a5, IsInjectionDeviceFromKernelHandle);
  v21 = DeviceInfo;
  if ( DeviceInfo )
  {
    v22 = (CHidInput *)*((unsigned int *)DeviceInfo + 50);
    if ( ((unsigned __int8)v22 & 0x40) == 0 )
    {
      v23 = 3;
      if ( v5 == 4 )
      {
        v23 = 12;
      }
      else if ( v5 == 16 )
      {
        v23 = 10;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v23,
        0,
        0,
        0);
    }
    if ( *((_QWORD *)v21 + 59) )
    {
      if ( CHidInput::IsTouchpadDevice(v22, v21) )
      {
        v27 = *(CPTPProcessor **)(v25 + 1624);
        if ( v27 )
          CPTPProcessor::ProcessInput(
            v27,
            (unsigned __int64)v26,
            (struct RIMCOMPLETEFRAME *)a2,
            -__CFSHR__(*((_DWORD *)v21 + 46), 13),
            -__CFSHR__(*(_DWORD *)(v25 + 260), 7),
            v17[13]);
      }
      else
      {
        CTouchProcessor::ProcessInput(
          v24,
          v26,
          (struct RIMCOMPLETEFRAME *)a2,
          -__CFSHR__(*((_DWORD *)v21 + 46), 13),
          -__CFSHR__(*(_DWORD *)(v25 + 260), 7),
          v31);
      }
    }
    else
    {
      v28 = *((_DWORD *)v21 + 50);
      if ( (v28 & 0x100) != 0 || (v28 & 0x200) != 0 )
      {
        if ( (int)IsEditionRimDeviceReadNotificationSupported() >= 0 )
          EditionRimDeviceReadNotification(a2, v5, a4, a5);
      }
      else if ( !v17 )
      {
        RIMCompleteSecondaryRimReads((char *)a5, a2);
      }
    }
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}

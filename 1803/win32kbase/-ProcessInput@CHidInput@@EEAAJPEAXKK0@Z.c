/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70
 * Callers:
 *     <none>
 * Callees:
 *     RIMCompleteSecondaryRimReads @ 0x1C00E0B30 (RIMCompleteSecondaryRimReads.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0119C5C (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0122730 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C0123244 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0125D88 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0126F44 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, void **a2, unsigned int a3, unsigned int a4, void *a5)
{
  __int64 v5; // rdi
  void **v10; // r15
  int v11; // r14d
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v14; // rdx
  struct DEVICEINFO *v15; // rbx
  CHidInput *v16; // rcx
  unsigned int v17; // r8d
  void *v18; // rdx
  CTouchProcessor *v19; // rcx
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  CPTPProcessor *v22; // rcx
  int v23; // eax
  int v24; // eax

  v5 = (__int64)a5;
  v10 = a2;
  v11 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    if ( a2[4] != a5 && a5 != (void *)-1LL )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 12);
  }
  else
  {
    v10 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, (char *)a5, IsInjectionDeviceFromKernelHandle);
  v15 = DeviceInfo;
  if ( DeviceInfo )
  {
    v16 = (CHidInput *)*((unsigned int *)DeviceInfo + 50);
    if ( ((unsigned __int8)v16 & 0x40) == 0 )
    {
      v17 = 3;
      if ( a3 == 4 )
      {
        v17 = 12;
      }
      else if ( a3 == 16 )
      {
        v17 = 10;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v17,
        0LL,
        0,
        0);
    }
    if ( *((_QWORD *)v15 + 60) )
    {
      if ( !v11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
      if ( (*((_DWORD *)v15 + 50) & 0x80u) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
      if ( CHidInput::IsTouchpadDevice(v16, v15) )
      {
        v21 = *((_QWORD *)v15 + 60);
        if ( v21 )
          v22 = *(CPTPProcessor **)(v21 + 960);
        else
          v22 = 0LL;
        if ( v22 )
          CPTPProcessor::ProcessInput(
            v22,
            v20,
            (struct RIMCOMPLETEFRAME *)a2,
            -__CFSHR__(*((_DWORD *)v15 + 46), 13),
            -__CFSHR__(*(_DWORD *)(v21 + 276), 7),
            *((_DWORD *)v10 + 13));
      }
      else
      {
        CTouchProcessor::ProcessInput(v19, v18, (struct RIMCOMPLETEFRAME *)a2);
      }
    }
    else
    {
      v23 = *((_DWORD *)v15 + 50);
      if ( (v23 & 0x100) != 0 || (v23 & 0x200) != 0 )
      {
        if ( (int)IsEditionRimDeviceReadNotificationSupported() >= 0 )
          EditionRimDeviceReadNotification(a2, a3, a4, a5);
      }
      else if ( !v10 )
      {
        if ( a3 != 32 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
        v24 = *((_DWORD *)v15 + 46);
        if ( (v24 & 0x1000) != 0 && (v24 & 0x8000) != 0 )
          v5 = *((_QWORD *)v15 + 43);
        RIMCompleteSecondaryRimReads(v5, (__int64)a2, a3);
      }
    }
  }
  return 0LL;
}

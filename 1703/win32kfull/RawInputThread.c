/*
 * XREFs of RawInputThread @ 0x1C004A5F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientEnableMMCSS @ 0x1C0007614 (xxxClientEnableMMCSS.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C0010244 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     TimersProc @ 0x1C004BC60 (TimersProc.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00ADD0C (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     SetWindowArrangementHotKeys @ 0x1C00BB190 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00BB690 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 *     xxxRemoveQueueCompletion @ 0x1C00C8860 (xxxRemoveQueueCompletion.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00DA384 (--0InkProcessor@@AEAA@XZ.c)
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C00FE718 (-_GetDigitizerFlags@@YAKXZ.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0104B68 (CheckPointerDeviceConfiguration.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0108C18 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 *     RitPrepDitTakeOver @ 0x1C0109A88 (RitPrepDitTakeOver.c)
 *     vCleanupRimClientWorker @ 0x1C0109B6C (vCleanupRimClientWorker.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C0111C78 (CreatePointerDeviceProcessEvents.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C011604C (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C01187EC (xxxRegisterForDeviceClassNotifications.c)
 *     InitKeyboard @ 0x1C0119A9C (InitKeyboard.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C011A838 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     SetDebugHotKeys @ 0x1C011B188 (SetDebugHotKeys.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C011BC60 (-InitTimerPowerSaving@@YAXXZ.c)
 *     RitTakeOver @ 0x1C011C130 (RitTakeOver.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C011C754 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C013B758 (RequestModeSwitchOnPowerUp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C0195FC8 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C01A8604 (UpdateRimManagedKeyboardLeds.c)
 *     UserSetTimer @ 0x1C0211884 (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r15
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  InkProcessor *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // rax
  __int64 v11; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTIMER *v22; // rax
  struct _KTIMER *v23; // rax
  _WORD *v24; // r8
  _DWORD *v25; // rdx
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG v31; // edi
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v35; // rcx
  NTSTATUS v36; // ebx
  unsigned int v37; // r14d
  __int64 v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // r8
  CBaseInput **v41; // rcx
  char DigitizerFlags; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ebx
  unsigned int v48; // edx
  _DWORD *v49; // rcx
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _DWORD *v55; // rdx
  __int64 i; // rdi
  void *v57; // rcx
  __int64 v58; // rcx
  _DWORD *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  struct InteractiveControlManager *v64; // rbx
  unsigned __int16 *v65; // rax
  int v66; // ecx
  LPCGUID v67; // r8
  LPCGUID v68; // r9
  LPCGUID v69; // r9
  LPCGUID v70; // r8
  LPCGUID v71; // r8
  LPCGUID v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rbx
  char *v83; // rcx
  unsigned int v84; // edx
  __int64 v85; // rax
  char *v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  struct _KEVENT *v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  char *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned int result; // eax
  unsigned int v111; // edx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  int cDataa; // [rsp+28h] [rbp-E0h]
  int cDatab; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PLARGE_INTEGER Timeouta; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  int OutputBufferLength; // [rsp+50h] [rbp-B8h]
  LegacyInputDispatcher *v120; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v121[2]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  int v123; // [rsp+80h] [rbp-88h] BYREF
  int v124; // [rsp+84h] [rbp-84h] BYREF
  PVOID v125; // [rsp+88h] [rbp-80h] BYREF
  PRKEVENT v126; // [rsp+90h] [rbp-78h]
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  __int128 v128; // [rsp+A0h] [rbp-68h]
  _BYTE v129[8]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v130[8]; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v132; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v133; // [rsp+E0h] [rbp-28h] BYREF
  __int128 SystemInformation; // [rsp+F0h] [rbp-18h] BYREF
  int v135; // [rsp+100h] [rbp-8h]
  void *v136[16]; // [rsp+108h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v137; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A8h] [rbp+A0h] BYREF
  _DWORD *v139; // [rsp+1B8h] [rbp+B0h]
  __int64 v140; // [rsp+1C0h] [rbp+B8h]
  __int64 v141; // [rsp+1C8h] [rbp+C0h]
  _DWORD v142[6]; // [rsp+1D0h] [rbp+C8h] BYREF
  EVENT_DATA_DESCRIPTOR v143; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v144; // [rsp+208h] [rbp+100h]
  __int64 v145; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v146; // [rsp+228h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v147; // [rsp+248h] [rbp+140h] BYREF
  int *v148; // [rsp+258h] [rbp+150h]
  __int64 v149; // [rsp+260h] [rbp+158h]
  EVENT_DATA_DESCRIPTOR v150; // [rsp+278h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v151; // [rsp+298h] [rbp+190h] BYREF
  unsigned int *v152; // [rsp+2A8h] [rbp+1A0h]
  __int64 v153; // [rsp+2B0h] [rbp+1A8h]

  v120 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v136, 0, sizeof(v136));
  v3 = *a1;
  gpkthreadRIT = (__int64)KeGetCurrentThread();
  if ( (gdwMitConfig & 2) == 0 )
  {
    v136[4] = *((void **)&aDeviceTemplate + 86);
    v136[5] = *((void **)&aDeviceTemplate + 91);
    v136[6] = *((void **)&aDeviceTemplate + 104);
    v136[7] = *((void **)&aDeviceTemplate + 109);
    v136[8] = *((void **)&aDeviceTemplate + 121);
  }
  if ( (gdwMitConfig & 4) == 0 )
  {
    v136[9] = *((void **)&aDeviceTemplate + 156);
    v136[10] = *((void **)&aDeviceTemplate + 161);
    v136[11] = *((void **)&aDeviceTemplate + 166);
    v136[12] = *((void **)&aDeviceTemplate + 171);
    v136[13] = *((void **)&aDeviceTemplate + 179);
    v136[14] = *((void **)&aDeviceTemplate + 185);
    v136[15] = *((void **)&aDeviceTemplate + 191);
  }
  *(_QWORD *)&v128 = PsGetThreadProcessId(KeGetCurrentThread());
  v135 = 16;
  *((_QWORD *)&v128 + 1) = PsGetThreadId(KeGetCurrentThread());
  SystemInformation = v128;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1956LL) = 0;
  *(_DWORD *)(gpsi + 2052LL) = 0;
  *(_DWORD *)(gpsi + 2180LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi, v4, v5, v6);
  if ( !InkProcessor::s_pInstance )
  {
    v7 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v10 = v7 ? (const GUID *)InkProcessor::InkProcessor(v7) : 0LL;
    InkProcessor::s_pInstance = v10;
    if ( !v10 && hProvider > 2u )
    {
      v123 = -1073741801;
      v144 = &v123;
      v145 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v8, v9, 3u, &v143);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_218;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v13 = *(_QWORD *)(GetDispInfo() + 88);
  *(_DWORD *)(gpsi + 5368LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 5372LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) / 2;
  gptCursorAsync = *(_QWORD *)(gpsi + 5368LL);
  *(_DWORD *)(gpsi + 5344LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 52LL) / 2;
  *(_DWORD *)(gpsi + 5348LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 56LL) / 2;
  *(_DWORD *)(gpsi + 5352LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 68LL) / 2;
  *(_DWORD *)(gpsi + 5356LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 72LL) / 2;
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  EnterCrit(0LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    cData[0] = 0;
    RegisterHotKey((struct tagWND *)1, *(ULONG_PTR *)cData);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    13LL);
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  v22 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v22;
  if ( !v22 )
    goto LABEL_218;
  KeInitializeTimer(v22);
  v136[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v23 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v23;
    if ( !v23 )
      goto LABEL_218;
    KeInitializeTimerEx(v23, SynchronizationTimer);
  }
  v24 = (_WORD *)gProtocolType;
  v136[2] = (void *)gptmrWD;
  if ( gProtocolType )
  {
    if ( !(unsigned int)DrvEscapeRemoteDrivers(
                          *(_QWORD *)(gpDispInfo + 8LL),
                          gProtocolType,
                          *(_QWORD *)(RemoteContext + 40),
                          2LL,
                          gptmrWD,
                          8) )
      goto LABEL_218;
    v24 = (_WORD *)gProtocolType;
  }
  v25 = (_DWORD *)gServiceSessionId;
  v26 = (_DWORD *)gSessionId;
  if ( gSessionId != gServiceSessionId && !*v24 )
  {
    EnterCrit(0LL, 1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
    v26 = (_DWORD *)gSessionId;
    v25 = (_DWORD *)gServiceSessionId;
  }
  if ( *v26 == *v25 )
    gbFirstConnectionDone = 1;
  if ( *v26 )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v31 = 2;
      v136[3] = Object;
      v126 = (PRKEVENT)Object;
      goto LABEL_32;
    }
LABEL_218:
    if ( v120 )
      LegacyInputDispatcher::`scalar deleting destructor'(v120, v11);
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  v31 = 1;
  if ( PoRequestShutdownEvent(&v136[3]) < 0 )
    goto LABEL_218;
LABEL_32:
  if ( gSessionId != gServiceSessionId )
    CreatePointerDeviceProcessEvents();
  *((void **)&aDeviceTemplate + 80) = v136[3];
  *((_QWORD *)&aDeviceTemplate + 10) = CreateKernelEvent(1LL, 0LL);
  *((void **)&aDeviceTemplate + 150) = v136[3];
  if ( !v136[3] )
    goto LABEL_218;
  CurrentThread = KeGetCurrentThread();
  gpkeRITEvent = (PRKEVENT)v136[3];
  gptiRit = W32GetThreadWin32Thread(CurrentThread, v11, v32, v33);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 440LL) |= 0x80u;
  v35 = (struct _KEVENT *)a1[1];
  v136[0] = *(void **)(gptiRit + 1288LL);
  KeSetEvent(v35, 1, 0);
  v125 = *(PVOID *)(v3 + 56);
  ObReferenceObjectByPointer(v125, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v36 = KeWaitForMultipleObjects(v31, &v125, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v36 == 1 && (gdwRITWakeReason & 8) == 0 );
  ObfDereferenceObject(v125);
  if ( v36 == 1 && (gdwRITWakeReason & 8) != 0 )
  {
    KeSetEvent(v126, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(v126);
    if ( Handle )
      ZwClose(Handle);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent(gpkeRITEvent, 1, 0);
  EnterCrit(0LL, 1LL);
  if ( !*(_QWORD *)(gptiRit + 408LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 536LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 536LL) + 16LL), 0LL, 0LL);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( gSessionId == gServiceSessionId )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      CBaseInput::InitializeSensor(gpHidInput);
      CBaseInput::InitializeSensor(gpKeyboardSensor);
    }
  }
  else
  {
    if ( gProtocolType )
    {
      RtlInitUnicodeString(&v132, 0LL);
      v37 = 1;
      while ( 1 )
      {
        if ( v37 == 1 && (gdwMitConfig & 2) == 0 )
        {
LABEL_53:
          v38 = 560LL * v37;
          v39 = DeviceTypeToRimInputType(v37);
          LOBYTE(OutputBufferLength) = 0;
          LODWORD(Timeout) = 0;
          if ( (int)RIMRegisterForInput(
                      v39,
                      0LL,
                      gpWin32kDriverObject,
                      *(_QWORD *)((char *)&aDeviceTemplate + v38 + 112),
                      *(_QWORD *)((char *)&aDeviceTemplate + v38 + 192),
                      0LL,
                      Timeout,
                      0LL,
                      Win32kRIMDevChangeCallback,
                      OutputBufferLength,
                      0LL,
                      (char *)&aDeviceTemplate + v38 + 96) >= 0 )
          {
            LOBYTE(v40) = 1;
            RawInputManagerObjectResolveHandle(
              *((_QWORD *)&aDeviceTemplate + 70 * v37 + 12),
              3LL,
              v40,
              (char *)&aDeviceTemplate + v38 + 104);
            if ( v37 == 1 )
            {
              LOBYTE(cDataa) = 0;
              RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                *((_QWORD *)&aDeviceTemplate + 82),
                &v132,
                1LL,
                ghRemoteKeyboardChannel,
                cDataa,
                v129);
            }
            *((_DWORD *)&aDeviceTemplate + 140 * v37 + 111) = 64;
            LOBYTE(cDataa) = 0;
            RIMReadInput(
              *((_QWORD *)&aDeviceTemplate + 70 * v37 + 12),
              (char *)&aDeviceTemplate + v38 + 488,
              *((unsigned int *)&aDeviceTemplate + 140 * v37 + 111),
              *((_QWORD *)&aDeviceTemplate + 70 * v37 + 19),
              cDataa,
              (char *)&aDeviceTemplate + v38 + 464,
              (char *)&aDeviceTemplate + v38 + 440,
              (char *)&aDeviceTemplate + v38 + 448);
          }
          goto LABEL_63;
        }
        if ( v37 != 2 )
          break;
        if ( (gdwMitConfig & 4) == 0 )
          goto LABEL_53;
        if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
        {
          v41 = (CBaseInput **)gpHidInput;
LABEL_62:
          CBaseInput::Read(*v41);
        }
LABEL_63:
        if ( ++v37 > 2 )
          goto LABEL_66;
      }
      if ( v37 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
        goto LABEL_63;
      CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
      v41 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_62;
    }
    xxxRegisterForDeviceClassNotifications();
LABEL_66:
    DigitizerFlags = _GetDigitizerFlags();
    if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
      RegisterTabletButtonHandler();
    InitTimerPowerSaving();
    gnRITdemonTimerId = SetRITTimer(gnRITdemonTimerId, 1000LL, xxxHungAppDemon);
  }
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v47 = 0;
  }
  else
  {
    v47 = 1;
    UserEnterUserCritSec();
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v47 )
    UserLeaveUserCritSec();
  if ( gbRITAlerted )
    gbRITAlerted = 0;
  UserSessionSwitchLeaveCrit(v44, v43, v45, v46);
  LegacyInputDispatcher::Create(&v120);
  v48 = (gdwMitConfig & 4) != 0 ? 9 : 16;
  if ( (gdwMitConfig & 2) != 0 )
    v48 = 4;
  LegacyInputDispatcher::Initialize(v120, 0, 1, 0x40u, v48, v136);
  v49 = (_DWORD *)gdwMitConfig;
  if ( (gdwMitConfig & 2) != 0 )
  {
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v120);
    v49 = (_DWORD *)gdwMitConfig;
  }
  if ( (*v49 & 4) != 0 )
    CBaseInput::RegisterDispatcherObject(gpHidInput, v120);
  while ( 1 )
  {
LABEL_86:
    v50 = LegacyInputDispatcher::WaitAndDispatch(v120);
    if ( !v50 )
    {
      EnterCrit(0LL, 1LL);
      xxxRemoveQueueCompletion();
      UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
    }
    v55 = (_DWORD *)gdwMitConfig;
    if ( (gdwMitConfig & 2) == 0 && gdwUpdateKeyboard )
    {
      EnterDeviceInfoListCrit_(gdwMitConfig);
      for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
      {
        if ( *(_BYTE *)(i + 48) == 1 )
        {
          v57 = *(void **)(i + 224);
          if ( v57 )
          {
            if ( (gdwUpdateKeyboard & 1) != 0 )
              ZwDeviceIoControlFile(v57, 0LL, 0LL, 0LL, giosbKbdControl, 0xB0004u, gktp, 6u, 0LL, 0);
            if ( (gdwUpdateKeyboard & 2) != 0 )
              ZwDeviceIoControlFile(*(HANDLE *)(i + 224), 0LL, 0LL, 0LL, giosbKbdControl, 0xB0008u, gklp, 4u, 0LL, 0);
          }
        }
      }
      UpdateRimManagedKeyboardLeds();
      LeaveDeviceInfoListCrit_(v58);
      v59 = (_DWORD *)gdwUpdateKeyboard;
      if ( (gdwUpdateKeyboard & 2) != 0 && gfRemotingConsole )
      {
        ZwDeviceIoControlFile(
          ghConsoleShadowKeyboardChannel,
          0LL,
          0LL,
          0LL,
          giosbKbdControl,
          0xB0008u,
          gklp,
          4u,
          0LL,
          0);
        v59 = (_DWORD *)gdwUpdateKeyboard;
      }
      *v59 &= 0xFFFFFFF8;
      v55 = (_DWORD *)gdwMitConfig;
    }
    if ( v50 == 3 )
      break;
    if ( v50 == 2 )
    {
      EnterCrit(0LL, 1LL);
      v76 = gProtocolType;
      if ( gProtocolType )
      {
        DrvEscapeRemoteDrivers(
          *(_QWORD *)(gpDispInfo + 8LL),
          gProtocolType,
          *(_QWORD *)(RemoteContext + 40),
          1LL,
          0LL,
          0);
      }
      else if ( gfRemotingConsole )
      {
        v73 = gConsoleShadowhDev;
        if ( gConsoleShadowhDev )
          HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
      }
LABEL_207:
      UserSessionSwitchLeaveCrit(v73, v76, v74, v75);
    }
    else
    {
      v77 = *v55 & 2;
      if ( !v77 && v50 == 4 )
      {
        EnterCrit(0LL, 1LL);
        v78 = *((_QWORD *)&aDeviceTemplate + 82);
LABEL_165:
        RIMOnPnpNotification(v78);
        goto LABEL_207;
      }
      if ( v77 )
        goto LABEL_162;
      switch ( v50 )
      {
        case 5:
          EnterCrit(0LL, 1LL);
          v82 = 0LL;
          v83 = (char *)*((_QWORD *)&aDeviceTemplate + 131);
          if ( v83 != (char *)&aDeviceTemplate + 1056 )
            v82 = *((_QWORD *)&aDeviceTemplate + 131);
          UserSessionSwitchLeaveCrit(v83, v79, v80, v81);
          v85 = aDeviceTemplate;
          if ( *((int *)&aDeviceTemplate + 252) >= 0 )
          {
            ProcessKeyboardInputViaRim(
              *((void **)&aDeviceTemplate + 131),
              v84,
              *((_DWORD *)&aDeviceTemplate + 254),
              *((void **)&aDeviceTemplate + 128));
            if ( v82 )
              *((_QWORD *)&aDeviceTemplate + 131) = (char *)&aDeviceTemplate + 1056;
            v85 = aDeviceTemplate;
          }
          *(_DWORD *)(v85 + 1004) = 64;
          WaitBlockArray = (PKWAIT_BLOCK)((char *)&aDeviceTemplate + 1008);
          v86 = (char *)&aDeviceTemplate + 1048;
          Timeouta = (PLARGE_INTEGER)((char *)&aDeviceTemplate + 1000);
          v87 = *((unsigned int *)&aDeviceTemplate + 251);
          pData = (EVENT_DATA_DESCRIPTOR *)((char *)&aDeviceTemplate + 1024);
          v88 = *((_QWORD *)&aDeviceTemplate + 89);
          v89 = *((_QWORD *)&aDeviceTemplate + 82);
LABEL_174:
          LOBYTE(cDatab) = 0;
          RIMReadInput(v89, v86, v87, v88, cDatab, pData, Timeouta, WaitBlockArray);
          if ( v82 )
          {
            EnterCrit(0LL, 1LL);
            RIMFreeKernelMem(v82);
            goto LABEL_207;
          }
          break;
        case 6:
          EnterCrit(0LL, 1LL);
          RtlInitUnicodeString(&v133, 0LL);
          LOBYTE(cDatab) = 0;
          *((_DWORD *)&aDeviceTemplate + 212) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                                  *((_QWORD *)&aDeviceTemplate + 82),
                                                  &v133,
                                                  1LL,
                                                  ghRemoteKeyboardChannel,
                                                  cDatab,
                                                  v130);
          v90 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 105);
LABEL_196:
          KeSetEvent(v90, 1, 0);
          goto LABEL_207;
        case 7:
          EnterCrit(0LL, 1LL);
          RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 82), 1LL);
          v90 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 112);
          goto LABEL_196;
        default:
LABEL_162:
          v91 = *v55 & 4;
          if ( !(_DWORD)v91 && v50 == 9 )
          {
            EnterCrit(v91, 1LL);
            v78 = *((_QWORD *)&aDeviceTemplate + 152);
            goto LABEL_165;
          }
          if ( v50 == 10 )
          {
            EnterCrit(0LL, 1LL);
            v82 = 0LL;
            v95 = (char *)*((_QWORD *)&aDeviceTemplate + 201);
            if ( v95 != (char *)&aDeviceTemplate + 1616 )
              v82 = *((_QWORD *)&aDeviceTemplate + 201);
            UserSessionSwitchLeaveCrit(v95, v92, v93, v94);
            v96 = aDeviceTemplate;
            if ( *((int *)&aDeviceTemplate + 392) >= 0 )
            {
              ProcessHidInputViaRim(*((void **)&aDeviceTemplate + 201));
              if ( v82 )
                *((_QWORD *)&aDeviceTemplate + 201) = (char *)&aDeviceTemplate + 1616;
              v96 = aDeviceTemplate;
            }
            *(_DWORD *)(v96 + 1564) = 64;
            WaitBlockArray = (PKWAIT_BLOCK)((char *)&aDeviceTemplate + 1568);
            v86 = (char *)&aDeviceTemplate + 1608;
            Timeouta = (PLARGE_INTEGER)((char *)&aDeviceTemplate + 1560);
            v87 = *((unsigned int *)&aDeviceTemplate + 391);
            pData = (EVENT_DATA_DESCRIPTOR *)((char *)&aDeviceTemplate + 1584);
            v88 = *((_QWORD *)&aDeviceTemplate + 159);
            v89 = *((_QWORD *)&aDeviceTemplate + 152);
            goto LABEL_174;
          }
          if ( !(_DWORD)v91 && v50 == 11 )
          {
            EnterCrit(v91, 1LL);
            v97 = 0LL;
LABEL_181:
            RIMOnTimerNotification(*((_QWORD *)&aDeviceTemplate + 152), v97);
            goto LABEL_207;
          }
          switch ( v50 )
          {
            case 12:
              EnterCrit(0LL, 1LL);
              v97 = 1LL;
              goto LABEL_181;
            case 13:
              EnterCrit(0LL, 1LL);
              RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 152), 2LL);
              v90 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 182);
              goto LABEL_196;
            case 14:
              EnterCrit(0LL, 1LL);
              if ( gProtocolType )
                goto LABEL_207;
              RIMDirectStartStopDeviceRead(*((_QWORD *)&aDeviceTemplate + 152));
              v90 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 188);
              goto LABEL_196;
            case 15:
              EnterCrit(0LL, 1LL);
              if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 152), gpWin32kDriverObject);
              v90 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 194);
              goto LABEL_196;
          }
          if ( !v77 && v50 == 8 )
          {
            EnterCrit(0LL, 1LL);
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 82), gpWin32kDriverObject);
            v90 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 124);
            goto LABEL_196;
          }
          if ( ((v50 - 1) & 0xFFFFFEFF) == 0 )
          {
            EnterCrit(0LL, 1LL);
            if ( v50 == 1 && gbRITAlerted )
              KeTestAlertThread(0LL);
            TimersProc();
            UserSessionSwitchLeaveCrit(v99, v98, v100, v101);
            if ( gnRetryReadInput != dword_1C032C798 )
            {
              dword_1C032C798 = gnRetryReadInput;
              KeSetEvent(*((PRKEVENT *)&aDeviceTemplate + 10), 1, 0);
              WakeRIT(1LL);
            }
          }
          if ( gspwndAltTab )
          {
            EnterCrit(0LL, 1LL);
            while ( 1 )
            {
              v74 = gptiRit;
              if ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 400LL) + 6LL) & 0x40) == 0 )
                break;
              xxxReceiveMessage(gptiRit);
            }
            goto LABEL_207;
          }
          break;
      }
    }
  }
  KeClearEvent(gpkeRITEvent);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(&v121[1]) )
        goto LABEL_86;
      if ( v121[1] != 4 )
        break;
      ProcessQueuedMouseEvents();
    }
    if ( v121[1] == 1 || v121[1] == 2 )
    {
      EnterCrit(0LL, 1LL);
      goto LABEL_137;
    }
    if ( v121[1] == 8 )
      break;
    switch ( v121[1] )
    {
      case 0x10u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 0x20u:
        EnterCrit(0LL, 1LL);
        RitTakeOver();
        if ( (gdwMitConfig & 4) != 0 )
        {
          CBaseInput::RegisterDispatcherObject(gpHidInput, v120);
        }
        else
        {
          v136[9] = *((void **)&aDeviceTemplate + 156);
          v136[10] = *((void **)&aDeviceTemplate + 161);
          v136[11] = *((void **)&aDeviceTemplate + 166);
          v136[12] = *((void **)&aDeviceTemplate + 171);
          v136[13] = *((void **)&aDeviceTemplate + 179);
          v136[14] = *((void **)&aDeviceTemplate + 185);
          v136[15] = *((void **)&aDeviceTemplate + 191);
          LegacyInputDispatcher::AddLegacyDispatcherObjects(v120, 7u, &v136[9]);
        }
        goto LABEL_137;
      case 0x40u:
        EnterCrit(0LL, 1LL);
        if ( (unsigned int)RitPrepDitTakeOver() )
        {
          if ( (gdwMitConfig & 6) != 0 )
          {
            LegacyInputDispatcher::PurgeInputDispatcherObjects(v120);
            v61 = gdwMitConfig;
            if ( (gdwMitConfig & 2) != 0 )
              CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v120);
          }
          else
          {
            LegacyInputDispatcher::RemoveLegacyDispatcherObjects(v120, 7u);
          }
          gbDIT = 1;
        }
        goto LABEL_137;
      case 0x200u:
        EnterCrit(0LL, 1LL);
        ZwSetEvent(ghDITRITEvent, 0LL);
        goto LABEL_137;
      case 0x80u:
        EnterCrit(0LL, 1LL);
        RequestModeSwitchOnPowerUp();
        goto LABEL_137;
      case 0x100u:
        EnterCrit(0LL, 1LL);
        CheckPointerDeviceConfiguration();
        v64 = InteractiveControlManager::Instance();
        v121[0] = 0;
        if ( dword_1C0324190 > 4u )
        {
          TlgCreateSz(&pDesc, "InteractiveControlManager::GetExternalParameters entry");
          v65 = *(unsigned __int16 **)(gptiCurrent + 448LL);
          v139 = v142;
          v140 = 2LL;
          v66 = *v65;
          v141 = *((_QWORD *)v65 + 1);
          v142[0] = v66;
          v142[1] = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC1FE, v67, v68, 5u, &v137);
        }
        v121[0] = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v64 + 84));
        if ( (v121[0] & 0x80000000) != 0 && dword_1C0324190 > 2u )
        {
          TlgCreateSz(&v147, "Function failed.");
          v124 = (int)v69;
          v148 = &v124;
          v149 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v70, v69, 4u, &v146);
        }
        if ( dword_1C0324190 > 4u )
        {
          TlgCreateSz(&v151, "InteractiveControlManager::GetExternalParameters exit");
          v153 = 4LL;
          v152 = v121;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v71, v72, 4u, &v150);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_137:
        UserSessionSwitchLeaveCrit(v61, v60, v62, v63);
        break;
    }
  }
  InitiateWin32kCleanup();
  if ( gSessionId )
  {
    EnterCrit(0LL, 1LL);
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(v136[3]);
    UserSessionSwitchLeaveCrit(v103, v102, v104, v105);
  }
  if ( Handle )
    ZwClose(Handle);
  EnterCrit(0LL, 1LL);
  vCleanupRimClientWorker(1LL);
  if ( !gbDIT )
    vCleanupRimClientWorker(2LL);
  result = UserSessionSwitchLeaveCrit(v107, v106, v108, v109);
  if ( v120 )
    return (unsigned int)LegacyInputDispatcher::`scalar deleting destructor'(v120, v111);
  return result;
}

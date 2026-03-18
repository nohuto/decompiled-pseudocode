/*
 * XREFs of RawInputThread @ 0x1C0087D60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0043BB4 (CheckPointerDeviceConfiguration.c)
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     TimersProc @ 0x1C00888F0 (TimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C008A250 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00C4958 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00D856C (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00E0BA8 (--0InkProcessor@@AEAA@XZ.c)
 *     RitPrepDitTakeOver @ 0x1C00FD5A0 (RitPrepDitTakeOver.c)
 *     WakeRIT @ 0x1C00FDA94 (WakeRIT.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0112948 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C011B0F8 (CreatePointerDeviceProcessEvents.c)
 *     SetWindowArrangementHotKeys @ 0x1C011F4F0 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C012033C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C0122350 (xxxRegisterForDeviceClassNotifications.c)
 *     xxxClientEnableMMCSS @ 0x1C0123308 (xxxClientEnableMMCSS.c)
 *     InitKeyboard @ 0x1C012351C (InitKeyboard.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C012421C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?_GetDigitizerFlags@@YAKXZ @ 0x1C0124890 (-_GetDigitizerFlags@@YAKXZ.c)
 *     SetDebugHotKeys @ 0x1C0124F28 (SetDebugHotKeys.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C01259A0 (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0125C90 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RitTakeOver @ 0x1C0125EA8 (RitTakeOver.c)
 *     RequestModeSwitchOnPowerUp @ 0x1C01421E0 (RequestModeSwitchOnPowerUp.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01A1A20 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     ProcessHidInputViaRim @ 0x1C01AB5BC (ProcessHidInputViaRim.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C01AB990 (UpdateRimManagedKeyboardLeds.c)
 *     UserSetTimer @ 0x1C0212D98 (UserSetTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall RawInputThread(__int64 *a1)
{
  unsigned __int16 v2; // di
  __int64 RemoteContext; // r15
  __int64 v4; // rsi
  HANDLE ThreadId; // rax
  __int64 v6; // rdx
  InkProcessor *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // rax
  unsigned int v11; // edx
  __int64 ProcessWin32Process; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTIMER *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v22; // rcx
  NTSTATUS v23; // ebx
  char DigitizerFlags; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  unsigned int v28; // edx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct InteractiveControlManager *v32; // rbx
  const GUID *v33; // r8
  const GUID *v34; // r9
  const GUID *v35; // r8
  const GUID *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTIMER *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int result; // eax
  unsigned int v45; // edx
  unsigned int v46; // r14d
  CBaseInput **v47; // rcx
  __int64 v48; // rsi
  unsigned int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 i; // rdi
  void *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int16 *v59; // rax
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rbx
  _QWORD *v66; // rcx
  unsigned int v67; // edx
  _QWORD *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  struct _KEVENT *v72; // rcx
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  PVOID *Object; // [rsp+28h] [rbp-E0h]
  int Objecta; // [rsp+28h] [rbp-E0h]
  int Objectb; // [rsp+28h] [rbp-E0h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  int OutputBufferLength; // [rsp+50h] [rbp-B8h]
  LegacyInputDispatcher *v85; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  int v88; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v89; // [rsp+84h] [rbp-84h] BYREF
  int v90; // [rsp+88h] [rbp-80h] BYREF
  PVOID v91; // [rsp+90h] [rbp-78h] BYREF
  PRKEVENT v92; // [rsp+98h] [rbp-70h]
  PVOID v93; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v94; // [rsp+A8h] [rbp-60h]
  _BYTE v95[8]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v96[8]; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING v98; // [rsp+D8h] [rbp-30h] BYREF
  struct _UNICODE_STRING v99; // [rsp+E8h] [rbp-20h] BYREF
  __int128 SystemInformation; // [rsp+F8h] [rbp-10h] BYREF
  int v101; // [rsp+108h] [rbp+0h]
  void *v102[16]; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v103; // [rsp+198h] [rbp+90h] BYREF
  const char *v104; // [rsp+1B8h] [rbp+B0h]
  int v105; // [rsp+1C0h] [rbp+B8h]
  int v106; // [rsp+1C4h] [rbp+BCh]
  _DWORD *v107; // [rsp+1C8h] [rbp+C0h]
  __int64 v108; // [rsp+1D0h] [rbp+C8h]
  __int64 v109; // [rsp+1D8h] [rbp+D0h]
  _DWORD v110[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  EVENT_DATA_DESCRIPTOR v111; // [rsp+1E8h] [rbp+E0h] BYREF
  const char *v112; // [rsp+208h] [rbp+100h]
  int v113; // [rsp+210h] [rbp+108h]
  int v114; // [rsp+214h] [rbp+10Ch]
  int *v115; // [rsp+218h] [rbp+110h]
  __int64 v116; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v117; // [rsp+228h] [rbp+120h] BYREF
  const char *v118; // [rsp+248h] [rbp+140h]
  int v119; // [rsp+250h] [rbp+148h]
  int v120; // [rsp+254h] [rbp+14Ch]
  __int64 *v121; // [rsp+258h] [rbp+150h]
  __int64 v122; // [rsp+260h] [rbp+158h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+268h] [rbp+160h] BYREF
  int *v124; // [rsp+288h] [rbp+180h]
  __int64 v125; // [rsp+290h] [rbp+188h]

  v2 = 1;
  v85 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset(v102, 0, sizeof(v102));
  v4 = *a1;
  WPP_MAIN_CB.Reserved = KeGetCurrentThread();
  if ( (gdwMitConfig & 2) == 0 )
  {
    v102[4] = (void *)aDeviceTemplate[86];
    v102[5] = (void *)aDeviceTemplate[91];
    v102[6] = (void *)aDeviceTemplate[104];
    v102[7] = (void *)aDeviceTemplate[109];
    v102[8] = (void *)aDeviceTemplate[121];
  }
  if ( (gdwMitConfig & 4) == 0 )
  {
    v102[9] = (void *)aDeviceTemplate[156];
    v102[10] = (void *)aDeviceTemplate[161];
    v102[11] = (void *)aDeviceTemplate[166];
    v102[12] = (void *)aDeviceTemplate[171];
    v102[13] = (void *)aDeviceTemplate[179];
    v102[14] = (void *)aDeviceTemplate[185];
    v102[15] = (void *)aDeviceTemplate[191];
  }
  *(_QWORD *)&v94 = PsGetThreadProcessId(KeGetCurrentThread());
  ThreadId = PsGetThreadId(KeGetCurrentThread());
  v101 = 16;
  *((_QWORD *)&v94 + 1) = ThreadId;
  SystemInformation = v94;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(0LL, 1LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1956LL) = 0;
  *(_DWORD *)(gpsi + 2052LL) = 0;
  *(_DWORD *)(gpsi + 2180LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi, v6);
  if ( !InkProcessor::s_pInstance )
  {
    v7 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    v10 = v7 ? (const GUID *)InkProcessor::InkProcessor(v7) : 0LL;
    InkProcessor::s_pInstance = v10;
    if ( !v10 && (unsigned int)pRelatedActivityId > 2 )
    {
      v88 = -1073741801;
      v124 = &v88;
      v125 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v8, v9, 3u, &pData);
    }
  }
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_223;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v13 = *(_QWORD *)(GetDispInfo() + 88);
  *(_DWORD *)(gpsi + 4944LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4948LL) = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) / 2;
  *(_QWORD *)gptCursorAsync = *(_QWORD *)(gpsi + 4944LL);
  *(_WORD *)(gpsi + 4960LL) = 0;
  *(_DWORD *)(gpsi + 4952LL) = 0;
  *(_DWORD *)(gpsi + 4956LL) = 0;
  EnterCrit(0LL, 1LL);
  TransitionCursorSuppressionState(10, 1);
  UserSessionSwitchLeaveCrit(v15, v14);
  EnterCrit(0LL, 1LL);
  if ( gSessionId != gServiceSessionId )
  {
    LODWORD(Object) = 0;
    RegisterHotKey((struct tagWND *)1, 0LL, -7, 8, (ULONG_PTR)Object);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    13LL);
  UserSessionSwitchLeaveCrit(v17, v16);
  v18 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
  gptmrMaster = v18;
  if ( !v18 )
    goto LABEL_223;
  KeInitializeTimer(v18);
  v102[1] = (void *)gptmrMaster;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    v39 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 1951101781LL);
    gptmrWD = v39;
    if ( !v39 )
      goto LABEL_223;
    KeInitializeTimerEx(v39, SynchronizationTimer);
  }
  v102[2] = (void *)gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 8LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_223;
  }
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(0LL, 1LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v20, v19);
  }
  if ( gSessionId == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( gSessionId )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &v93, 0LL);
      v2 = 2;
      v102[3] = v93;
      v92 = (PRKEVENT)v93;
      goto LABEL_25;
    }
LABEL_223:
    if ( v85 )
      LegacyInputDispatcher::`scalar deleting destructor'(v85, v11);
    KeSetEvent((PRKEVENT)a1[1], 1, 0);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  Handle = 0LL;
  if ( PoRequestShutdownEvent(&v102[3]) < 0 )
    goto LABEL_223;
LABEL_25:
  if ( gSessionId != gServiceSessionId )
    CreatePointerDeviceProcessEvents();
  aDeviceTemplate[80] = v102[3];
  aDeviceTemplate[10] = CreateKernelEvent(1LL, 0LL);
  aDeviceTemplate[150] = v102[3];
  if ( !v102[3] )
    goto LABEL_223;
  CurrentThread = KeGetCurrentThread();
  gpkeRITEvent = (PRKEVENT)v102[3];
  gptiRit = W32GetThreadWin32Thread(CurrentThread);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 464LL) |= 0x80u;
  v22 = (struct _KEVENT *)a1[1];
  v102[0] = *(void **)(gptiRit + 1376LL);
  KeSetEvent(v22, 1, 0);
  v91 = *(PVOID *)(v4 + 56);
  ObReferenceObjectByPointer(v91, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v23 = KeWaitForMultipleObjects(v2, &v91, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v23 == 1 && (gdwRITWakeReason & 8) == 0 );
  ObfDereferenceObject(v91);
  if ( v23 == 1 && (gdwRITWakeReason & 8) != 0 )
  {
    KeSetEvent(v92, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(v92);
    if ( Handle )
      ZwClose(Handle);
    return KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent(gpkeRITEvent, 1, 0);
  EnterCrit(0LL, 1LL);
  if ( !*(_QWORD *)(gptiRit + 432LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 592LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 592LL) + 16LL), 0, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( gSessionId == gServiceSessionId )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      CBaseInput::InitializeSensor(gpHidInput);
      CBaseInput::InitializeSensor(gpKeyboardSensor);
    }
    goto LABEL_41;
  }
  if ( gProtocolType )
  {
    RtlInitUnicodeString(&v98, 0LL);
    v46 = 1;
    while ( 1 )
    {
      if ( v46 == 1 && (gdwMitConfig & 2) == 0 )
      {
LABEL_142:
        v48 = 70LL * v46;
        v49 = DeviceTypeToRimInputType(v46);
        LOBYTE(OutputBufferLength) = 0;
        if ( (int)RIMRegisterForInput(
                    v49,
                    0LL,
                    gpWin32kDriverObject,
                    aDeviceTemplate[v48 + 14],
                    aDeviceTemplate[v48 + 24],
                    0LL,
                    0,
                    0LL,
                    Win32kRIMDevChangeCallback,
                    OutputBufferLength,
                    0LL,
                    &aDeviceTemplate[v48 + 12]) >= 0 )
        {
          LOBYTE(v50) = 1;
          RawInputManagerObjectResolveHandle(aDeviceTemplate[70 * v46 + 12], 3LL, v50, &aDeviceTemplate[v48 + 13]);
          if ( v46 == 1 )
          {
            LOBYTE(Objectb) = 0;
            RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
              aDeviceTemplate[82],
              &v98,
              1LL,
              ghRemoteKeyboardChannel,
              Objectb,
              v95);
          }
          HIDWORD(aDeviceTemplate[70 * v46 + 55]) = 64;
          LOBYTE(Objectb) = 0;
          RIMReadInput(
            aDeviceTemplate[70 * v46 + 12],
            &aDeviceTemplate[v48 + 61],
            HIDWORD(aDeviceTemplate[70 * v46 + 55]),
            aDeviceTemplate[70 * v46 + 19],
            Objectb,
            &aDeviceTemplate[v48 + 58],
            &aDeviceTemplate[v48 + 55],
            &aDeviceTemplate[v48 + 56]);
        }
        goto LABEL_125;
      }
      if ( v46 != 2 )
        break;
      if ( (gdwMitConfig & 4) == 0 )
        goto LABEL_142;
      if ( (int)CBaseInput::InitializeSensor(gpHidInput) >= 0 )
      {
        v47 = (CBaseInput **)gpHidInput;
LABEL_124:
        CBaseInput::Read(*v47);
      }
LABEL_125:
      if ( ++v46 > 2 )
        goto LABEL_38;
    }
    if ( v46 != 1 || (int)CBaseInput::InitializeSensor(gpKeyboardSensor) < 0 )
      goto LABEL_125;
    CBaseInput::HandleTSRequest(gpKeyboardSensor, 0LL);
    v47 = (CBaseInput **)gpKeyboardSensor;
    goto LABEL_124;
  }
  xxxRegisterForDeviceClassNotifications();
LABEL_38:
  DigitizerFlags = _GetDigitizerFlags();
  if ( (DigitizerFlags & 0xD) != 0 && DigitizerFlags < 0 )
    RegisterTabletButtonHandler();
  InitTimerPowerSaving();
  WPP_MAIN_CB.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)SetRITTimer(
                                                              (int)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                              1000,
                                                              (int)xxxHungAppDemon,
                                                              0);
LABEL_41:
  gbIsRITReady = 1;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v27 = 0;
  }
  else
  {
    v27 = 1;
    UserEnterUserCritSec();
  }
  if ( gcSynchronizeTimer != -1 )
    gidSynchronizeTimer = UserSetTimer();
  if ( v27 )
    UserLeaveUserCritSec();
  if ( BYTE4(WPP_MAIN_CB.DeviceObjectExtension) )
    BYTE4(WPP_MAIN_CB.DeviceObjectExtension) = 0;
  UserSessionSwitchLeaveCrit(v26, v25);
  LegacyInputDispatcher::Create(&v85);
  v28 = (gdwMitConfig & 4) != 0 ? 9 : 16;
  if ( (gdwMitConfig & 2) != 0 )
    v28 = 4;
  LegacyInputDispatcher::Initialize(v85, 0, 1, 0x40u, v28, v102);
  if ( (gdwMitConfig & 2) != 0 )
    CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v85);
  if ( (gdwMitConfig & 4) != 0 )
    CBaseInput::RegisterDispatcherObject(gpHidInput, v85);
  while ( 1 )
  {
LABEL_55:
    v29 = LegacyInputDispatcher::WaitAndDispatch(v85);
    if ( !v29 )
    {
      EnterCrit(0LL, 1LL);
      xxxRemoveQueueCompletion();
      UserSessionSwitchLeaveCrit(v52, v51);
    }
    if ( (gdwMitConfig & 2) == 0 && gdwUpdateKeyboard )
    {
      EnterDeviceInfoListCrit_();
      for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
      {
        if ( *(_BYTE *)(i + 48) == 1 )
        {
          v54 = *(void **)(i + 224);
          if ( v54 )
          {
            if ( (gdwUpdateKeyboard & 1) != 0 )
              ZwDeviceIoControlFile(v54, 0LL, 0LL, 0LL, giosbKbdControl, 0xB0004u, gktp, 6u, 0LL, 0);
            if ( (gdwUpdateKeyboard & 2) != 0 )
              ZwDeviceIoControlFile(*(HANDLE *)(i + 224), 0LL, 0LL, 0LL, giosbKbdControl, 0xB0008u, gklp, 4u, 0LL, 0);
          }
        }
      }
      UpdateRimManagedKeyboardLeds();
      LeaveDeviceInfoListCrit_(v56, v55, v57);
      if ( (gdwUpdateKeyboard & 2) != 0 && gfRemotingConsole )
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
      gdwUpdateKeyboard &= 0xFFFFFFF8;
    }
    if ( v29 == 3 )
      break;
    if ( v29 == 2 )
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
        v77 = gConsoleShadowhDev;
        if ( gConsoleShadowhDev )
          HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
      }
LABEL_222:
      UserSessionSwitchLeaveCrit(v77, v76);
    }
    else
    {
      if ( (gdwMitConfig & 2) == 0 && v29 == 4 )
      {
        EnterCrit(0LL, 1LL);
        v63 = aDeviceTemplate[82];
LABEL_194:
        RIMOnPnpNotification(v63);
        goto LABEL_222;
      }
      if ( (gdwMitConfig & 2) == 0 )
      {
        switch ( v29 )
        {
          case 5:
            EnterCrit(0LL, 1LL);
            v65 = 0LL;
            v66 = (_QWORD *)aDeviceTemplate[131];
            if ( v66 != &aDeviceTemplate[132] )
              v65 = aDeviceTemplate[131];
            UserSessionSwitchLeaveCrit(v66, v64);
            if ( SLODWORD(aDeviceTemplate[126]) >= 0 )
            {
              ProcessKeyboardInputViaRim(
                (void *)aDeviceTemplate[131],
                v67,
                aDeviceTemplate[127],
                (void *)aDeviceTemplate[128]);
              if ( v65 )
                aDeviceTemplate[131] = &aDeviceTemplate[132];
            }
            HIDWORD(aDeviceTemplate[125]) = 64;
            WaitBlockArray = (PKWAIT_BLOCK)&aDeviceTemplate[126];
            v68 = &aDeviceTemplate[131];
            Timeout = (PLARGE_INTEGER)&aDeviceTemplate[125];
            v69 = HIDWORD(aDeviceTemplate[125]);
            HandleInformation = (POBJECT_HANDLE_INFORMATION)&aDeviceTemplate[128];
            v70 = aDeviceTemplate[89];
            v71 = aDeviceTemplate[82];
            goto LABEL_201;
          case 6:
            EnterCrit(0LL, 1LL);
            RtlInitUnicodeString(&v99, 0LL);
            LOBYTE(Objecta) = 0;
            LODWORD(aDeviceTemplate[106]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                              aDeviceTemplate[82],
                                              &v99,
                                              1LL,
                                              ghRemoteKeyboardChannel,
                                              Objecta,
                                              v96);
            v72 = (struct _KEVENT *)aDeviceTemplate[105];
LABEL_219:
            KeSetEvent(v72, 1, 0);
            goto LABEL_222;
          case 7:
            EnterCrit(0LL, 1LL);
            RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[82], 1LL);
            v72 = (struct _KEVENT *)aDeviceTemplate[112];
            goto LABEL_219;
        }
      }
      if ( (gdwMitConfig & 4) == 0 && v29 == 9 )
      {
        EnterCrit(0LL, 1LL);
        v63 = aDeviceTemplate[152];
        goto LABEL_194;
      }
      if ( v29 == 10 )
      {
        EnterCrit(0LL, 1LL);
        v65 = 0LL;
        v74 = (_QWORD *)aDeviceTemplate[201];
        if ( v74 != &aDeviceTemplate[202] )
          v65 = aDeviceTemplate[201];
        UserSessionSwitchLeaveCrit(v74, v73);
        if ( SLODWORD(aDeviceTemplate[196]) >= 0 )
        {
          ProcessHidInputViaRim((void *)aDeviceTemplate[201]);
          if ( v65 )
            aDeviceTemplate[201] = &aDeviceTemplate[202];
        }
        HIDWORD(aDeviceTemplate[195]) = 64;
        WaitBlockArray = (PKWAIT_BLOCK)&aDeviceTemplate[196];
        v68 = &aDeviceTemplate[201];
        Timeout = (PLARGE_INTEGER)&aDeviceTemplate[195];
        v69 = HIDWORD(aDeviceTemplate[195]);
        HandleInformation = (POBJECT_HANDLE_INFORMATION)&aDeviceTemplate[198];
        v70 = aDeviceTemplate[159];
        v71 = aDeviceTemplate[152];
LABEL_201:
        LOBYTE(Objecta) = 0;
        RIMReadInput(v71, v68, v69, v70, Objecta, HandleInformation, Timeout, WaitBlockArray);
        if ( v65 )
        {
          EnterCrit(0LL, 1LL);
          RIMFreeKernelMem(v65);
          goto LABEL_222;
        }
      }
      else
      {
        if ( (gdwMitConfig & 4) == 0 && v29 == 11 )
        {
          EnterCrit(0LL, 1LL);
          v75 = 0LL;
LABEL_206:
          RIMOnTimerNotification(aDeviceTemplate[152], v75);
          goto LABEL_222;
        }
        switch ( v29 )
        {
          case 12:
            EnterCrit(0LL, 1LL);
            v75 = 1LL;
            goto LABEL_206;
          case 13:
            EnterCrit(0LL, 1LL);
            RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
            v72 = (struct _KEVENT *)aDeviceTemplate[182];
            goto LABEL_219;
          case 14:
            EnterCrit(0LL, 1LL);
            if ( gProtocolType )
              goto LABEL_222;
            RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
            v72 = (struct _KEVENT *)aDeviceTemplate[188];
            goto LABEL_219;
          case 15:
            EnterCrit(0LL, 1LL);
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(aDeviceTemplate[152], gpWin32kDriverObject);
            v72 = (struct _KEVENT *)aDeviceTemplate[194];
            goto LABEL_219;
        }
        if ( (gdwMitConfig & 2) == 0 && v29 == 8 )
        {
          EnterCrit(0LL, 1LL);
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[82], gpWin32kDriverObject);
          v72 = (struct _KEVENT *)aDeviceTemplate[124];
          goto LABEL_219;
        }
        if ( ((v29 - 1) & 0xFFFFFEFF) == 0 )
        {
          EnterCrit(0LL, 1LL);
          if ( BYTE4(WPP_MAIN_CB.DeviceObjectExtension) && v29 == 1 )
            KeTestAlertThread(0LL);
          TimersProc();
          UserSessionSwitchLeaveCrit(v31, v30);
          if ( gnRetryReadInput != dword_1C032F980 )
          {
            dword_1C032F980 = gnRetryReadInput;
            KeSetEvent((PRKEVENT)aDeviceTemplate[10], 1, 0);
            WakeRIT(1LL);
          }
        }
        if ( gspwndAltTab )
        {
          EnterCrit(0LL, 1LL);
          while ( (*(_BYTE *)(*(_QWORD *)(gptiRit + 424LL) + 6LL) & 0x40) != 0 )
            xxxReceiveMessage(gptiRit);
          goto LABEL_222;
        }
      }
    }
  }
  KeClearEvent(gpkeRITEvent);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(&v89) )
        goto LABEL_55;
      if ( v89 != 4 )
        break;
      ProcessMouseEvent();
    }
    if ( v89 == 1 || v89 == 2 )
    {
      EnterCrit(0LL, 1LL);
      goto LABEL_95;
    }
    if ( v89 == 8 )
      break;
    switch ( v89 )
    {
      case 0x10u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 0x20u:
        EnterCrit(0LL, 1LL);
        RitTakeOver();
        if ( (gdwMitConfig & 4) != 0 )
        {
          CBaseInput::RegisterDispatcherObject(gpHidInput, v85);
        }
        else
        {
          v102[9] = (void *)aDeviceTemplate[156];
          v102[10] = (void *)aDeviceTemplate[161];
          v102[11] = (void *)aDeviceTemplate[166];
          v102[12] = (void *)aDeviceTemplate[171];
          v102[13] = (void *)aDeviceTemplate[179];
          v102[14] = (void *)aDeviceTemplate[185];
          v102[15] = (void *)aDeviceTemplate[191];
          LegacyInputDispatcher::AddLegacyDispatcherObjects(v85, 7u, &v102[9]);
        }
        goto LABEL_95;
      case 0x40u:
        EnterCrit(0LL, 1LL);
        if ( (unsigned int)RitPrepDitTakeOver() )
        {
          if ( (gdwMitConfig & 6) != 0 )
          {
            LegacyInputDispatcher::PurgeInputDispatcherObjects(v85);
            v38 = gdwMitConfig;
            if ( (gdwMitConfig & 2) != 0 )
              CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, v85);
          }
          else
          {
            LegacyInputDispatcher::RemoveLegacyDispatcherObjects(v85, 7u);
          }
          gbDIT = 1;
        }
LABEL_95:
        UserSessionSwitchLeaveCrit(v38, v37);
        break;
      case 0x200u:
        EnterCrit(0LL, 1LL);
        ZwSetEvent(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, 0LL);
        goto LABEL_95;
      case 0x80u:
        EnterCrit(0LL, 1LL);
        RequestModeSwitchOnPowerUp();
        goto LABEL_95;
      case 0x100u:
        EnterCrit(0LL, 1LL);
        CheckPointerDeviceConfiguration();
        v32 = InteractiveControlManager::Instance();
        LODWORD(v86) = 0;
        if ( dword_1C0320190 > 4u )
        {
          v58 = -1LL;
          do
            ++v58;
          while ( aInteractivecon_31[v58] );
          v104 = "InteractiveControlManager::GetExternalParameters entry";
          v105 = v58 + 1;
          v106 = 0;
          v59 = *(unsigned __int16 **)(gptiCurrent + 472LL);
          v107 = v110;
          v108 = 2LL;
          v60 = *v59;
          v109 = *((_QWORD *)v59 + 1);
          v110[0] = v60;
          v110[1] = 0;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8D6E, v33, v34, 5u, &v103);
        }
        LODWORD(v86) = InteractiveControlSettings::ReadSettings((struct InteractiveControlManager *)((char *)v32 + 84));
        if ( (int)v86 < 0 && dword_1C0320190 > 2u )
        {
          v61 = -1LL;
          do
            ++v61;
          while ( aFunctionFailed[v61] );
          v112 = "Function failed.";
          v113 = v61 + 1;
          v115 = &v90;
          v114 = 0;
          v90 = v86;
          v116 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v35, v36, 4u, &v111);
        }
        if ( dword_1C0320190 > 4u )
        {
          v62 = -1LL;
          do
            ++v62;
          while ( aInteractivecon[v62] );
          v118 = "InteractiveControlManager::GetExternalParameters exit";
          v119 = v62 + 1;
          v121 = &v86;
          v120 = 0;
          v122 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, v35, v36, 4u, &v117);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
        goto LABEL_95;
    }
  }
  InitiateWin32kCleanup();
  if ( gSessionId )
  {
    EnterCrit(0LL, 1LL);
    gpkeRITEvent = 0LL;
    ObfDereferenceObject(v102[3]);
    UserSessionSwitchLeaveCrit(v41, v40);
  }
  if ( Handle )
    ZwClose(Handle);
  EnterCrit(0LL, 1LL);
  CleanupSensorExplicitly(1LL);
  if ( !gbDIT )
    CleanupSensorExplicitly(2LL);
  result = UserSessionSwitchLeaveCrit(v43, v42);
  if ( v85 )
    return (unsigned int)LegacyInputDispatcher::`scalar deleting destructor'(v85, v45);
  return result;
}

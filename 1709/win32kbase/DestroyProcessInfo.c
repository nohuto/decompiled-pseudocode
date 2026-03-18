/*
 * XREFs of DestroyProcessInfo @ 0x1C009CD88
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     RIMOnProcessDestroy @ 0x1C00181E0 (RIMOnProcessDestroy.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F06C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001F0A0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     CloseProtectedHandle @ 0x1C0023524 (CloseProtectedHandle.c)
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 *     UnlockObjectAssignment @ 0x1C003C740 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     CleanupLogonProcess @ 0x1C0075420 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     ClearAppStarting @ 0x1C007D570 (ClearAppStarting.c)
 *     IsShellProcess @ 0x1C007E184 (IsShellProcess.c)
 *     DelayedDestroyCacheDC @ 0x1C008B178 (DelayedDestroyCacheDC.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00E1150 (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01034C8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v8; // eax
  __int64 i; // rcx
  _QWORD *j; // rax
  __int64 v11; // rdx
  int v12; // edx
  int v13; // r8d
  HANDLE ProcessId; // rax
  int SecurityDescriptor; // edx
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebp
  __int64 *k; // rcx
  void *v21; // rcx
  __int64 v22; // rbx
  __int64 *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // [rsp+30h] [rbp+8h] BYREF

  CitProcessCallout(a1, 0);
  v2 = *(struct _KEVENT **)(a1 + 16);
  if ( v2 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v2 )
  {
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
LABEL_4:
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
  ++gdwDeferWinEvent;
  v3 = *(_DWORD *)(a1 + 12);
  if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 12) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v28);
  if ( (*(_DWORD *)(a1 + 12) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*(_QWORD *)a1, 6LL);
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 784) && (int)IsDestroyProcessHidRequestsSupported() >= 0 )
    DestroyProcessHidRequests(a1);
  if ( *(_QWORD *)(a1 + 848) && (int)IsCleanupInjectedTouchProcessSupported() >= 0 )
    CleanupInjectedTouchProcess(a1);
  if ( *(_QWORD *)(a1 + 856) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( *(_QWORD *)(a1 + 864) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported() >= 0 )
    MSGSQMRemoveProcess(a1);
  if ( (*(_DWORD *)(a1 + 12) & 0x40001) == 0x40000 )
  {
    v6 = *(_QWORD *)(a1 + 640);
    if ( (!v6 || (*(_DWORD *)(v6 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported() >= 0 )
      PostPlaySoundMessage(8LL);
  }
  if ( (unsigned int)IsShellProcess(a1) && *(_QWORD *)(a1 + 312) == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 )
      CleanupIAMAccess(*(_QWORD *)(a1 + 312));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 640) + 32LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v8 = PsGetProcessExitStatus(*(PEPROCESS *)a1);
        PostWinlogonMessage(1025LL, v8);
      }
    }
  }
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v28, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD **)(i + 16); j; j = (_QWORD *)j[4] )
    {
      v11 = j[1];
      if ( *(_QWORD *)(v11 + 168) == a1 )
        *(_QWORD *)(v11 + 168) = 0LL;
      if ( j[32] == a1 )
        j[32] = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v28);
  if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    SecurityDescriptor = (int)WPP_MAIN_CB.SecurityDescriptor;
    ghCanActivateForegroundPIDs[SLODWORD(WPP_MAIN_CB.SecurityDescriptor)] = ProcessId;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = SecurityDescriptor + 1;
    if ( SecurityDescriptor == 4 )
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) = 0;
    ClearAppStarting(a1);
  }
  v16 = &gppiList;
  if ( gppiList )
  {
    while ( 1 )
    {
      v17 = *v16;
      if ( *v16 == a1 )
        break;
      v16 = (__int64 *)(v17 + 352);
      if ( !*(_QWORD *)(v17 + 352) )
        goto LABEL_56;
    }
    *v16 = *(_QWORD *)(a1 + 352);
  }
LABEL_56:
  v18 = *(_DWORD *)(a1 + 12);
  v19 = v18 & 0x4000;
  if ( (v18 & 0x4000) != 0 && (v18 & 0x200) != 0 )
    DelayedDestroyCacheDC(1, v12, v13);
  if ( (int)IsGetgpPublicObjectListSupported(v16) >= 0 )
  {
    GetgpPublicObjectList(&v28);
    for ( k = v28; k; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 5) == *(_DWORD *)(a1 + 56) )
        *((_DWORD *)k + 5) = 0;
    }
  }
  if ( gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  if ( gppiForegroundOld == a1 )
    gppiForegroundOld = 0LL;
  if ( gppiUserApiHook == a1 && (int)Is_UnregisterUserApiHookSupported() >= 0 )
    _UnregisterUserApiHook();
  if ( gppiDManipHook == a1 && (int)Is_UnregisterDManipHookSupported() >= 0 )
    _UnregisterDManipHook();
  UnlockObjectAssignment((void **)(a1 + 640));
  UnlockObjectAssignment((void **)(a1 + 312));
  v21 = *(void **)(a1 + 368);
  if ( v21 )
  {
    CloseProtectedHandle(v21);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
  *(_DWORD *)(a1 + 12) |= 0x1000u;
  v22 = *(_QWORD *)(a1 + 336);
  if ( v22 )
  {
    ObfDereferenceObject(*(PVOID *)(v22 + 32));
    v23 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( 1 )
      {
        v24 = (_QWORD *)*v23;
        if ( *v23 == v22 )
          break;
        v23 = (__int64 *)*v23;
        if ( !*v24 )
          goto LABEL_83;
      }
      *v23 = *(_QWORD *)v22;
    }
LABEL_83:
    Win32FreePool(v22);
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  v25 = *(_QWORD **)(a1 + 672);
  if ( v25 )
  {
    do
    {
      v26 = (_QWORD *)*v25;
      Win32FreePool((__int64)v25);
      v25 = v26;
    }
    while ( v26 );
  }
  *(_QWORD *)(a1 + 672) = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported(v25) >= 0 )
    FreeProcessMessageFilter(a1);
  if ( a1 == gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *(_DWORD *)(a1 + 56) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 0;
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && (int)IsTransitionCursorSuppressionStateSupported() >= 0 )
    {
      TransitionCursorSuppressionState(2LL);
      *(_DWORD *)(a1 + 776) &= ~0x40000u;
    }
  }
  if ( *(_DWORD *)(a1 + 56) == gpidLogon )
    CleanupLogonProcess();
  GreSetDCOwnerEx((struct HOBJ__ *)qword_1C0192AA8, 0LL, 0LL, 0LL);
  DestroyProcessInfoEditionRundown(a1);
  RIMOnProcessDestroy(*(struct _LIST_ENTRY **)a1);
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0(v27, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v19;
}

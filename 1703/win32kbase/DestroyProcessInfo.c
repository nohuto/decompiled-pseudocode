/*
 * XREFs of DestroyProcessInfo @ 0x1C00509D8
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0050600 (xxxUserProcessCallout.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     DelayedDestroyCacheDC @ 0x1C00378A0 (DelayedDestroyCacheDC.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     UnlockObjectAssignment @ 0x1C0043590 (UnlockObjectAssignment.c)
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     RIMOnProcessDestroy @ 0x1C0051800 (RIMOnProcessDestroy.c)
 *     IsShellProcess @ 0x1C0051BF4 (IsShellProcess.c)
 *     CloseProtectedHandle @ 0x1C0051C20 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C0051D70 (ClearAppStarting.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     CleanupLogonProcess @ 0x1C00674C0 (CleanupLogonProcess.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00DA5C0 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0103300 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 i; // rcx
  HANDLE ProcessId; // rax
  int Lock; // edx
  __int64 *v10; // rcx
  __int64 v11; // rax
  _QWORD *j; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebp
  __int64 *k; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v23; // eax
  __int64 *v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // [rsp+30h] [rbp+8h] BYREF

  CitProcessCallout((struct tagPROCESSINFO *)a1);
  v2 = (struct _KEVENT *)a1[2];
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject((PVOID)a1[2]);
  }
  a1[2] = 0LL;
LABEL_3:
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  LOBYTE(v26) = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v26);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  --gdwDeferWinEvent;
  if ( !(_BYTE)v26 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v26);
  }
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 6LL, 0LL);
  v5 = a1[34];
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    a1[34] = 0LL;
  }
  if ( a1[97] && (int)IsDestroyProcessHidRequestsSupported() >= 0 )
    DestroyProcessHidRequests(a1);
  if ( a1[105] && (int)IsCleanupInjectedTouchProcessSupported() >= 0 )
    CleanupInjectedTouchProcess(a1);
  if ( a1[106] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[107] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported() >= 0 )
    MSGSQMRemoveProcess(a1);
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v6 = a1[79];
    if ( (!v6 || (*(_DWORD *)(v6 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported() >= 0 )
      PostPlaySoundMessage(8LL);
  }
  if ( (unsigned int)IsShellProcess(a1) && a1[38] == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 )
      CleanupIAMAccess(a1[38]);
    if ( (*(_DWORD *)(a1[79] + 32LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v23 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v23);
      }
    }
  }
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD **)(i + 16); j; j = (_QWORD *)j[4] )
    {
      v13 = j[1];
      if ( *(_QWORD **)(v13 + 168) == a1 )
        *(_QWORD *)(v13 + 168) = 0LL;
      if ( (_QWORD *)j[32] == a1 )
        j[32] = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    ghCanActivateForegroundPIDs[SLODWORD(WPP_MAIN_CB.DeviceQueue.Lock)] = ProcessId;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = Lock + 1;
    if ( Lock == 4 )
      LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
    ClearAppStarting(a1);
  }
  v10 = &gppiList;
  if ( gppiList )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( (_QWORD *)*v10 == a1 )
        break;
      v10 = (__int64 *)(v11 + 344);
      if ( !*(_QWORD *)(v11 + 344) )
        goto LABEL_43;
    }
    *v10 = a1[43];
  }
LABEL_43:
  v14 = *((_DWORD *)a1 + 3);
  v15 = v14 & 0x4000;
  if ( (v14 & 0x4000) != 0 && (v14 & 0x200) != 0 )
    DelayedDestroyCacheDC(1);
  if ( (int)IsGetgpPublicObjectListSupported(v10) >= 0 )
  {
    GetgpPublicObjectList(&v26);
    for ( k = v26; k; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)k + 5) = 0;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  if ( (_QWORD *)gppiForegroundOld == a1 )
    gppiForegroundOld = 0LL;
  if ( (_QWORD *)gppiUserApiHook == a1 && (int)Is_UnregisterUserApiHookSupported() >= 0 )
    _UnregisterUserApiHook();
  if ( (_QWORD *)gppiDManipHook == a1 && (int)Is_UnregisterDManipHookSupported() >= 0 )
    _UnregisterDManipHook();
  UnlockObjectAssignment((void **)a1 + 79);
  UnlockObjectAssignment((void **)a1 + 38);
  v17 = a1[45];
  if ( v17 )
  {
    CloseProtectedHandle(v17);
    a1[45] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v18 = a1[41];
  if ( v18 )
  {
    ObfDereferenceObject(*(PVOID *)(v18 + 32));
    v24 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( 1 )
      {
        v25 = (_QWORD *)*v24;
        if ( *v24 == v18 )
          break;
        v24 = (__int64 *)*v24;
        if ( !*v25 )
          goto LABEL_104;
      }
      *v24 = *(_QWORD *)v18;
    }
LABEL_104:
    Win32FreePool(v18);
    a1[41] = 0LL;
  }
  v19 = (_QWORD *)a1[83];
  if ( v19 )
  {
    do
    {
      v21 = (_QWORD *)*v19;
      Win32FreePool((__int64)v19);
      v19 = v21;
    }
    while ( v21 );
  }
  a1[83] = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported() >= 0 )
    FreeProcessMessageFilter(a1);
  if ( a1 == (_QWORD *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (_QWORD *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = 0;
    if ( (a1[96] & 0x40000) != 0 && (int)IsTransitionCursorSuppressionStateSupported() >= 0 )
    {
      TransitionCursorSuppressionState(2LL);
      *((_DWORD *)a1 + 192) &= ~0x40000u;
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess();
  GreSetDCOwnerEx((unsigned int)qword_1C018DBF8, 0, 0, 0);
  DestroyProcessInfoEditionRundown(a1);
  RIMOnProcessDestroy(*a1);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v20, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v15;
}

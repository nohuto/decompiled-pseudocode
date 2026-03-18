/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C009D264
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x1C003B840 (UserThreadCallout.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0004CF0 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0011460 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00114B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0016A04 (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F06C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001F0A0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003C3DC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UnlockObjectAssignment @ 0x1C003C740 (UnlockObjectAssignment.c)
 *     LockObjectAssignment @ 0x1C003C770 (LockObjectAssignment.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C003EB90 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C003ECE0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C003ED90 (DestroyThreadsObjects.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0054EB0 (Win32FreeToPagedLookasideList.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0073FD4 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 *     CleanupResources @ 0x1C007490C (CleanupResources.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C00808A4 (-FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00857D8 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0085DD4 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C0091CB0 (ApiSetEditionSystemGenerateMove.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0091E24 (UserDeactivateMITInputProcessing.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00DE1EC (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00DE238 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00DE288 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C00DE340 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C00DE410 (CleanupRimDevObjInUserModeCallback.c)
 *     zzzDestroyQueue @ 0x1C00DE6A0 (zzzDestroyQueue.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00DF910 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00DF944 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C00E03A0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E0800 (EtwTraceMessageCheckDelay.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     McTemplateK0qqqqq @ 0x1C00E3840 (McTemplateK0qqqqq.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00FF37C (RIMIDEProcessRemoveInjectionDevices.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C013B664 (ApiSetEditionRemoveFromMsdList.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C0151500 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 */

PMCGEN_TRACE_CONTEXT xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // rbx
  struct _NT_TIB *Self; // r14
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 i; // rax
  char v12; // al
  unsigned __int64 v13; // rbx
  unsigned int ThreadId; // r14d
  char ThreadInfoFlags; // r15
  int v16; // r8d
  char v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 ProcessWindowStation; // rax
  _QWORD *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rbx
  int v25; // eax
  _DWORD *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  struct _ETHREAD *v42; // rcx
  _QWORD *v43; // rbx
  _QWORD *v44; // r15
  __int64 v45; // rbx
  __int64 v46; // rax
  _DWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // edx
  void *v55; // rcx
  void *v56; // rcx
  PVOID *v57; // rbx
  struct tagTHREADINFO *v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  void **v62; // rbx
  void **v63; // rcx
  __int64 v64; // rcx
  CInputThread *v65; // rcx
  char *v66; // r8
  CInputThread *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  PMCGEN_TRACE_CONTEXT result; // rax
  _QWORD *v71; // rdx
  signed __int32 v72[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 *v73; // [rsp+50h] [rbp-108h]
  _QWORD v74[2]; // [rsp+58h] [rbp-100h] BYREF
  PVOID *v75; // [rsp+68h] [rbp-F0h] BYREF
  unsigned int v76; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v77; // [rsp+74h] [rbp-E4h] BYREF
  struct tagTHREADINFO *v78; // [rsp+78h] [rbp-E0h]
  char v79[8]; // [rsp+88h] [rbp-D0h] BYREF
  char *v80; // [rsp+90h] [rbp-C8h]
  _QWORD v81[3]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v82[32]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v83[10]; // [rsp+E0h] [rbp-78h] BYREF

  memset(v83, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v83[1]);
  v83[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v83[3]) = 20;
  LOBYTE(v83[6]) = -1;
  v0 = gptiCurrent;
  v78 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 50);
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 776) & 0x100000) != 0 && FLastGuiThread(gptiCurrent) )
    {
      RIMIDEProcessRemoveInjectionDevices(v1);
      v3 = *(_QWORD *)(v1 + 848);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 96) = 0LL;
        v4 = *(void **)(v3 + 88);
        if ( v4 )
        {
          ZwClose(v4);
          *(_QWORD *)(v3 + 88) = 0LL;
        }
      }
    }
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v5 = *((_QWORD *)v0 + 181);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 1448) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 181) + 1184LL) &= ~0x4000000u;
    *((_QWORD *)v0 + 181) = 0LL;
    *((_DWORD *)v0 + 296) &= ~0x4000000u;
  }
  v6 = *((_QWORD *)v0 + 54);
  if ( v6 && *(struct tagTHREADINFO **)(v6 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 54));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 116) |= 0x41u;
  if ( (int)IsInkProcessorOnThreadExitSupported() >= 0 )
    InkProcessorOnThreadExit(v0);
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported() >= 0 )
    xxxCleanupThreadPointerInputInfo(v0);
  if ( (int)IsUnreferenceUndispatchedFrameListSupported() >= 0 )
    UnreferenceUndispatchedFrameList();
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread();
  v7 = *((_QWORD *)v0 + 54);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 216);
    if ( v8 && *(struct tagTHREADINFO **)(v8 + 32) == v0 && (int)IsMagpRevokeInputTransfromSupported() >= 0 )
      MagpRevokeInputTransfrom();
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v79, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v9 = *((_QWORD *)v0 + 54);
    v10 = *((_QWORD *)v0 + 50);
    if ( *(_QWORD *)(v9 + 256) == v10 )
    {
      for ( i = *(_QWORD *)(v10 + 296);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 432) != v9);
            i = *(_QWORD *)(i + 640) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v9 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v79);
  }
  if ( (*((_DWORD *)v0 + 296) & 8) != 0 && (int)IsMagContextThreadCalloutSupported() >= 0 )
    MagContextThreadCallout(&gMagnContext, v0, 0LL, 1LL);
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C0188DA8 - 1) <= 2u
      || (qword_1C0188D90 & 0x8000000000200000uLL) == 0
      || (v12 = 1, (qword_1C0188D98 & 0x8000000000200000uLL) != qword_1C0188D98) )
    {
      v12 = 0;
    }
    if ( v12 )
    {
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 51), v13, &v77, &v76);
      if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq(
          (_DWORD)Microsoft_Windows_Win32kEnableBits,
          (unsigned int)&ThreadExitEvent,
          v16,
          ThreadId,
          ThreadInfoFlags,
          v17,
          v77,
          v76);
    }
  }
  if ( (*((_DWORD *)v0 + 116) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v18 = *((_QWORD *)v0 + 153);
  if ( v18 )
  {
    Win32FreePool(v18);
    *((_QWORD *)v0 + 153) = 0LL;
  }
  HMAssignmentUnlock((__int64 *)v0 + 170);
  if ( (int)IsPatchThreadWindowsSupported() >= 0 )
    PatchThreadWindows(v0);
  if ( *((_QWORD *)v0 + 81) && (int)IsxxxCancelTrackingForThreadSupported() >= 0 )
    xxxCancelTrackingForThread(v0);
  v19 = *((_QWORD *)v0 + 81);
  if ( v19 )
  {
    HMAssignmentUnlock((__int64 *)(v19 + 16));
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 81));
    Win32FreePool(*((_QWORD *)v0 + 81));
    *((_QWORD *)v0 + 81) = 0LL;
  }
  if ( (int)Is_GetProcessWindowStationSupported() >= 0 )
  {
    ProcessWindowStation = _GetProcessWindowStation(0LL);
    v21 = (_QWORD *)ProcessWindowStation;
    if ( ProcessWindowStation )
    {
      PushW32ThreadLock(ProcessWindowStation, v82, CompositionObject::Release);
      ObfReferenceObject(v21);
      if ( (struct tagTHREADINFO *)v21[6] == v0 && (int)IsxxxCloseClipboardSupported() >= 0 )
        xxxCloseClipboard(v21);
      if ( (struct tagTHREADINFO *)v21[7] == v0 )
        v21[7] = 0LL;
      PopAndFreeW32ThreadLock(v82);
    }
  }
  while ( *((_QWORD *)v0 + 73) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v74);
    v22 = (__int64 *)*((_QWORD *)v0 + 73);
    v23 = *v22;
    if ( *v22 != *(_QWORD *)v74[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v74);
      if ( v23 )
      {
        v74[0] = *(_QWORD *)(v23 + 88);
        ++*(_DWORD *)(v74[0] + 8LL);
      }
      else
      {
        v74[0] = &gSmartObjNullRef;
      }
    }
    v24 = v22;
    v73 = v22;
    if ( gptiCurrent == (struct tagTHREADINFO *)v22[4] )
    {
      ++*((_DWORD *)v22 + 10);
    }
    else
    {
      v24 = 0LL;
      v73 = 0LL;
    }
    if ( v0 != (struct tagTHREADINFO *)v22[4] )
    {
      if ( v24 )
        xxxUnlockMenuState(v24);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v74);
      break;
    }
    v25 = *((_DWORD *)v22 + 2);
    if ( (v25 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported() >= 0 )
      {
        xxxEndMenuLoop(v22, *(_QWORD *)v74[0]);
LABEL_103:
        v24 = v73;
      }
      if ( v24 )
      {
        *((_DWORD *)v24 + 10) = 0;
        v24 = 0LL;
        v73 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v22);
      goto LABEL_108;
    }
    *((_DWORD *)v22 + 2) = v25 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 51) + 380LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported() >= 0 )
      xxxMNCloseHierarchy(*(_QWORD *)v74[0], v22);
    if ( (**(_DWORD **)v74[0] & 1) != 0 || (**(_DWORD **)v74[0] & 0x8000) != 0 )
      goto LABEL_103;
    if ( v73 )
    {
      *((_DWORD *)v73 + 10) = 0;
      v73 = 0LL;
    }
    if ( (int)IsMNFlushDestroyedPopupsSupported() >= 0 )
      MNFlushDestroyedPopups(*(_QWORD *)v74[0]);
    if ( (int)IsMNUnlinkDelayedFreePopupsSupported() >= 0 )
      MNUnlinkDelayedFreePopups(*(_QWORD *)v74[0]);
    v26 = *(_DWORD **)v74[0];
    if ( (**(_DWORD **)v74[0] & 0x40000000) != 0 )
    {
      *v26 &= ~0x20000000u;
    }
    else if ( v26 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C0192A18);
    }
    else
    {
      v27 = *(_QWORD *)v74[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v74[0] + 88LL));
      Win32FreePool(v27);
    }
    if ( (int)IsxxxMNEndMenuStateInternalSupported() >= 0 )
      xxxMNEndMenuStateInternal(v0, v22);
    v24 = v73;
LABEL_108:
    if ( v24 )
      xxxUnlockMenuState(v24);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v74);
  }
  v28 = *((_QWORD *)v0 + 86);
  if ( v28 )
  {
    HMAssignmentUnlock((__int64 *)(v28 + 16));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 86) + 24LL));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 86) + 8LL));
    Win32FreePool(*((_QWORD *)v0 + 86));
    *((_QWORD *)v0 + 86) = 0LL;
  }
  v29 = (_QWORD *)((char *)v0 + 400);
  v80 = (char *)v0 + 400;
  v30 = *((_QWORD *)v0 + 50);
  if ( v30 && *(struct tagTHREADINFO **)(v30 + 304) == v0 )
    *(_QWORD *)(v30 + 304) = 0LL;
  while ( *((_QWORD *)v0 + 75) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported() >= 0 )
      xxxDestroyThreadDDEObject(v0, *((_QWORD *)v0 + 75));
  }
  if ( (*((_DWORD *)v0 + 116) & 0x800) != 0 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v0 + 54) + 8LL) + 16LL);
    if ( v31 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v81[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v81;
      v81[1] = v31;
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
      if ( (int)IsxxxFlushPaletteSupported() >= 0 )
        xxxFlushPalette(v31);
      ThreadUnlock1(v34, v33, v35, v36);
    }
  }
  if ( FLastGuiThread(v0) && gppiFullscreen == *v29 && !gbMDEVDisabled )
    xxxUserSetDisplayConfig(0, 0, 2191, 4, 0LL, 0, 0LL, 0LL, (__int64)v83);
  if ( *v29 && *(_QWORD *)(*v29 + 784LL) && (int)IsDestroyThreadHidObjectsSupported() >= 0 )
    DestroyThreadHidObjects(v0);
  if ( *((int *)v0 + 116) < 0 && (int)IsxxxHandleHealthyThreadSupported() >= 0 )
    xxxHandleHealthyThread(v0);
  if ( *((_QWORD *)v0 + 139) && (int)IsDestroyInputHangInfoSupported() >= 0 )
    DestroyInputHangInfo(v0);
  v37 = *((_DWORD *)v0 + 296);
  if ( (v37 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 296) = v37 & 0xFFBFFFFF;
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v38 = (void *)*((_QWORD *)v0 + 162);
  if ( v38 )
  {
    CleanupRimDevObjInUserModeCallback(v38);
    *((_QWORD *)v0 + 162) = 0LL;
  }
  v39 = (void *)*((_QWORD *)v0 + 162);
  if ( v39 )
  {
    CleanupRimDevObjInUserModeCallback(v39);
    *((_QWORD *)v0 + 162) = 0LL;
  }
  v40 = (void *)*((_QWORD *)v0 + 163);
  if ( v40 )
  {
    ObfDereferenceObject(v40);
    *((_QWORD *)v0 + 163) = 0LL;
  }
  v41 = (void *)*((_QWORD *)v0 + 164);
  if ( v41 )
  {
    ObfDereferenceObject(v41);
    *((_QWORD *)v0 + 164) = 0LL;
  }
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v42);
  if ( CInputThread::IsInputThread(v42) )
    UserDeactivateMITInputProcessing(0);
  if ( *v29 && FLastGuiThread(v0) && IsCurrentProcessDwm() )
    xxxDwmProcessShutdown(1u);
  if ( (int)IsDestroyThreadsTimersSupported() >= 0 )
    DestroyThreadsTimers(v0);
  if ( (int)IsFreeThreadsWindowHooksSupported() >= 0 )
    FreeThreadsWindowHooks();
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported() >= 0 )
    RemoveThreadSwitchWindowInfo(v0);
  v43 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v44 = (_QWORD *)*v43;
      if ( (struct tagTHREADINFO *)v43[3] == v0 && (int)IsFreeHwndListSupported() >= 0 )
        FreeHwndList(v43);
      v43 = v44;
    }
    while ( v44 );
  }
  if ( (int)IsDestroyThreadsHotKeysSupported() >= 0 )
    DestroyThreadsHotKeys();
  DestroyThreadsObjects();
  if ( (int)IsFreeThreadsWinEventsSupported() >= 0 )
    FreeThreadsWinEvents(v0);
  HMAssignmentUnlock((__int64 *)v0 + 52);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v72, 0);
    CleanupResources();
  }
  if ( FLastGuiThread(v0) )
  {
    if ( (*(_DWORD *)(*v29 + 12LL) & 0x1000000) != 0 )
    {
      v45 = *((_QWORD *)v0 + 55);
      if ( v45 )
      {
        if ( *(_QWORD *)(v45 + 160) && (int)Is_PostMessageSupported() >= 0 )
          _PostMessage(*(_QWORD *)(v45 + 160), 1114LL, 0LL, 0LL);
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported() >= 0 )
      DestroyProcessesClasses(*v29);
    *(_DWORD *)(*v29 + 12LL) &= ~0x2000u;
    *(_DWORD *)(*v29 + 12LL) &= ~0x10000000u;
    v46 = *((_QWORD *)v0 + 57);
    v47 = *(_DWORD **)(v46 + 208);
    if ( v47 )
    {
      ProbeForWrite(*(volatile void **)(v46 + 208), 4uLL, 4u);
      *v47 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 50));
  }
  HMAssignmentUnlock((__int64 *)v0 + 95);
  if ( *((_QWORD *)v0 + 168) )
  {
    Win32FreePool(*((_QWORD *)v0 + 168));
    *((_QWORD *)v0 + 168) = 0LL;
  }
  if ( *((_QWORD *)v0 + 51) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported() >= 0 )
      PackAffectedThreadsFromThreadCleanup(v0);
    v49 = *((_QWORD *)v0 + 51);
    *(_DWORD *)(v49 + 376) -= *((_DWORD *)v0 + 182);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 51) + 384LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 54);
      ApiSetEditionSystemGenerateMove(0);
    }
  }
  v51 = PsGetCurrentProcessWin32Process(v49, v48, v50) + 296;
  if ( *(_QWORD *)v51 )
  {
    if ( *(struct tagTHREADINFO **)v51 != v0 )
    {
      do
      {
        v52 = *(_QWORD *)v51;
        if ( !*(_QWORD *)(*(_QWORD *)v51 + 640LL) )
          break;
        v51 = v52 + 640;
      }
      while ( *(struct tagTHREADINFO **)(v52 + 640) != v0 );
    }
    if ( *(struct tagTHREADINFO **)v51 == v0 )
    {
      *(_QWORD *)v51 = *((_QWORD *)v0 + 80);
      *((_QWORD *)v0 + 80) = 0LL;
    }
  }
  v75 = 0LL;
  LockObjectAssignment((void **)&v75, *((void **)v0 + 54));
  if ( (int)IsSendMsgCleanupSupported() >= 0 )
    SendMsgCleanup(v0);
  if ( *((_DWORD *)v0 + 194) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 194) = 0;
  }
  if ( *v29 )
    --*(_DWORD *)(*v29 + 360LL);
  UninitializeThreadInfoIocp(v0, v53);
  v55 = (void *)*((_QWORD *)v0 + 175);
  if ( v55 )
  {
    ObCloseHandle(v55, 0);
    *((_QWORD *)v0 + 175) = 0LL;
  }
  v56 = (void *)*((_QWORD *)v0 + 87);
  if ( v56 )
  {
    if ( (int)ProtectHandle(v56, v54, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 296) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 87), 1);
    }
    *((_QWORD *)v0 + 87) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( (int)IsxxxWindowEventSupported() >= 0 )
    {
      xxxWindowEvent(32773LL, 0LL, 4294967292LL, 0LL, 4);
      xxxWindowEvent(3LL, 0LL, 0LL, 0LL, 4);
    }
    v57 = v75;
    if ( *((_QWORD *)v75[1] + 24) && (int)Is_PostMessageSupported() >= 0 )
      _PostMessage(*((_QWORD *)v57[1] + 24), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( (int)IsxxxSetForegroundThreadSupported() >= 0 )
      xxxSetForegroundThread(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v58 = *(struct tagTHREADINFO **)(*v29 + 296LL);
    if ( !v58 )
      v58 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v58, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 296) & 0x2000) != 0 )
    ScrubDelegatedWindows(v0);
  if ( *((_QWORD *)v0 + 51) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 51), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 51) + 388LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 51), v0);
  }
  if ( *((_QWORD *)v0 + 54) )
  {
    v59 = (_QWORD *)((char *)v0 + 712);
    v60 = *((_QWORD *)v0 + 89);
    v61 = (_QWORD *)*((_QWORD *)v0 + 90);
    if ( *(struct tagTHREADINFO **)(v60 + 8) != (struct tagTHREADINFO *)((char *)v0 + 712) || (_QWORD *)*v61 != v59 )
      __fastfail(3u);
    *v61 = v60;
    *(_QWORD *)(v60 + 8) = v61;
    *((_QWORD *)v0 + 90) = (char *)v0 + 712;
    *v59 = v59;
  }
  FreeMessageList((char *)v0 + 784);
  v62 = &gpai;
  if ( gpai )
  {
    do
    {
      v63 = (void **)*v62;
      if ( *((struct tagTHREADINFO **)*v62 + 1) == v0 || v63[2] == v0 )
      {
        *v62 = *v63;
        Win32FreePool((__int64)v63);
      }
      else
      {
        v62 = (void **)*v62;
      }
    }
    while ( *v62 );
  }
  MarkThreadsObjects((__int64)v0);
  if ( (struct tagTHREADINFO *)gptiShutdownWaiter == v0 )
    gptiShutdownWaiter = 0LL;
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (struct tagTHREADINFO *)gptiLockUpdate == v0 )
    gptiLockUpdate = 0LL;
  if ( gptiForeground == v0 )
    gptiForeground = 0LL;
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v64 = *((_QWORD *)v0 + 51);
  if ( v64 && !*(_DWORD *)(v64 + 384) )
  {
    if ( gpqForeground == v64 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v0 + 51) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((struct tagQ **)v0 + 51) )
      gpqCursor = 0LL;
  }
  v65 = (CInputThread *)v75;
  if ( v75 )
  {
    v66 = (char *)*((_QWORD *)v0 + 53);
    if ( v66 )
    {
      if ( v66 != (char *)v0 + 1008 )
      {
        RtlFreeHeap(v75[16], 0, v66);
        *((_QWORD *)v0 + 53) = (char *)v0 + 1008;
      }
    }
  }
  if ( CInputThread::IsInputThread(v65) )
    CInputThread::RevokeThreadAsInput(v67);
  if ( (*((_DWORD *)v0 + 116) & 4) != 0 )
  {
    v68 = *((_QWORD *)v0 + 57);
    if ( v68 )
    {
      Win32FreePool(v68);
      *((_QWORD *)v0 + 57) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v75);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  result = Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    result = (PMCGEN_TRACE_CONTEXT)McTemplateK0(v69, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v71 = (_QWORD *)*((_QWORD *)v0 + 179);
    if ( !v71 )
      break;
    *((_QWORD *)v0 + 179) = *v71;
    result = (PMCGEN_TRACE_CONTEXT)*(v71 - 1);
    if ( result != (PMCGEN_TRACE_CONTEXT)&gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v71 - 1) + 8LL);
      result = (PMCGEN_TRACE_CONTEXT)*(v71 - 1);
      if ( !LODWORD(result->Logger) )
      {
        result = (PMCGEN_TRACE_CONTEXT)*(v71 - 1);
        if ( BYTE4(result->Logger) )
          result = (PMCGEN_TRACE_CONTEXT)Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *(v71 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 296) |= 0x80u;
  return result;
}

/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C00482A0
 * Callers:
 *     UserThreadCallout @ 0x1C004ACF0 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C00052D0 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0040840 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0040960 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     LockObjectAssignment @ 0x1C0043540 (LockObjectAssignment.c)
 *     UnlockObjectAssignment @ 0x1C0043590 (UnlockObjectAssignment.c)
 *     ProtectHandle @ 0x1C0044EA0 (ProtectHandle.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0044F28 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0048F2C (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0048F80 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0048FD4 (-FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0049320 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0049370 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0049738 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 *     EtwTraceInputProcessDelay @ 0x1C004A470 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C004A880 (EtwTraceMessageCheckDelay.c)
 *     ?CleanupAllMITUserModeHandleEntries@IOCPDispatcher@@QEAAXXZ @ 0x1C004C704 (-CleanupAllMITUserModeHandleEntries@IOCPDispatcher@@QEAAXXZ.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CleanupResources @ 0x1C0078618 (CleanupResources.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C008002C (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C008BCC0 (UserDeactivateMITInputProcessing.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00D7EE4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C00D7FEC (CleanupRimDevObjInUserModeCallback.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00D962C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00D965C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     Template_qqqqq @ 0x1C00DCE08 (Template_qqqqq.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00FF064 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0150218 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 */

_QWORD *xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // rbx
  struct _NT_TIB *Self; // r14
  CInputThread *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 ProcessWindowStation; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  void *v17; // rcx
  void *v18; // rcx
  CInputManager *v19; // rcx
  IOCPDispatcher *v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // edx
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rcx
  void *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  void **v34; // rbx
  CInputThread *v35; // rcx
  CInputThread *v36; // rcx
  __int64 v37; // rcx
  char *v38; // r8
  __int64 v39; // rcx
  _QWORD *result; // rax
  _QWORD **v41; // rcx
  __int64 v42; // rcx
  PVOID CurrentProcess; // rax
  BOOL v44; // edx
  __int64 v45; // rax
  _DWORD *v46; // rbx
  void **v47; // rcx
  __int64 i; // rax
  _QWORD *v49; // r14
  struct tagTHREADINFO *v50; // rdx
  PVOID *v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rbx
  void *v54; // rcx
  char v55; // al
  unsigned __int64 v56; // rbx
  unsigned int ThreadId; // r14d
  char ThreadInfoFlags; // r15
  int v59; // r8d
  char v60; // r11
  __int64 ThreadWin32Thread; // rax
  __int64 v62; // r14
  char *v63; // rax
  _QWORD **v64; // rcx
  _QWORD *v65; // rdx
  _QWORD **v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // r8
  __int64 v74; // rbx
  __int64 v75; // rbx
  _QWORD *v76; // rcx
  __int64 v77; // rdx
  signed __int32 v78[8]; // [rsp+0h] [rbp-148h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v79; // [rsp+20h] [rbp-128h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v80; // [rsp+28h] [rbp-120h]
  char *v81; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v82; // [rsp+68h] [rbp-E0h] BYREF
  _QWORD **v83; // [rsp+70h] [rbp-D8h]
  __int64 v84; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v85; // [rsp+80h] [rbp-C8h]
  PVOID *v86; // [rsp+88h] [rbp-C0h] BYREF
  unsigned int v87; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v88; // [rsp+94h] [rbp-B4h] BYREF
  struct tagTHREADINFO *v89; // [rsp+98h] [rbp-B0h]
  _QWORD v90[3]; // [rsp+B0h] [rbp-98h] BYREF
  _BYTE v91[24]; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v92[8]; // [rsp+E0h] [rbp-68h] BYREF

  memset(v92, 0, sizeof(v92));
  EtwActivityIdControl(3u, (LPGUID)&v92[1]);
  v92[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v92[3]) = 20;
  v0 = gptiCurrent;
  v89 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 47);
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)gptiCurrent) || CInputThread::IsInputThread(v3) )
  {
    if ( grpdeskDitStartup && *((_QWORD *)v0 + 51) != grpdeskDitStartup )
      LockObjectAssignment((void **)v0 + 51, (void *)grpdeskDitStartup);
    grpdeskDitStartup = 0LL;
  }
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 768) & 0x100000) != 0 )
    {
      if ( (unsigned int)FLastGuiThread(v0) )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v53 = *(_QWORD *)(v1 + 840);
        if ( v53 )
        {
          *(_QWORD *)(v53 + 88) = 0LL;
          v54 = *(void **)(v53 + 80);
          if ( v54 )
          {
            ZwClose(v54);
            *(_QWORD *)(v53 + 80) = 0LL;
          }
        }
      }
    }
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v4 = *((_QWORD *)v0 + 51);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 51));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 110) |= 0x41u;
  if ( (int)IsInkProcessorOnThreadExitSupported() >= 0 )
    InkProcessorOnThreadExit(v0);
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported() >= 0 )
    xxxCleanupThreadPointerInputInfo(v0);
  if ( (int)IsUnreferenceUndispatchedFrameListSupported() >= 0 )
    UnreferenceUndispatchedFrameList();
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread();
  v5 = *((_QWORD *)v0 + 51);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 216);
    if ( v6 && *(struct tagTHREADINFO **)(v6 + 32) == v0 && (int)IsMagpRevokeInputTransfromSupported() >= 0 )
      MagpRevokeInputTransfrom();
    v7 = *((_QWORD *)v0 + 51);
    v8 = *((_QWORD *)v0 + 47);
    if ( *(_QWORD *)(v7 + 256) == v8 )
    {
      for ( i = *(_QWORD *)(v8 + 288);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 408) != v7);
            i = *(_QWORD *)(i + 584) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v7 + 256) = 0LL;
    }
  }
  if ( (*((_DWORD *)v0 + 274) & 8) != 0 && (int)IsMagContextThreadCalloutSupported() >= 0 )
    MagContextThreadCallout(&gMagnContext, v0, 0LL, 1LL);
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
      || (qword_1C0186D80 & 0x8000000000200000uLL) == 0
      || (v55 = 1, (qword_1C0186D88 & 0x8000000000200000uLL) != qword_1C0186D88) )
    {
      v55 = 0;
    }
    if ( v55 )
    {
      v56 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 48), v56, &v88, &v87);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        Template_qqqqq(
          Microsoft_Windows_Win32kEnableBits,
          (unsigned int)&ThreadExitEvent,
          v59,
          ThreadId,
          ThreadInfoFlags,
          v60,
          v88,
          v87);
    }
  }
  if ( (*((_DWORD *)v0 + 110) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v9 = *((_QWORD *)v0 + 142);
  if ( v9 )
  {
    Win32FreePool(v9);
    *((_QWORD *)v0 + 142) = 0LL;
  }
  if ( (int)IsRemovePtiFromShellMiPListSupported() >= 0 )
    RemovePtiFromShellMiPList(v0);
  HMAssignmentUnlock((char *)v0 + 1272);
  if ( (int)IsPatchThreadWindowsSupported() >= 0 )
    PatchThreadWindows(v0);
  if ( *((_QWORD *)v0 + 74) && (int)IsxxxCancelTrackingForThreadSupported() >= 0 )
    xxxCancelTrackingForThread(v0);
  v10 = *((_QWORD *)v0 + 74);
  if ( v10 )
  {
    HMAssignmentUnlock(v10);
    Win32FreePool(*((_QWORD *)v0 + 74));
    *((_QWORD *)v0 + 74) = 0LL;
  }
  if ( (int)Is_GetProcessWindowStationSupported() >= 0 )
  {
    ProcessWindowStation = _GetProcessWindowStation(0LL);
    v12 = (_QWORD *)ProcessWindowStation;
    if ( ProcessWindowStation )
    {
      PushW32ThreadLock(ProcessWindowStation, v91, CompositionObject::Release);
      ObfReferenceObject(v12);
      if ( (struct tagTHREADINFO *)v12[6] == v0 && (int)IsxxxCloseClipboardSupported() >= 0 )
        xxxCloseClipboard(v12);
      if ( (struct tagTHREADINFO *)v12[7] == v0 )
        v12[7] = 0LL;
      PopAndFreeW32ThreadLock(v91);
    }
  }
  while ( *((_QWORD *)v0 + 66) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v81 = 0LL;
    v83 = &v82;
    v82 = &v82;
    v84 = 0LL;
    v84 = *(_QWORD *)(ThreadWin32Thread + 1344);
    *(_QWORD *)(ThreadWin32Thread + 1344) = &v84;
    v62 = *((_QWORD *)v0 + 66);
    v63 = *(char **)v62;
    if ( v81 != *(char **)v62 )
    {
      if ( v81 )
      {
        v64 = v83;
        v65 = v82;
        if ( (_QWORD **)v82[1] != &v82 || *v83 != &v82 )
          __fastfail(3u);
        *v83 = v82;
        v65[1] = v64;
      }
      v81 = v63;
      if ( v63 )
      {
        v66 = (_QWORD **)(v63 + 88);
        v67 = *v66;
        if ( (_QWORD **)(*v66)[1] != v66 )
          __fastfail(3u);
        v82 = *v66;
        v83 = v66;
        v67[1] = &v82;
        *v66 = &v82;
      }
    }
    v68 = v62;
    v85 = v62;
    if ( gptiCurrent == *(struct tagTHREADINFO **)(v62 + 32) )
    {
      ++*(_DWORD *)(v62 + 40);
    }
    else
    {
      v68 = 0LL;
      v85 = 0LL;
    }
    if ( v0 != *(struct tagTHREADINFO **)(v62 + 32) )
    {
      if ( v68 )
        xxxUnlockMenuState(v68);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v81);
      break;
    }
    v69 = *(_DWORD *)(v62 + 8);
    if ( (v69 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported() >= 0 )
        xxxEndMenuLoop(v62, v81);
LABEL_280:
      if ( v68 )
      {
        *(_DWORD *)(v68 + 40) = 0;
        v85 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v62);
      goto LABEL_284;
    }
    *(_DWORD *)(v62 + 8) = v69 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 48) + 340LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported() >= 0 )
      xxxMNCloseHierarchy(v81, v62);
    if ( (*(_DWORD *)v81 & 0x8001) != 0 )
      goto LABEL_280;
    if ( v68 )
    {
      *(_DWORD *)(v68 + 40) = 0;
      v85 = 0LL;
    }
    if ( (int)IsMNFlushDestroyedPopupsSupported() >= 0 )
      MNFlushDestroyedPopups(v81);
    if ( (int)IsMNUnlinkDelayedFreePopupsSupported() >= 0 )
      MNUnlinkDelayedFreePopups(v81);
    v70 = (__int64)v81;
    if ( (*(_DWORD *)v81 & 0x40000000) != 0 )
    {
      *(_DWORD *)v81 &= ~0x20000000u;
    }
    else if ( v81 == (char *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
    }
    else
    {
      v71 = v81 + 88;
      while ( (_QWORD *)*v71 != v71 )
      {
        v72 = *(_QWORD **)(v70 + 96);
        v73 = (_QWORD *)v72[1];
        if ( (_QWORD *)*v72 != v71 || (_QWORD *)*v73 != v72 )
          __fastfail(3u);
        *(_QWORD *)(v70 + 96) = v73;
        *v73 = v71;
        *(v72 - 1) = 0LL;
      }
      Win32FreePool(v70);
    }
    if ( (int)IsxxxMNEndMenuStateInternalSupported() >= 0 )
      xxxMNEndMenuStateInternal(v0, v62);
LABEL_284:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v81);
  }
  v13 = *((_QWORD *)v0 + 79);
  if ( v13 )
  {
    HMAssignmentUnlock(v13 + 16);
    HMAssignmentUnlock(*((_QWORD *)v0 + 79) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v0 + 79) + 8LL);
    Win32FreePool(*((_QWORD *)v0 + 79));
    *((_QWORD *)v0 + 79) = 0LL;
  }
  v14 = *((_QWORD *)v0 + 47);
  if ( v14 && *(struct tagTHREADINFO **)(v14 + 296) == v0 )
    *(_QWORD *)(v14 + 296) = 0LL;
  while ( *((_QWORD *)v0 + 68) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported() >= 0 )
      xxxDestroyThreadDDEObject(v0, *((_QWORD *)v0 + 68));
  }
  if ( (*((_DWORD *)v0 + 110) & 0x800) != 0 )
  {
    v74 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v0 + 51) + 8LL) + 16LL);
    if ( v74 )
    {
      v90[0] = *((_QWORD *)gptiCurrent + 46);
      *((_QWORD *)gptiCurrent + 46) = v90;
      v90[1] = v74;
      ++*(_DWORD *)(v74 + 8);
      if ( (int)IsxxxFlushPaletteSupported() >= 0 )
        xxxFlushPalette(v74);
      ThreadUnlock1();
    }
  }
  if ( (unsigned int)FLastGuiThread(v0) && gppiFullscreen == *((_QWORD *)v0 + 47) && !gbMDEVDisabled )
  {
    LODWORD(v80) = 4;
    LODWORD(v79) = 2191;
    xxxUserSetDisplayConfig(0, 0, 0, 0, v79, v80, 0LL, 0, 0LL, 0LL, (__int64)v92);
  }
  v15 = *((_QWORD *)v0 + 47);
  if ( v15 && *(_QWORD *)(v15 + 776) && (int)IsDestroyThreadHidObjectsSupported() >= 0 )
    DestroyThreadHidObjects(v0);
  if ( *((int *)v0 + 110) < 0 && (int)IsxxxHandleHealthyThreadSupported() >= 0 )
    xxxHandleHealthyThread(v0);
  if ( *((_QWORD *)v0 + 128) && (int)IsDestroyInputHangInfoSupported() >= 0 )
    DestroyInputHangInfo(v0);
  v16 = *((_DWORD *)v0 + 274);
  if ( (v16 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 274) = v16 & 0xFFBFFFFF;
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  if ( *((_QWORD *)v0 + 151) )
  {
    CleanupRimDevObjInUserModeCallback();
    *((_QWORD *)v0 + 151) = 0LL;
  }
  if ( *((_QWORD *)v0 + 151) )
  {
    CleanupRimDevObjInUserModeCallback();
    *((_QWORD *)v0 + 151) = 0LL;
  }
  v17 = (void *)*((_QWORD *)v0 + 152);
  if ( v17 )
  {
    ObfDereferenceObject(v17);
    *((_QWORD *)v0 + 152) = 0LL;
  }
  v18 = (void *)*((_QWORD *)v0 + 153);
  if ( v18 )
  {
    ObfDereferenceObject(v18);
    *((_QWORD *)v0 + 153) = 0LL;
  }
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
  {
    v19 = g_pInputManager;
    if ( g_pInputManager )
    {
      *((_DWORD *)g_pInputManager + 18) = 0;
      CInputManager::CleanupDwmInputThread(v19);
    }
  }
  if ( CInputThread::IsInputThread(v19) )
  {
    if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      IOCPDispatcher::CleanupAllMITUserModeHandleEntries(v20);
    UserDeactivateMITInputProcessing(0LL);
  }
  if ( *((_QWORD *)v0 + 47) && (unsigned int)FLastGuiThread(v0) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v44 = 0;
    if ( CurrentProcess )
      v44 = CurrentProcess == g_pepDwm;
    if ( v44 )
      xxxDwmProcessShutdown(1);
  }
  if ( (int)IsDestroyThreadsTimersSupported() >= 0 )
    DestroyThreadsTimers(v0);
  if ( (int)IsFreeThreadsWindowHooksSupported() >= 0 )
    FreeThreadsWindowHooks();
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported() >= 0 )
    RemoveThreadSwitchWindowInfo(v0);
  v21 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v49 = (_QWORD *)*v21;
      if ( (struct tagTHREADINFO *)v21[3] == v0 && (int)IsFreeHwndListSupported() >= 0 )
        FreeHwndList(v21);
      v21 = v49;
    }
    while ( v49 );
  }
  if ( (int)IsDestroyThreadsHotKeysSupported() >= 0 )
    DestroyThreadsHotKeys();
  DestroyThreadsObjects();
  if ( (int)IsFreeThreadsWinEventsSupported() >= 0 )
    FreeThreadsWinEvents(v0);
  HMAssignmentUnlock((char *)v0 + 392);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v78, 0);
    CleanupResources();
  }
  if ( (unsigned int)FLastGuiThread(v0) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 47) + 12LL) & 0x1000000) != 0 )
    {
      v75 = *((_QWORD *)v0 + 52);
      if ( v75 )
      {
        if ( *(_QWORD *)(v75 + 160) && (int)Is_PostMessageSupported() >= 0 )
          _PostMessage(*(_QWORD *)(v75 + 160), 1114LL, 0LL, 0LL);
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported() >= 0 )
      DestroyProcessesClasses(*((_QWORD *)v0 + 47));
    *(_DWORD *)(*((_QWORD *)v0 + 47) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 47) + 12LL) &= ~0x10000000u;
    v45 = *((_QWORD *)v0 + 54);
    v46 = *(_DWORD **)(v45 + 208);
    if ( v46 )
    {
      ProbeForWrite(*(volatile void **)(v45 + 208), 4uLL, 4u);
      *v46 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 47));
  }
  HMAssignmentUnlock((char *)v0 + 704);
  if ( *((_QWORD *)v0 + 157) )
  {
    Win32FreePool(*((_QWORD *)v0 + 157));
    *((_QWORD *)v0 + 157) = 0LL;
  }
  if ( *((_QWORD *)v0 + 48) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported() >= 0 )
      PackAffectedThreadsFromThreadCleanup(v0);
    v23 = *((_QWORD *)v0 + 48);
    *(_DWORD *)(v23 + 336) -= *((_DWORD *)v0 + 168);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 48) + 344LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 51);
      if ( (int)IszzzSetFMouseMovedSupported() >= 0 )
        zzzSetFMouseMoved();
    }
  }
  v25 = PsGetCurrentProcessWin32Process(v23, v22, v24) + 288;
  if ( *(_QWORD *)v25 )
  {
    if ( *(struct tagTHREADINFO **)v25 != v0 )
    {
      do
      {
        v42 = *(_QWORD *)v25;
        if ( !*(_QWORD *)(*(_QWORD *)v25 + 584LL) )
          break;
        v25 = v42 + 584;
      }
      while ( *(struct tagTHREADINFO **)(v42 + 584) != v0 );
    }
    if ( *(struct tagTHREADINFO **)v25 == v0 )
    {
      *(_QWORD *)v25 = *((_QWORD *)v0 + 73);
      *((_QWORD *)v0 + 73) = 0LL;
    }
  }
  v86 = 0LL;
  LockObjectAssignment((void **)&v86, *((void **)v0 + 51));
  if ( (int)IsSendMsgCleanupSupported() >= 0 )
    SendMsgCleanup(v0);
  if ( *((_DWORD *)v0 + 180) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 180) = 0;
  }
  v27 = *((_QWORD *)v0 + 47);
  if ( v27 )
    --*(_DWORD *)(v27 + 352);
  UninitializeThreadInfoIocp(v0, v26);
  v29 = (void *)*((_QWORD *)v0 + 164);
  if ( v29 )
  {
    ObCloseHandle(v29, 0);
    *((_QWORD *)v0 + 164) = 0LL;
  }
  v30 = (void *)*((_QWORD *)v0 + 80);
  if ( v30 )
  {
    if ( (int)ProtectHandle(v30, v28, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 274) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 80), 1);
    }
    *((_QWORD *)v0 + 80) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( (int)IsxxxWindowEventSupported() >= 0 )
    {
      LODWORD(v79) = 4;
      xxxWindowEvent(32773LL, 0LL, 4294967292LL);
      LODWORD(v79) = 4;
      xxxWindowEvent(3LL, 0LL, 0LL);
    }
    v51 = v86;
    if ( *((_QWORD *)v86[1] + 24) && (int)Is_PostMessageSupported() >= 0 )
      _PostMessage(*((_QWORD *)v51[1] + 24), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( (int)IsxxxSetForegroundThreadSupported() >= 0 )
      xxxSetForegroundThread(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v50 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 47) + 288LL);
    if ( !v50 )
      v50 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v50, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 274) & 0x2000) != 0 )
    ScrubDelegatedWindows(v0);
  if ( *((_QWORD *)v0 + 48) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 48), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 48) + 348LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 48), v0);
  }
  if ( *((_QWORD *)v0 + 51) )
  {
    v31 = (_QWORD *)((char *)v0 + 656);
    v32 = *((_QWORD *)v0 + 82);
    v33 = (_QWORD *)*((_QWORD *)v0 + 83);
    if ( *(struct tagTHREADINFO **)(v32 + 8) != (struct tagTHREADINFO *)((char *)v0 + 656) || (_QWORD *)*v33 != v31 )
      __fastfail(3u);
    *v33 = v32;
    *(_QWORD *)(v32 + 8) = v33;
    *((_QWORD *)v0 + 83) = (char *)v0 + 656;
    *v31 = v31;
  }
  FreeMessageList((char *)v0 + 728);
  v34 = &gpai;
  if ( gpai )
  {
    do
    {
      v47 = (void **)*v34;
      if ( *((struct tagTHREADINFO **)*v34 + 1) == v0 || v47[2] == v0 )
      {
        *v34 = *v47;
        Win32FreePool((__int64)v47);
      }
      else
      {
        v34 = (void **)*v34;
      }
    }
    while ( *v34 );
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
  if ( CInputThread::IsInputThread(v35) )
    CInputThread::RevokeThreadAsInput(v36);
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v37 = *((_QWORD *)v0 + 48);
  if ( v37 && !*(_DWORD *)(v37 + 344) )
  {
    if ( gpqForeground == v37 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v0 + 48) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((struct tagQ **)v0 + 48) )
      gpqCursor = 0LL;
  }
  if ( v86 )
  {
    v38 = (char *)*((_QWORD *)v0 + 50);
    if ( v38 )
    {
      if ( v38 != (char *)v0 + 920 )
      {
        RtlFreeHeap(v86[16], 0, v38);
        *((_QWORD *)v0 + 50) = (char *)v0 + 920;
      }
    }
  }
  if ( (*((_DWORD *)v0 + 110) & 4) != 0 )
  {
    v52 = *((_QWORD *)v0 + 54);
    if ( v52 )
    {
      Win32FreePool(v52);
      *((_QWORD *)v0 + 54) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v86);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  result = (_QWORD *)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    result = (_QWORD *)TemplateEventDescriptor(v39, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v41 = (_QWORD **)*((_QWORD *)v0 + 168);
    if ( !v41 )
      break;
    result = *v41;
    *((_QWORD *)v0 + 168) = *v41;
    if ( *(v41 - 3) )
    {
      v76 = v41 - 2;
      v77 = *v76;
      result = (_QWORD *)v76[1];
      if ( *(_QWORD **)(*v76 + 8LL) != v76 || (_QWORD *)*result != v76 )
        __fastfail(3u);
      *result = v77;
      *(_QWORD *)(v77 + 8) = result;
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 274) |= 0x80u;
  return result;
}

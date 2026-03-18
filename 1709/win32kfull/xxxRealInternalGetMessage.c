/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C00A66B0
 * Callers:
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C00A3B80 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C00A65A0 (NtUserPeekMessage.c)
 *     NtUserRealInternalGetMessage @ 0x1C00F5CD0 (NtUserRealInternalGetMessage.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C0009C90 (FreeHidData.c)
 *     SlowAppThreadInShellFrame @ 0x1C000BEC4 (SlowAppThreadInShellFrame.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000CB98 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     xxxDoSysExpunge @ 0x1C0058E0C (xxxDoSysExpunge.c)
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C0088CD8 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C0089210 (zzzCalcStartCursorHide.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     CalcWakeMask @ 0x1C00A7D90 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C00A8110 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A81A0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     FreeQEntry @ 0x1C00CD688 (FreeQEntry.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     IsShellFrameHangResilient @ 0x1C0102128 (IsShellFrameHangResilient.c)
 *     WaitMaskIncludesUserInput @ 0x1C0112434 (WaitMaskIncludesUserInput.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C01133B8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     _IsChild @ 0x1C011DA54 (_IsChild.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0124768 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0137D18 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     xxxClientCallDelegateThread @ 0x1C0138664 (xxxClientCallDelegateThread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C01A36C8 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01CB734 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01CBE60 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01CC41C (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01CCD9C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01E11E4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01E1B50 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C02012E8 (xxxClientCallDefaultInputHandler.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020F268 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r11d
  unsigned int v18; // r15d
  unsigned __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  _QWORD *v26; // r8
  __int64 v27; // rcx
  __int64 GlobalValid; // rax
  __int64 v29; // rdx
  int v30; // ecx
  __int16 v31; // bx
  __int16 v32; // di
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edi
  _QWORD *v37; // rdi
  PointerList *i; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  int v41; // ebx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // edi
  __int16 v45; // bx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rbx
  char v49; // bl
  int v50; // eax
  __int64 v51; // rdi
  int v52; // eax
  unsigned __int64 v53; // rcx
  unsigned int v54; // eax
  unsigned int v55; // ebx
  unsigned int v56; // ecx
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rbx
  struct _KEVENT *v60; // rcx
  __int64 v61; // rax
  struct _KEVENT *v62; // rcx
  int v63; // eax
  __int16 v64; // cx
  __int64 v65; // r8
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 *v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  int v71; // eax
  _DWORD *v72; // rax
  __int64 v73; // rdx
  _DWORD *v74; // rbx
  __int64 v75; // rdx
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  _QWORD *v86; // rcx
  bool v87; // zf
  _QWORD *v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  _QWORD *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rcx
  unsigned int v94; // ebx
  int v95; // edi
  __int64 v96; // rcx
  __int64 v97; // r14
  struct tagTHREADINFO *v98; // r15
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // eax
  BOOL v102; // edi
  __int64 v103; // r8
  int v104; // eax
  int v105; // eax
  int v106; // eax
  __int64 *v107; // rax
  int v108; // eax
  unsigned __int16 v109; // r8
  int v110; // ecx
  struct tagQMSG *v111; // rbx
  int v112; // eax
  unsigned int v113; // edi
  int v114; // ecx
  __int64 v115; // rdi
  struct tagTHREADINFO *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rcx
  int v120; // eax
  __int64 v121; // rbx
  __int64 v122; // rax
  int v123; // eax
  _DWORD *v124; // rdx
  int v125; // [rsp+28h] [rbp-160h]
  unsigned int v126; // [rsp+70h] [rbp-118h]
  __int16 v127; // [rsp+7Ch] [rbp-10Ch]
  unsigned int v128; // [rsp+80h] [rbp-108h]
  unsigned int v129; // [rsp+84h] [rbp-104h]
  int v130; // [rsp+88h] [rbp-100h]
  unsigned int v131; // [rsp+8Ch] [rbp-FCh]
  int v132; // [rsp+90h] [rbp-F8h] BYREF
  unsigned int v133; // [rsp+94h] [rbp-F4h]
  struct tagQMSG *v134; // [rsp+98h] [rbp-F0h] BYREF
  unsigned int v135[4]; // [rsp+A0h] [rbp-E8h] BYREF
  int v136; // [rsp+B0h] [rbp-D8h]
  char v137[12]; // [rsp+C4h] [rbp-C4h] BYREF
  __int64 v138; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v139; // [rsp+D8h] [rbp-B0h]
  __int128 v140; // [rsp+E8h] [rbp-A0h]
  __int128 v141; // [rsp+F8h] [rbp-90h]
  _QWORD v142[3]; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v143[88]; // [rsp+130h] [rbp-58h] BYREF
  __int16 v145; // [rsp+198h] [rbp+10h]

  v135[0] = 0;
  v131 = 0;
  v128 = 0;
  v129 = 0;
  v9 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v10 = 1;
    a2 = 1LL;
LABEL_8:
    v12 = a2;
    v14 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
  {
    v10 = 1;
    goto LABEL_8;
  }
  v11 = ValidateHwnd(a2);
  v12 = v11;
  if ( !v11 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v142[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v142;
  v142[1] = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v10 = 1;
  v14 = 1;
LABEL_9:
  v130 = v14;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL);
  v15 = 0xFFFFFFFFLL;
  if ( a4 )
    v15 = a4;
  v133 = v15;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v18 = CalcWakeMask(a3, v15, HIWORD(a5));
  v126 = v18;
  v136 = v18 & 0x1C07;
  if ( (v18 & 0x1C07) != 0 )
  {
    v16 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1368LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  if ( (v18 & 7) != 7 )
  {
    if ( (v18 & 6) == 0 )
      goto LABEL_22;
    v16 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) )
      goto LABEL_22;
  }
  if ( v17 )
  {
    if ( *(_QWORD *)(v12 + 16) == gptiCurrent )
    {
      v19 = v12;
LABEL_21:
      xxxUpdateInputHangInfo(v19, 1LL);
    }
  }
  else if ( !a2 )
  {
    v19 = 0LL;
    goto LABEL_21;
  }
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
  v22 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v22 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0);
  }
  v23 = *(_QWORD *)(gptiCurrent + 400LL);
  v24 = gcSysExpunge;
  if ( *(_DWORD *)(v23 + 376) != gcSysExpunge )
  {
    *(_DWORD *)(v23 + 376) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 380LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  if ( (a5 & 1) != 0 )
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (v18 & 0x1CBF) != 0
        && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x80000) != 0
        && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & (unsigned __int16)v18) != 0 )
      {
        v25 = *(_QWORD *)(gptiCurrent + 440LL);
        if ( !*(_QWORD *)(v25 + 48) && !*(_QWORD *)(v25 + 40) )
          TryAttachShellFrame(gptiCurrent, v24);
      }
    }
  }
  v26 = *(_QWORD **)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(gptiCurrent + 488LL)
    || (v27 = v26[8], v27 == gptiCurrent) && v26[9] == *(_QWORD *)(gptiCurrent + 552LL) )
  {
    v29 = 0LL;
    v26[8] = 0LL;
  }
  else if ( !v27 || *(_DWORD *)(v27 + 872) )
  {
    v29 = 0LL;
  }
  else
  {
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v29 = 0LL;
    if ( GlobalValid )
      v26[8] = 0LL;
  }
  if ( v26[8] != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 424LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 848LL) = 0;
  if ( (a5 & 2) == 0 )
  {
    v30 = *(_DWORD *)(gptiCurrent + 464LL);
    if ( (v30 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 28LL) = v30 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x80000u;
    }
  }
  v31 = v18 & 0xFFBF;
  v127 = v18 & 0xFFBF;
  v32 = ~(v18 & 0xFFBF);
  v145 = v32;
  while ( 1 )
  {
    v134 = 0LL;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 8LL);
    if ( *(_QWORD *)(gptiCurrent + 432LL) == gpdeskRecalcQueueAttach )
    {
      gpdeskRecalcQueueAttach = 0LL;
      if ( *(_QWORD *)(gptiCurrent + 432LL) )
      {
        v33 = *(_QWORD *)(gptiCurrent + 440LL);
        if ( !*(_QWORD *)(v33 + 40) && !*(_QWORD *)(v33 + 48) )
          zzzReattachThreads(2LL, 0LL, 0LL);
      }
    }
    v34 = *(_QWORD *)(gptiCurrent + 424LL);
    *(_WORD *)(gptiCurrent + 848LL) |= *(_WORD *)(v34 + 4) & v31;
    *(_WORD *)(v34 + 4) &= v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL);
    if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v35 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v35 & 0x40) != 0 )
    {
      v9 |= 0x80u;
      v36 = a5 & 2;
      goto LABEL_192;
    }
    LOBYTE(v35) = v136 != 0;
    v37 = 0LL;
    if ( v136 != 0 && (v18 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1092LL) )
    {
      do
      {
        *(_DWORD *)(gptiCurrent + 1092LL) = 0;
        for ( i = (PointerList *)PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL));
              i;
              i = (PointerList *)PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL)) )
        {
          xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v29, (int)v26);
        }
      }
      while ( *(_DWORD *)(gptiCurrent + 1092LL) );
    }
    if ( *(_QWORD *)(gptiCurrent + 1424LL) && (v18 & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v29, v26, v21) )
      {
        ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v37 = (_QWORD *)*ThreadWin32Thread;
      }
      v138 = 0LL;
      v41 = 0;
      ZwSetIoCompletionEx(v37[173], v37[177], 0LL, 2LL, 0, 0LL);
      do
      {
        while ( 1 )
        {
          LOBYTE(v125) = 0;
          v42 = ZwRemoveIoCompletionEx(v37[173], v143, 1LL, v137, &v138, v125);
          v43 = xxxHandleQueueCompletion(v37, v42, v143, 1LL);
          if ( v43 != 3 )
            break;
          v41 = 1;
        }
      }
      while ( v43 == 4 );
      if ( v41 )
        ZwAssociateWaitCompletionPacket(v37[176], v37[173], v37[175], 0LL, 1LL, 0, 0LL, 0LL);
    }
    v44 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL);
    v45 = v18 & v44;
    if ( (v18 & v44) == 0 )
    {
      v9 |= 0x100u;
      v36 = a5 & 2;
      goto LABEL_192;
    }
    v46 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( *(_QWORD *)(v46 + 64) == gptiCurrent && (*(_DWORD *)(v46 + 380) & 0x400) != 0 )
    {
      EtwTraceInputQueueNoRemoveLocker(v46, v29);
      if ( (v45 & 0x3C07) != 0 )
      {
        v47 = xxxScanSysQueue(gptiCurrent, a1, v12, a3, v133, a5, v45 & 0x3C07, &v134);
        if ( v47 == 1 )
        {
          v101 = 2;
          goto LABEL_224;
        }
        if ( !v47 && UnblockDeferredInput(gptiCurrent) )
          KeyboardInputTelemetry::LogHanging(gptiCurrent);
      }
      else if ( (v44 & 0x2000) != 0 )
      {
        v9 |= 0x200u;
        v36 = a5 & 2;
        goto LABEL_192;
      }
    }
    if ( (v45 & 8) != 0 )
    {
      v48 = a1;
      if ( (unsigned int)xxxReadPostMessage(
                           gptiCurrent,
                           (struct tagMSG *)a1,
                           (struct tagWND *)v12,
                           a3,
                           v133,
                           (struct _QMSG_POSTCHAR_FLAGS *)v135,
                           a5 & 1) )
      {
        v101 = 1;
        goto LABEL_225;
      }
    }
    if ( v12 == 1 )
    {
      v9 |= 0x400u;
      v36 = a5 & 2;
      goto LABEL_192;
    }
    v49 = v18 & v44;
    v50 = (unsigned __int16)v18 & (unsigned __int16)v44 & 0x3C07;
    if ( ((unsigned __int16)v18 & (unsigned __int16)v44 & 0x3C07) != 0 )
    {
      v51 = a1;
      v52 = xxxScanSysQueue(gptiCurrent, a1, v12, a3, v133, a5, v50, &v134);
      if ( v52 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v49 & 1) != 0 && a6 )
        {
          v53 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v54 = v131;
          if ( v131 )
          {
            v55 = v129;
            v29 = v128;
          }
          else
          {
            v29 = (unsigned int)v53;
            v128 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v54 = v128;
            v131 = v128;
            v26 = 0LL;
            v55 = 0;
            v129 = 0;
          }
          v56 = v53 - v54;
          if ( v56 < 0xFA )
          {
            xxxSleepThread2(v18, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v132);
            v129 = v55 + 1;
LABEL_50:
            v32 = v145;
            v31 = v127;
            goto LABEL_51;
          }
          if ( (_DWORD)v29 == v54 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v55, v56);
            v128 = 0;
          }
        }
      }
      else
      {
        v26 = 0LL;
        v128 = 0;
        v129 = 0;
        v131 = 0;
        if ( v52 == 1 )
        {
          v101 = 2;
          v48 = a1;
          goto LABEL_225;
        }
      }
    }
    else
    {
      if ( (v44 & 0x2000) != 0 )
      {
        v9 |= 0x800u;
        v36 = a5 & 2;
        goto LABEL_192;
      }
      v51 = a1;
    }
    v57 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL);
    if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v57 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v57 & 0x40) != 0 )
    {
      v9 |= 0x1000u;
      v36 = a5 & 2;
      goto LABEL_192;
    }
    LOWORD(v58) = *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL);
    if ( ((unsigned __int16)v18 & (unsigned __int16)v58) == 0 )
    {
      v9 |= 0x2000u;
      v36 = a5 & 2;
      goto LABEL_192;
    }
    if ( ((unsigned __int8)v18 & (unsigned __int8)v58 & 0x20) != 0
      && (unsigned int)xxxDoPaint((struct tagWND *)v12, v51, (__int64)v26, v21) )
    {
      break;
    }
    v36 = a5 & 2;
    if ( (a5 & 2) != 0 )
      goto LABEL_147;
    v59 = PsGetCurrentProcessWin32Process(v57);
    *(_DWORD *)(gptiCurrent + 464LL) &= ~0x2000u;
    if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x1000) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL);
        v60 = *(struct _KEVENT **)(v29 + 32);
        if ( v60 )
        {
          if ( v60 != (struct _KEVENT *)-1LL )
          {
            KeSetEvent(v60, 1, 0);
            ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) + 32LL));
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) + 32LL) = -1LL;
          }
        }
        else
        {
          *(_QWORD *)(v29 + 32) = -1LL;
        }
      }
      goto LABEL_135;
    }
    v61 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( !*(_QWORD *)(v61 + 304) )
      *(_QWORD *)(v61 + 304) = gptiCurrent;
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 304LL) != gptiCurrent )
      goto LABEL_135;
    EtwTraceWakeInputIdle(0LL, gptiCurrent);
    v62 = *(struct _KEVENT **)(v59 + 16);
    if ( !v62 )
      goto LABEL_134;
    if ( v62 != (struct _KEVENT *)-1LL )
    {
      KeSetEvent(v62, 1, 0);
      ObfDereferenceObject(*(PVOID *)(v59 + 16));
LABEL_134:
      *(_QWORD *)(v59 + 16) = -1LL;
    }
LABEL_135:
    v63 = *(_DWORD *)(v59 + 12);
    if ( (v63 & 4) != 0 )
    {
      *(_DWORD *)(v59 + 12) = v63 & 0xFFFFFFFB;
      zzzCalcStartCursorHide(0LL, 0);
    }
    while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 )
      xxxReceiveMessage(gptiCurrent);
    v64 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL);
    if ( ((unsigned __int8)v18 & (unsigned __int8)v64 & 0x40) != 0 )
    {
      if ( (v64 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v64 & 0x40) != 0 )
    {
      v9 |= 0x4000u;
      goto LABEL_192;
    }
    v58 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL);
    if ( (v58 & v18) != 0 )
    {
LABEL_147:
      if ( ((unsigned __int8)v18 & (unsigned __int8)v58 & 0x10) != 0 )
      {
        v65 = *(_QWORD *)(gptiCurrent + 1168LL);
        if ( v65 != gptiCurrent + 1168LL )
        {
          while ( 1 )
          {
            v66 = v65 - 56;
            v67 = *(_QWORD *)(v65 - 56 + 88);
            if ( !v12 || v12 == v67 || (unsigned int)IsChild(v12, v67) )
              break;
            v65 = *v68;
            if ( v65 == v69 )
            {
              v36 = a5 & 2;
              goto LABEL_191;
            }
          }
          TimerStatistics((const struct tagTIMER *)v66);
          v71 = *(_DWORD *)(v66 + 132);
          if ( *(_DWORD *)(v66 + 128) == v71 )
            *(_DWORD *)(v66 + 128) = v71;
          if ( *(_DWORD *)(gptiCurrent + 800LL) < gUserPostMessageLimit )
          {
            v72 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
            v74 = v72;
            if ( v72 )
            {
              memset(v72, 0, 0xA0uLL);
              if ( *(_DWORD *)(gptiCurrent + 804LL) == 2 )
                v74[25] |= 8u;
              else
                v74[25] |= 4u;
              v76 = *(_QWORD **)(gptiCurrent + 792LL);
              if ( v76 )
              {
                *v76 = v74;
                *((_QWORD *)v74 + 1) = *(_QWORD *)(gptiCurrent + 792LL);
              }
              else
              {
                *(_QWORD *)(gptiCurrent + 784LL) = v74;
              }
              *(_QWORD *)(gptiCurrent + 792LL) = v74;
              ++*(_DWORD *)(gptiCurrent + 800LL);
              v77 = *(_QWORD *)(gptiCurrent + 408LL);
              v78 = *(_QWORD *)(v66 + 88);
              if ( v78 )
              {
                CurrentThreadDpiAwarenessContext = *(_DWORD *)(v78 + 368);
              }
              else if ( v77 )
              {
                v80 = *(_QWORD *)(v77 + 120);
                if ( v80 )
                  v81 = *(_QWORD *)(v80 + 16);
                else
                  v81 = *(_QWORD *)(v77 + 96);
                CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(v81 + 400) + 280LL);
              }
              else
              {
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, v75);
              }
              v82 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
              if ( (*(_DWORD *)(v66 + 48) & 2) == 0 || (v83 = 280LL, !*(_QWORD *)(v66 + 32)) )
                v83 = *(_QWORD *)(v66 + 32);
              v84 = 280LL;
              if ( (*(_DWORD *)(v66 + 48) & 2) == 0 )
                v84 = 275LL;
              StoreQMessage(
                v74,
                *(_QWORD *)(v66 + 88),
                v84,
                *(_QWORD *)(v66 + 96),
                v83,
                0,
                0LL,
                0,
                0LL,
                0,
                0LL,
                v82,
                0LL,
                0LL);
              if ( (*(_DWORD *)(gptiCurrent + 464LL) & 1) == 0 )
              {
                v21 = 264LL;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) |= 0x108u;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 4LL) |= 0x108u;
                if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) & 0x108) != 0 )
                  KeSetEvent(*(PRKEVENT *)(gptiCurrent + 704LL), 2, 0);
              }
            }
            else
            {
              UserSetLastError(8LL, v73);
            }
          }
          else
          {
            UserSetLastError(1816LL, v70);
          }
          *(_DWORD *)(v66 + 48) &= ~1u;
          v85 = *(_QWORD *)(v66 + 24);
          v26 = *(_QWORD **)(v66 + 56);
          v86 = *(_QWORD **)(v66 + 64);
          if ( v26[1] != v66 + 56 || *v86 != v66 + 56 )
            __fastfail(3u);
          *v86 = v26;
          v26[1] = v86;
          v87 = (*(_DWORD *)(v85 + 580))-- == 1;
          if ( v87 )
            *(_WORD *)(*(_QWORD *)(v85 + 424) + 6LL) &= ~0x10u;
          v88 = (_QWORD *)(v66 + 72);
          v89 = *(_QWORD *)(v66 + 72);
          v90 = *(_QWORD **)(v66 + 80);
          if ( *(_QWORD *)(v89 + 8) != v66 + 72 || (_QWORD *)*v90 != v88 )
            __fastfail(3u);
          *v90 = v89;
          *(_QWORD *)(v89 + 8) = v90;
          v91 = (_QWORD *)gtmrListHead[1];
          if ( *v91 != gtmrListHead[0] )
            __fastfail(3u);
          *v88 = gtmrListHead[0];
          *(_QWORD *)(v66 + 80) = v91;
          *v91 = v88;
          gtmrListHead[1] = v88;
          v9 |= 8u;
          v10 = 1;
          goto LABEL_50;
        }
LABEL_191:
        v10 = 1;
      }
      goto LABEL_192;
    }
    v9 |= 0x8000u;
LABEL_192:
    v92 = *(_QWORD *)(gptiCurrent + 408LL);
    v93 = 0LL;
    if ( *(_QWORD *)(v92 + 64) == gptiCurrent )
    {
      *(_QWORD *)(v92 + 72) = 0LL;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 64LL) = 0LL;
      **(_DWORD **)(gptiCurrent + 424LL) &= ~1u;
    }
    if ( !a6 )
    {
      if ( !v36 )
      {
        v121 = PsGetCurrentProcessWin32Process(0LL);
        *(_DWORD *)(gptiCurrent + 464LL) &= ~0x2000u;
        if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x1000) != 0 )
        {
          v93 = *(_QWORD *)(gptiCurrent + 592LL);
          if ( *(_QWORD *)(v93 + 24) )
          {
            EtwTraceWakeInputIdle(0LL, gptiCurrent);
            v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL);
            v93 = *(_QWORD *)(v29 + 32);
            if ( v93 )
            {
              if ( v93 != -1 )
              {
                KeSetEvent((PRKEVENT)v93, 1, 0);
                ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL) + 32LL));
                v93 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 592LL) + 24LL);
                *(_QWORD *)(v93 + 32) = -1LL;
              }
            }
            else
            {
              *(_QWORD *)(v29 + 32) = -1LL;
            }
          }
        }
        else
        {
          v122 = *(_QWORD *)(gptiCurrent + 400LL);
          if ( !*(_QWORD *)(v122 + 304) )
            *(_QWORD *)(v122 + 304) = gptiCurrent;
          if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 304LL) == gptiCurrent )
          {
            EtwTraceWakeInputIdle(0LL, gptiCurrent);
            v93 = *(_QWORD *)(v121 + 16);
            if ( v93 )
            {
              if ( v93 == -1 )
                goto LABEL_338;
              KeSetEvent((PRKEVENT)v93, 1, 0);
              ObfDereferenceObject(*(PVOID *)(v121 + 16));
            }
            *(_QWORD *)(v121 + 16) = -1LL;
          }
        }
LABEL_338:
        v123 = *(_DWORD *)(v121 + 12);
        if ( (v123 & 4) != 0 )
        {
          *(_DWORD *)(v121 + 12) = v123 & 0xFFFFFFFB;
          zzzCalcStartCursorHide(0LL, 0);
        }
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 )
          xxxReceiveMessage(gptiCurrent);
      }
LABEL_342:
      v115 = a1;
LABEL_343:
      v10 = 0;
      goto LABEL_344;
    }
    v94 = 0;
    if ( v130 )
    {
      if ( (unsigned int)WaitMaskIncludesUserInput(v18, v29) && *(_QWORD *)(v12 + 16) == gptiCurrent )
      {
        v94 = 1;
        xxxUpdateInputHangInfo(v12, 0LL);
      }
      v95 = xxxRealSleepThread(v18, 0, 1, 0, 0LL);
      if ( v94 )
        xxxUpdateInputHangInfo(v12, 1LL);
LABEL_218:
      if ( !v95 )
      {
        v9 |= 0x10000u;
        goto LABEL_342;
      }
      v29 = 0LL;
      v9 = 0;
      v31 = v127;
      v32 = v145;
    }
    else
    {
      v132 = 0;
      v96 = *(_QWORD *)(gptiCurrent + 408LL);
      v97 = *(_QWORD *)(v96 + 72);
      v98 = *(struct tagTHREADINFO **)(v96 + 64);
      if ( gfShellFrameHangResilient )
      {
        if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0 && *(_DWORD *)(v96 + 384) > 1u )
        {
          v99 = *(_QWORD *)(gptiCurrent + 440LL);
          if ( !*(_QWORD *)(v99 + 40) && !*(_QWORD *)(v99 + 48) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            v94 = gdwMDAQTimeoutDefenseInDepth;
            v128 = 0;
            v129 = 0;
            v131 = 0;
          }
        }
      }
      v95 = xxxSleepThread2(v126, v94, 1, 0, (enum SLEEP_STATUS *)&v132);
      v93 = gfShellFrameHangResilient;
      if ( !gfShellFrameHangResilient
        || (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) == 0
        || (v93 = *(_QWORD *)(gptiCurrent + 408LL), *(_DWORD *)(v93 + 384) <= 1u)
        || (v93 = gptiCurrent, v29 = gptiCurrent, v100 = *(_QWORD *)(gptiCurrent + 440LL), *(_QWORD *)(v100 + 40))
        || *(_QWORD *)(v100 + 48)
        || IsAdaptiveQueueDetachExempted(gptiCurrent)
        || (v93 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL), v93 != *(_QWORD *)(gptiCurrent + 1352LL))
        && v93
        || !v132 )
      {
        v18 = v126;
        v10 = 1;
        goto LABEL_218;
      }
      v116 = SlowAppThreadInShellFrame(gptiCurrent, v98, v97, v132 == 2);
      v10 = 1;
      v18 = v126;
      v31 = v127;
      v32 = v145;
      if ( v116 )
      {
        TryDetachShellFrame(gptiCurrent, v116, v132 == 2, 0LL);
        goto LABEL_50;
      }
LABEL_51:
      v29 = 0LL;
    }
  }
  v101 = 4;
LABEL_224:
  v48 = a1;
LABEL_225:
  v9 |= v101;
  v93 = *(unsigned int *)(v48 + 8);
  if ( (_DWORD)v93 == 595 && *(_QWORD *)(v48 + 24) == -1LL )
    v29 = -1LL;
  else
    v29 = 0LL;
  v102 = (unsigned int)(v93 - 571) <= 1
      || ((unsigned int)(v93 - 577) <= 3 || (unsigned int)(v93 - 581) <= 5 || (unsigned int)(v93 - 593) <= 2)
      && IsPointerMessageTouchpad(gptiCurrent, v29, *(_WORD *)(v48 + 16));
  v103 = a5 & 1;
  if ( (a5 & 1) != 0 && v134 && *(_QWORD *)(gptiCurrent + 1200LL) || v102 )
  {
LABEL_246:
    if ( !(_DWORD)v103 )
      goto LABEL_257;
    v105 = *(_DWORD *)(v48 + 8);
    if ( v105 == 258 || v105 == 582 || v105 == 578 || *(_WORD *)(v48 + 8) >= 0xC000u )
    {
      v106 = xxxCallCtfHook(3, 0, a5, v48);
      v103 = a5 & 1;
      if ( v106 )
      {
        if ( *(_DWORD *)(v48 + 8) == 258 )
        {
          *(_DWORD *)(v48 + 8) = 0;
          *(_QWORD *)(v48 + 16) = 0LL;
          *(_QWORD *)(v48 + 24) = 0LL;
        }
      }
    }
    if ( !(_DWORD)v103 || !v134 || !*(_QWORD *)(gptiCurrent + 1200LL) )
      goto LABEL_257;
  }
  else
  {
    if ( (a5 & 1) != 0 )
    {
      if ( *(_DWORD *)(v48 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1288LL) & 1) != 0 )
      {
        v29 = v135[0];
        if ( (v135[0] & 1) != 0 )
        {
          v104 = xxxKeyboardCorrectionCallout(v48);
          v103 = a5 & 1;
          if ( v104 == 1296 )
          {
            *(_DWORD *)(v48 + 8) = 0;
            *(_QWORD *)(v48 + 16) = 0LL;
            *(_QWORD *)(v48 + 24) = 0LL;
          }
        }
      }
      goto LABEL_246;
    }
LABEL_257:
    if ( !v102 )
    {
      v107 = *(__int64 **)(gptiCurrent + 440LL);
      v93 = *v107;
      v29 = (unsigned int)(*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(*v107 + 16));
      if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(*v107 + 16)) & 0x10) != 0 )
      {
        xxxCallHook(0LL, a5, v48, 3LL);
        v103 = a5 & 1;
      }
    }
  }
  if ( (_DWORD)v103 )
  {
    v108 = *(_DWORD *)(gptiCurrent + 1088LL);
    if ( v108 )
    {
      if ( word_1C0327710 && qword_1C0327718 == gptiCurrent && dword_1C0327714 == v108 )
      {
        ForceCompletePendingPromotion();
        xxxProcessMousePromotionQueue();
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 1088LL) = 0;
      }
    }
    if ( *(_DWORD *)(v48 + 8) == 583
      && (*(_WORD *)(v48 + 18) & 0x2000) != 0
      && word_1C0327710
      && word_1C0327710 == *(_WORD *)(v48 + 16)
      && qword_1C0327718 == gptiCurrent )
    {
      *(_DWORD *)(gptiCurrent + 1088LL) = dword_1C0327714;
    }
    v109 = 0;
    v110 = *(_DWORD *)(v48 + 8);
    if ( ((unsigned int)(v110 - 577) <= 3 || (unsigned int)(v110 - 581) <= 0x12 && v110 != 589) && v110 != 595 )
      v109 = *(_WORD *)(v48 + 16);
    if ( (gdwMitConfig & 4) != 0 )
      CTouchProcessor::UpdateThreadPointerList(
        gpTouchProcessor,
        (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL),
        v109);
    else
      UpdateThreadPointerList((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL), v109);
    v103 = a5 & 1;
  }
  v111 = v134;
  if ( v134 )
  {
    v112 = *((_DWORD *)v134 + 25);
    if ( (v112 & 0x100) != 0 )
    {
      if ( (_DWORD)v103 && *(_QWORD *)(gptiCurrent + 1200LL) )
      {
        EtwTraceBeginDelegateInputCallback(v134, a1);
        v113 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1200LL), a1, *(_QWORD *)(gptiCurrent + 1208LL));
        EtwTraceEndDelegateInputCallback(v111, a1);
        *((_DWORD *)v111 + 25) &= ~0x100u;
        v114 = *((_DWORD *)v111 + 25);
        if ( (v114 & 0x80u) == 0 )
        {
          if ( (v114 & 0x20) != 0 )
            _HandleDelegatedInputWorker(gptiCurrent, v113, v134);
        }
        else
        {
          FreeQEntry(v111);
        }
        v9 = 0x20000;
        goto LABEL_50;
      }
      *((_DWORD *)v134 + 25) = v112 & 0xFFFFFEFF;
    }
  }
  v87 = !v102;
  v115 = a1;
  if ( !v87
    && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x2000) == 0
    && !(unsigned int)IsPTPRedirected(gptiCurrent, (struct tagMSG *)a1) )
  {
    xxxClientCallDefaultInputHandler(a1);
    v139 = 0uLL;
    v140 = 0uLL;
    v141 = 0uLL;
    *(_OWORD *)a1 = 0uLL;
    *(_OWORD *)(a1 + 16) = v140;
    *(_OWORD *)(a1 + 32) = v141;
    goto LABEL_50;
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_343;
  }
  if ( (a5 & 1) != 0 )
  {
    v117 = *(_QWORD *)(gptiCurrent + 1032LL);
    if ( v117 )
    {
      v118 = HMValidateHandleNoRip(v117, 18);
      if ( v118 )
        FreeHidData(v118);
      *(_QWORD *)(gptiCurrent + 1032LL) = 0LL;
    }
    v119 = *(_QWORD *)(gptiCurrent + 1040LL);
    if ( v119 )
    {
      FreeTouchInputInfo(v119, 1LL);
      *(_QWORD *)(gptiCurrent + 1040LL) = 0LL;
    }
    v93 = *(_QWORD *)(gptiCurrent + 1048LL);
    if ( v93 )
    {
      FreeGestureInfo(v93, 1LL);
      *(_QWORD *)(gptiCurrent + 1048LL) = 0LL;
    }
    v120 = *(_DWORD *)(a1 + 8);
    if ( v120 == 255 )
    {
      if ( *(_QWORD *)(a1 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 1032LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( v120 == 576 && (LOBYTE(v29) = 20, HMValidateHandle(*(_QWORD *)(a1 + 24), v29, v103, v21)) )
    {
      *(_QWORD *)(gptiCurrent + 1040LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v29) = 21;
      if ( HMValidateHandle(*(_QWORD *)(a1 + 24), v29, v103, v21) )
        *(_QWORD *)(gptiCurrent + 1048LL) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_344:
  if ( v130 )
    ThreadUnlock1(v93, v29);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v10 )
    {
      if ( *(_DWORD *)(v115 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0 )
      {
        v124 = *(_DWORD **)(gptiCurrent + 648LL);
        if ( v124 )
        {
          if ( (v124[49] & 0x100000) != 0 )
          {
            if ( v124[82] )
            {
              v124[83] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v124[82];
              ++v124[84];
              v124[82] = 0;
            }
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1136LL) = *(_QWORD *)v115;
      *(_DWORD *)(gptiCurrent + 1144LL) = *(_DWORD *)(v115 + 8);
      *(_QWORD *)(gptiCurrent + 1152LL) = *(_QWORD *)(v115 + 16);
    }
  }
  else
  {
    v10 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, v115);
  return v10;
}

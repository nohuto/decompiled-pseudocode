/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0050B40
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C004DBF0 (NtUserRealInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C004E480 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0050A30 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002114 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C0004F00 (FreeHidData.c)
 *     SlowAppThreadInShellFrame @ 0x1C0006E3C (SlowAppThreadInShellFrame.c)
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007878 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     zzzCalcStartCursorHide @ 0x1C0049970 (zzzCalcStartCursorHide.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C004E2E8 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     CalcWakeMask @ 0x1C00522A0 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0052628 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C00526B0 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     FreeQEntry @ 0x1C00C9AFC (FreeQEntry.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 *     xxxDoSysExpunge @ 0x1C00F48CC (xxxDoSysExpunge.c)
 *     IsShellFrameHangResilient @ 0x1C01081B0 (IsShellFrameHangResilient.c)
 *     WaitMaskIncludesUserInput @ 0x1C0108570 (WaitMaskIncludesUserInput.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010A3F8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     _IsChild @ 0x1C0115B04 (_IsChild.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01195D4 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0131A68 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     xxxClientCallDelegateThread @ 0x1C0133D58 (xxxClientCallDelegateThread.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C0197C18 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01BC668 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01C6A38 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C7214 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C77F8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C8968 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01D4964 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01D5280 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C01FF8B8 (xxxClientCallDefaultInputHandler.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020DAF0 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
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
  unsigned int v10; // r13d
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  int v14; // r11d
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // r11d
  unsigned __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 GlobalValid; // rax
  unsigned __int64 v29; // rdx
  int v30; // ecx
  __int16 v31; // bx
  __int16 v32; // di
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edi
  PointerList *i; // rax
  int v38; // r8d
  int v39; // ebx
  int v40; // esi
  int v41; // eax
  __int64 v42; // r9
  int v43; // edi
  __int64 v44; // rbx
  int v45; // eax
  __int16 v46; // bx
  __int64 v47; // rdi
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // ecx
  int v53; // ebx
  __int64 v54; // rbx
  struct _KEVENT *v55; // rcx
  __int64 v56; // rax
  struct _KEVENT *v57; // rcx
  int v58; // eax
  __int64 v59; // r8
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 *v62; // r8
  __int64 v63; // r9
  int v64; // eax
  _DWORD *v65; // rax
  _DWORD *v66; // rbx
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // r8d
  __int64 v77; // rdx
  __int64 v78; // r8
  _QWORD *v79; // rcx
  bool v80; // zf
  _QWORD *v81; // rax
  __int64 v82; // rdx
  _QWORD *v83; // rcx
  _QWORD *v84; // rdx
  unsigned int v85; // ebx
  int v86; // edi
  __int64 v87; // rcx
  __int64 v88; // rsi
  struct tagTHREADINFO *v89; // r14
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // eax
  BOOL v93; // edi
  __int64 v94; // r8
  int v95; // eax
  int v96; // eax
  int v97; // eax
  __int64 v98; // r9
  __int64 *v99; // rax
  unsigned int v100; // r10d
  int v101; // ecx
  __int64 v102; // rdx
  __int64 v103; // rcx
  int v104; // eax
  unsigned __int16 v105; // r8
  int v106; // ecx
  struct tagQMSG *v107; // rbx
  int v108; // eax
  unsigned int v109; // edi
  int v110; // ecx
  __int64 v111; // rdi
  struct tagTHREADINFO *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  int v116; // eax
  __int64 v117; // rbx
  __int64 v118; // rax
  int v119; // eax
  _DWORD *v120; // rdx
  int v121; // [rsp+28h] [rbp-140h]
  unsigned int v122; // [rsp+70h] [rbp-F8h]
  __int16 v123; // [rsp+7Ch] [rbp-ECh]
  unsigned int v124; // [rsp+80h] [rbp-E8h]
  unsigned int v125; // [rsp+84h] [rbp-E4h]
  unsigned int v126; // [rsp+88h] [rbp-E0h]
  int v127; // [rsp+8Ch] [rbp-DCh] BYREF
  unsigned int v128; // [rsp+90h] [rbp-D8h]
  int v129; // [rsp+94h] [rbp-D4h]
  struct tagQMSG *v130; // [rsp+98h] [rbp-D0h] BYREF
  unsigned int v131; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned __int64 v132; // [rsp+A8h] [rbp-C0h]
  int v133; // [rsp+B8h] [rbp-B0h]
  char v134[12]; // [rsp+CCh] [rbp-9Ch] BYREF
  __int64 v135[3]; // [rsp+D8h] [rbp-90h] BYREF
  _QWORD v136[3]; // [rsp+F0h] [rbp-78h] BYREF
  _DWORD v137[24]; // [rsp+108h] [rbp-60h] BYREF
  __int16 v139; // [rsp+178h] [rbp+10h]

  v131 = 0;
  v126 = 0;
  v124 = 0;
  v125 = 0;
  v9 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v10 = 1;
    a2 = 1LL;
LABEL_8:
    v12 = a2;
    v132 = a2;
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
  v132 = v11;
  if ( !v11 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v136[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v136;
  v136[1] = v11;
  ++*(_DWORD *)(v11 + 8);
  v10 = 1;
  v14 = 1;
LABEL_9:
  v129 = v14;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL);
  v15 = 0xFFFFFFFFLL;
  if ( a4 )
    v15 = a4;
  v128 = v15;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v18 = CalcWakeMask(a3, v15, HIWORD(a5));
  v122 = v18;
  v133 = v18 & 0x1C07;
  if ( (v18 & 0x1C07) != 0 )
  {
    v17 = MEMORY[0xFFFFF78000000320];
    v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(gptiCurrent + 1280LL) = v16;
  }
  if ( (v18 & 7) != 7 )
  {
    if ( (v18 & 6) == 0 )
      goto LABEL_22;
    v17 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
      goto LABEL_22;
  }
  if ( v19 )
  {
    if ( *(_QWORD *)(v12 + 16) == gptiCurrent )
    {
      v20 = v12;
LABEL_21:
      xxxUpdateInputHangInfo(v20, 1LL);
    }
  }
  else if ( !a2 )
  {
    v20 = 0LL;
    goto LABEL_21;
  }
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16);
  v22 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v22 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0);
  }
  v23 = *(_QWORD *)(gptiCurrent + 376LL);
  v24 = gcSysExpunge;
  if ( *(_DWORD *)(v23 + 368) != gcSysExpunge )
  {
    *(_DWORD *)(v23 + 368) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  if ( (a5 & 1) != 0 )
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (v18 & 0x1CBF) != 0
        && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x80000) != 0
        && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & (unsigned __int16)v18) != 0 )
      {
        v25 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v25 + 48) && !*(_QWORD *)(v25 + 40) )
          TryAttachShellFrame(gptiCurrent, v24);
      }
    }
  }
  v26 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(gptiCurrent + 464LL)
    || (v27 = *(_QWORD *)(v26 + 32), v27 == gptiCurrent) && *(_QWORD *)(v26 + 40) == *(_QWORD *)(gptiCurrent + 496LL) )
  {
    v29 = 0LL;
    *(_QWORD *)(v26 + 32) = 0LL;
  }
  else if ( !v27 || *(_DWORD *)(v27 + 784) )
  {
    v29 = 0LL;
  }
  else
  {
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1LL);
    v29 = 0LL;
    if ( GlobalValid )
      *(_QWORD *)(v26 + 32) = 0LL;
  }
  if ( *(_QWORD *)(v26 + 32) != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 400LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 760LL) = 0;
  if ( (a5 & 2) == 0 )
  {
    v30 = *(_DWORD *)(gptiCurrent + 440LL);
    if ( (v30 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 28LL) = v30 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x80000u;
    }
  }
  v31 = v18 & 0xFFBF;
  v123 = v18 & 0xFFBF;
  v32 = ~(v18 & 0xFFBF);
  v139 = v32;
  while ( 1 )
  {
    v130 = 0LL;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 8LL);
    if ( *(_QWORD *)(gptiCurrent + 408LL) == gpdeskRecalcQueueAttach )
    {
      gpdeskRecalcQueueAttach = 0LL;
      if ( *(_QWORD *)(gptiCurrent + 408LL) )
      {
        v33 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v33 + 40) && !*(_QWORD *)(v33 + 48) )
          zzzReattachThreads(2LL, 0LL, 0LL);
      }
    }
    v34 = *(_QWORD *)(gptiCurrent + 400LL);
    *(_WORD *)(gptiCurrent + 760LL) |= v31 & *(_WORD *)(v34 + 4);
    *(_WORD *)(v34 + 4) &= v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v35 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v35 & 0x40) != 0 )
    {
      v9 |= 0x80u;
      v36 = a5 & 2;
      goto LABEL_205;
    }
    LOBYTE(v35) = v133 != 0;
    if ( v133 != 0 && (v18 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1004LL) )
    {
      do
      {
        *(_DWORD *)(gptiCurrent + 1004LL) = 0;
        for ( i = (PointerList *)PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL));
              i;
              i = (PointerList *)PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL)) )
        {
          xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v29, v38);
        }
      }
      while ( *(_DWORD *)(gptiCurrent + 1004LL) );
    }
    if ( *(_QWORD *)(gptiCurrent + 1336LL) && (v18 & 8) != 0 )
    {
      v39 = 0;
      v135[0] = 0LL;
      v40 = 0;
      ZwSetIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), *(_QWORD *)(gptiCurrent + 1328LL), 2LL, 0LL, 0, 0LL);
      while ( 1 )
      {
        LOBYTE(v121) = 0;
        v41 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1296LL), v137, 1LL, v134, v135, v121);
        if ( v41 )
        {
          if ( v41 == 258 )
            goto LABEL_84;
        }
        else
        {
          if ( !v137[0] )
            goto LABEL_83;
          if ( v137[0] == 2 )
            goto LABEL_84;
          if ( v137[0] == 1 && *(_QWORD *)(gptiCurrent + 1336LL) )
          {
            v39 = v137[0] + 3;
            xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (__int64)v137, 1LL, v42);
          }
        }
        if ( v39 == 3 )
        {
LABEL_83:
          v40 = 1;
          v39 = 0;
        }
        else
        {
          if ( v39 != 4 )
          {
LABEL_84:
            if ( v40 )
              ZwAssociateWaitCompletionPacket(
                *(_QWORD *)(gptiCurrent + 1320LL),
                *(_QWORD *)(gptiCurrent + 1296LL),
                *(_QWORD *)(gptiCurrent + 1312LL),
                0LL,
                0LL,
                0,
                0LL,
                0LL);
            v18 = v122;
            break;
          }
          v39 = 0;
        }
      }
    }
    v43 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( (v43 & v18) == 0 )
    {
      v9 |= 0x100u;
      v36 = a5 & 2;
      goto LABEL_205;
    }
    v35 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_QWORD *)(v35 + 32) == gptiCurrent && (*(_DWORD *)(v35 + 340) & 0x400) != 0 )
    {
      EtwTraceInputQueueNoRemoveLocker(v35, v29);
      if ( ((unsigned __int16)v18 & (unsigned __int16)v43 & 0x3C07) != 0 )
      {
        v44 = a1;
        v45 = xxxScanSysQueue(
                gptiCurrent,
                a1,
                v12,
                a3,
                v128,
                a5,
                (unsigned __int16)v18 & (unsigned __int16)v43 & 0x3C07,
                &v130);
        if ( v45 == 1 )
        {
          v92 = 2;
          goto LABEL_236;
        }
        if ( !v45 && UnblockDeferredInput(gptiCurrent) )
          KeyboardInputTelemetry::LogHanging(gptiCurrent);
      }
      else if ( (v43 & 0x2000) != 0 )
      {
        v9 |= 0x200u;
        v36 = a5 & 2;
        goto LABEL_205;
      }
    }
    v46 = v18 & v43;
    if ( ((unsigned __int8)v18 & (unsigned __int8)v43 & 8) != 0
      && (unsigned int)xxxReadPostMessage(
                         gptiCurrent,
                         (struct tagMSG *)a1,
                         (struct tagWND *)v12,
                         a3,
                         v128,
                         (struct _QMSG_POSTCHAR_FLAGS *)&v131,
                         a5 & 1) )
    {
      v92 = 1;
      goto LABEL_235;
    }
    if ( v12 == 1 )
    {
      v9 |= 0x400u;
      v36 = a5 & 2;
      goto LABEL_205;
    }
    if ( (v46 & 0x3C07) != 0 )
    {
      v47 = a1;
      v48 = xxxScanSysQueue(gptiCurrent, a1, v12, a3, v128, a5, v46 & 0x3C07, &v130);
      if ( v48 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v46 & 1) != 0 && a6 )
        {
          v49 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v50 = v126;
          if ( v126 )
          {
            v51 = v125;
            v29 = v124;
          }
          else
          {
            v29 = (unsigned int)v49;
            v124 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v50 = v124;
            v126 = v124;
            v51 = 0;
            v125 = 0;
          }
          v52 = v49 - v50;
          if ( v52 < 0xFA )
          {
            xxxSleepThread2(v18, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v127);
            v125 = v51 + 1;
            goto LABEL_51;
          }
          if ( (_DWORD)v29 == v50 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v51, v52);
            v124 = 0;
          }
        }
      }
      else
      {
        v124 = 0;
        v125 = 0;
        v126 = 0;
        if ( v48 == 1 )
        {
          v92 = 2;
          v44 = a1;
          goto LABEL_236;
        }
      }
    }
    else
    {
      if ( (v43 & 0x2000) != 0 )
      {
        v9 |= 0x800u;
        v36 = a5 & 2;
        goto LABEL_205;
      }
      v47 = a1;
    }
    v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v35 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v35 & 0x40) != 0 )
    {
      v9 |= 0x1000u;
      v36 = a5 & 2;
      goto LABEL_205;
    }
    v53 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( (v53 & v18) == 0 )
    {
      v9 |= 0x2000u;
      v36 = a5 & 2;
      goto LABEL_205;
    }
    if ( ((unsigned __int8)v18 & (unsigned __int8)v53 & 0x20) != 0
      && (unsigned int)xxxDoPaint((struct tagWND *)v12, v47) )
    {
      break;
    }
    v36 = a5 & 2;
    if ( (a5 & 2) != 0 )
      goto LABEL_155;
    v54 = PsGetCurrentProcessWin32Process(v35, v29);
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x2000u;
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
        v55 = *(struct _KEVENT **)(v29 + 32);
        if ( v55 )
        {
          if ( v55 != (struct _KEVENT *)-1LL )
          {
            KeSetEvent(v55, 1, 0);
            ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL));
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL) = -1LL;
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
      v56 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( !*(_QWORD *)(v56 + 296) )
        *(_QWORD *)(v56 + 296) = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL) == gptiCurrent )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v57 = *(struct _KEVENT **)(v54 + 16);
        if ( v57 )
        {
          if ( v57 == (struct _KEVENT *)-1LL )
            goto LABEL_143;
          KeSetEvent(v57, 1, 0);
          ObfDereferenceObject(*(PVOID *)(v54 + 16));
        }
        *(_QWORD *)(v54 + 16) = -1LL;
      }
    }
LABEL_143:
    v58 = *(_DWORD *)(v54 + 12);
    if ( (v58 & 4) != 0 )
    {
      *(_DWORD *)(v54 + 12) = v58 & 0xFFFFFFFB;
      zzzCalcStartCursorHide(0LL, 0);
    }
    while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
      xxxReceiveMessage(gptiCurrent);
    v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v35 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v35 & 0x40) != 0 )
    {
      v9 |= 0x4000u;
      goto LABEL_205;
    }
    v53 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( (v53 & v18) == 0 )
    {
      v9 |= 0x8000u;
      goto LABEL_205;
    }
LABEL_155:
    if ( ((unsigned __int8)v18 & (unsigned __int8)v53 & 0x10) != 0 )
    {
      v59 = *(_QWORD *)(gptiCurrent + 1080LL);
      if ( v59 != gptiCurrent + 1080LL )
      {
        while ( 1 )
        {
          v60 = v59 - 56;
          v61 = *(_QWORD *)(v59 - 56 + 88);
          if ( !v12 || v12 == v61 || (unsigned int)IsChild(v12, v61) )
            break;
          v59 = *v62;
          if ( v59 == v63 )
          {
            v36 = a5 & 2;
            goto LABEL_204;
          }
        }
        TimerStatistics((const struct tagTIMER *)v60);
        v64 = *(_DWORD *)(v60 + 132);
        if ( *(_DWORD *)(v60 + 128) == v64 )
          *(_DWORD *)(v60 + 128) = v64;
        if ( *(_DWORD *)(gptiCurrent + 744LL) < gUserPostMessageLimit )
        {
          v65 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v66 = v65;
          if ( v65 )
          {
            memset(v65, 0, 0xA0uLL);
            if ( *(_DWORD *)(gptiCurrent + 748LL) == 2 )
              v66[25] |= 8u;
            else
              v66[25] |= 4u;
            v67 = *(_QWORD **)(gptiCurrent + 736LL);
            if ( v67 )
            {
              *v67 = v66;
              *((_QWORD *)v66 + 1) = *(_QWORD *)(gptiCurrent + 736LL);
            }
            else
            {
              *(_QWORD *)(gptiCurrent + 728LL) = v66;
            }
            *(_QWORD *)(gptiCurrent + 736LL) = v66;
            ++*(_DWORD *)(gptiCurrent + 744LL);
            v68 = *(_QWORD *)(gptiCurrent + 384LL);
            v69 = *(_QWORD *)(v60 + 88);
            if ( v69 )
            {
              v70 = *(_DWORD *)(v69 + 368);
            }
            else if ( v68 )
            {
              v71 = *(_QWORD *)(v68 + 88);
              if ( v71 )
                v72 = *(_QWORD *)(v71 + 16);
              else
                v72 = *(_QWORD *)(v68 + 64);
              v70 = *(_DWORD *)(*(_QWORD *)(v72 + 376) + 280LL);
            }
            else
            {
              LOBYTE(v70) = W32GetCurrentThreadDpiAwarenessContext(0LL);
            }
            v73 = v70 & 0xF;
            if ( v73 )
            {
              if ( v73 == 1 )
                v74 = *(_QWORD *)(gpsi + 5352LL);
              else
                v74 = *(_QWORD *)(gpsi + 5368LL);
            }
            else
            {
              v74 = *(_QWORD *)(gpsi + 5344LL);
            }
            if ( (*(_DWORD *)(v60 + 48) & 2) == 0 || (v75 = 280LL, !*(_QWORD *)(v60 + 32)) )
              v75 = *(_QWORD *)(v60 + 32);
            v76 = 280;
            if ( (*(_DWORD *)(v60 + 48) & 2) == 0 )
              v76 = 275;
            StoreQMessage(
              (_DWORD)v66,
              *(_QWORD *)(v60 + 88),
              v76,
              *(_QWORD *)(v60 + 96),
              v75,
              0,
              0,
              0,
              0LL,
              0,
              0LL,
              v74,
              0LL,
              0LL);
            if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= 0x108u;
              *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= 0x108u;
              if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) & 0x108) != 0 )
                KeSetEvent(*(PRKEVENT *)(gptiCurrent + 648LL), 2, 0);
            }
          }
          else
          {
            UserSetLastError(8LL);
          }
        }
        else
        {
          UserSetLastError(1816LL);
        }
        *(_DWORD *)(v60 + 48) &= ~1u;
        v77 = *(_QWORD *)(v60 + 24);
        v78 = *(_QWORD *)(v60 + 56);
        v79 = *(_QWORD **)(v60 + 64);
        if ( *(_QWORD *)(v78 + 8) != v60 + 56 || *v79 != v60 + 56 )
          __fastfail(3u);
        *v79 = v78;
        *(_QWORD *)(v78 + 8) = v79;
        v80 = (*(_DWORD *)(v77 + 524))-- == 1;
        if ( v80 )
          *(_WORD *)(*(_QWORD *)(v77 + 400) + 6LL) &= ~0x10u;
        v81 = (_QWORD *)(v60 + 72);
        v82 = *(_QWORD *)(v60 + 72);
        v83 = *(_QWORD **)(v60 + 80);
        if ( *(_QWORD *)(v82 + 8) != v60 + 72 || (_QWORD *)*v83 != v81 )
          __fastfail(3u);
        *v83 = v82;
        *(_QWORD *)(v82 + 8) = v83;
        v84 = (_QWORD *)gtmrListHead[1];
        if ( *v84 != gtmrListHead[0] )
          __fastfail(3u);
        *v81 = gtmrListHead[0];
        *(_QWORD *)(v60 + 80) = v84;
        *v84 = v81;
        gtmrListHead[1] = v81;
        v9 |= 8u;
LABEL_50:
        v18 = v122;
LABEL_51:
        v32 = v139;
        v31 = v123;
        goto LABEL_52;
      }
LABEL_204:
      v18 = v122;
    }
LABEL_205:
    if ( !a6 )
    {
      if ( v36 )
        goto LABEL_366;
      v117 = PsGetCurrentProcessWin32Process(v35, v29);
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
      {
        v35 = *(_QWORD *)(gptiCurrent + 536LL);
        if ( *(_QWORD *)(v35 + 24) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
          v35 = *(_QWORD *)(v29 + 32);
          if ( v35 )
          {
            if ( v35 != -1 )
            {
              KeSetEvent((PRKEVENT)v35, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL));
              v35 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
              *(_QWORD *)(v35 + 32) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v29 + 32) = -1LL;
          }
        }
        goto LABEL_362;
      }
      v118 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( !*(_QWORD *)(v118 + 296) )
        *(_QWORD *)(v118 + 296) = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL) != gptiCurrent )
        goto LABEL_362;
      EtwTraceWakeInputIdle(0LL, gptiCurrent);
      v35 = *(_QWORD *)(v117 + 16);
      if ( v35 )
      {
        if ( v35 == -1 )
        {
LABEL_362:
          v119 = *(_DWORD *)(v117 + 12);
          if ( (v119 & 4) != 0 )
          {
            *(_DWORD *)(v117 + 12) = v119 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0);
          }
          while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
            xxxReceiveMessage(gptiCurrent);
          goto LABEL_366;
        }
        KeSetEvent((PRKEVENT)v35, 1, 0);
        ObfDereferenceObject(*(PVOID *)(v117 + 16));
      }
      *(_QWORD *)(v117 + 16) = -1LL;
      goto LABEL_362;
    }
    v85 = 0;
    if ( v129 )
    {
      if ( (unsigned int)WaitMaskIncludesUserInput(v18, v29) && *(_QWORD *)(v12 + 16) == gptiCurrent )
      {
        v85 = 1;
        xxxUpdateInputHangInfo(v12, 0LL);
      }
      v86 = xxxRealSleepThread(v18, 0, 1, 0, 0LL);
      if ( v85 )
        xxxUpdateInputHangInfo(v12, 1LL);
LABEL_229:
      if ( !v86 )
      {
        v9 |= 0x10000u;
LABEL_366:
        v111 = a1;
        goto LABEL_367;
      }
      v29 = 0LL;
      v9 = 0;
      v12 = v132;
      v31 = v123;
      v32 = v139;
    }
    else
    {
      v127 = 0;
      v87 = *(_QWORD *)(gptiCurrent + 384LL);
      v88 = *(_QWORD *)(v87 + 40);
      v89 = *(struct tagTHREADINFO **)(v87 + 32);
      if ( gfShellFrameHangResilient )
      {
        if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 && *(_DWORD *)(v87 + 344) > 1u )
        {
          v90 = *(_QWORD *)(gptiCurrent + 416LL);
          if ( !*(_QWORD *)(v90 + 40) && !*(_QWORD *)(v90 + 48) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            v85 = gdwMDAQTimeoutDefenseInDepth;
            v124 = 0;
            v125 = 0;
            v126 = 0;
          }
        }
      }
      v86 = xxxSleepThread2(v122, v85, 1, 0, (enum SLEEP_STATUS *)&v127);
      v35 = gfShellFrameHangResilient;
      if ( !gfShellFrameHangResilient
        || (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) == 0
        || (v35 = *(_QWORD *)(gptiCurrent + 384LL), *(_DWORD *)(v35 + 344) <= 1u)
        || (v35 = gptiCurrent, v29 = gptiCurrent, v91 = *(_QWORD *)(gptiCurrent + 416LL), *(_QWORD *)(v91 + 40))
        || *(_QWORD *)(v91 + 48)
        || IsAdaptiveQueueDetachExempted(gptiCurrent)
        || (v35 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), v35 != *(_QWORD *)(gptiCurrent + 1264LL)) && v35
        || !v127 )
      {
        v18 = v122;
        goto LABEL_229;
      }
      v112 = SlowAppThreadInShellFrame(gptiCurrent, v89, v88, v127 == 2);
      v12 = v132;
      v18 = v122;
      v31 = v123;
      v32 = v139;
      if ( v112 )
      {
        TryDetachShellFrame(gptiCurrent, v112, v127 == 2, 0LL);
        goto LABEL_50;
      }
LABEL_52:
      v29 = 0LL;
    }
  }
  v92 = 4;
LABEL_235:
  v44 = a1;
LABEL_236:
  v9 |= v92;
  v35 = *(unsigned int *)(v44 + 8);
  if ( (_DWORD)v35 == 595 && *(_QWORD *)(v44 + 24) == -1LL )
    v29 = -1LL;
  else
    v29 = 0LL;
  v93 = (unsigned int)(v35 - 571) <= 1
     || ((unsigned int)(v35 - 577) <= 3 || (unsigned int)(v35 - 581) <= 5 || (unsigned int)(v35 - 593) <= 2)
     && IsPointerMessageTouchpad(gptiCurrent, v29, *(_WORD *)(v44 + 16));
  v94 = a5 & 1;
  if ( (a5 & 1) != 0 && v130 && *(_QWORD *)(gptiCurrent + 1112LL) || v93 )
  {
LABEL_257:
    if ( !(_DWORD)v94 )
      goto LABEL_265;
    v96 = *(_DWORD *)(v44 + 8);
    if ( v96 != 258 && v96 != 582 && v96 != 578 && *(_WORD *)(v44 + 8) < 0xC000u )
      goto LABEL_265;
    v97 = xxxCallCtfHook(3, 0, a5, v44);
    v98 = 0LL;
    v94 = a5 & 1;
    if ( v97 && *(_DWORD *)(v44 + 8) == 258 )
    {
      *(_DWORD *)(v44 + 8) = 0;
      *(_QWORD *)(v44 + 16) = 0LL;
      *(_QWORD *)(v44 + 24) = 0LL;
    }
  }
  else
  {
    if ( (a5 & 1) != 0 )
    {
      if ( *(_DWORD *)(v44 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1200LL) & 1) != 0 )
      {
        v29 = v131;
        if ( (v131 & 1) != 0 )
        {
          v95 = xxxKeyboardCorrectionCallout(v44);
          v94 = a5 & 1;
          if ( v95 == 1296 )
          {
            *(_DWORD *)(v44 + 8) = 0;
            *(_QWORD *)(v44 + 16) = 0LL;
            *(_QWORD *)(v44 + 24) = 0LL;
          }
        }
      }
      goto LABEL_257;
    }
LABEL_265:
    v98 = 0LL;
  }
  if ( (!(_DWORD)v94 || !v130 || !*(_QWORD *)(gptiCurrent + 1112LL)) && !v93 )
  {
    v99 = *(__int64 **)(gptiCurrent + 416LL);
    v35 = *v99;
    v29 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*v99 + 16));
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*v99 + 16)) & 0x10) != 0 )
    {
      v100 = a5;
      v101 = *(_DWORD *)(v44 + 8);
      v102 = *(_QWORD *)(v44 + 16);
      if ( ((unsigned int)(v101 - 577) <= 3 || (unsigned int)(v101 - 581) <= 0x12 && v101 != 589) && v101 != 595
        || v101 == 528 && (_WORD)v102 == 582 )
      {
        xxxPointerCallHook(0, a5, v44, 3u, 0);
      }
      else
      {
        v103 = *(_QWORD *)(gptiCurrent + 824LL);
        if ( (v103 || (v103 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 64LL)) != 0)
          && (*(_DWORD *)(v103 + 64) & 0x80u) != 0 )
        {
          LODWORD(v103) = PhkNextValid(v103, v102, v94);
        }
        xxxCallHook2(v103, 0, v100, v44, v98);
      }
      v94 = a5 & 1;
    }
  }
  if ( (_DWORD)v94 )
  {
    v104 = *(_DWORD *)(gptiCurrent + 1000LL);
    if ( v104 )
    {
      if ( word_1C032C490 && qword_1C032C498 == gptiCurrent && dword_1C032C494 == v104 )
      {
        ForceCompletePendingPromotion();
        xxxProcessMousePromotionQueue();
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 1000LL) = 0;
      }
    }
    if ( *(_DWORD *)(v44 + 8) == 583
      && (*(_WORD *)(v44 + 18) & 0x2000) != 0
      && word_1C032C490
      && word_1C032C490 == *(_WORD *)(v44 + 16)
      && qword_1C032C498 == gptiCurrent )
    {
      *(_DWORD *)(gptiCurrent + 1000LL) = dword_1C032C494;
    }
    v105 = 0;
    v106 = *(_DWORD *)(v44 + 8);
    if ( ((unsigned int)(v106 - 577) <= 3 || (unsigned int)(v106 - 581) <= 0x12 && v106 != 589) && v106 != 595 )
      v105 = *(_WORD *)(v44 + 16);
    if ( (gdwMitConfig & 4) != 0 )
      CTouchProcessor::UpdateThreadPointerList(
        gpTouchProcessor,
        (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
        v105);
    else
      UpdateThreadPointerList((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL), v105);
    v94 = a5 & 1;
  }
  v107 = v130;
  if ( v130 )
  {
    v108 = *((_DWORD *)v130 + 25);
    if ( (v108 & 0x100) != 0 )
    {
      if ( (_DWORD)v94 && *(_QWORD *)(gptiCurrent + 1112LL) )
      {
        EtwTraceBeginDelegateInputCallback(v130, a1, v94, v98);
        v109 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1112LL), a1, *(_QWORD *)(gptiCurrent + 1120LL));
        EtwTraceEndDelegateInputCallback(v107, a1);
        *((_DWORD *)v107 + 25) &= ~0x100u;
        v110 = *((_DWORD *)v107 + 25);
        if ( (v110 & 0x80u) == 0 )
        {
          if ( (v110 & 0x20) != 0 )
            _HandleDelegatedInputWorker(gptiCurrent, v109, v130);
        }
        else
        {
          FreeQEntry(v107);
        }
        v9 = 0x20000;
        goto LABEL_51;
      }
      *((_DWORD *)v130 + 25) = v108 & 0xFFFFFEFF;
    }
  }
  v80 = !v93;
  v111 = a1;
  if ( !v80
    && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000) == 0
    && !(unsigned int)IsPTPRedirected(gptiCurrent, (struct tagMSG *)a1) )
  {
    xxxClientCallDefaultInputHandler(a1);
    goto LABEL_51;
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v9 |= 0x40000u;
LABEL_367:
    v10 = 0;
    goto LABEL_368;
  }
  if ( (a5 & 1) != 0 )
  {
    v113 = *(_QWORD *)(gptiCurrent + 944LL);
    if ( v113 )
    {
      LOBYTE(v29) = 18;
      v114 = HMValidateHandleNoRip(v113, v29);
      if ( v114 )
        FreeHidData(v114);
      *(_QWORD *)(gptiCurrent + 944LL) = 0LL;
    }
    v115 = *(_QWORD *)(gptiCurrent + 952LL);
    if ( v115 )
    {
      FreeTouchInputInfo(v115, 1LL);
      *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
    }
    v35 = *(_QWORD *)(gptiCurrent + 960LL);
    if ( v35 )
    {
      FreeGestureInfo(v35, 1LL);
      *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
    }
    v116 = *(_DWORD *)(a1 + 8);
    if ( v116 == 255 )
    {
      if ( *(_QWORD *)(a1 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 944LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( v116 == 576 && HMValidateHandle(*(_QWORD *)(a1 + 24), 20) )
    {
      *(_QWORD *)(gptiCurrent + 952LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(a1 + 24), 21) )
    {
      *(_QWORD *)(gptiCurrent + 960LL) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_368:
  if ( v129 )
    ThreadUnlock1(v35, v29);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v10 )
    {
      if ( *(_DWORD *)(v111 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 )
      {
        v120 = *(_DWORD **)(gptiCurrent + 592LL);
        if ( v120 )
        {
          if ( (v120[45] & 0x100000) != 0 )
          {
            if ( v120[78] )
            {
              v120[79] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v120[78];
              ++v120[80];
              v120[78] = 0;
            }
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1048LL) = *(_QWORD *)v111;
      *(_DWORD *)(gptiCurrent + 1056LL) = *(_DWORD *)(v111 + 8);
      *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(v111 + 16);
    }
  }
  else
  {
    v10 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, v111);
  return v10;
}

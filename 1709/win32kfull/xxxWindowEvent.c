/*
 * XREFs of xxxWindowEvent @ 0x1C006D410
 * Callers:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C0064398 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserNotifyWinEvent @ 0x1C006D390 (NtUserNotifyWinEvent.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0083CA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     zzzSetCaretPos @ 0x1C0084540 (zzzSetCaretPos.c)
 *     xxxCreateCaret @ 0x1C0084868 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00849D4 (zzzInternalDestroyCaret.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0086074 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C008CBCC (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CF790 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020FD88 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0210910 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, volatile signed __int32 *a2, __int64 a3, __int64 a4, int a5)
{
  volatile signed __int32 *v5; // r14
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *v15; // rbx
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 *v18; // rax
  unsigned int DLT; // eax
  tagObjLock *v20; // rbp
  unsigned int v21; // eax
  unsigned int v22; // eax
  tagObjLock *v23; // rbx
  int v24; // ebp
  HANDLE ThreadId; // rax
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r12
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdx
  struct tagNOTIFY **v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int CurrentThreadId; // eax
  unsigned int v39; // ebx
  __int64 v40; // rdi
  __int64 v41; // rbp
  HANDLE v42; // rax
  int v43; // eax
  _QWORD *v44; // rbx
  __int64 v45; // rax
  char v46; // al
  int v47; // eax
  struct _KTHREAD *v48; // rbx
  __int64 v49; // rdx
  __int64 *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // [rsp+20h] [rbp-C8h]
  __int64 v54; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+30h] [rbp-B8h]
  void (*v56)(void); // [rsp+38h] [rbp-B0h]
  HANDLE ThreadProcessId; // [rsp+40h] [rbp-A8h]
  __int64 v58; // [rsp+48h] [rbp-A0h]
  HANDLE v59; // [rsp+50h] [rbp-98h]
  tagObjLock *v60; // [rsp+58h] [rbp-90h]
  tagObjLock *v61; // [rsp+60h] [rbp-88h]
  tagObjLock *DomainLockRef; // [rsp+68h] [rbp-80h]
  __int128 v63; // [rsp+70h] [rbp-78h]
  __int128 v64; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v65[4]; // [rsp+90h] [rbp-58h] BYREF
  int v66; // [rsp+F0h] [rbp+8h]
  int v67; // [rsp+100h] [rbp+18h]
  int v68; // [rsp+108h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v5 = a2;
  if ( a1 - 16392 <= 0x3FFC || a1 - 32783 <= 0x7FFF7F00 )
    goto LABEL_25;
  if ( a1 == 32779 )
  {
    v8 = 64LL;
    goto LABEL_26;
  }
  if ( a1 > 0x7FFFFF12 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
      {
        v8 = 512LL;
        goto LABEL_26;
      }
      if ( a1 > 0x80000007 )
        goto LABEL_25;
    }
    else if ( a1 < 0x80000000 && a1 != 2147483424 && a1 != 2147483440 )
    {
      goto LABEL_25;
    }
LABEL_46:
    v8 = 256LL;
    goto LABEL_26;
  }
  if ( a1 >= 0x7FFFFF10 )
    goto LABEL_46;
  if ( a1 > 0x800A )
  {
    if ( a1 == 32780 )
    {
      v8 = 8LL;
      goto LABEL_26;
    }
    if ( a1 == 32782 )
    {
      v8 = 16LL;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  if ( a1 == 32778 )
  {
    v8 = 32LL;
    goto LABEL_26;
  }
  if ( a1 < 4 )
    goto LABEL_25;
  if ( a1 <= 7 )
  {
    v8 = 1LL;
    goto LABEL_26;
  }
  if ( a1 <= 0x4000 )
    goto LABEL_25;
  if ( a1 <= 0x4007 )
  {
    v8 = 2LL;
    goto LABEL_26;
  }
  if ( a1 != 32773 )
  {
LABEL_25:
    v8 = 0x8000LL;
    goto LABEL_26;
  }
  v8 = 4LL;
LABEL_26:
  if ( ((unsigned int)v8 & *(_DWORD *)(gpsi + 1876LL)) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(gpsi, v8, a3, a4) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v15 = KeGetCurrentThread();
          v16 = 0LL;
          v17 = 0LL;
          v53 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13, v14) )
          {
            v18 = (__int64 *)PsGetThreadWin32Thread(v15);
            if ( v18 )
            {
              v17 = *v18;
              v53 = *v18;
            }
          }
          DLT = DLT_THREADINFO::getDLT();
          v20 = (tagObjLock *)(v17 + 368);
          DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
          v61 = (tagObjLock *)(v17 + 368);
          v21 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v21);
          tagObjLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v17 + 368));
          v22 = DLT_WINEVENT::getDLT();
          v60 = (tagObjLock *)GetDomainLockRef(v22);
          v23 = v60;
          tagObjLock::LockExclusive(v60);
          if ( (a5 & 0x11) == 0x11 || !v5 || *((char *)v5 + 59) >= 0 )
          {
            v24 = a5 | 2;
            if ( (*(_DWORD *)(v17 + 464) & 0x10000001) == 0 )
              v24 = a5;
            v66 = v24;
            if ( (v24 & 1) != 0 )
            {
              if ( v5 )
              {
                v17 = *((_QWORD *)v5 + 2);
                v5 = 0LL;
                if ( (v24 & 0x10) == 0 )
                  v5 = a2;
              }
            }
            ThreadId = PsGetThreadId(*(PETHREAD *)v17);
            v26 = *(struct _KTHREAD **)v17;
            v59 = ThreadId;
            v58 = *(_QWORD *)(v17 + 400);
            ThreadProcessId = PsGetThreadProcessId(v26);
            if ( (v24 & 0x20) != 0 )
              LODWORD(v30) = _InterlockedIncrement(&gcWinEvents);
            else
              v30 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v65[0] = *(_QWORD *)(v53 + 392);
            *(_QWORD *)(v53 + 392) = v65;
            v65[1] = v5;
            if ( v5 )
              _InterlockedIncrement(v5 + 2);
            v31 = KeGetCurrentThread();
            v32 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v53, v27, v28, v29) )
            {
              v33 = (__int64 *)PsGetThreadWin32Thread(v31);
              if ( v33 )
                v32 = *v33;
            }
            v54 = *(_QWORD *)(v32 + 16);
            *(_QWORD *)(v32 + 16) = &v54;
            v56 = (void (*)(void))DereferenceW32Thread;
            v55 = v17;
            ObfReferenceObject(*(PVOID *)v17);
            _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
            if ( (v24 & 2) == 0 )
            {
              CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
              v35 = gpPendingNotifies;
              v39 = CurrentThreadId;
              while ( v35 )
              {
                v34 = *((unsigned int *)v35 + 12);
                if ( (v34 & 2) != 0 && *((_DWORD *)v35 + 10) == v39 )
                {
                  *((_DWORD *)v35 + 12) = v34 & 0xFFFFFFFD;
                  ((void (*)(void))xxxProcessNotifyWinEvent)();
                  v35 = gpPendingNotifies;
                }
                else
                {
                  v35 = (struct tagNOTIFY **)*v35;
                }
              }
            }
            v40 = gpWinEventHooks;
            if ( gpWinEventHooks )
            {
              do
              {
                v35 = (struct tagNOTIFY **)*(unsigned int *)(v40 + 40);
                v41 = *(_QWORD *)(v40 + 24);
                if ( ((unsigned __int8)v35 & 1) == 0 && *(_DWORD *)(v40 + 32) <= a1 && a1 <= *(_DWORD *)(v40 + 36) )
                {
                  v42 = *(HANDLE *)(v40 + 48);
                  if ( !v42 || v42 == ThreadProcessId )
                  {
                    if ( ((unsigned __int8)v35 & 4) == 0
                      || (v34 = v58, v58 != *(_QWORD *)(*(_QWORD *)(v40 + 16) + 400LL)) )
                    {
                      v43 = *(_DWORD *)(v40 + 56);
                      if ( (!v43 || v43 == (_DWORD)v59)
                        && (((unsigned __int8)v35 & 2) == 0 || v17 != *(_QWORD *)(v40 + 16)) )
                      {
                        v35 = *(struct tagNOTIFY ***)(*(_QWORD *)(v40 + 16) + 432LL);
                        if ( v35 == *(struct tagNOTIFY ***)(v53 + 432)
                          || a1 == 32
                          || v35 == *(struct tagNOTIFY ***)(v17 + 432) && a1 + 2147483646 <= 1 )
                        {
                          v35 = (struct tagNOTIFY **)*(unsigned __int8 *)(LODWORD(gSharedInfo[2])
                                                                        * (unsigned int)(unsigned __int16)*(_DWORD *)v40
                                                                        + gSharedInfo[1]
                                                                        + 25LL);
                          if ( ((unsigned __int8)v35 & 1) != 0 )
                            break;
                          if ( dword_1C0327620 )
                          {
                            v44 = (_QWORD *)Win32AllocPool(64LL, 2037281621LL);
                            if ( !v44 )
                              break;
                          }
                          else
                          {
                            dword_1C0327620 = 1;
                            v44 = &unk_1C032B7D0;
                          }
                          *((_QWORD *)&v63 + 1) = v40;
                          v44[1] = 0LL;
                          *(_QWORD *)&v63 = v44 + 1;
                          v64 = v63;
                          HMAssignmentLock(&v64);
                          v45 = 0LL;
                          if ( v5 )
                            v45 = *(_QWORD *)v5;
                          v44[3] = v45;
                          *((_DWORD *)v44 + 8) = v67;
                          *((_DWORD *)v44 + 9) = v68;
                          *((_DWORD *)v44 + 4) = a1;
                          *((_DWORD *)v44 + 10) = (unsigned int)PsGetThreadId(*(PETHREAD *)v17);
                          *((_DWORD *)v44 + 11) = v30;
                          v46 = ~(unsigned __int8)(*(_DWORD *)(v40 + 40) >> 1);
                          *v44 = 0LL;
                          v44[7] = 0LL;
                          *((_DWORD *)v44 + 12) = v46 & 4;
                          if ( (*(_DWORD *)(v40 + 40) & 8) != 0 && a1 + 2147483646 <= 3 )
                          {
                            v35 = (struct tagNOTIFY **)gptiCurrent;
                            if ( *(_QWORD *)(v40 + 16) != gptiCurrent )
                              *((_DWORD *)v44 + 12) |= 4u;
                          }
                          if ( gpPendingNotifies )
                            *(_QWORD *)gpLastPendingNotify = v44;
                          else
                            gpPendingNotifies = (struct tagNOTIFY **)v44;
                          *((_DWORD *)v44 + 12) |= v66;
                          v47 = *((_DWORD *)v44 + 12);
                          gpLastPendingNotify = (__int64)v44;
                          if ( (v47 & 4) != 0 )
                            *((_DWORD *)v44 + 12) = v47 & 0xFFFFFFFD;
                          if ( (v44[6] & 2) == 0 )
                            v41 = xxxProcessNotifyWinEvent(v44);
                        }
                      }
                    }
                  }
                }
                v40 = v41;
              }
              while ( v41 );
            }
            v48 = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v34, v36, v37) )
            {
              v50 = (__int64 *)PsGetThreadWin32Thread(v48);
              if ( v50 )
                v16 = *v50;
            }
            *(_QWORD *)(v16 + 16) = v54;
            v51 = v55;
            if ( v55 )
              v56();
            ThreadUnlock1(v51, v49);
            v23 = v60;
            v20 = v61;
          }
          tagObjLock::UnLock(v23);
          v52 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v52);
          tagObjLock::UnLock(v20);
          tagObjLock::UnLock(DomainLockRef);
        }
      }
    }
  }
}

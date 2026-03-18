/*
 * XREFs of xxxWindowEvent @ 0x1C005A820
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C001BEF8 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     zzzInternalShowCaret @ 0x1C00385D8 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C005C4F0 (NtUserNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     zzzSetCaretPos @ 0x1C00AFE70 (zzzSetCaretPos.c)
 *     xxxCreateCaret @ 0x1C00B0198 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00B031C (zzzInternalDestroyCaret.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00B5E38 (zzzInputFocusReceivedWindowEvent.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00B78BC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetScrollBar @ 0x1C00D6A78 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D708C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020E3CC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020E55C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C020E870 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C020EA64 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWindowEvent(unsigned int a1, __int64 *a2, int a3, int a4, int a5)
{
  __int64 *v5; // r15
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // r13
  __int64 v13; // r12
  HANDLE ThreadId; // rax
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int CurrentThreadId; // eax
  struct tagNOTIFY **v19; // rcx
  unsigned int v20; // ebx
  int v21; // edx
  __int64 v22; // rbx
  int v23; // ecx
  __int64 v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  HANDLE v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // r14
  __int64 v32; // rax
  char v33; // al
  int v34; // eax
  unsigned __int64 v35; // [rsp+20h] [rbp-B8h]
  __int64 v36; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-A0h]
  void (*v38)(void); // [rsp+40h] [rbp-98h]
  HANDLE ThreadProcessId; // [rsp+48h] [rbp-90h]
  __int64 v40; // [rsp+50h] [rbp-88h]
  HANDLE v41; // [rsp+58h] [rbp-80h]
  __int128 v42; // [rsp+60h] [rbp-78h]
  __int128 v43; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v44[4]; // [rsp+80h] [rbp-58h] BYREF

  v5 = a2;
  if ( a1 < 0x8005 && a1 >= 0x4008 || a1 >= 0x800F && a1 < 0x7FFFFF10 )
    goto LABEL_14;
  if ( a1 == 32779 )
  {
    v8 = 64;
    goto LABEL_15;
  }
  if ( a1 > 0x7FFFFF12 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
      {
        v8 = 512;
        goto LABEL_15;
      }
      if ( a1 > 0x80000007 )
        goto LABEL_14;
    }
    else if ( a1 < 0x80000000 && a1 != 2147483424 && a1 != 2147483440 )
    {
      goto LABEL_14;
    }
LABEL_90:
    v8 = 256;
    goto LABEL_15;
  }
  if ( a1 >= 0x7FFFFF10 )
    goto LABEL_90;
  if ( a1 > 0x800A )
  {
    if ( a1 == 32780 )
    {
      v8 = 8;
      goto LABEL_15;
    }
    if ( a1 == 32782 )
    {
      v8 = 16;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( a1 == 32778 )
  {
    v8 = 32;
    goto LABEL_15;
  }
  if ( a1 < 4 )
    goto LABEL_14;
  if ( a1 <= 7 )
  {
    v8 = 1;
    goto LABEL_15;
  }
  if ( a1 <= 0x4000 )
  {
LABEL_14:
    v8 = 0x8000;
    goto LABEL_15;
  }
  if ( a1 > 0x4007 )
  {
    if ( a1 == 32773 )
    {
      v8 = 4;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v8 = 2;
LABEL_15:
  result = gpsi;
  if ( (v8 & *(_DWORD *)(gpsi + 1876LL)) != 0 )
  {
    result = gptiCurrent;
    v10 = gptiCurrent;
    if ( gptiCurrent )
    {
      result = a5 & 0x11;
      if ( (_BYTE)result == 17 || !v5 || *((char *)v5 + 59) >= 0 )
      {
        v11 = a5 | 2;
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10000001) == 0 )
          v11 = a5;
        v12 = 0LL;
        if ( (v11 & 1) != 0 && v5 )
        {
          v13 = v5[2];
          v5 = 0LL;
          if ( (v11 & 0x10) == 0 )
            v5 = a2;
        }
        else
        {
          v13 = gptiCurrent;
        }
        ThreadId = PsGetThreadId(*(PETHREAD *)v13);
        v15 = *(struct _KTHREAD **)v13;
        v41 = ThreadId;
        v40 = *(_QWORD *)(v13 + 376);
        ThreadProcessId = PsGetThreadProcessId(v15);
        if ( (v11 & 0x20) != 0 )
          LODWORD(v35) = _InterlockedIncrement(&gcWinEvents);
        else
          v35 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v44[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v44;
        v44[1] = v5;
        if ( v5 )
          ++*((_DWORD *)v5 + 2);
        v16 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v16 = *ThreadWin32Thread;
        v36 = *(_QWORD *)(v16 + 16);
        *(_QWORD *)(v16 + 16) = &v36;
        v38 = (void (*)(void))DereferenceW32Thread;
        v37 = v13;
        ObfReferenceObject(*(PVOID *)v13);
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        if ( (v11 & 2) == 0 )
        {
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
          v19 = gpPendingNotifies;
          v20 = CurrentThreadId;
          while ( v19 )
          {
            v21 = *((_DWORD *)v19 + 12);
            if ( (v21 & 2) != 0 && *((_DWORD *)v19 + 10) == v20 )
            {
              *((_DWORD *)v19 + 12) = v21 & 0xFFFFFFFD;
              xxxProcessNotifyWinEvent((__int64)v19);
              v19 = gpPendingNotifies;
            }
            else
            {
              v19 = (struct tagNOTIFY **)*v19;
            }
          }
        }
        v22 = gpWinEventHooks;
        if ( gpWinEventHooks )
        {
          do
          {
            v23 = *(_DWORD *)(v22 + 40);
            v24 = *(_QWORD *)(v22 + 24);
            if ( (v23 & 1) == 0 && *(_DWORD *)(v22 + 32) <= a1 && a1 <= *(_DWORD *)(v22 + 36) )
            {
              v28 = *(HANDLE *)(v22 + 48);
              if ( (!v28 || v28 == ThreadProcessId)
                && ((v23 & 4) == 0 || v40 != *(_QWORD *)(*(_QWORD *)(v22 + 16) + 376LL)) )
              {
                v29 = *(_DWORD *)(v22 + 56);
                if ( (!v29 || v29 == (_DWORD)v41) && ((v23 & 2) == 0 || v13 != *(_QWORD *)(v22 + 16)) )
                {
                  v30 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 408LL);
                  if ( v30 == *(_QWORD *)(v10 + 408)
                    || a1 == 32
                    || v30 == *(_QWORD *)(v13 + 408) && a1 + 2147483646 <= 1 )
                  {
                    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v22
                                   + gSharedInfo[1]
                                   + 25LL) & 1) != 0 )
                      break;
                    if ( dword_1C032C3A0 )
                    {
                      v31 = (_QWORD *)Win32AllocPool(64LL, 2037281621LL);
                      if ( !v31 )
                        break;
                    }
                    else
                    {
                      dword_1C032C3A0 = 1;
                      v31 = &unk_1C0330310;
                    }
                    *((_QWORD *)&v42 + 1) = v22;
                    v31[1] = 0LL;
                    *(_QWORD *)&v42 = v31 + 1;
                    v43 = v42;
                    HMAssignmentLock(&v43);
                    if ( v5 )
                      v32 = *v5;
                    else
                      v32 = 0LL;
                    v31[3] = v32;
                    *((_DWORD *)v31 + 8) = a3;
                    *((_DWORD *)v31 + 9) = a4;
                    *((_DWORD *)v31 + 4) = a1;
                    *((_DWORD *)v31 + 10) = (unsigned int)PsGetThreadId(*(PETHREAD *)v13);
                    *((_DWORD *)v31 + 11) = v35;
                    v33 = ~(unsigned __int8)(*(_DWORD *)(v22 + 40) >> 1);
                    *v31 = 0LL;
                    v31[7] = 0LL;
                    *((_DWORD *)v31 + 12) = v33 & 4;
                    if ( (*(_DWORD *)(v22 + 40) & 8) != 0
                      && a1 + 2147483646 <= 3
                      && *(_QWORD *)(v22 + 16) != gptiCurrent )
                    {
                      *((_DWORD *)v31 + 12) |= 4u;
                    }
                    if ( gpPendingNotifies )
                      *(_QWORD *)gpLastPendingNotify = v31;
                    else
                      gpPendingNotifies = (struct tagNOTIFY **)v31;
                    *((_DWORD *)v31 + 12) |= v11;
                    v34 = *((_DWORD *)v31 + 12);
                    gpLastPendingNotify = (__int64)v31;
                    if ( (v34 & 4) != 0 )
                      *((_DWORD *)v31 + 12) = v34 & 0xFFFFFFFD;
                    if ( (v31[6] & 2) == 0 )
                      v24 = xxxProcessNotifyWinEvent((__int64)v31);
                    v10 = gptiCurrent;
                  }
                }
              }
            }
            v22 = v24;
          }
          while ( v24 );
        }
        v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v25 )
          v12 = *v25;
        *(_QWORD *)(v12 + 16) = v36;
        v27 = v37;
        if ( v37 )
          v38();
        return ThreadUnlock1(v27, v26);
      }
    }
  }
  return result;
}

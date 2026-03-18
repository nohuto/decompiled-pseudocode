/*
 * XREFs of xxxProcessEventMessage @ 0x1C00CFAB0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0049A34 (WPUpdateCheckPointSettings.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C005125C (ProcessUpdateKeyStateEvent.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSendNCActivateMessage @ 0x1C0054FF8 (xxxSendNCActivateMessage.c)
 *     xxxUpdateTray @ 0x1C0055370 (xxxUpdateTray.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 *     xxxResetTooltip @ 0x1C0084370 (xxxResetTooltip.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0084CFC (xxxEndGetWidnowTrackInfoAsync.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0085944 (xxxApplyGlobalInputSettings.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0086074 (zzzInputFocusReceivedWindowEvent.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C0093D64 (RtlInitLargeUnicodeString.c)
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxCancelTracking @ 0x1C00CB4A0 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00CC280 (xxxProcessSetWindowPosEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     GetMouseKeyFlags @ 0x1C00CF764 (GetMouseKeyFlags.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E0DF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C01142DC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0118C70 (xxxClientBroadcastThemeChange.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     xxxSendShutdownData @ 0x1C0141AF4 (xxxSendShutdownData.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01C0BE0 (PostMousePointerLeaveAndCleanup.c)
 *     zzzActiveCursorTracking @ 0x1C01C1368 (zzzActiveCursorTracking.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01CEB1C (xxxDoDeferredPointerActivate.c)
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     xxxClientUpdateDpi @ 0x1C0202DA4 (xxxClientUpdateDpi.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r15
  __int64 v4; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *ThreadWin32Thread; // rax
  int v11; // ecx
  ULONG_PTR *v12; // r13
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // r14d
  unsigned int v31; // r8d
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // ecx
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rsi
  tagObjLock *v38; // rdi
  unsigned int v39; // eax
  unsigned int v40; // eax
  tagObjLock *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // r10
  int v48; // eax
  struct tagTOOLTIPWND *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  struct tagTOOLTIPWND *v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rsi
  int v56; // r8d
  unsigned int v57; // edx
  struct tagWND *v58; // rcx
  unsigned __int64 v59; // rbx
  struct _KTHREAD *v60; // rdi
  int v61; // r8d
  unsigned __int64 v62; // rbx
  char *v63; // rsi
  __int64 v64; // r13
  ULONG_PTR v65; // rbx
  struct _KTHREAD *v66; // r13
  __int64 v67; // rsi
  __int64 *v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rax
  unsigned __int16 v71; // di
  __int64 v72; // rax
  __int64 v73; // r8
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  __int64 v77; // rax
  int v78; // esi
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // r9
  struct tagWND *v83; // r10
  __int64 v84; // rax
  ULONG_PTR v85; // r11
  __int64 v86; // rcx
  unsigned __int64 MouseKeyFlags; // rdx
  unsigned __int16 v88; // ax
  ULONG_PTR v89; // r11
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // eax
  unsigned int v95; // edi
  unsigned int v96; // ebx
  __int64 v97; // rdx
  __int64 v98; // r8
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rbx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  struct _KTHREAD *v108; // rbx
  __int64 *v109; // rax
  __int64 result; // rax
  __int64 v111; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v112; // [rsp+48h] [rbp-B8h]
  __int64 v113; // [rsp+58h] [rbp-A8h]
  _BYTE v114[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v115[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v116[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v117[4]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD v118[264]; // [rsp+C0h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v115[0] = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v115;
  v11 = *(_DWORD *)(a2 + 96);
  v12 = *(ULONG_PTR **)(a1 + 408);
  v115[2] = CleanEventMessage;
  v115[1] = a2;
  if ( v11 > 13 )
  {
    if ( v11 > 20 )
    {
      v99 = v11 - 21;
      if ( !v99 )
      {
        LOBYTE(v7) = 1;
        v102 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), (__int64)v7, v8, v9);
        LOBYTE(v103) = 1;
        v104 = v102;
        v107 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v103, v105, v106);
        PostMousePointerLeaveAndCleanup(v104, v107);
        goto LABEL_162;
      }
      v100 = v99 - 1;
      if ( !v100 )
      {
        xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
        goto LABEL_162;
      }
      v101 = v100 - 1;
      if ( v101 )
      {
        v17 = (unsigned int)(v101 - 1);
        if ( (_DWORD)v17 )
        {
          if ( (_DWORD)v17 == 1 )
            xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        }
        else
        {
          xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        }
        goto LABEL_162;
      }
      LOBYTE(v7) = 1;
      v84 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
      if ( !v84 )
        goto LABEL_162;
      v111 = *(_QWORD *)(a1 + 392);
      *(_QWORD *)(a1 + 392) = &v111;
      v112 = v84;
      _InterlockedAdd((volatile signed __int32 *)(v84 + 8), 1u);
      v56 = *(_DWORD *)(a2 + 40);
      v57 = *(_DWORD *)(a2 + 32);
    }
    else
    {
      if ( v11 == 20 )
      {
        xxxDoDeferredPointerActivate(a2);
        CleanEventMessage((struct tagQMSG *)a2, v97, v98);
        goto LABEL_162;
      }
      v74 = v11 - 14;
      if ( !v74 )
      {
        v94 = *(_DWORD *)(a2 + 24);
        if ( v94 == 5 )
        {
          v95 = *(_DWORD *)(a2 + 40);
          v94 = *(_DWORD *)(a2 + 32);
          if ( v95 > 5 )
            v95 = 5;
        }
        else
        {
          v95 = 1;
        }
        if ( v95 )
        {
          v96 = (unsigned __int16)v94 | 0x10000;
          do
          {
            CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v96);
            --v95;
          }
          while ( v95 );
        }
        xxxSoundSentry();
        goto LABEL_162;
      }
      v17 = (unsigned int)(v74 - 1);
      if ( !(_DWORD)v17 )
      {
        v85 = v12[14];
        if ( v85 || (v85 = v12[15]) != 0 )
        {
          v86 = *(_QWORD *)(v85 + 16);
          if ( a1 == v86 )
          {
            MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(unsigned __int8 **)(v86 + 408));
            v88 = *(_WORD *)(a2 + 40) - 165;
            v112 = v89;
            v90 = (v88 << 16) | MouseKeyFlags;
            v91 = *(_QWORD *)(a2 + 120);
            *(_QWORD *)(a2 + 40) = v90;
            *(_DWORD *)(a1 + 1184) |= 0x800u;
            *(_QWORD *)(a1 + 1188) = v91;
            v111 = *(_QWORD *)(a1 + 392);
            *(_QWORD *)(a1 + 392) = &v111;
            _InterlockedAdd((volatile signed __int32 *)(v89 + 8), 1u);
            xxxSendMessage(v89);
            ThreadUnlock1(v93, v92);
            *(_DWORD *)(a1 + 1184) &= ~0x800u;
          }
          else
          {
            PostEventMessageEx(
              (struct tagTHREADINFO *)v86,
              *(_QWORD *)(v86 + 408),
              0xFu,
              0LL,
              0,
              0LL,
              *(_QWORD *)(a2 + 40),
              a2 + 120);
          }
        }
        goto LABEL_162;
      }
      v75 = v17 - 1;
      if ( v75 )
      {
        v76 = v75 - 1;
        if ( v76 )
        {
          v17 = (unsigned int)(v76 - 1);
          if ( (_DWORD)v17 )
          {
            if ( (_DWORD)v17 == 1 )
            {
              if ( *(_DWORD *)(a2 + 24) == 809 )
                PostThreadMessage(a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
              else
                xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
            }
          }
          else if ( gpqForeground )
          {
            v77 = *(_QWORD *)(gpqForeground + 112LL);
            if ( v77 )
            {
              if ( *(_QWORD *)(v77 + 16) == a1 )
              {
                v17 = HIDWORD(gpdwCPUserPreferencesMask);
                if ( (v17 & 0x80u) == 0LL )
                  xxxApplyGlobalInputSettings();
              }
            }
          }
        }
        else
        {
          v78 = *(_DWORD *)(a2 + 32);
          LOBYTE(v7) = 1;
          v79 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
          if ( v79 )
          {
            v81 = *(_QWORD *)(a1 + 392);
            v111 = v81;
            *(_QWORD *)(a1 + 392) = &v111;
            v112 = v79;
            _InterlockedAdd((volatile signed __int32 *)(v79 + 8), 1u);
            if ( v78 )
            {
              if ( v78 == 1 )
              {
                IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
                xxxEndSetWindowArrangement(v83, (struct tagRECT *)(v82 + 4));
              }
            }
            else
            {
              xxxArrangeWindow(v79, *(unsigned int *)(a2 + 40));
            }
            ThreadUnlock1(v81, v7);
          }
          if ( v78 == 1 )
            Win32FreePool(*(_QWORD *)(a2 + 40), v7, v80);
        }
        goto LABEL_162;
      }
      LOBYTE(v7) = 1;
      v84 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
      if ( !v84 || (*(_BYTE *)(v84 + 71) & 1) == 0 )
        goto LABEL_162;
      v111 = *(_QWORD *)(a1 + 392);
      *(_QWORD *)(a1 + 392) = &v111;
      v112 = v84;
      _InterlockedAdd((volatile signed __int32 *)(v84 + 8), 1u);
      v57 = 3;
      v56 = 3;
    }
    v58 = (struct tagWND *)v84;
    goto LABEL_74;
  }
  if ( v11 == 13 )
  {
    if ( ((*(_DWORD *)(a1 + 656) | *(_DWORD *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x800) != 0 )
      xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 0xAu);
    PostShellHookMessagesEx(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
    goto LABEL_162;
  }
  if ( v11 > 7 )
  {
    v33 = v11 - 8;
    if ( !v33 )
    {
      LOBYTE(v7) = 1;
      v72 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), (__int64)v7, v8, v9);
      v17 = v72;
      if ( v72 )
      {
        if ( *(char *)(v72 + 59) < 0 )
        {
          v111 = *(_QWORD *)(a1 + 392);
          *(_QWORD *)(a1 + 392) = &v111;
          v112 = v72;
          _InterlockedAdd((volatile signed __int32 *)(v72 + 8), 1u);
          xxxFreeWindow((struct tagWND *)v72, (struct tagSwitchWndInfo *)&v111, v73);
        }
        else
        {
          xxxDestroyWindow((volatile signed __int32 *)v72, (__int64)v7, v73);
        }
      }
      goto LABEL_162;
    }
    v34 = (unsigned int)(v33 - 1);
    if ( !(_DWORD)v34 )
    {
      v59 = *(_QWORD *)(a2 + 16);
      v60 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v34, (_DWORD)v7) )
        PsGetThreadWin32Thread(v60);
      v61 = (unsigned __int16)v59;
      v17 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v59 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_162;
      v62 = v59 >> 16;
      v7 = (_QWORD *)gSharedInfo[1];
      v63 = (char *)v7 + (unsigned int)(v61 * LODWORD(gSharedInfo[2]));
      v64 = 3 * ((__int64)(unsigned int)(v61 * LODWORD(gSharedInfo[2])) >> 5);
      v17 = gpKernelHandleTable;
      v113 = gpKernelHandleTable;
      if ( (_WORD)v62 != *((_WORD *)v63 + 13) && (_WORD)v62 != 0xFFFF )
      {
        if ( (_WORD)v62 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable) )
          goto LABEL_162;
        v17 = v113;
      }
      if ( (v63[25] & 1) != 0 )
        goto LABEL_162;
      if ( v63[24] != 1 )
        goto LABEL_162;
      v65 = *(_QWORD *)(v17 + 8 * v64);
      if ( !v65 )
        goto LABEL_162;
      v66 = KeGetCurrentThread();
      v67 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v17, (_DWORD)v7) )
      {
        v68 = (__int64 *)PsGetThreadWin32Thread(v66);
        if ( v68 )
          v67 = *v68;
      }
      v117[0] = *(_QWORD *)(v67 + 392);
      *(_QWORD *)(v67 + 392) = v117;
      v117[1] = v65;
      _InterlockedAdd((volatile signed __int32 *)(v65 + 8), 1u);
      v69 = *(_DWORD *)(a2 + 24);
      if ( v69 >= 0x1A )
      {
        if ( v69 <= 0x1B )
        {
          v70 = *(_QWORD *)(a2 + 40);
          if ( v70 )
          {
            if ( v70 == -1 )
            {
              v118[0] = 0;
              RtlInitLargeUnicodeString((__int64)v114, (__int64)v118);
              *(_QWORD *)(a2 + 40) = v114;
            }
            else
            {
              v71 = *(_WORD *)(a2 + 40);
              if ( (unsigned int)UserGetAtomName(v71, v118, 260LL) )
              {
                RtlInitLargeUnicodeString((__int64)v114, (__int64)v118);
                *(_QWORD *)(a2 + 40) = v114;
              }
              else
              {
                *(_QWORD *)(a2 + 40) = 0LL;
              }
              UserDeleteAtom(v71);
            }
          }
          *(_QWORD *)(a2 + 40) = 0LL;
        }
        else if ( v69 == 834 )
        {
          xxxEndGetWidnowTrackInfoAsync((struct tagWND *)v65);
          goto LABEL_49;
        }
      }
      xxxSendMessage(v65);
      goto LABEL_49;
    }
    v35 = v34 - 1;
    if ( v35 )
    {
      v17 = (unsigned int)(v35 - 1);
      if ( (_DWORD)v17 )
      {
        if ( (_DWORD)v17 == 1 )
        {
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
          v38 = (tagObjLock *)(a1 + 368);
          v39 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v39);
          tagObjLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(a1 + 368));
          v40 = DLT_WINEVENT::getDLT();
          v41 = (tagObjLock *)GetDomainLockRef(v40);
          tagObjLock::LockExclusive(v41);
          xxxProcessNotifyWinEvent(*(_QWORD *)(a2 + 40), v42, v43, v44);
          tagObjLock::UnLock(v41);
          v45 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v45);
          tagObjLock::UnLock(v38);
          tagObjLock::UnLock(DomainLockRef);
        }
        goto LABEL_162;
      }
      v46 = *(_QWORD *)(a1 + 432);
      LOBYTE(v7) = 1;
      v47 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
      v48 = *(_DWORD *)(v46 + 48);
      if ( (v48 & 0x5C0) != 0 )
      {
        v7 = *(_QWORD **)(v46 + 184);
        v17 = *(_QWORD *)(a2 + 16);
        if ( *v7 == v17 )
        {
          v17 = *(unsigned int *)(a2 + 32);
          if ( *(_DWORD *)(v46 + 192) == (_DWORD)v17 )
            goto LABEL_162;
        }
      }
      if ( (v48 & 0x100) != 0 )
        *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
      if ( v47 )
      {
        v111 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)(a1 + 392) = &v111;
        v112 = v47;
        _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
        xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v47, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
          goto LABEL_162;
        if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
          goto LABEL_162;
        v49 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v46 + 112));
        v52 = v49;
        if ( !v49 )
          goto LABEL_162;
        v53 = *(_QWORD *)v49;
        if ( !*(_QWORD *)v49 )
          goto LABEL_162;
        v54 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v7, v50, v51);
        v116[0] = *(_QWORD *)(v54 + 392);
        *(_QWORD *)(v54 + 392) = v116;
        v116[1] = v53;
        _InterlockedAdd((volatile signed __int32 *)(v53 + 8), 1u);
        xxxResetTooltip(v52);
      }
LABEL_49:
      ThreadUnlock1(v20, v7);
      goto LABEL_162;
    }
    LOBYTE(v7) = 1;
    v55 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
    if ( !v55 )
      goto LABEL_162;
    v20 = *(_QWORD *)(a1 + 392);
    v111 = v20;
    *(_QWORD *)(a1 + 392) = &v111;
    v112 = v55;
    _InterlockedAdd((volatile signed __int32 *)(v55 + 8), 1u);
    if ( (*(_BYTE *)(v55 + 71) & 0x10) != 0 )
      goto LABEL_49;
    SetVisible((struct tagWND *)v55, 1);
    if ( (*(_BYTE *)(v55 + 71) & 0x20) != 0 )
      goto LABEL_49;
    v56 = 1;
    v57 = 7;
    v58 = (struct tagWND *)v55;
LABEL_74:
    xxxMinMaximizeEx(v58, v57, v56, 0LL, 0LL);
    goto LABEL_49;
  }
  if ( v11 == 7 )
  {
    LOBYTE(v7) = 1;
    v32 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
    if ( v32 )
      PostTransformableMessage(
        v32,
        *(unsigned int *)(a2 + 24),
        *(_QWORD *)(a2 + 32),
        *(struct _LARGE_STRING **)(a2 + 40),
        1);
  }
  else
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = (unsigned int)(v16 - 1);
            if ( (_DWORD)v17 )
            {
              if ( (_DWORD)v17 == 1 )
              {
                v18 = *(_QWORD *)(a2 + 40);
                if ( v18 )
                {
                  LOBYTE(v7) = 1;
                  v22 = HMValidateHandleNoSecure(v18, (__int64)v7, v8, v9);
                  if ( v22 )
                  {
                    v111 = *(_QWORD *)(a1 + 392);
                    *(_QWORD *)(a1 + 392) = &v111;
                    v112 = v22;
                    _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
                    if ( gpqForeground )
                    {
                      if ( v22 == v12[15] )
                      {
                        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 408LL);
                        xxxSendNCActivateMessage((struct tagWND *)v22, v23 == gpqForeground, 0LL);
                        if ( v23 == gpqForeground )
                        {
                          xxxUpdateTray((struct tagWND *)v22);
                          if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
                            xxxSetWindowPos((struct tagWND *)v22, 0LL, 0LL, 0LL, 0, 0, 3);
                        }
                      }
                      else if ( (unsigned int)xxxActivateThisWindow(
                                                (struct tagWND *)v22,
                                                *(_DWORD *)(a2 + 32),
                                                (4 * (*(_BYTE *)(a2 + 24) & 2)) | 6u,
                                                *(_DWORD *)(a2 + 72)) )
                      {
                        v20 = (unsigned int)gpdwCPUserPreferencesMask;
                        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
                          zzzActiveCursorTracking((struct tagWND *)v22);
                      }
                    }
                    else
                    {
                      xxxSetForegroundWindow2((LARGE_INTEGER *)v22, a1, 0, *(_DWORD *)(a2 + 72));
                    }
                    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 && (*(_BYTE *)(v22 + 71) & 0x20) != 0 )
                      PostMessage(v22, 274LL, 0xF120uLL, 0LL);
                    goto LABEL_49;
                  }
                }
                else
                {
                  xxxCancelTracking(0LL, (__int64)v7);
                  CCursorClip::ClearClip(gpCursorClip);
                  zzzLockWindowUpdate2(0LL, 1LL);
                  v7 = *(_QWORD **)(a1 + 408);
                  if ( *(_QWORD *)(a2 + 32) )
                  {
                    v19 = v7[15];
                    if ( v19 )
                    {
                      if ( v7 == (_QWORD *)gpqForeground )
                      {
                        v111 = *(_QWORD *)(a1 + 392);
                        *(_QWORD *)(a1 + 392) = &v111;
                        v112 = v19;
                        _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
                        if ( v7[14] )
                          zzzInputFocusReceivedWindowEvent(7u);
                        xxxSendNCActivateMessage((struct tagWND *)v19, 1LL, 0LL);
                        xxxUpdateTray((struct tagWND *)v19);
                        xxxSetWindowPos((struct tagWND *)v19, 0LL, 0LL, 0LL, 0, 0, 3);
                        goto LABEL_49;
                      }
                    }
                  }
                  if ( v7 != (_QWORD *)gpqForeground )
                  {
                    v21 = *(_QWORD *)(a1 + 400);
                    *(_DWORD *)(a1 + 464) &= ~0x20u;
                    *(_DWORD *)(v21 + 12) &= ~0x100u;
                  }
                }
              }
            }
            else
            {
              xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
            }
          }
          else
          {
            ProcessUpdateKeyStateEvent((__int64)v12, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          }
        }
        else
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
        }
      }
      else
      {
        v17 = v12[13];
        if ( v17 )
        {
          v111 = *(_QWORD *)(a1 + 392);
          *(_QWORD *)(a1 + 392) = &v111;
          v112 = v17;
          _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
          xxxSendMessage(v12[13]);
          ThreadUnlock1(v25, v24);
          SetWakeBit(a1, 2LL);
        }
      }
    }
    else
    {
      LOBYTE(v7) = 1;
      v26 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7, v8, v9);
      v27 = v26;
      if ( v26 && *(char *)(v26 + 60) >= 0 )
      {
        v111 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)(a1 + 392) = &v111;
        v112 = v26;
        _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
        v28 = *(_QWORD *)(a2 + 40);
        v29 = *(_QWORD *)(a2 + 32);
        v30 = *(_DWORD *)(a2 + 24);
        v31 = v28 & 0x10000;
        if ( v30 == 1 )
          v31 |= v29;
        xxxShowWindowEx((struct tagWND *)v27, v28, v31);
        if ( !v30 && (v29 & 4) != 0 && (*(_BYTE *)(v27 + 71) & 0x20) != 0 )
          WPUpdateCheckPointSettings(v27, v29);
        goto LABEL_49;
      }
    }
  }
LABEL_162:
  v108 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v17, (_DWORD)v7) )
  {
    v109 = (__int64 *)PsGetThreadWin32Thread(v108);
    if ( v109 )
      v3 = *v109;
  }
  result = v115[0];
  *(_QWORD *)(v3 + 16) = v115[0];
  return result;
}

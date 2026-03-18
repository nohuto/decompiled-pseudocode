/*
 * XREFs of xxxProcessEventMessage @ 0x1C00CD334
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSendNCActivateMessage @ 0x1C0019BA8 (xxxSendNCActivateMessage.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxResetTooltip @ 0x1C00AFC70 (xxxResetTooltip.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00B5774 (xxxApplyGlobalInputSettings.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00B5E38 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00B6D04 (xxxCancelTracking.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C00B94E0 (ProcessUpdateKeyStateEvent.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C69FC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     GetMouseKeyFlags @ 0x1C00CCDF4 (GetMouseKeyFlags.c)
 *     xxxProcessAsyncSendMessage @ 0x1C00CD168 (xxxProcessAsyncSendMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00DA5D4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     WPUpdateCheckPointSettings @ 0x1C0101708 (WPUpdateCheckPointSettings.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0108150 (xxxProcessSetWindowPosEvent.c)
 *     xxxClientBroadcastThemeChange @ 0x1C010F7C8 (xxxClientBroadcastThemeChange.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     xxxSendShutdownData @ 0x1C013AE48 (xxxSendShutdownData.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01BCC40 (PostMousePointerLeaveAndCleanup.c)
 *     zzzActiveCursorTracking @ 0x1C01BD448 (zzzActiveCursorTracking.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01CA6DC (xxxDoDeferredPointerActivate.c)
 *     xxxArrangeWindow @ 0x1C01F62C4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     xxxClientUpdateDpi @ 0x1C02014A4 (xxxClientUpdateDpi.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _QWORD *v9; // r13
  int v10; // ecx
  int v11; // ecx
  __int64 *v12; // rax
  __int64 result; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r10
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  int v44; // edi
  unsigned int v45; // r8d
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  struct tagTOOLTIPWND *v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdi
  struct tagWND *v60; // rcx
  int v61; // r15d
  __int64 v62; // rdx
  __int64 v63; // r10
  __int64 v64; // rcx
  __int64 v65; // r9
  struct tagWND *v66; // r10
  __int64 v67; // rax
  __int64 v68; // r11
  __int64 v69; // rcx
  __int64 MouseKeyFlags; // rdx
  unsigned __int16 v71; // ax
  __int64 v72; // r11
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // esi
  unsigned int v79; // ebx
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // [rsp+48h] [rbp-19h] BYREF
  __int64 v83; // [rsp+50h] [rbp-11h]
  _QWORD v84[3]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v85[4]; // [rsp+78h] [rbp+17h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v84[0] = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v84;
  v8 = *(_DWORD *)(a2 + 96);
  v9 = *(_QWORD **)(a1 + 384);
  v84[2] = CleanEventMessage;
  v84[1] = a2;
  if ( v8 > 13 )
  {
    if ( v8 <= 20 )
    {
      if ( v8 == 20 )
      {
        xxxDoDeferredPointerActivate(a2);
        CleanEventMessage((struct tagQMSG *)a2);
        goto LABEL_9;
      }
      v27 = v8 - 14;
      if ( !v27 )
      {
        v77 = *(_DWORD *)(a2 + 24);
        if ( v77 == 5 )
        {
          v78 = *(_DWORD *)(a2 + 40);
          v77 = *(_DWORD *)(a2 + 32);
          if ( v78 > 5 )
            v78 = 5;
        }
        else
        {
          v78 = 1;
        }
        if ( v78 )
        {
          v79 = (unsigned __int16)v77 | 0x10000;
          do
          {
            CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v79);
            --v78;
          }
          while ( v78 );
        }
        xxxSoundSentry();
        goto LABEL_9;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        v68 = v9[10];
        if ( v68 || (v68 = v9[11]) != 0 )
        {
          v69 = *(_QWORD *)(v68 + 16);
          if ( a1 == v69 )
          {
            MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(unsigned __int8 **)(v69 + 384));
            v71 = *(_WORD *)(a2 + 40) - 165;
            v83 = v72;
            v73 = v71;
            v74 = *(_QWORD *)(a2 + 120);
            *(_QWORD *)(a2 + 40) = (v73 << 16) | MouseKeyFlags;
            *(_DWORD *)(a1 + 1096) |= 0x800u;
            *(_QWORD *)(a1 + 1100) = v74;
            v82 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v82;
            ++*(_DWORD *)(v72 + 8);
            xxxSendMessage(v72, 793, *(_QWORD *)v72, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v76, v75);
            *(_DWORD *)(a1 + 1096) &= ~0x800u;
          }
          else
          {
            PostEventMessageEx(v69, *(_QWORD *)(v69 + 384), 0xFu, 0LL, 0, 0LL, *(_QWORD *)(a2 + 40), a2 + 120);
          }
        }
        goto LABEL_9;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 == 1 )
            {
              if ( *(_DWORD *)(a2 + 24) == 809 )
                PostThreadMessage(a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
              else
                xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
            }
          }
          else if ( gpqForeground )
          {
            v32 = *(_QWORD *)(gpqForeground + 80LL);
            if ( v32 )
            {
              if ( *(_QWORD *)(v32 + 16) == a1 && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
                xxxApplyGlobalInputSettings();
            }
          }
        }
        else
        {
          v61 = *(_DWORD *)(a2 + 32);
          v63 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( v63 )
          {
            v64 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v82;
            v82 = v64;
            v83 = v63;
            ++*(_DWORD *)(v63 + 8);
            if ( v61 )
            {
              if ( v61 == 1 )
              {
                IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
                xxxEndSetWindowArrangement(v66, (struct tagRECT *)(v65 + 4));
              }
            }
            else
            {
              xxxArrangeWindow(v63, *(unsigned int *)(a2 + 40));
            }
            ThreadUnlock1(v64, v62);
          }
          if ( v61 == 1 )
            Win32FreePool(*(_QWORD *)(a2 + 40));
        }
        goto LABEL_9;
      }
      v67 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v67 || (*(_BYTE *)(v67 + 71) & 1) == 0 )
        goto LABEL_9;
      v82 = *(_QWORD *)(a1 + 368);
      v83 = v67;
      *(_QWORD *)(a1 + 368) = &v82;
      ++*(_DWORD *)(v67 + 8);
    }
    else
    {
      v25 = v8 - 21;
      if ( !v25 )
      {
        v80 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
        v81 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        PostMousePointerLeaveAndCleanup(v80, v81);
        goto LABEL_9;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
        goto LABEL_9;
      }
      v36 = v26 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 == 1 )
            xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        }
        else
        {
          xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        }
        goto LABEL_9;
      }
      v67 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v67 )
        goto LABEL_9;
      v82 = *(_QWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 368) = &v82;
      v83 = v67;
      ++*(_DWORD *)(v67 + 8);
    }
    v60 = (struct tagWND *)v67;
    goto LABEL_107;
  }
  if ( v8 == 13 )
  {
    if ( ((*(_DWORD *)(a1 + 600) | *(_DWORD *)(**(_QWORD **)(a1 + 416) + 16LL)) & 0x800) != 0 )
      xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 0xAu);
    PostShellHookMessagesEx(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
  }
  else if ( v8 <= 7 )
  {
    if ( v8 == 7 )
    {
      v56 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v56 )
        PostTransformableMessage(
          v56,
          *(unsigned int *)(a2 + 24),
          *(_QWORD *)(a2 + 32),
          *(struct _LARGE_STRING **)(a2 + 40),
          1);
    }
    else
    {
      v16 = v8 - 1;
      if ( !v16 )
      {
        v39 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v40 = v39;
        if ( !v39 || *(char *)(v39 + 60) < 0 )
          goto LABEL_9;
        v41 = *(_QWORD *)(a1 + 368);
        *(_QWORD *)(a1 + 368) = &v82;
        v82 = v41;
        v83 = v39;
        ++*(_DWORD *)(v39 + 8);
        v42 = *(_QWORD *)(a2 + 40);
        v43 = *(_QWORD *)(a2 + 32);
        v44 = *(_DWORD *)(a2 + 24);
        v45 = v42 & 0x10000;
        if ( v44 == 1 )
          v45 |= v43;
        xxxShowWindowEx((struct tagWND *)v40, v42, v45);
        if ( !v44 && (v43 & 4) != 0 && (*(_BYTE *)(v40 + 71) & 0x20) != 0 )
          WPUpdateCheckPointSettings(v40, (unsigned int)v43);
        goto LABEL_31;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
          goto LABEL_9;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          ProcessUpdateKeyStateEvent((__int64)v9, *(_QWORD *)(a2 + 32), (_BYTE *)(*(_QWORD *)(a2 + 32) + 64LL));
          goto LABEL_9;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
          goto LABEL_9;
        }
        if ( v20 != 1 )
          goto LABEL_9;
        v21 = *(_QWORD *)(a2 + 40);
        if ( v21 )
        {
          v22 = HMValidateHandleNoSecure(v21, 1);
          if ( !v22 )
            goto LABEL_9;
          v82 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v82;
          v83 = v22;
          ++*(_DWORD *)(v22 + 8);
          if ( gpqForeground )
          {
            if ( v22 == v9[11] )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 384LL);
              xxxSendNCActivateMessage((struct tagWND *)v22, v38 == gpqForeground, 0LL);
              if ( v38 == gpqForeground )
              {
                xxxUpdateTray((struct tagWND *)v22);
                if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
                  xxxSetWindowPos((struct tagWND *)v22, 0LL, 0LL, 0LL, 0, 0, 3);
              }
            }
            else if ( (unsigned int)xxxActivateThisWindow(
                                      (struct tagWND *)v22,
                                      *(unsigned int *)(a2 + 32),
                                      (4 * (*(_BYTE *)(a2 + 24) & 2)) | 6u,
                                      *(_DWORD *)(a2 + 72)) )
            {
              v24 = (unsigned int)gpdwCPUserPreferencesMask;
              if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
                zzzActiveCursorTracking(v22);
            }
          }
          else
          {
            xxxSetForegroundWindow2((LARGE_INTEGER *)v22, a1, 0, *(_DWORD *)(a2 + 72));
          }
          if ( (*(_DWORD *)(a2 + 24) & 1) != 0 && (*(_BYTE *)(v22 + 71) & 0x20) != 0 )
            PostMessage(v22, 274LL, 61728LL, 0LL);
          goto LABEL_31;
        }
        xxxCancelTracking(0LL, v7);
        CCursorClip::ClearClip(gpCursorClip);
        zzzLockWindowUpdate2(0LL, 1);
        v46 = *(_QWORD *)(a1 + 384);
        if ( *(_QWORD *)(a2 + 32) && (v47 = *(_QWORD *)(v46 + 88)) != 0 )
        {
          if ( v46 == gpqForeground )
          {
            v82 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v82;
            v83 = v47;
            ++*(_DWORD *)(v47 + 8);
            if ( *(_QWORD *)(v46 + 80) )
              zzzInputFocusReceivedWindowEvent(7);
            xxxSendNCActivateMessage((struct tagWND *)v47, 1LL, 0LL);
            xxxUpdateTray((struct tagWND *)v47);
            xxxSetWindowPos((struct tagWND *)v47, 0LL, 0LL, 0LL, 0, 0, 3);
            goto LABEL_31;
          }
        }
        else if ( v46 == gpqForeground )
        {
          goto LABEL_9;
        }
        v52 = *(_QWORD *)(a1 + 376);
        *(_DWORD *)(a1 + 440) &= ~0x20u;
        *(_DWORD *)(v52 + 12) &= ~0x100u;
        goto LABEL_9;
      }
      v53 = v9[9];
      if ( v53 )
      {
        v82 = *(_QWORD *)(a1 + 368);
        v83 = v53;
        *(_QWORD *)(a1 + 368) = &v82;
        ++*(_DWORD *)(v53 + 8);
        xxxSendMessage(v9[9], 31, 0, 0);
        ThreadUnlock1(v55, v54);
        SetWakeBit(a1, 2u);
      }
    }
  }
  else
  {
    v10 = v8 - 8;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        xxxProcessAsyncSendMessage((__int64 *)(a2 + 16));
        goto LABEL_9;
      }
      v14 = v11 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            xxxProcessNotifyWinEvent(*(_QWORD *)(a2 + 40));
          goto LABEL_9;
        }
        v33 = *(_QWORD *)(a1 + 408);
        v34 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v35 = *(_DWORD *)(v33 + 48);
        if ( (v35 & 0x5C0) != 0
          && **(_QWORD **)(v33 + 184) == *(_QWORD *)(a2 + 16)
          && *(_DWORD *)(v33 + 192) == *(_DWORD *)(a2 + 32) )
        {
          goto LABEL_9;
        }
        if ( (v35 & 0x100) != 0 )
          *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
        if ( v34 )
        {
          v82 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v82;
          v83 = v34;
          ++*(_DWORD *)(v34 + 8);
          xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v34, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
        }
        else
        {
          if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
            goto LABEL_9;
          if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
            goto LABEL_9;
          v57 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v33 + 112));
          if ( !v57 )
            goto LABEL_9;
          v58 = *(_QWORD *)v57;
          if ( !*(_QWORD *)v57 )
            goto LABEL_9;
          v85[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v85;
          v85[1] = v58;
          ++*(_DWORD *)(v58 + 8);
          xxxResetTooltip(v57);
        }
LABEL_31:
        ThreadUnlock1(v24, v23);
        goto LABEL_9;
      }
      v59 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v59 )
        goto LABEL_9;
      v24 = *(_QWORD *)(a1 + 368);
      v82 = v24;
      *(_QWORD *)(a1 + 368) = &v82;
      v83 = v59;
      ++*(_DWORD *)(v59 + 8);
      if ( (*(_BYTE *)(v59 + 71) & 0x10) != 0 )
        goto LABEL_31;
      SetVisible((_QWORD *)v59, 1);
      if ( (*(_BYTE *)(v59 + 71) & 0x20) != 0 )
        goto LABEL_31;
      v60 = (struct tagWND *)v59;
LABEL_107:
      xxxMinMaximizeEx(v60, 0LL);
      goto LABEL_31;
    }
    v48 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
    if ( v48 )
    {
      if ( *(char *)(v48 + 59) < 0 )
      {
        v82 = *(_QWORD *)(a1 + 368);
        *(_QWORD *)(a1 + 368) = &v82;
        v83 = v48;
        ++*(_DWORD *)(v48 + 8);
        xxxFreeWindow((struct tagWND *)v48, (struct tagSwitchWndInfo *)&v82, v50, v51);
      }
      else
      {
        xxxDestroyWindow(v48, v49, v50);
      }
    }
  }
LABEL_9:
  v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v12 )
    v3 = *v12;
  result = v84[0];
  *(_QWORD *)(v3 + 16) = v84[0];
  return result;
}

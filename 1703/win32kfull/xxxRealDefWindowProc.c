/*
 * XREFs of xxxRealDefWindowProc @ 0x1C003EA18
 * Callers:
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C003E8B0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C0008174 (xxxDWP_ProcessVirtKey.c)
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C003BBCC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C003BE18 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C003C330 (xxxLoadUserApiHook.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C003C4E8 (xxxSetCapture.c)
 *     DWP_GetIcon @ 0x1C003C818 (DWP_GetIcon.c)
 *     xxxSendSizeMessage @ 0x1C003C8A0 (xxxSendSizeMessage.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00408F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     xxxAdjustSize @ 0x1C0041AE8 (xxxAdjustSize.c)
 *     DefSetText @ 0x1C0041BC0 (DefSetText.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     xxxClientShutdown @ 0x1C00AEADC (xxxClientShutdown.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     _SetMenuDefaultItem @ 0x1C00C279C (_SetMenuDefaultItem.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C2910 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     WCSToMBEx @ 0x1C00C5DAC (WCSToMBEx.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00C9614 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00C98EC (MSGSQMAddMessage.c)
 *     GetMouseKeyFlags @ 0x1C00CCDF4 (GetMouseKeyFlags.c)
 *     _InitPwSB @ 0x1C00D79B4 (_InitPwSB.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00E1584 (DesktopVerifyHeapLargeUnicodeString.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00E7EA8 (xxxGetTitleBarInfoEx.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     DWP_SetHotKey @ 0x1C00FC924 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00FC9BC (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0106720 (xxxDWP_EraseBkgnd.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107FCC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C010B614 (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     MNClearCachedPopupSizes @ 0x1C0113B9C (MNClearCachedPopupSizes.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     _IsDescendant @ 0x1C0134A10 (_IsDescendant.c)
 *     xxxMessageBeep @ 0x1C0137A80 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C01B24AC (MergeDeferredMessagesOfThreadOnQueue.c)
 *     xxxSimulateShiftF10 @ 0x1C01B63BC (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 *     xxxSendTransformableMessage @ 0x1C01E6D28 (xxxSendTransformableMessage.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01F89D0 (SfnCOPYGLOBALDATA.c)
 *     xxxDefPointerProc @ 0x1C020DC48 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C020EF98 (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     xxxSendHelpMessage @ 0x1C02191CC (xxxSendHelpMessage.c)
 *     TextCopy @ 0x1C0239350 (TextCopy.c)
 *     ClientFrame @ 0x1C0239550 (ClientFrame.c)
 *     GetContextHelpId @ 0x1C023C05C (GetContextHelpId.c)
 */

unsigned __int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  HDC v5; // r12
  int v6; // r10d
  struct tagWND *v7; // rsi
  ULONG v8; // eax
  unsigned __int64 result; // rax
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // r8d
  _WORD *v13; // rax
  int v14; // eax
  __int64 v15; // r14
  struct tagWND *v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // cl
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r13
  int v26; // eax
  struct tagHOTKEYSTRUCT **v27; // rax
  int v28; // edi
  __int64 DesktopWindow; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  char v33; // al
  int v34; // edx
  unsigned __int64 v35; // rax
  int v36; // edi
  int ContextHelpId; // eax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r13
  _QWORD *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r10
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 ProcessWindowStation; // rax
  HDC v54; // rax
  HDC v55; // rbx
  __int16 v56; // di
  _DWORD *v57; // rcx
  _WORD *v58; // rdx
  int v59; // r8d
  __int64 v60; // r8
  int v61; // edx
  int v62; // r8d
  struct tagWND *v63; // rcx
  struct tagWND *Host; // rax
  struct tagWND *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 DCEx; // rbx
  int NCHit; // eax
  unsigned int v70; // r12d
  int v71; // eax
  unsigned int v72; // r12d
  __int64 v73; // r8
  int v74; // r9d
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rax
  struct tagWND *v78; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  struct tagWND *v80; // rcx
  struct tagWND *v81; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // edx
  int v86; // ecx
  __int64 NonChildAncestor; // rbx
  int v88; // r13d
  __int64 v89; // rcx
  int v90; // ecx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // r9
  unsigned __int64 v96; // rdx
  __int16 v97; // dx
  int v98; // eax
  int v99; // eax
  int v100; // r8d
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // rbx
  struct tagPROCESSINFO *v106; // rax
  unsigned int v107; // edx
  int v108; // r8d
  unsigned __int64 v109; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // rbx
  unsigned __int16 v114; // ax
  int v115; // eax
  __int16 v116; // bx
  unsigned __int16 v117; // bx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 SysMenu; // rax
  __int64 v121; // r13
  __int64 v122; // rax
  __int64 v123; // rax
  struct tagWND *v124; // rcx
  __int64 v125; // rdx
  unsigned int v126; // ecx
  int v127; // ebx
  __int64 v128; // rcx
  __int64 v129; // rcx
  unsigned __int64 v130; // [rsp+50h] [rbp-138h] BYREF
  ULONG BytesInMultiByteString; // [rsp+58h] [rbp-130h] BYREF
  int v132; // [rsp+5Ch] [rbp-12Ch]
  struct tagPROCESSINFO *v133; // [rsp+60h] [rbp-128h]
  __int64 v134; // [rsp+68h] [rbp-120h] BYREF
  __int64 v135; // [rsp+70h] [rbp-118h]
  __int64 v136; // [rsp+80h] [rbp-108h] BYREF
  __int64 v137; // [rsp+88h] [rbp-100h]
  _QWORD v138[3]; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v139[3]; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD v140[3]; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v141[3]; // [rsp+E8h] [rbp-A0h] BYREF
  _DWORD v142[12]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v143; // [rsp+130h] [rbp-58h] BYREF
  __int64 v144; // [rsp+138h] [rbp-50h]
  int v145; // [rsp+140h] [rbp-48h]

  v4 = a4;
  v5 = (HDC)a3;
  v6 = a2;
  v7 = a1;
  v130 = (unsigned __int64)a1;
  if ( a1 == (struct tagWND *)-1LL || (unsigned int)a2 > 0x400 )
    return 0LL;
  if ( (unsigned int)a2 > 0xA3 )
  {
    if ( (unsigned int)a2 <= 0x136 )
    {
      if ( (_DWORD)a2 != 310 )
      {
        if ( (unsigned int)a2 <= 0x112 )
        {
          if ( (_DWORD)a2 == 274 )
          {
            xxxSysCommand(a1);
            return 0LL;
          }
          if ( (unsigned int)a2 > 0x101 )
          {
            if ( (_DWORD)a2 == 260 )
            {
              if ( (a4 & 0x20000000) != 0 )
              {
                if ( (a4 & 0x40000000) == 0 )
                {
                  if ( a3 != 18
                    || (v93 = *(_QWORD *)(gptiCurrent + 384LL), v94 = *(_DWORD *)(v93 + 340), (v94 & 8) != 0) )
                  {
                    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= 0xFFFFFFF3;
                  }
                  else
                  {
                    *(_DWORD *)(v93 + 340) = v94 | 8;
                    xxxDrawMenuBarUnderlines(v7, 1LL);
                  }
                }
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x10u;
                xxxDWP_ProcessVirtKey((int)v5);
                return 0LL;
              }
              if ( a3 != 121 )
                return 0LL;
              v67 = *(_QWORD *)(gptiCurrent + 384LL);
LABEL_299:
              *(_DWORD *)(v67 + 340) |= 0x10u;
              if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*((_BYTE *)v7 + 61) & 2) == 0 )
                return 0LL;
              v73 = *(_QWORD *)v7;
              _InterlockedAdd(&glSendMessage, 1u);
              v74 = -1;
              goto LABEL_378;
            }
            if ( (_DWORD)a2 != 261 )
            {
              if ( (_DWORD)a2 != 262 )
              {
                if ( (_DWORD)a2 != 265 || a3 == 0xFFFF )
                  return 0LL;
                v66 = 258LL;
                goto LABEL_246;
              }
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= 0xFFFFFFF3;
              if ( a3 == 13 && (*((_BYTE *)a1 + 71) & 0x20) != 0 )
              {
                a4 = 0LL;
                a3 = 61728LL;
                v66 = 274LL;
LABEL_246:
                PostMessage(a1, v66, a3, a4);
                return 0LL;
              }
              if ( (a4 & 0x20000000) == 0 || !a3 )
              {
                if ( a3 != 27 )
                  xxxMessageBeep(0LL);
                return 0LL;
              }
              if ( a3 == 9 || a3 == 27 )
                return 0LL;
              if ( a3 == 32 )
              {
                if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
                {
                  v75 = *((_QWORD *)a1 + 13);
                  v134 = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = &v134;
                  v135 = v75;
                  ++*(_DWORD *)(v75 + 8);
                  v51 = 262LL;
                  a3 = 32LL;
                  v52 = *((_QWORD *)v7 + 13);
LABEL_142:
                  xxxSendMessage(v52, v51, a3, a4);
LABEL_407:
                  ThreadUnlock1(v19, v18);
                  return 0LL;
                }
                v76 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
                if ( v76 && (unsigned int)(*(_DWORD *)(v76 + 320) - 8) <= 3 )
                {
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 33LL, *(_QWORD *)v76);
                  return 0LL;
                }
              }
              if ( a3 == 32 )
              {
                v77 = *(_QWORD *)(gptiCurrent + 384LL);
                v78 = *(struct tagWND **)(v77 + 88);
                if ( v78 )
                {
                  if ( (unsigned int)IsCompositionInputWindow(*(struct tagWND **)(v77 + 88)) )
                  {
                    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v78);
                    if ( (unsigned int)CoreWindowProp::IsComponent(v80) )
                      CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHost(v81);
                    if ( !CompositionInputWindowUIOwner )
                      return 0LL;
                    TopLevelWindow = GetTopLevelWindow(CompositionInputWindowUIOwner);
                    if ( !TopLevelWindow )
                      return 0LL;
                    v140[0] = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = v140;
                    v140[1] = TopLevelWindow;
                    ++*(_DWORD *)(TopLevelWindow + 8);
                    xxxSetForegroundWindow2((struct tagWND *)TopLevelWindow);
                    v65 = (struct tagWND *)ThreadUnlock1(v84, v83);
                    if ( !v65 )
                      return 0LL;
                    a4 = 32LL;
                    a3 = 61696LL;
                    v66 = 274LL;
LABEL_266:
                    a1 = v65;
                    goto LABEL_246;
                  }
                }
              }
              _InterlockedAdd(&glSendMessage, 1u);
              v74 = (int)v5;
              LODWORD(v73) = 61696;
              v85 = 274;
LABEL_379:
              xxxSendTransformableMessageTimeout((int)v7, v85, v73, v74, 0, 0, 0LL, 1, 0);
              return 0LL;
            }
          }
          else if ( (_DWORD)a2 != 257 )
          {
            if ( (_DWORD)a2 == 164 )
            {
              memset(v142, 0, sizeof(v142));
              NCHit = FindNCHit(v7, (unsigned int)v4);
              if ( (unsigned int)(NCHit - 6) <= 1 )
              {
                if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), v7) )
                  return 0LL;
              }
              else if ( (unsigned int)(NCHit - 2) > 1
                     || v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
              {
                return 0LL;
              }
              xxxSetCapture((__int64)v7);
              while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v142, 0, 512, 526, 1, 0) || v142[2] != 517 )
              {
                if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL)
                  || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
                {
                  return 0LL;
                }
              }
              xxxReleaseCapture();
              v70 = LOWORD(v142[9]) | (LOWORD(v142[10]) << 16);
              v71 = FindNCHit(v7, v70);
              if ( ((v71 - 2) & 0xFFFFFFFA) != 0 )
                return 0LL;
              if ( (*((_BYTE *)v7 + 306) & 0x40) != 0 )
              {
                if ( v71 == 2 )
                  goto LABEL_422;
                if ( v71 == 3 )
                {
LABEL_234:
                  v72 = 61536;
LABEL_423:
                  SysMenu = xxxGetSysMenu(v7, 1LL);
                  v121 = SysMenu;
                  if ( !SysMenu )
                    return 0LL;
                  if ( gihmodUserApiHook >= 0 )
                    MNClearCachedPopupSizes(SysMenu);
                  SetMenuDefaultItem(v121, v72, 0LL);
                  PostShellHookMessagesEx(9u, *(_QWORD *)v7, 0LL);
                  v141[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v141;
                  v141[1] = v121;
                  ++*(_DWORD *)(v121 + 8);
                  if ( v4 == 0xFFFFFFFFLL )
                  {
                    v19 = gpsi;
                    if ( (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
                    {
                      v144 = 0LL;
                      v145 = 0;
                      v143 = 20LL;
                      if ( (unsigned int)xxxSendMinRectMessages(v7, (char *)&v143 + 4) )
                        xxxTrackPopupMenuEx(v121, 576, HIDWORD(v143), v144, (__int64)v7, (__int64)&v143);
                    }
                  }
                  else
                  {
                    xxxTrackPopupMenuEx(v121, 514, (__int16)v4, SWORD1(v4), (__int64)v7, 0LL);
                  }
                  goto LABEL_407;
                }
              }
              v73 = *(_QWORD *)v7;
              _InterlockedAdd(&glSendMessage, 1u);
              v74 = v70;
              goto LABEL_378;
            }
            if ( (_DWORD)a2 != 172 )
            {
              if ( (_DWORD)a2 == 174 )
              {
                DCEx = _GetDCEx(a1, 0LL, 65537LL);
                xxxDrawCaptionBar(v7, DCEx, (unsigned int)v5);
                _ReleaseDC(DCEx);
                return 0LL;
              }
              if ( (_DWORD)a2 == 175 )
              {
                xxxDrawWindowFrame((__int64)a1, (HDC)a3, a4);
                return 0LL;
              }
              if ( (_DWORD)a2 != 256 )
                return 0LL;
              if ( a3 == 27 )
              {
                if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
                  return 0LL;
                Host = CoreWindowProp::GetHost(v63);
                if ( !Host )
                  return 0LL;
                v65 = (struct tagWND *)GetTopLevelWindow(Host);
                if ( !v65 )
                  return 0LL;
                a4 = v4;
                v66 = 256LL;
                a3 = 27LL;
                goto LABEL_266;
              }
              if ( a3 != 121 )
                return 0LL;
              v67 = *(_QWORD *)(gptiCurrent + 384LL);
              goto LABEL_299;
            }
LABEL_389:
            v116 = 0;
            if ( WORD1(a3) == 1 )
            {
              v116 = 1;
            }
            else if ( WORD1(a3) == 2 )
            {
              v116 = 2;
              goto LABEL_394;
            }
            if ( !v116 )
              return 0LL;
LABEL_394:
            v117 = v116 | 0x8000;
            if ( (_DWORD)a2 != 524 )
              LOWORD(v5) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 384LL));
            xxxSendMessage(v7, 793LL, *(_QWORD *)v7, (unsigned __int16)v5 | ((unsigned __int64)v117 << 16));
            return 0LL;
          }
          if ( a3 == 18
            && (v86 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL), (v86 & 0x80u) == 0)
            && (v86 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x10) != 0 )
          {
            NonChildAncestor = GetNonChildAncestor((__int64)v7);
            if ( gspwndFullScreen != (struct tagWND *)NonChildAncestor )
            {
              v88 = 0;
              v136 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v136;
              v137 = NonChildAncestor;
              if ( NonChildAncestor )
                ++*(_DWORD *)(NonChildAncestor + 8);
              if ( v5 == (HDC)121 )
                xxxDrawMenuBarUnderlines(v7, 1LL);
              v89 = *(_QWORD *)(NonChildAncestor + 16);
              if ( v89 != gptiCurrent && *(_QWORD *)(v89 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
              {
                v90 = *(_DWORD *)(gptiCurrent + 440LL);
                if ( (v90 & 0x10000) == 0 )
                {
                  *(_DWORD *)(gptiCurrent + 440LL) = v90 | 0x10000;
                  v88 = 1;
                }
              }
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(NonChildAncestor, 274, 61696, 0, 0, 0, 0LL, 1, 0);
              if ( v88 == 1 )
              {
                *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10000u;
                MergeDeferredMessagesOfThreadOnQueue(gptiCurrent);
              }
              ThreadUnlock1(v92, v91);
            }
          }
          if ( v5 == (HDC)18 )
          {
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines(v7, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= 0xFFFFFFE3;
          return 0LL;
        }
        if ( (unsigned int)a2 <= 0x128 )
        {
          switch ( (_DWORD)a2 )
          {
            case 0x128:
              return xxxDWP_UpdateUIState(a1, a3, a4);
            case 0x119:
              if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
                return 0LL;
              v104 = *((_QWORD *)a1 + 13);
              v105 = *(_QWORD *)(*(_QWORD *)(v104 + 16) + 376LL);
              v106 = *(struct tagPROCESSINFO **)(gptiCurrent + 376LL);
              v133 = v106;
              if ( (struct tagPROCESSINFO *)v105 != v106
                && !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                                    v106,
                                    (struct tagPROCESSINFO *)v105,
                                    (struct tagWND *)v104,
                                    0x119u,
                                    (unsigned __int64)v5,
                                    a4,
                                    1) )
              {
                if ( *(_QWORD *)v105 == gpepCSRSS )
                {
                  v107 = 0x2000;
                  v108 = 0;
                }
                else
                {
                  v107 = *(_DWORD *)(v105 + 824);
                  v108 = *(_DWORD *)(v105 + 828);
                }
                v109 = *((_QWORD *)v133 + 103);
                if ( gbEnforceUIPI )
                {
                  if ( (unsigned int)v109 <= v107 )
                  {
                    if ( (_DWORD)v109 != v107
                      || (v111 = HIDWORD(v109), (_DWORD)v111 != v108) && (_DWORD)v111 != -1 && v108 != -1 )
                    {
                      EtwTraceUIPIMsgError(v133, v105, 281LL, v5, v4);
                      UserSetLastError(5LL);
                      MSGSQMAddMessage(v133, (struct tagPROCESSINFO *)v105, v4, 1, 0);
                      return 0LL;
                    }
                  }
                }
                MSGSQMAddMessage(v133, (struct tagPROCESSINFO *)v105, v4, 1, gbEnforceUIPI != 0 ? 5 : 1);
              }
              v112 = *((_QWORD *)v7 + 13);
              v134 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v134;
              v135 = v112;
              ++*(_DWORD *)(v112 + 8);
              a4 = v4;
              a3 = (unsigned __int64)v5;
              v102 = 281LL;
              goto LABEL_450;
            case 0x11A:
              if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
                return 0LL;
              v103 = *((_QWORD *)a1 + 13);
              v134 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v134;
              v135 = v103;
              ++*(_DWORD *)(v103 + 8);
              v102 = 282LL;
              goto LABEL_450;
          }
          if ( (_DWORD)a2 != 295 )
            return 0LL;
          LOWORD(v95) = a3;
          v130 = (unsigned __int16)a3;
          v96 = a3 >> 16;
          v133 = (struct tagPROCESSINFO *)(a3 >> 16);
          if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || v4 )
            return 0LL;
          if ( (_WORD)a3 == 3 )
          {
            v97 = 0;
            v133 = 0LL;
            if ( (*gpsi & 0x80u) == 0 )
            {
              v98 = *(_DWORD *)(gpsi + 8684LL);
              if ( (v98 & 0x20) == 0 && v98 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                {
                  v95 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                  v97 = 3;
                  v5 = (HDC)(v95 | 0x30000);
                  goto LABEL_324;
                }
                goto LABEL_321;
              }
            }
          }
          else
          {
            if ( (*gpsi & 0x80u) == 0 )
            {
              v99 = *(_DWORD *)(gpsi + 8684LL);
              if ( (v99 & 0x20) == 0 && v99 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                {
LABEL_321:
                  LOWORD(v95) = v130;
                  v97 = (__int16)v133;
                  goto LABEL_324;
                }
                LOWORD(v96) = (_WORD)v133;
                LOWORD(v95) = v130;
              }
            }
            v97 = v96 & 0xFFFC;
          }
LABEL_324:
          if ( !v97 )
            return 0LL;
          if ( (v97 & 1) != 0 )
            v100 = ((_WORD)v95 == 1) ^ (*((unsigned __int8 *)v7 + 67) >> 7);
          else
            v100 = 0;
          if ( (v97 & 2) != 0 )
            v100 |= ((_WORD)v95 == 1) ^ (*((unsigned __int8 *)v7 + 67) >> 6) & 1;
          if ( (v97 & 4) != 0 )
            v100 |= ((_WORD)v95 == 1) ^ (*((unsigned __int8 *)v7 + 67) >> 2) & 1;
          if ( !v100 )
            return 0LL;
          a4 = 0LL;
          a3 = (unsigned __int64)v5;
          if ( (*((_BYTE *)v7 + 71) & 0xC0) != 0x40 )
            return xxxSendMessage(v7, 296LL, v5, 0LL);
          v101 = *((_QWORD *)v7 + 13);
          v134 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v134;
          v135 = v101;
          ++*(_DWORD *)(v101 + 8);
          v102 = 295LL;
          goto LABEL_450;
        }
        if ( (_DWORD)a2 == 297 )
          return *((_BYTE *)a1 + 67) & 4 | ((((unsigned __int64)*((unsigned __int8 *)a1 + 67) >> 2) | *((_BYTE *)a1 + 67) & 0x40) >> 5);
        if ( (_DWORD)a2 != 306 )
        {
          if ( (unsigned int)a2 <= 0x132 )
            return 0LL;
          if ( (unsigned int)a2 > 0x134 && (*((_BYTE *)a1 + 61) & 2) != 0 )
          {
            v113 = 15LL;
            goto LABEL_387;
          }
LABEL_382:
          v113 = 5LL;
          goto LABEL_387;
        }
      }
LABEL_380:
      if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
      {
        v113 = 15LL;
        goto LABEL_387;
      }
      goto LABEL_382;
    }
    if ( (unsigned int)a2 > 0x240 )
    {
      if ( (unsigned int)a2 <= 0x317 )
      {
        if ( (_DWORD)a2 == 791 )
        {
          LODWORD(result) = xxxDWPPrint(a1, (HDC)a3, a4);
          return (int)result;
        }
        if ( (unsigned int)a2 <= 0x243 )
          return xxxDefPointerProc(a1, a2, a3, 0LL);
        if ( (unsigned int)a2 <= 0x244 )
          return 0LL;
        if ( (unsigned int)a2 <= 0x247 )
          return xxxDefPointerProc(a1, a2, a3, 0LL);
        if ( (unsigned int)a2 <= 0x24D )
          return 0LL;
        if ( (unsigned int)a2 <= 0x24F )
          return xxxDefPointerProc(a1, a2, a3, 0LL);
        if ( (_DWORD)a2 != 787
          || (*((_BYTE *)a1 + 71) & 8) != 0
          || *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gpqForeground && !(unsigned int)xxxSetForegroundWindow(a1) )
        {
          return 0LL;
        }
        goto LABEL_422;
      }
      if ( (_DWORD)a2 != 793 )
      {
        if ( (_DWORD)a2 == 795 )
        {
          if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
            return 0LL;
          LODWORD(result) = xxxLoadUserApiHook(gptiCurrent);
        }
        else
        {
          if ( (_DWORD)a2 != 831 )
          {
            if ( (_DWORD)a2 == 841 && a3 )
            {
              v122 = *((_QWORD *)a1 + 13);
              v123 = v122 ? *(_QWORD *)(v122 + 16) : 0LL;
              if ( v123 && *(struct tagWND **)(v123 + 1272) == a1 )
              {
                CoreWindowProp::GetFocusDirection();
                xxxSetFocus(v124);
              }
            }
            return 0LL;
          }
          LODWORD(result) = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
        }
        return (int)result;
      }
      if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(a1, a2)
          && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) == 0
           || !(unsigned int)xxxCallHook(12LL, v5, v4)) )
        {
          v126 = *(_DWORD *)(gptiCurrent + 1096LL);
          v127 = (v126 >> 11) & 1;
          v130 = *(_QWORD *)(gptiCurrent + 1100LL);
          if ( (v126 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1264LL) == v7
            || (unsigned int)CoreWindowProp::IsComponent(v7) )
          {
            v128 = *(_QWORD *)(gptiCurrent + 464LL);
            if ( v128 )
            {
              v129 = *(_QWORD *)(v128 + 32);
              if ( v129 )
              {
                if ( (*(_DWORD *)(v129 + 1096) & 0x800) != 0 )
                {
                  v127 = 1;
                  v130 = *(_QWORD *)(v129 + 1100);
                }
              }
            }
          }
          PostShellHookMessagesEx(
            0xCu,
            v4,
            (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v130 & -(__int64)(v127 != 0)));
        }
        return 0LL;
      }
      v125 = *((_QWORD *)a1 + 13);
      v134 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v134;
      v135 = v125;
      ++*(_DWORD *)(v125 + 8);
      v102 = 793LL;
LABEL_450:
      v39 = xxxSendMessage(*((_QWORD *)v7 + 13), v102, a3, a4);
      goto LABEL_451;
    }
    if ( (_DWORD)a2 == 576 )
    {
      if ( *(_QWORD *)(gptiCurrent + 952LL) == a4 )
        *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
      FreeTouchInputInfo(a4, 1LL);
      return 0LL;
    }
    if ( (unsigned int)a2 > 0x20C )
    {
      if ( (_DWORD)a2 != 526 )
      {
        if ( (unsigned int)a2 <= 0x217 )
          return 0LL;
        if ( (unsigned int)a2 <= 0x219 )
          return 1LL;
        if ( (_DWORD)a2 == 554 )
          return 1162627398LL;
        if ( (_DWORD)a2 != 555 )
          return 0LL;
        v35 = (unsigned __int64)*((unsigned __int8 *)a1 + 64) >> 4;
        return v35 & 1;
      }
    }
    else
    {
      switch ( (_DWORD)a2 )
      {
        case 0x20C:
          goto LABEL_389;
        case 0x137:
          if ( *(_WORD *)(gpsi + 8676LL) < 8u
            || (v115 = *(_DWORD *)(gpsi + 5040LL), v115 != *(_DWORD *)(gpsi + 4960LL))
            || v115 == *(_DWORD *)(gpsi + 4980LL) )
          {
            GreSetBkColor((HDC)a3);
            GreSetTextColor(v5);
            return *(_QWORD *)(gpsi + 5336LL);
          }
          v113 = 20LL;
LABEL_387:
          GreSetBkColor((HDC)a3);
          GreSetTextColor(v5);
          return *(_QWORD *)(gpsi + 8 * v113 + 5088);
        case 0x138:
          goto LABEL_380;
        case 0x205:
          v114 = *((_WORD *)a1 + 74) + WORD1(a4);
          if ( (*((_BYTE *)a1 + 66) & 0x40) != 0 )
            v74 = (unsigned __int16)(*((_WORD *)a1 + 76) - a4) | (v114 << 16);
          else
            v74 = (unsigned __int16)(a4 + *((_WORD *)a1 + 72)) | (v114 << 16);
          v73 = *(_QWORD *)a1;
          _InterlockedAdd(&glSendMessage, 1u);
LABEL_378:
          v85 = 123;
          goto LABEL_379;
      }
      if ( (_DWORD)a2 != 522 )
        return 0LL;
    }
    if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
      return 0LL;
    v118 = *((_QWORD *)a1 + 13);
    v134 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v134;
    v135 = v118;
    ++*(_DWORD *)(v118 + 8);
    v61 = v6;
    goto LABEL_406;
  }
  if ( (unsigned int)a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3, a4);
    return 0LL;
  }
  if ( (unsigned int)a2 > 0x33 )
  {
    if ( (unsigned int)a2 <= 0x55 )
    {
      if ( (_DWORD)a2 == 85 )
      {
        if ( a4 == 3 )
          return 2LL - ((*((_BYTE *)a1 + 59) & 0x20) != 0);
        return 0LL;
      }
      if ( (unsigned int)a2 <= 0x4D )
      {
        if ( (_DWORD)a2 == 77 )
        {
          if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
            v36 = *((unsigned __int16 *)a1 + 104);
          else
            v36 = 0;
          ContextHelpId = GetContextHelpId();
          xxxSendHelpMessage((_DWORD)v7, 1, v36, *(_QWORD *)v7, ContextHelpId);
          return 0LL;
        }
        if ( (_DWORD)a2 != 53 )
        {
          if ( (_DWORD)a2 != 59 )
          {
            switch ( (_DWORD)a2 )
            {
              case 'F':
                if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
                  xxxAdjustSize(a1, a4 + 24, a4 + 28);
                break;
              case 'G':
                if ( (*(_DWORD *)(a4 + 32) & 0x1000) == 0 )
                {
                  BytesInMultiByteString = *((_DWORD *)a1 + 36);
                  v132 = *((_DWORD *)a1 + 37);
                  DesktopWindow = GetDesktopWindow(a1, BytesInMultiByteString);
                  if ( v32 != DesktopWindow )
                  {
                    BytesInMultiByteString = v30 - *(_DWORD *)(v32 + 144);
                    v132 = v31 - *(_DWORD *)(v32 + 148);
                  }
                  xxxSendTransformableMessage(
                    (_DWORD)v7,
                    3,
                    0,
                    (unsigned __int16)BytesInMultiByteString | ((unsigned __int16)v132 << 16),
                    0);
                }
                if ( (*(_DWORD *)(v4 + 32) & 0x8800) != 0x800 )
                {
                  v33 = *((_BYTE *)v7 + 71);
                  if ( (v33 & 0x20) != 0 )
                  {
                    v34 = 1;
                  }
                  else if ( (v33 & 1) != 0 )
                  {
                    v34 = 2;
                  }
                  else
                  {
                    v34 = 0;
                  }
                  xxxSendSizeMessage((__int64)v7, v34);
                }
                break;
              case 'I':
                return SfnCOPYGLOBALDATA(0LL, 0LL);
            }
            return 0LL;
          }
          LODWORD(result) = xxxClientShutdown(a1, a3);
          return (int)result;
        }
        v35 = (unsigned __int64)*((unsigned __int8 *)a1 + 56) >> 6;
        return v35 & 1;
      }
      if ( (_DWORD)a2 == 79 )
        return ValidateHwnd(a3) != 0;
      if ( (_DWORD)a2 != 80 )
      {
        if ( (_DWORD)a2 == 81 )
        {
          v42 = BuildHwndList(*((_QWORD *)a1 + 14), 2LL, 0LL);
          v44 = v42;
          if ( v42 )
          {
            v45 = (_QWORD *)(v42 + 32);
            v46 = *(_QWORD *)(v42 + 32);
            if ( v46 != 1 )
            {
              do
              {
                LOBYTE(v43) = 1;
                v47 = HMValidateHandleNoSecure(v46, v43);
                if ( v47 )
                {
                  v139[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v139;
                  v139[1] = v47;
                  ++*(_DWORD *)(v47 + 8);
                  xxxSendMessage(v47, 81LL, v5, v4);
                  ThreadUnlock1(v49, v48);
                }
                v46 = *++v45;
              }
              while ( *v45 != 1LL );
            }
            FreeHwndList(v44);
          }
          return 0LL;
        }
        if ( (_DWORD)a2 == 83 )
        {
          v38 = (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 13) : *((_QWORD *)a1 + 15);
          if ( v38 && v38 != GetThreadDesktopWindow(0LL) )
          {
            v136 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v136;
            v137 = v38;
            ++*(_DWORD *)(v38 + 8);
            _InterlockedAdd(&glSendMessage, 1u);
            v39 = xxxSendTransformableMessageTimeout(v38, 83, (int)v5, v4, 0, 0, 0LL, 1, 1);
LABEL_451:
            v22 = v39;
            ThreadUnlock1(v41, v40);
            return v22;
          }
        }
        return 0LL;
      }
      v50 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
      if ( !v50 || (struct tagWND *)v50 == a1 || *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) == *(_WORD *)(gpsi + 888LL) )
      {
        ProcessWindowStation = GetProcessWindowStation(0LL);
        if ( !xxxActivateKeyboardLayout(ProcessWindowStation, v4, 256LL, v7) )
          UserSetLastError(1457LL);
        return 0LL;
      }
      v136 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v136;
      v137 = v50;
      ++*(_DWORD *)(v50 + 8);
      v51 = 80LL;
      v52 = v50;
      goto LABEL_142;
    }
    if ( (_DWORD)a2 != 123 )
    {
      if ( (_DWORD)a2 == 127 )
        return DWP_GetIcon((__int64)a1, a3);
      if ( (_DWORD)a2 == 128 )
        return (unsigned __int64)xxxDWP_SetIcon(a1, a3, (HICON)a4);
      if ( (_DWORD)a2 != 129 )
      {
        switch ( (_DWORD)a2 )
        {
          case 0x83:
            xxxCalcClientRect(a1, a4, 0LL);
            return 0LL;
          case 0x84:
            LODWORD(result) = FindNCHit(a1, (unsigned int)a4);
            return (int)result;
          case 0x85:
            SetOrClrWF(1, a1, 0x180u, 1);
            v54 = (HDC)_GetDCEx(v7, v5, 328833LL);
            v55 = v54;
            v56 = 0;
            if ( v54 )
            {
              if ( (*((_BYTE *)v7 + 56) & 0x40) != 0 )
                v56 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 384LL) == gpqForeground;
              xxxDrawWindowFrame((__int64)v7, v54, v56);
              _ReleaseDC(v55);
            }
            SetOrClrWF(0, v7, 0x180u, 1);
            return 0LL;
        }
        if ( (_DWORD)a2 != 134 )
        {
          if ( (_DWORD)a2 == 136 )
          {
            SetOrClrWF(0, a1, 0x280u, 1);
            xxxInternalDoSyncPaint(v7, (unsigned int)v5);
          }
          return 0LL;
        }
        xxxDWP_DoNCActivate((__int64)a1, (_WORD)a3 != 0, a4);
        return 1LL;
      }
      if ( (*((_BYTE *)a1 + 70) & 0x30) != 0 && !InitPwSB() )
        return 0LL;
      if ( v4 )
      {
        v57 = (_DWORD *)(v4 + 80);
        if ( !*((_QWORD *)v7 + 3) || v4 == -80 || (v58 = *(_WORD **)(v4 + 88)) == 0LL )
        {
          *((_DWORD *)v7 + 58) = 0;
          return 1LL;
        }
        if ( *(_DWORD *)(v4 + 84) < 0x80000000 )
        {
          if ( *v57 < 2u || *v58 != 0xFFFF )
            goto LABEL_182;
        }
        else if ( !*v57 || *(_BYTE *)v58 != 0xFF )
        {
          goto LABEL_182;
        }
        return 1LL;
      }
LABEL_182:
      SetOrClrWF(1, v7, 0x202u, 1);
      LODWORD(result) = DefSetText(v7, v4 + 80);
      return (int)result;
    }
    v59 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v59 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), v7) )
        xxxDoScrollMenu(v7, 0LL, v62 - 6);
      return 0LL;
    }
    if ( (*((_BYTE *)v7 + 71) & 0xC0) == 0x40 )
    {
      v60 = *((_QWORD *)v7 + 13);
      v134 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v134;
      v135 = v60;
      ++*(_DWORD *)(v60 + 8);
      a3 = *(_QWORD *)v7;
      LODWORD(a4) = v4;
      v61 = 123;
LABEL_406:
      v119 = *((_QWORD *)v7 + 13);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v119, v61, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_407;
    }
    if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
      return 0LL;
    if ( v59 != 2 )
    {
      if ( v59 != 3 )
      {
        if ( v4 == -1 && (*((_BYTE *)v7 + 61) & 2) == 0 )
          xxxSimulateShiftF10();
        return 0LL;
      }
      goto LABEL_234;
    }
LABEL_422:
    v72 = (*((_BYTE *)v7 + 71) & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_423;
  }
  if ( (_DWORD)a2 == 51 )
  {
    v27 = HotKeyHelper(a1);
    v28 = 0;
    if ( *v27 )
      return *((int *)*v27 + 2);
    return v28;
  }
  if ( (unsigned int)a2 > 0x18 )
  {
    if ( (unsigned int)a2 > 0x26 )
    {
      if ( (_DWORD)a2 == 39 )
      {
LABEL_87:
        LODWORD(result) = xxxDWP_EraseBkgnd();
        return (int)result;
      }
      if ( (_DWORD)a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v26 = *(_DWORD *)(a4 + 12);
          if ( v26 == 4 || v26 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
            ClientFrame(*(HDC *)(a4 + 32));
        }
        return 0LL;
      }
      if ( (unsigned int)a2 <= 0x2D )
        return 0LL;
      if ( (unsigned int)a2 <= 0x2F )
        return -1LL;
      if ( (_DWORD)a2 != 50 )
        return 0LL;
      LODWORD(result) = DWP_SetHotKey(a1);
      return (int)result;
    }
    if ( (_DWORD)a2 == 38 )
      goto LABEL_74;
    if ( (_DWORD)a2 != 25 )
    {
      if ( (_DWORD)a2 == 31 )
      {
        xxxDWP_DoCancelMode(a1);
        return 0LL;
      }
      if ( (_DWORD)a2 != 32 )
      {
        if ( (_DWORD)a2 != 33 )
          return 0LL;
        if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
          v21 = *((_QWORD *)a1 + 13);
        else
          v21 = 0LL;
        if ( !v21
          || (v136 = *(_QWORD *)(gptiCurrent + 368LL),
              *(_QWORD *)(gptiCurrent + 368LL) = &v136,
              v137 = v21,
              ++*(_DWORD *)(v21 + 8),
              v22 = xxxSendMessage(v21, 33LL, a3, a4),
              ThreadUnlock1(v24, v23),
              !v22) )
        {
          if ( (_WORD)v4 != 2 )
            return 1LL;
          v25 = 3LL;
          if ( WORD1(v4) != 513 )
            return 1LL;
          return v25;
        }
        return v22;
      }
      LODWORD(result) = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
      return (int)result;
    }
    goto LABEL_382;
  }
  if ( (_DWORD)a2 == 24 )
  {
    if ( !(_WORD)a4 )
      return 0LL;
    v20 = *((_BYTE *)a1 + 71);
    if ( (((v20 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)v7 + 15) )
      return 0LL;
    if ( a3 )
    {
      if ( (v20 & 0x10) != 0 || (*((_BYTE *)v7 + 57) & 0x40) == 0 )
        return 0LL;
    }
    else if ( (v20 & 0x10) == 0 )
    {
      return 0LL;
    }
    SetOrClrWF(0, v7, 0x140u, 1);
    if ( !v5 )
      SetOrClrWF(1, v7, 0x140u, 1);
    xxxShowWindowEx(v7, v5 != 0LL ? 4 : 0, gdwPUDFlags & 0x10000);
    return 0LL;
  }
  if ( (unsigned int)a2 > 0xF )
  {
    if ( (_DWORD)a2 == 16 )
    {
      xxxDestroyWindow(a1);
      return 0LL;
    }
    if ( (_DWORD)a2 != 17 && (_DWORD)a2 != 19 )
    {
      if ( (_DWORD)a2 != 20 )
        return 0LL;
      goto LABEL_87;
    }
    return 1LL;
  }
  if ( (_DWORD)a2 == 15 )
  {
LABEL_74:
    xxxDWP_Paint(a1);
    return 0LL;
  }
  if ( (_DWORD)a2 == 6 )
  {
    if ( a3 )
    {
      CoreWindowProp::GetFocusDirection();
      xxxSetFocus(v16);
    }
    if ( *((char *)v7 + 306) >= 0 )
      return 0LL;
    v17 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1272LL);
    if ( !v17 )
      return 0LL;
    v138[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v138;
    v138[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    xxxSendNotifyMessage((struct tagWND *)v17, 0x349u, (unsigned __int64)v5, 0LL, 0);
    goto LABEL_407;
  }
  if ( (_DWORD)a2 == 11 )
  {
    xxxDWP_SetRedraw(a1, a3 != 0);
    return 0LL;
  }
  if ( (_DWORD)a2 == 12 )
  {
    v14 = DefSetText(a1, a4);
    v15 = v14;
    if ( v14 )
    {
      xxxRedrawTitle(v7, 8u);
      xxxWindowEvent(32780, (_DWORD)v7, 0, 0, 0);
    }
    return v15;
  }
  else
  {
    if ( (_DWORD)a2 != 13 )
    {
      if ( (_DWORD)a2 == 14 )
      {
        v8 = *((_DWORD *)a1 + 58);
        if ( v8 )
        {
          if ( !a4 )
            return v8 >> 1;
          RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 30), v8);
          return BytesInMultiByteString;
        }
      }
      return 0LL;
    }
    if ( !a3 )
      return 0LL;
    if ( *((_QWORD *)a1 + 30) )
      DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (char *)a1 + 232);
    v10 = *((_DWORD *)v7 + 58);
    if ( !v10 )
    {
      v13 = *(_WORD **)(v4 + 8);
      if ( *(_DWORD *)(v4 + 4) < 0x80000000 )
        *v13 = 0;
      else
        *(_BYTE *)v13 = 0;
      return 0LL;
    }
    v11 = *(_DWORD *)(v4 + 4);
    if ( v11 < 0x80000000 )
    {
      v12 = TextCopy((char *)v7 + 232, *(_QWORD *)(v4 + 8), (unsigned int)v5);
      *(_DWORD *)v4 = 2 * v12;
    }
    else
    {
      v12 = WCSToMBEx(0LL, *((_QWORD *)v7 + 30), v10 >> 1, v4 + 8, (v11 & 0x7FFFFFFF) - 1);
      *(_BYTE *)(v12 + *(_QWORD *)(v4 + 8)) = 0;
      *(_DWORD *)v4 = v12;
    }
    return v12;
  }
}

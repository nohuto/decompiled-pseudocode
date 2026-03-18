/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0094260
 * Callers:
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00940E0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C000D158 (xxxDWP_ProcessVirtKey.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0046880 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxGetTitleBarInfoEx @ 0x1C004A0DC (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     xxxLoadUserApiHook @ 0x1C00586D0 (xxxLoadUserApiHook.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     DWP_SetHotKey @ 0x1C005EE8C (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C005EF24 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     _InitPwSB @ 0x1C0077F80 (_InitPwSB.c)
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C007BBB4 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     _SetMenuDefaultItem @ 0x1C007C4B4 (_SetMenuDefaultItem.c)
 *     xxxDWP_EraseBkgnd @ 0x1C007CA74 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C007DCE0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     xxxAdjustSize @ 0x1C009662C (xxxAdjustSize.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     DefSetText @ 0x1C0096934 (DefSetText.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00CCF70 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     GetMouseKeyFlags @ 0x1C00CF764 (GetMouseKeyFlags.c)
 *     xxxClientShutdown @ 0x1C00D76D8 (xxxClientShutdown.c)
 *     _GetProcessWindowStation @ 0x1C00D90A0 (_GetProcessWindowStation.c)
 *     WCSToMBEx @ 0x1C00DE10C (WCSToMBEx.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F4038 (DesktopVerifyHeapLargeUnicodeString.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     DWP_GetIcon @ 0x1C010CAD8 (DWP_GetIcon.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C010FB34 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxHandleWindowPosChanged @ 0x1C0113B28 (xxxHandleWindowPosChanged.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C0115BE0 (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     MNClearCachedPopupSizes @ 0x1C011DC24 (MNClearCachedPopupSizes.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     _IsDescendant @ 0x1C01398D0 (_IsDescendant.c)
 *     xxxMessageBeep @ 0x1C013EAE0 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxSimulateShiftF10 @ 0x1C01B96A0 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FA390 (SfnCOPYGLOBALDATA.c)
 *     xxxDefPointerProc @ 0x1C020F46C (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     xxxSendHelpMessage @ 0x1C021A3C4 (xxxSendHelpMessage.c)
 *     ClientFrame @ 0x1C023AF54 (ClientFrame.c)
 *     TextCopy @ 0x1C023B16C (TextCopy.c)
 *     GetContextHelpId @ 0x1C023D888 (GetContextHelpId.c)
 */

unsigned __int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  HDC v5; // r13
  struct tagWND *v6; // r14
  ULONG v7; // eax
  unsigned __int64 result; // rax
  unsigned int v9; // r8d
  int v10; // eax
  int v11; // r8d
  _WORD *v12; // rax
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // cl
  ULONG_PTR v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  struct tagHOTKEYSTRUCT **v28; // rax
  int v29; // edi
  unsigned __int64 v30; // rax
  int v31; // edi
  int ContextHelpId; // eax
  ULONG_PTR v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct tagBWL *v38; // rax
  __int64 v39; // rdx
  struct tagBWL *v40; // r14
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  ULONG_PTR v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rdx
  ULONG_PTR v50; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v52; // rdx
  HDC v53; // rax
  HDC v54; // rbx
  __int16 v55; // di
  _DWORD *v56; // rax
  _BYTE *v57; // rdx
  int v58; // r8d
  __int64 v59; // rbx
  __int64 v60; // rax
  int v61; // r8d
  struct tagWND *Host; // rax
  struct tagWND *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  HDC DCEx; // rbx
  int NCHit; // eax
  int v68; // eax
  unsigned int v69; // esi
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rax
  struct tagWND *v73; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 TopLevelWindow; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ecx
  ULONG_PTR NonChildAncestor; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rcx
  int v84; // eax
  __int64 v85; // r10
  unsigned __int64 v86; // rdx
  __int16 v87; // dx
  int v88; // eax
  int v89; // eax
  int v90; // r9d
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rbx
  struct tagPROCESSINFO *v99; // rax
  unsigned int v100; // edx
  int v101; // r8d
  unsigned __int64 v102; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rbx
  int v107; // eax
  __int16 v108; // bx
  unsigned __int16 v109; // bx
  __int64 v110; // rbx
  __int64 v111; // rax
  ULONG_PTR v112; // rcx
  __int64 SysMenu; // rax
  __int64 v114; // r13
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned int FocusDirection; // eax
  int v119; // ebx
  __int64 v120; // rcx
  __int64 v121; // rcx
  struct tagPROCESSINFO *v122; // [rsp+50h] [rbp-138h]
  struct tagPROCESSINFO *v123; // [rsp+50h] [rbp-138h]
  struct tagPROCESSINFO *v124; // [rsp+50h] [rbp-138h]
  unsigned __int64 v125; // [rsp+58h] [rbp-130h] BYREF
  ULONG BytesInMultiByteString; // [rsp+60h] [rbp-128h] BYREF
  __int64 v127; // [rsp+68h] [rbp-120h] BYREF
  __int64 v128; // [rsp+70h] [rbp-118h]
  __int64 v129; // [rsp+80h] [rbp-108h] BYREF
  ULONG_PTR v130; // [rsp+88h] [rbp-100h]
  _QWORD v131[3]; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v132[3]; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD v133[3]; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v134[3]; // [rsp+E8h] [rbp-A0h] BYREF
  _DWORD v135[12]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v136; // [rsp+130h] [rbp-58h] BYREF
  __int64 v137; // [rsp+138h] [rbp-50h]
  int v138; // [rsp+140h] [rbp-48h]

  v4 = a4;
  v5 = (HDC)a3;
  v6 = a1;
  v125 = (unsigned __int64)a1;
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
            xxxSysCommand((ULONG_PTR)a1);
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
                    || (v83 = *(_QWORD *)(gptiCurrent + 408LL), v84 = *(_DWORD *)(v83 + 380), (v84 & 8) != 0) )
                  {
                    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= 0xFFFFFFF3;
                  }
                  else
                  {
                    *(_DWORD *)(v83 + 380) = v84 | 8;
                    xxxDrawMenuBarUnderlines(v6, 1LL);
                  }
                }
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x10u;
                xxxDWP_ProcessVirtKey((int)v5);
                return 0LL;
              }
              if ( a3 != 121 )
                return 0LL;
              v65 = *(_QWORD *)(gptiCurrent + 408LL);
LABEL_281:
              *(_DWORD *)(v65 + 380) |= 0x10u;
              if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*((_BYTE *)v6 + 61) & 2) == 0 )
                return 0LL;
              goto LABEL_356;
            }
            if ( (_DWORD)a2 != 261 )
            {
              if ( (_DWORD)a2 == 262 )
              {
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= 0xFFFFFFF3;
                if ( a3 == 13 && (*((_BYTE *)a1 + 71) & 0x20) != 0 )
                {
                  a4 = 0LL;
                  a3 = 61728LL;
                  v64 = 274LL;
                }
                else
                {
                  if ( (a4 & 0x20000000) == 0 || !a3 )
                  {
                    if ( a3 != 27 )
                      xxxMessageBeep(0LL);
                    return 0LL;
                  }
                  if ( a3 == 9 || a3 == 27 )
                    return 0LL;
                  if ( a3 != 32 )
                    goto LABEL_356;
                  if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
                  {
                    v70 = *((_QWORD *)a1 + 13);
                    v127 = *(_QWORD *)(gptiCurrent + 392LL);
                    *(_QWORD *)(gptiCurrent + 392LL) = &v127;
                    v128 = v70;
                    _InterlockedAdd((volatile signed __int32 *)(v70 + 8), 1u);
                    v49 = 262LL;
                    v48 = 32LL;
                    v50 = *((_QWORD *)v6 + 13);
LABEL_132:
                    xxxSendMessage(v50, v49, v48, v4);
LABEL_384:
                    ThreadUnlock1(v19, v18);
                    return 0LL;
                  }
                  v71 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
                  if ( v71 && (unsigned int)(*(_DWORD *)(v71 + 320) - 8) <= 3 )
                  {
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 33LL, *(_QWORD *)v71);
                    return 0LL;
                  }
                  v72 = *(_QWORD *)(gptiCurrent + 408LL);
                  v73 = *(struct tagWND **)(v72 + 120);
                  if ( !v73 || !(unsigned int)IsCompositionInputWindow(*(struct tagWND **)(v72 + 120)) )
                    goto LABEL_356;
                  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v73);
                  if ( (unsigned int)CoreWindowProp::IsComponent(v73) )
                    CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHost(v73);
                  if ( !CompositionInputWindowUIOwner )
                    return 0LL;
                  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                  if ( !TopLevelWindow )
                    return 0LL;
                  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v133[0] = *(_QWORD *)(ThreadWin32Thread + 392);
                  *(_QWORD *)(ThreadWin32Thread + 392) = v133;
                  v133[1] = TopLevelWindow;
                  _InterlockedAdd((volatile signed __int32 *)(TopLevelWindow + 8), 1u);
                  xxxSetForegroundWindow2((struct tagWND *)TopLevelWindow);
                  if ( !ThreadUnlock1(v78, v77) )
                    return 0LL;
                  v64 = 274LL;
                  a4 = 32LL;
                  a3 = 61696LL;
                  a1 = (struct tagWND *)TopLevelWindow;
                }
              }
              else
              {
                if ( (_DWORD)a2 != 265 || a3 == 0xFFFF )
                  return 0LL;
                v64 = 258LL;
              }
LABEL_236:
              PostMessage(a1, v64, a3, a4);
              return 0LL;
            }
          }
          else if ( (_DWORD)a2 != 257 )
          {
            if ( (_DWORD)a2 != 164 )
            {
              if ( (_DWORD)a2 != 172 )
              {
                if ( (_DWORD)a2 == 174 )
                {
                  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
                  xxxDrawCaptionBar((__int64)v6, DCEx, (int)v5);
                  _ReleaseDC(DCEx);
                  return 0LL;
                }
                if ( (_DWORD)a2 == 175 )
                {
                  xxxDrawWindowFrame(a1, (HDC)a3, a4);
                  return 0LL;
                }
                if ( (_DWORD)a2 != 256 )
                  return 0LL;
                if ( a3 == 27 )
                {
                  if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
                    return 0LL;
                  Host = CoreWindowProp::GetHost(v6);
                  if ( !Host )
                    return 0LL;
                  v63 = (struct tagWND *)GetTopLevelWindow((__int64)Host);
                  if ( !v63 )
                    return 0LL;
                  a4 = v4;
                  v64 = 256LL;
                  a3 = 27LL;
                  a1 = v63;
                  goto LABEL_236;
                }
                if ( a3 != 121 )
                  return 0LL;
                v65 = *(_QWORD *)(gptiCurrent + 408LL);
                goto LABEL_281;
              }
LABEL_366:
              v108 = 0;
              if ( WORD1(a3) == 1 )
              {
                v108 = 1;
              }
              else if ( WORD1(a3) == 2 )
              {
                v108 = 2;
                goto LABEL_371;
              }
              if ( !v108 )
                return 0LL;
LABEL_371:
              v109 = v108 | 0x8000;
              if ( (_DWORD)a2 != 524 )
                LOWORD(v5) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 408LL));
              xxxSendMessage(v6, 793LL, *(_QWORD *)v6, (unsigned __int16)v5 | (unsigned __int64)(v109 << 16));
              return 0LL;
            }
            memset(v135, 0, sizeof(v135));
            NCHit = FindNCHit(v6, (unsigned int)v4);
            if ( (unsigned int)(NCHit - 6) <= 1 )
            {
              if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL), v6) )
                return 0LL;
            }
            else if ( (unsigned int)(NCHit - 2) > 1
                   || v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) )
            {
              return 0LL;
            }
            xxxSetCapture((__int64)v6);
            while ( !(unsigned int)xxxInternalGetMessage((int)v135, 0, 512, 526, 1, 0) || v135[2] != 517 )
            {
              if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL)
                || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
              {
                return 0LL;
              }
            }
            xxxReleaseCapture();
            v68 = FindNCHit(v6, LOWORD(v135[9]) | (LOWORD(v135[10]) << 16));
            if ( ((v68 - 2) & 0xFFFFFFFA) != 0 )
              return 0LL;
            if ( (*((_BYTE *)v6 + 306) & 0x40) != 0 )
            {
              if ( v68 == 2 )
                goto LABEL_399;
              if ( v68 == 3 )
              {
LABEL_224:
                v69 = 61536;
LABEL_400:
                SysMenu = xxxGetSysMenu(v6, 1);
                v114 = SysMenu;
                if ( !SysMenu )
                  return 0LL;
                if ( gihmodUserApiHook >= 0 )
                  MNClearCachedPopupSizes(SysMenu);
                SetMenuDefaultItem(v114, v69, 0);
                PostShellHookMessagesEx(9u, *(_QWORD *)v6, 0LL);
                v115 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v134[0] = *(_QWORD *)(v115 + 392);
                *(_QWORD *)(v115 + 392) = v134;
                v134[1] = v114;
                _InterlockedAdd((volatile signed __int32 *)(v114 + 8), 1u);
                if ( v4 == 0xFFFFFFFFLL )
                {
                  v19 = gpsi;
                  if ( (*(_DWORD *)(gpsi + 2104LL) & 8) != 0 )
                  {
                    v137 = 0LL;
                    v138 = 0;
                    v136 = 20LL;
                    if ( (unsigned int)xxxSendMinRectMessages(v6, (char *)&v136 + 4) )
                      xxxTrackPopupMenuEx(v114, 576, SHIDWORD(v136), v137, v6, (__int64)&v136);
                  }
                }
                else
                {
                  xxxTrackPopupMenuEx(v114, 514, (__int16)v4, SWORD1(v4), v6, 0LL);
                }
                goto LABEL_384;
              }
            }
LABEL_356:
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((ULONG_PTR)v6, 0, 0, 0LL, 1, 0);
            return 0LL;
          }
          if ( a3 == 18
            && (v79 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL), (v79 & 0x80u) == 0)
            && (v79 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) & 0x10) != 0 )
          {
            NonChildAncestor = GetNonChildAncestor((__int64)v6);
            if ( gspwndFullScreen != NonChildAncestor )
            {
              v129 = *(_QWORD *)(gptiCurrent + 392LL);
              *(_QWORD *)(gptiCurrent + 392LL) = &v129;
              v130 = NonChildAncestor;
              if ( NonChildAncestor )
                _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
              if ( v5 == (HDC)121 )
                xxxDrawMenuBarUnderlines(v6, 1LL);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(NonChildAncestor, 0, 0, 0LL, 1, 0);
              ThreadUnlock1(v82, v81);
            }
          }
          if ( v5 == (HDC)18 )
          {
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines(v6, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= 0xFFFFFFE3;
          return 0LL;
        }
        if ( (unsigned int)a2 <= 0x128 )
        {
          switch ( (_DWORD)a2 )
          {
            case 0x128:
              return xxxDWP_UpdateUIState((__int64)a1, a3, a4);
            case 0x119:
              if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
                return 0LL;
              v97 = *((_QWORD *)a1 + 13);
              v98 = *(_QWORD *)(*(_QWORD *)(v97 + 16) + 400LL);
              v99 = *(struct tagPROCESSINFO **)(gptiCurrent + 400LL);
              v124 = v99;
              if ( (struct tagPROCESSINFO *)v98 != v99
                && !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                                    v99,
                                    (struct tagPROCESSINFO *)v98,
                                    (struct tagWND *)v97,
                                    0x119u,
                                    (unsigned __int64)v5,
                                    a4,
                                    1) )
              {
                if ( *(_QWORD *)v98 == gpepCSRSS )
                {
                  v100 = 0x2000;
                  v101 = 0;
                }
                else
                {
                  v100 = *(_DWORD *)(v98 + 832);
                  v101 = *(_DWORD *)(v98 + 836);
                }
                v102 = *((_QWORD *)v124 + 104);
                if ( gbEnforceUIPI )
                {
                  if ( (unsigned int)v102 <= v100 )
                  {
                    if ( (_DWORD)v102 != v100
                      || (v104 = HIDWORD(v102), (_DWORD)v104 != v101) && (_DWORD)v104 != -1 && v101 != -1 )
                    {
                      EtwTraceUIPIMsgError(v124, v98, 281LL, v5, v4);
                      UserSetLastError(5LL, v105);
                      MSGSQMAddMessage(v124, (struct tagPROCESSINFO *)v98, v4, 1, 0);
                      return 0LL;
                    }
                  }
                }
                MSGSQMAddMessage(v124, (struct tagPROCESSINFO *)v98, v4, 1, gbEnforceUIPI != 0 ? 5 : 1);
              }
              v95 = *((_QWORD *)v6 + 13);
              v96 = W32GetThreadWin32Thread(KeGetCurrentThread());
              v94 = 281LL;
              break;
            case 0x11A:
              if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
                return 0LL;
              v95 = *((_QWORD *)a1 + 13);
              v96 = W32GetThreadWin32Thread(KeGetCurrentThread());
              v94 = 282LL;
              break;
            case 0x127:
              LOWORD(v85) = a3;
              v125 = (unsigned __int16)a3;
              v86 = a3 >> 16;
              v123 = (struct tagPROCESSINFO *)(a3 >> 16);
              if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
                return 0LL;
              if ( (_WORD)a3 == 3 )
              {
                v87 = 0;
                LOWORD(v123) = 0;
                if ( (*gpsi & 0x80u) == 0 )
                {
                  v88 = *(_DWORD *)(gpsi + 9980LL);
                  if ( (v88 & 0x20) == 0 && v88 < 0 )
                  {
                    if ( (GetAppCompatFlags2(0x400u) & 2) == 0 )
                    {
                      v85 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                      v87 = 3;
                      v5 = (HDC)(v85 | 0x30000);
                      goto LABEL_306;
                    }
                    goto LABEL_303;
                  }
                }
              }
              else
              {
                if ( (*gpsi & 0x80u) == 0 )
                {
                  v89 = *(_DWORD *)(gpsi + 9980LL);
                  if ( (v89 & 0x20) == 0 && v89 < 0 )
                  {
                    if ( (GetAppCompatFlags2(0x400u) & 2) == 0 )
                    {
LABEL_303:
                      LOWORD(v85) = v125;
                      v87 = (__int16)v123;
                      goto LABEL_306;
                    }
                    LOWORD(v86) = (_WORD)v123;
                    LOWORD(v85) = v125;
                  }
                }
                v87 = v86 & 0xFFFC;
              }
LABEL_306:
              if ( !v87 )
                return 0LL;
              if ( (v87 & 1) != 0 )
                v90 = ((_WORD)v85 == 1) ^ (*((unsigned __int8 *)v6 + 67) >> 7);
              else
                v90 = 0;
              if ( (v87 & 2) != 0 )
                v90 |= ((_WORD)v85 == 1) ^ (*((unsigned __int8 *)v6 + 67) >> 6) & 1;
              if ( (v87 & 4) != 0 )
                v90 |= ((_WORD)v85 == 1) ^ (*((unsigned __int8 *)v6 + 67) >> 2) & 1;
              if ( !v90 )
                return 0LL;
              if ( (*((_BYTE *)v6 + 71) & 0xC0) != 0x40 )
                return xxxSendMessage(v6, 296LL, v5, 0LL);
              v91 = *((_QWORD *)v6 + 13);
              v92 = W32GetThreadWin32Thread(KeGetCurrentThread());
              v127 = *(_QWORD *)(v92 + 392);
              *(_QWORD *)(v92 + 392) = &v127;
              v128 = v91;
              _InterlockedAdd((volatile signed __int32 *)(v91 + 8), 1u);
              v93 = 0LL;
              v94 = 295LL;
              goto LABEL_428;
            default:
              return 0LL;
          }
LABEL_427:
          v127 = *(_QWORD *)(v96 + 392);
          *(_QWORD *)(v96 + 392) = &v127;
          v128 = v95;
          _InterlockedAdd((volatile signed __int32 *)(v95 + 8), 1u);
          v93 = v4;
LABEL_428:
          v35 = xxxSendMessage(*((_QWORD *)v6 + 13), v94, v5, v93);
          goto LABEL_429;
        }
        if ( (_DWORD)a2 == 297 )
          return *((_BYTE *)a1 + 67) & 4 | ((((unsigned __int64)*((unsigned __int8 *)a1 + 67) >> 2) | *((_BYTE *)a1 + 67) & 0x40) >> 5);
        if ( (_DWORD)a2 != 306 )
        {
          if ( (unsigned int)a2 <= 0x132 )
            return 0LL;
          if ( (unsigned int)a2 > 0x134 && (*((_BYTE *)a1 + 61) & 2) != 0 )
          {
            v106 = 15LL;
            goto LABEL_364;
          }
LABEL_359:
          v106 = 5LL;
          goto LABEL_364;
        }
      }
LABEL_357:
      if ( (*((_BYTE *)a1 + 61) & 2) != 0 )
      {
        v106 = 15LL;
        goto LABEL_364;
      }
      goto LABEL_359;
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
          || *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) != gpqForeground && !(unsigned int)xxxSetForegroundWindow(a1) )
        {
          return 0LL;
        }
        goto LABEL_399;
      }
      if ( (_DWORD)a2 != 793 )
      {
        if ( (_DWORD)a2 == 795 )
        {
          if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0 )
            return 0LL;
          LODWORD(result) = xxxLoadUserApiHook(gptiCurrent, a2);
        }
        else
        {
          if ( (_DWORD)a2 != 831 )
          {
            if ( (_DWORD)a2 == 841 && a3 )
            {
              v116 = *((_QWORD *)a1 + 13);
              v117 = v116 ? *(_QWORD *)(v116 + 16) : 0LL;
              if ( v117 && *(struct tagWND **)(v117 + 1360) == a1 )
              {
                FocusDirection = CoreWindowProp::GetFocusDirection();
                xxxSetFocus(v6, FocusDirection);
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
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
          && (((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) == 0
           || !(unsigned int)xxxCallHook(12LL, v5, v4, 10LL)) )
        {
          v119 = (*(_DWORD *)(gptiCurrent + 1184LL) >> 11) & 1;
          v125 = *(_QWORD *)(gptiCurrent + 1188LL);
          if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1352LL) == v6
            || (unsigned int)CoreWindowProp::IsComponent(v6) )
          {
            v120 = *(_QWORD *)(gptiCurrent + 488LL);
            if ( v120 )
            {
              v121 = *(_QWORD *)(v120 + 32);
              if ( v121 )
              {
                if ( (*(_DWORD *)(v121 + 1184) & 0x800) != 0 )
                {
                  v119 = 1;
                  v125 = *(_QWORD *)(v121 + 1188);
                }
              }
            }
          }
          PostShellHookMessagesEx(
            0xCu,
            v4,
            (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v125 & -(__int64)(v119 != 0)));
        }
        return 0LL;
      }
      v95 = *((_QWORD *)a1 + 13);
      v96 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v94 = 793LL;
      goto LABEL_427;
    }
    if ( (_DWORD)a2 == 576 )
    {
      if ( *(_QWORD *)(gptiCurrent + 1040LL) == a4 )
        *(_QWORD *)(gptiCurrent + 1040LL) = 0LL;
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
        v30 = (unsigned __int64)*((unsigned __int8 *)a1 + 64) >> 4;
        return v30 & 1;
      }
    }
    else
    {
      switch ( (_DWORD)a2 )
      {
        case 0x20C:
          goto LABEL_366;
        case 0x137:
          if ( *(_WORD *)(gpsi + 9972LL) < 8u
            || (v107 = *(_DWORD *)(gpsi + 4632LL), v107 != *(_DWORD *)(gpsi + 4552LL))
            || v107 == *(_DWORD *)(gpsi + 4572LL) )
          {
            GreSetBkColor((HDC)a3);
            GreSetTextColor(v5);
            return *(_QWORD *)(gpsi + 4928LL);
          }
          v106 = 20LL;
LABEL_364:
          GreSetBkColor((HDC)a3);
          GreSetTextColor(v5);
          return *(_QWORD *)(gpsi + 8 * v106 + 4680);
        case 0x138:
          goto LABEL_357;
        case 0x205:
          goto LABEL_356;
      }
      if ( (_DWORD)a2 != 522 )
        return 0LL;
    }
    if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
      return 0LL;
    v110 = *((_QWORD *)a1 + 13);
    v111 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v127 = *(_QWORD *)(v111 + 392);
    *(_QWORD *)(v111 + 392) = &v127;
    v128 = v110;
    _InterlockedAdd((volatile signed __int32 *)(v110 + 8), 1u);
    goto LABEL_383;
  }
  if ( (unsigned int)a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3);
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
            v31 = *((unsigned __int16 *)a1 + 104);
          else
            v31 = 0;
          ContextHelpId = GetContextHelpId();
          xxxSendHelpMessage((_DWORD)v6, 1, v31, *(_QWORD *)v6, ContextHelpId);
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
                  xxxAdjustSize(a1);
                break;
              case 'G':
                xxxHandleWindowPosChanged((ULONG_PTR)a1);
                break;
              case 'I':
                return SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
            }
            return 0LL;
          }
          LODWORD(result) = xxxClientShutdown(a1, a3);
          return (int)result;
        }
        v30 = (unsigned __int64)*((unsigned __int8 *)a1 + 56) >> 6;
        return v30 & 1;
      }
      if ( (_DWORD)a2 == 79 )
        return ValidateHwnd(a3) != 0;
      if ( (_DWORD)a2 != 80 )
      {
        if ( (_DWORD)a2 == 81 )
        {
          v38 = BuildHwndList(*((_QWORD *)a1 + 14), (struct tagWND *)2, 0LL);
          v40 = v38;
          if ( v38 )
          {
            v41 = (_QWORD *)((char *)v38 + 32);
            v42 = *((_QWORD *)v38 + 4);
            if ( v42 != 1 )
            {
              do
              {
                LOBYTE(v39) = 1;
                v122 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v42, v39);
                if ( v122 )
                {
                  v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v132[0] = *(_QWORD *)(v43 + 392);
                  *(_QWORD *)(v43 + 392) = v132;
                  v132[1] = v122;
                  _InterlockedAdd((volatile signed __int32 *)v122 + 2, 1u);
                  xxxSendMessage(v122, 81LL, v5, v4);
                  ThreadUnlock1(v45, v44);
                }
                v42 = *++v41;
              }
              while ( *v41 != 1LL );
            }
            FreeHwndList(v40);
          }
          return 0LL;
        }
        if ( (_DWORD)a2 == 83 )
        {
          v33 = (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 13) : *((_QWORD *)a1 + 15);
          if ( v33 && v33 != GetThreadDesktopWindow(0LL) )
          {
            v34 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v129 = *(_QWORD *)(v34 + 392);
            *(_QWORD *)(v34 + 392) = &v129;
            v130 = v33;
            _InterlockedAdd((volatile signed __int32 *)(v33 + 8), 1u);
            _InterlockedAdd(&glSendMessage, 1u);
            v35 = xxxSendTransformableMessageTimeout(v33, 0, 0, 0LL, 1, 1);
LABEL_429:
            v23 = v35;
            ThreadUnlock1(v37, v36);
            return v23;
          }
        }
        return 0LL;
      }
      v46 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
      if ( !v46 || (struct tagWND *)v46 == a1 || *(_WORD *)(*((_QWORD *)a1 + 21) + 8LL) == *(_WORD *)(gpsi + 888LL) )
      {
        ProcessWindowStation = GetProcessWindowStation(0LL);
        if ( !xxxActivateKeyboardLayout(ProcessWindowStation, v4, 256LL, v6) )
          UserSetLastError(1457LL, v52);
        return 0LL;
      }
      v47 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v129 = *(_QWORD *)(v47 + 392);
      *(_QWORD *)(v47 + 392) = &v129;
      v130 = v46;
      _InterlockedAdd((volatile signed __int32 *)(v46 + 8), 1u);
      v48 = (__int64)v5;
      v49 = 80LL;
      v50 = v46;
      goto LABEL_132;
    }
    if ( (_DWORD)a2 != 123 )
    {
      if ( (_DWORD)a2 == 127 )
        return DWP_GetIcon(a1, (unsigned int)a3);
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
            v53 = (HDC)_GetDCEx(v6, v5, 328833LL);
            v54 = v53;
            v55 = 0;
            if ( v53 )
            {
              if ( (*((_BYTE *)v6 + 56) & 0x40) != 0 )
                v55 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 408LL) == gpqForeground;
              xxxDrawWindowFrame(v6, v53, v55);
              _ReleaseDC(v54);
            }
            SetOrClrWF(0, v6, 0x180u, 1);
            return 0LL;
        }
        if ( (_DWORD)a2 != 134 )
        {
          if ( (_DWORD)a2 == 136 )
          {
            SetOrClrWF(0, a1, 0x280u, 1);
            xxxInternalDoSyncPaint((__int64)v6, (unsigned int)v5);
          }
          return 0LL;
        }
        xxxDWP_DoNCActivate((__int64)a1, (_WORD)a3 != 0, a4);
        return 1LL;
      }
      if ( (*((_BYTE *)a1 + 70) & 0x30) != 0 && !InitPwSB((__int64)a1) )
        return 0LL;
      if ( v4 )
      {
        v56 = (_DWORD *)(v4 + 80);
        if ( !*((_QWORD *)v6 + 3) || v4 == -80 || (v57 = *(_BYTE **)(v4 + 88)) == 0LL )
        {
          *((_DWORD *)v6 + 58) = 0;
          return 1LL;
        }
        if ( *(int *)(v4 + 84) >= 0 )
          goto LABEL_168;
        if ( *v56 && *v57 == 0xFF )
          return 1LL;
        if ( *(int *)(v4 + 84) >= 0 )
        {
LABEL_168:
          if ( *v56 >= 2u && *(_WORD *)v57 == 0xFFFF )
            return 1LL;
        }
      }
      SetOrClrWF(1, v6, 0x202u, 1);
      LODWORD(result) = DefSetText(v6, v4 + 80);
      return (int)result;
    }
    v58 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v58 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL), v6) )
        xxxDoScrollMenu(v6, 0LL, v61 - 6);
      return 0LL;
    }
    if ( (*((_BYTE *)v6 + 71) & 0xC0) == 0x40 )
    {
      v59 = *((_QWORD *)v6 + 13);
      v60 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v127 = *(_QWORD *)(v60 + 392);
      *(_QWORD *)(v60 + 392) = &v127;
      v128 = v59;
      _InterlockedAdd((volatile signed __int32 *)(v59 + 8), 1u);
LABEL_383:
      v112 = *((_QWORD *)v6 + 13);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v112, 0, 0, 0LL, 1, 1);
      goto LABEL_384;
    }
    if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) )
      return 0LL;
    if ( v58 != 2 )
    {
      if ( v58 != 3 )
      {
        if ( v4 == -1 && (*((_BYTE *)v6 + 61) & 2) == 0 )
          xxxSimulateShiftF10();
        return 0LL;
      }
      goto LABEL_224;
    }
LABEL_399:
    v69 = (*((_BYTE *)v6 + 71) & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_400;
  }
  if ( (_DWORD)a2 == 51 )
  {
    v28 = HotKeyHelper(a1);
    v29 = 0;
    if ( *v28 )
      return *((int *)*v28 + 2);
    return v29;
  }
  if ( (unsigned int)a2 > 0x18 )
  {
    if ( (unsigned int)a2 > 0x26 )
    {
      if ( (_DWORD)a2 == 39 )
      {
LABEL_87:
        LODWORD(result) = xxxDWP_EraseBkgnd((__int64)a1, a2, a3);
        return (int)result;
      }
      if ( (_DWORD)a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v27 = *(_DWORD *)(a4 + 12);
          if ( v27 == 4 || v27 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
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
      LODWORD(result) = DWP_SetHotKey(a1, a3);
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
          || (v22 = W32GetThreadWin32Thread(KeGetCurrentThread()),
              v129 = *(_QWORD *)(v22 + 392),
              *(_QWORD *)(v22 + 392) = &v129,
              v130 = v21,
              _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u),
              v23 = xxxSendMessage(v21, 33LL, v5, v4),
              ThreadUnlock1(v25, v24),
              !v23) )
        {
          if ( (_WORD)v4 != 2 )
            return 1LL;
          v26 = 3LL;
          if ( WORD1(v4) != 513 )
            return 1LL;
          return v26;
        }
        return v23;
      }
      LODWORD(result) = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
      return (int)result;
    }
    goto LABEL_359;
  }
  if ( (_DWORD)a2 == 24 )
  {
    if ( !(_WORD)a4 )
      return 0LL;
    v20 = *((_BYTE *)a1 + 71);
    if ( (((v20 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)v6 + 15) )
      return 0LL;
    if ( a3 )
    {
      if ( (v20 & 0x10) != 0 || (*((_BYTE *)v6 + 57) & 0x40) == 0 )
        return 0LL;
    }
    else if ( (v20 & 0x10) == 0 )
    {
      return 0LL;
    }
    SetOrClrWF(0, v6, 0x140u, 1);
    if ( !v5 )
      SetOrClrWF(1, v6, 0x140u, 1);
    xxxShowWindowEx(v6, v5 != 0LL ? 4 : 0, gdwPUDFlags & 0x10000);
    return 0LL;
  }
  if ( (unsigned int)a2 > 0xF )
  {
    if ( (_DWORD)a2 == 16 )
    {
      xxxDestroyWindow((volatile signed __int32 *)a1, a2, a3);
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
      v15 = CoreWindowProp::GetFocusDirection();
      xxxSetFocus(v6, v15);
    }
    if ( *((char *)v6 + 306) >= 0 )
      return 0LL;
    v16 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 1360LL);
    if ( !v16 )
      return 0LL;
    v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v131[0] = *(_QWORD *)(v17 + 392);
    *(_QWORD *)(v17 + 392) = v131;
    v131[1] = v16;
    _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
    xxxSendNotifyMessage(v16, 841LL, v5, 0LL, 0);
    goto LABEL_384;
  }
  if ( (_DWORD)a2 == 11 )
  {
    xxxDWP_SetRedraw(a1, a3 != 0);
    return 0LL;
  }
  if ( (_DWORD)a2 == 12 )
  {
    v13 = DefSetText(a1, a4);
    v14 = v13;
    if ( v13 )
    {
      xxxRedrawTitle(v6, 8u);
      xxxWindowEvent(0x800Cu, (volatile signed __int32 *)v6, 0LL, 0LL, 0);
    }
    return v14;
  }
  else
  {
    if ( (_DWORD)a2 != 13 )
    {
      if ( (_DWORD)a2 == 14 )
      {
        v7 = *((_DWORD *)a1 + 58);
        if ( v7 )
        {
          if ( !a4 )
            return v7 >> 1;
          RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 30), v7);
          return BytesInMultiByteString;
        }
      }
      return 0LL;
    }
    if ( !a3 )
      return 0LL;
    if ( *((_QWORD *)a1 + 30) )
      DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (char *)a1 + 232);
    v9 = *((_DWORD *)v6 + 58);
    if ( !v9 )
    {
      v12 = *(_WORD **)(v4 + 8);
      if ( *(int *)(v4 + 4) >= 0 )
        *v12 = 0;
      else
        *(_BYTE *)v12 = 0;
      return 0LL;
    }
    v10 = *(_DWORD *)(v4 + 4);
    if ( v10 >= 0 )
    {
      v11 = TextCopy((char *)v6 + 232, *(_QWORD *)(v4 + 8), (unsigned int)v5);
      *(_DWORD *)v4 = 2 * v11;
    }
    else
    {
      v11 = WCSToMBEx(0LL, *((_QWORD *)v6 + 30), v9 >> 1, v4 + 8, (v10 & 0x7FFFFFFFu) - 1);
      *(_BYTE *)(v11 + *(_QWORD *)(v4 + 8)) = 0;
      *(_DWORD *)v4 = v11;
    }
    return v11;
  }
}

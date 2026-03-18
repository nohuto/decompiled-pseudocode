/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0003688 (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0005AC0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     SetMiPPromotion @ 0x1C0007104 (SetMiPPromotion.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000718C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007878 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C00080C0 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0049220 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0049448 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0061C80 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0062420 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00B2104 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00B5B18 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     FreeQEntry @ 0x1C00C9AFC (FreeQEntry.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     GetAppImeCompatFlags @ 0x1C00CA6F4 (GetAppImeCompatFlags.c)
 *     xxxImmProcessKey @ 0x1C00CA748 (xxxImmProcessKey.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CAD98 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CADD0 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     IsInsideMenuLoop @ 0x1C00CAF40 (IsInsideMenuLoop.c)
 *     ThreadLockExchangeAlways @ 0x1C00CB9BC (ThreadLockExchangeAlways.c)
 *     LockExchangeW32Thread @ 0x1C00CB9E0 (LockExchangeW32Thread.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00CBF64 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     PostMove @ 0x1C00CC9B8 (PostMove.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     IsShellThreadMiPEnabled @ 0x1C00CCD80 (IsShellThreadMiPEnabled.c)
 *     IsThreadDesktopComposed @ 0x1C00CCDD0 (IsThreadDesktopComposed.c)
 *     GetMouseKeyFlags @ 0x1C00CCDF4 (GetMouseKeyFlags.c)
 *     IsMouseInPointerActive @ 0x1C00CCE6C (IsMouseInPointerActive.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00CCEC8 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CCF90 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00CD08C (TransferWakeBit.c)
 *     CheckPwndFilter @ 0x1C00CD134 (CheckPwndFilter.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E11E8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest @ 0x1C00FD404 (xxxWindowHitTest.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01065A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     xxxCallMouseHook @ 0x1C010DAD8 (xxxCallMouseHook.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0116470 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01A02A4 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01A08C4 (IsWheelTargetDesktopApp.c)
 *     DeferMessagesOnQueue @ 0x1C01B212C (DeferMessagesOnQueue.c)
 *     FreePointerMessageParams @ 0x1C01BAE2C (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01BC3BC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C0630 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01C6A38 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01E6F24 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNItemHitTest @ 0x1C0203EA8 (MNItemHitTest.c)
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C020DC48 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C020DE70 (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020E008 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021A328 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C021FBA0 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C0225268 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  int v10; // r15d
  __int16 v11; // cx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r14d
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 Valid; // rcx
  unsigned int v31; // eax
  __int64 *v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rbx
  int v37; // r14d
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 *v42; // rsi
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // rcx
  __int64 v51; // rbx
  _QWORD *v52; // rdx
  int v53; // eax
  unsigned int v54; // edi
  unsigned int v55; // esi
  int v56; // esi
  __int64 v57; // rcx
  int v58; // r15d
  __int64 v59; // r11
  __int64 v60; // rdi
  int v61; // r12d
  unsigned int v62; // edx
  __int16 *v63; // rcx
  char v64; // al
  bool v65; // zf
  bool v66; // zf
  char v67; // r8
  int v68; // ebx
  __int64 v69; // rbx
  __int64 v70; // rax
  bool v71; // zf
  struct tagWND *v72; // rax
  __int64 v73; // rax
  _BOOL8 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned int v77; // ecx
  unsigned int v78; // edx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // r10
  __int64 v82; // r13
  __int64 v83; // rdi
  __int64 v84; // rcx
  __int64 *v85; // rbx
  int v86; // r12d
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rsi
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rcx
  _DWORD *v94; // rcx
  __int64 v95; // rdx
  char v96; // al
  bool v97; // zf
  __int64 v98; // rax
  __int64 *v99; // rbx
  __int64 v100; // rcx
  BOOL v101; // edi
  __int64 v102; // rcx
  __int64 *v103; // rcx
  int v104; // eax
  int v105; // edi
  int v106; // eax
  __int64 v107; // rbx
  unsigned __int8 v108; // r8
  struct tagQMSG *v109; // r14
  struct tagQMSG *v110; // rbx
  __int64 v111; // r10
  __int64 v112; // rcx
  unsigned __int16 v113; // r9
  int v114; // eax
  char v115; // si
  __int64 v116; // rdi
  int v117; // edi
  KeyboardInputTelemetry *v118; // rcx
  __int64 v119; // rbx
  int v120; // edx
  int v121; // eax
  KeyboardInputTelemetry *v122; // rcx
  unsigned int *v123; // rbx
  int v124; // ebx
  int v125; // ecx
  __int64 v126; // rax
  __int64 v127; // rax
  int v128; // ebx
  __int64 *v129; // rdi
  __int64 v130; // rcx
  __int64 *v131; // rcx
  unsigned int v132; // edi
  unsigned int v133; // ebx
  InteractiveControlManager *v134; // rax
  int v135; // ecx
  int v136; // ecx
  __int64 ThreadDesktopWindow; // rax
  HWND v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  int v142; // ebx
  int v143; // eax
  _DWORD *v144; // rax
  _DWORD *v145; // rax
  unsigned int v146; // eax
  char v147; // al
  unsigned __int64 v148; // rsi
  int v149; // ebx
  int v150; // r8d
  __int64 v151; // rax
  struct tagWND *v152; // rcx
  int v153; // r8d
  int v154; // eax
  unsigned __int64 v155; // rdx
  __int64 v156; // rcx
  HWND v157; // rbx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // rax
  int v163; // r12d
  __int64 v164; // rcx
  __int64 v165; // rdx
  unsigned __int64 v166; // rax
  unsigned __int64 v167; // rax
  struct tagPOINT v168; // r8
  unsigned __int64 v169; // rbx
  int v170; // edx
  int v171; // edx
  int v172; // eax
  unsigned __int16 v173; // di
  __int64 v174; // rsi
  int v175; // eax
  unsigned __int64 v176; // rcx
  unsigned __int64 v177; // rcx
  unsigned __int64 v178; // rcx
  int v179; // edx
  __int64 v180; // r8
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // r11
  int v185; // r10d
  int v186; // r9d
  int v187; // kr04_4
  int v188; // edx
  __int64 v189; // rcx
  int v190; // eax
  int v191; // ecx
  unsigned int TouchTimeFromCPLValue; // ecx
  __int64 v193; // rdx
  struct tagQMSG *v194; // rbx
  int v195; // eax
  int v196; // esi
  int v197; // ebx
  __int64 v198; // rcx
  struct tagQMSG *v199; // r11
  _DWORD *v200; // rax
  _DWORD *v201; // rax
  unsigned __int64 v202; // r10
  __int64 v203; // rax
  ULONG_PTR v204; // rdi
  _QWORD *v205; // rbx
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rax
  int v210; // ebx
  int v211; // r14d
  const struct tagQMSG *v212; // r8
  int v213; // eax
  __int64 v214; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  bool v216; // si
  __int64 v217; // rcx
  _QWORD *v218; // r14
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *TopLevelHost; // rax
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // rdx
  __int64 v224; // rcx
  BOOL v225; // eax
  __int64 MouseKeyFlags; // r9
  __int64 v227; // r10
  int v228; // r9d
  int v229; // r10d
  int v230; // ebx
  int v231; // ebx
  int v232; // ebx
  int v233; // ebx
  __int64 v234; // rax
  __int64 v235; // rax
  __int64 v236; // r12
  int v237; // r14d
  __int64 v238; // rcx
  __int64 v239; // rsi
  int v240; // ebx
  unsigned __int64 v241; // rax
  int v242; // edx
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // r15
  _QWORD *v246; // rax
  unsigned int v247; // esi
  __int16 v248; // dx
  __int64 v249; // r8
  _DWORD *v250; // rax
  __int64 v251; // rax
  int v252; // eax
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r15
  __int16 v256; // dx
  __int64 v257; // r8
  __int64 v258; // rbx
  __int64 *v259; // rax
  __int64 v260; // rbx
  __int64 *v261; // rax
  __int64 v262; // rbx
  __int64 *v263; // rax
  __int64 v264; // rbx
  __int64 *v265; // rax
  __int64 *v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  unsigned int v269; // [rsp+70h] [rbp-6E8h] BYREF
  int v270; // [rsp+74h] [rbp-6E4h] BYREF
  int v271; // [rsp+78h] [rbp-6E0h]
  BOOL v272; // [rsp+7Ch] [rbp-6DCh]
  int v273; // [rsp+80h] [rbp-6D8h]
  struct tagQMSG *v274; // [rsp+88h] [rbp-6D0h]
  int v275; // [rsp+90h] [rbp-6C8h] BYREF
  struct tagPOINT v276; // [rsp+98h] [rbp-6C0h] BYREF
  __int64 v277; // [rsp+A0h] [rbp-6B8h] BYREF
  int v278; // [rsp+A8h] [rbp-6B0h] BYREF
  __int64 v279; // [rsp+B0h] [rbp-6A8h] BYREF
  int v280; // [rsp+B8h] [rbp-6A0h]
  __int64 v281; // [rsp+C0h] [rbp-698h] BYREF
  unsigned int v282; // [rsp+C8h] [rbp-690h]
  int v283; // [rsp+CCh] [rbp-68Ch]
  __int128 v284; // [rsp+D0h] [rbp-688h]
  int v285; // [rsp+E0h] [rbp-678h]
  int v286; // [rsp+E4h] [rbp-674h]
  __int64 v287; // [rsp+E8h] [rbp-670h]
  int v288; // [rsp+F0h] [rbp-668h]
  struct tagQMSG *v289; // [rsp+F8h] [rbp-660h]
  __int128 v290; // [rsp+100h] [rbp-658h] BYREF
  __int128 v291; // [rsp+110h] [rbp-648h] BYREF
  __int128 v292; // [rsp+120h] [rbp-638h]
  __int128 v293; // [rsp+130h] [rbp-628h]
  __int128 v294; // [rsp+140h] [rbp-618h]
  __int128 v295; // [rsp+150h] [rbp-608h] BYREF
  __int128 v296; // [rsp+160h] [rbp-5F8h]
  __int128 v297; // [rsp+170h] [rbp-5E8h]
  __int128 v298; // [rsp+180h] [rbp-5D8h]
  __int128 v299; // [rsp+190h] [rbp-5C8h]
  int v300[2]; // [rsp+1A0h] [rbp-5B8h]
  __int64 v301; // [rsp+1A8h] [rbp-5B0h]
  __int64 v302; // [rsp+1B0h] [rbp-5A8h]
  __int64 v303; // [rsp+1B8h] [rbp-5A0h]
  int v304; // [rsp+1C0h] [rbp-598h]
  int v305; // [rsp+1C4h] [rbp-594h]
  __int64 v306; // [rsp+1C8h] [rbp-590h]
  __int64 v307; // [rsp+1D0h] [rbp-588h] BYREF
  __int64 v308; // [rsp+1D8h] [rbp-580h]
  DWORD DefaultLocaleId; // [rsp+1E8h] [rbp-570h] BYREF
  int v310; // [rsp+1ECh] [rbp-56Ch]
  struct tagPOINT v311; // [rsp+1F0h] [rbp-568h] BYREF
  __int64 v312; // [rsp+1F8h] [rbp-560h]
  int v313; // [rsp+200h] [rbp-558h]
  __int64 v314; // [rsp+208h] [rbp-550h]
  int v315; // [rsp+210h] [rbp-548h]
  __int64 v316; // [rsp+218h] [rbp-540h] BYREF
  __int64 v317; // [rsp+220h] [rbp-538h]
  void (*v318)(void); // [rsp+228h] [rbp-530h]
  __int64 v319; // [rsp+230h] [rbp-528h] BYREF
  __int64 v320; // [rsp+238h] [rbp-520h]
  void (*v321)(void); // [rsp+240h] [rbp-518h]
  struct tagMENUSTATE *v322; // [rsp+248h] [rbp-510h] BYREF
  __int64 v323; // [rsp+250h] [rbp-508h] BYREF
  __int64 v324; // [rsp+258h] [rbp-500h]
  __int64 v325; // [rsp+268h] [rbp-4F0h] BYREF
  __int64 v326; // [rsp+270h] [rbp-4E8h]
  void (*v327)(void); // [rsp+278h] [rbp-4E0h]
  __int64 v328; // [rsp+280h] [rbp-4D8h] BYREF
  __int64 v329; // [rsp+288h] [rbp-4D0h]
  void (*v330)(void); // [rsp+290h] [rbp-4C8h]
  __int64 v331; // [rsp+298h] [rbp-4C0h] BYREF
  __int64 v332; // [rsp+2A0h] [rbp-4B8h]
  void (*v333)(void); // [rsp+2A8h] [rbp-4B0h]
  struct InteractiveControlDevice *v334; // [rsp+2B0h] [rbp-4A8h] BYREF
  struct InteractiveControlInput *v335; // [rsp+2B8h] [rbp-4A0h] BYREF
  _DWORD v336[6]; // [rsp+2C0h] [rbp-498h] BYREF
  unsigned int v337; // [rsp+2D8h] [rbp-480h] BYREF
  __int64 v338; // [rsp+2E0h] [rbp-478h]
  unsigned __int64 v339; // [rsp+2E8h] [rbp-470h]
  int *v340; // [rsp+2F0h] [rbp-468h]
  int v341; // [rsp+2F8h] [rbp-460h]
  int v342; // [rsp+2FCh] [rbp-45Ch]
  char *v343; // [rsp+300h] [rbp-458h]
  int v344; // [rsp+308h] [rbp-450h]
  int v345; // [rsp+310h] [rbp-448h] BYREF
  __int128 v346; // [rsp+318h] [rbp-440h]
  int *v347; // [rsp+328h] [rbp-430h]
  __int64 v348; // [rsp+330h] [rbp-428h]
  __int64 v349; // [rsp+338h] [rbp-420h]
  int v350; // [rsp+340h] [rbp-418h]
  __int64 v351; // [rsp+348h] [rbp-410h] BYREF
  int v352; // [rsp+350h] [rbp-408h]
  __int64 v353; // [rsp+358h] [rbp-400h]
  __int64 v354; // [rsp+360h] [rbp-3F8h]
  __int64 v355; // [rsp+368h] [rbp-3F0h]
  __int64 v356; // [rsp+370h] [rbp-3E8h]
  __int128 v357; // [rsp+388h] [rbp-3D0h]
  __int128 v358; // [rsp+398h] [rbp-3C0h]
  __int128 v359; // [rsp+3A8h] [rbp-3B0h]
  _QWORD v360[3]; // [rsp+3B8h] [rbp-3A0h] BYREF
  _QWORD v361[3]; // [rsp+3D0h] [rbp-388h] BYREF
  __int128 v362; // [rsp+3E8h] [rbp-370h]
  __int128 v363; // [rsp+400h] [rbp-358h]
  __int128 v364; // [rsp+410h] [rbp-348h]
  __int128 v365; // [rsp+420h] [rbp-338h]
  __int128 v366; // [rsp+430h] [rbp-328h]
  __int128 v367; // [rsp+440h] [rbp-318h]
  __int128 v368; // [rsp+450h] [rbp-308h]
  __int128 v369; // [rsp+460h] [rbp-2F8h]
  int v370[2]; // [rsp+480h] [rbp-2D8h]
  __int64 v371; // [rsp+488h] [rbp-2D0h]
  __int64 v372; // [rsp+490h] [rbp-2C8h]
  __int64 v373; // [rsp+498h] [rbp-2C0h]
  __int128 v374; // [rsp+4A0h] [rbp-2B8h] BYREF
  __int128 v375; // [rsp+4B0h] [rbp-2A8h]
  __int128 v376; // [rsp+4C0h] [rbp-298h]
  __int128 v377; // [rsp+4D0h] [rbp-288h]
  __int128 v378; // [rsp+4E0h] [rbp-278h]
  __int128 v379; // [rsp+4F0h] [rbp-268h]
  __int128 v380; // [rsp+500h] [rbp-258h]
  __int128 v381; // [rsp+510h] [rbp-248h]
  __int128 v382; // [rsp+520h] [rbp-238h]
  __int128 v383; // [rsp+530h] [rbp-228h]
  __int128 v384; // [rsp+540h] [rbp-218h] BYREF
  __int128 v385; // [rsp+550h] [rbp-208h]
  __int128 v386; // [rsp+560h] [rbp-1F8h]
  __int128 v387; // [rsp+570h] [rbp-1E8h]
  __int128 v388; // [rsp+580h] [rbp-1D8h]
  __int128 v389; // [rsp+590h] [rbp-1C8h]
  __int128 v390; // [rsp+5A0h] [rbp-1B8h]
  __int128 v391; // [rsp+5B0h] [rbp-1A8h]
  __int128 v392; // [rsp+5C0h] [rbp-198h]
  __int128 v393; // [rsp+5D0h] [rbp-188h]
  _OWORD v394[10]; // [rsp+5E0h] [rbp-178h] BYREF
  char v395[24]; // [rsp+680h] [rbp-D8h] BYREF
  int v396; // [rsp+698h] [rbp-C0h]

  v282 = a4;
  *(_QWORD *)v300 = a3;
  v9 = a1;
  v277 = 0LL;
  v270 = a6 & 1;
  v286 = 0;
  v305 = 0;
  v10 = 0;
  v273 = 0;
  LOBYTE(v8) = 0;
  v272 = v8;
  v289 = 0LL;
  *a8 = 0LL;
  v11 = a7;
  if ( a7 == 0x2000 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
      return 0LL;
    }
    v11 = 0x2000;
  }
  v288 = 0;
  v280 = 0;
  v271 = 0;
  v12 = *(_QWORD *)(v9 + 384);
  if ( !*(_QWORD *)(v12 + 32) )
  {
    *(_QWORD *)(v12 + 32) = v9;
    **(_DWORD **)(v9 + 400) |= 1u;
  }
  if ( (v11 & 0x1C07) != 0 )
  {
    v13 = *(_QWORD *)(v9 + 384);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 340) &= ~0x400u;
    else
      *(_DWORD *)(v13 + 340) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 384) + 32LL) != v9 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v287 = 0LL;
  v306 = 0LL;
  v301 = 0LL;
  v303 = 0LL;
  v302 = 0LL;
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  v319 = *(_QWORD *)(v15 + 16);
  *(_QWORD *)(v15 + 16) = &v319;
  v320 = 0LL;
  v321 = (void (*)(void))DereferenceW32Thread;
  v17 = 0LL;
  v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v18 )
    v17 = *v18;
  v316 = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = &v316;
  v317 = 0LL;
  v318 = (void (*)(void))DereferenceW32Thread;
  v19 = 0LL;
  v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v20 )
    v19 = *v20;
  v331 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 16) = &v331;
  v332 = 0LL;
  v333 = (void (*)(void))DereferenceW32Thread;
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  v328 = *(_QWORD *)(v21 + 16);
  *(_QWORD *)(v21 + 16) = &v328;
  v329 = 0LL;
  v330 = (void (*)(void))DereferenceW32Thread;
  v23 = 0LL;
  v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v24 )
    v23 = *v24;
  v325 = *(_QWORD *)(v23 + 16);
  *(_QWORD *)(v23 + 16) = &v325;
  v326 = 0LL;
  v327 = (void (*)(void))DereferenceW32Thread;
  v307 = *(_QWORD *)(v9 + 368);
  *(_QWORD *)(v9 + 368) = &v307;
  v308 = 0LL;
LABEL_24:
  *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) = 0LL;
  v27 = v270;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_26:
              v304 = (**(_DWORD **)(v9 + 432) >> 9) & 1;
              v28 = *(_QWORD *)(v9 + 384);
              v29 = *(_QWORD *)(v28 + 48);
              if ( v29 )
              {
                if ( !(_BYTE)v8 )
                  v272 = v10 != 0;
              }
              else
              {
                v10 = 0;
                v273 = 0;
                LOBYTE(v272) = 0;
              }
              v283 = 0;
              v281 = 0LL;
              v285 = 0;
              Valid = *(_QWORD *)(*(_QWORD *)(v9 + 416) + 48LL);
              if ( !Valid )
                goto LABEL_42;
              if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
                Valid = PhkNextValid(Valid, v25, v26);
              if ( Valid && (Valid = grpdeskRitInput, *(_QWORD *)(v9 + 408) == grpdeskRitInput) )
              {
                if ( v29 )
                {
                  v8 = 0LL;
                  v274 = 0LL;
                }
                else
                {
                  v31 = xxxCallJournalPlaybackHook(&v290);
                  v26 = v31;
                  if ( v31 == -1 )
                  {
                    v8 = 0LL;
                    v274 = 0LL;
                  }
                  else if ( v31 )
                  {
                    *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= 0xE3F8u;
                    *(_WORD *)(*(_QWORD *)(v9 + 400) + 4LL) &= 0xE3F8u;
                    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 352LL) = DWORD2(v291);
                    qword_1C032C7E0 = InternalSetTimer(0LL, qword_1C032C7E0, v31, (__int64)JournalTimer, 32, 276);
                    v8 = 0LL;
                    v274 = 0LL;
                  }
                  else
                  {
                    WakeSomeone(*(_QWORD *)(v9 + 384), 0LL, DWORD2(v291), 0LL);
                    CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
                    v8 = 1LL;
                    v274 = (struct tagQMSG *)1;
                  }
                }
              }
              else
              {
LABEL_42:
                if ( (*(_DWORD *)(v28 + 340) & 0x20) != 0 )
                  PostMove((struct tagQ *)v28, 0);
                v26 = *(_QWORD *)(v9 + 384);
                if ( *(_DWORD *)(v26 + 16) )
                {
                  if ( !v29 || (v32 = *(__int64 **)(v26 + 48), (unsigned __int64)v32 <= 1) )
                    v32 = *(__int64 **)(v9 + 384);
                  Valid = *v32;
                  v8 = Valid;
                  v274 = (struct tagQMSG *)Valid;
                  if ( (*(_DWORD *)(v9 + 1096) & 0x2000) != 0 )
                  {
                    v274 = (struct tagQMSG *)Valid;
                    if ( Valid )
                    {
                      do
                      {
                        v33 = *(_DWORD *)(v8 + 100);
                        if ( (v33 & 0x20) == 0 )
                          break;
                        if ( (v33 & 0x10) == 0 )
                          break;
                        v8 = *(_QWORD *)v8;
                        v274 = (struct tagQMSG *)v8;
                      }
                      while ( v8 );
                    }
                  }
                  if ( v8 )
                  {
                    v34 = *(_QWORD *)(v8 + 104);
                    if ( v34 && v34 != v9 && (*(_DWORD *)(v34 + 440) & 0x10000) != 0 )
                    {
                      v8 = DeferMessagesOnQueue(v26, v8);
                      v274 = (struct tagQMSG *)v8;
                    }
                    if ( v8 )
                    {
                      Valid = (__int64)&v290;
                      v290 = *(_OWORD *)v8;
                      v291 = *(_OWORD *)(v8 + 16);
                      v292 = *(_OWORD *)(v8 + 32);
                      v293 = *(_OWORD *)(v8 + 48);
                      v294 = *(_OWORD *)(v8 + 64);
                      v295 = *(_OWORD *)(v8 + 80);
                      v296 = *(_OWORD *)(v8 + 96);
                      v297 = *(_OWORD *)(v8 + 112);
                      v298 = *(_OWORD *)(v8 + 128);
                      v299 = *(_OWORD *)(v8 + 144);
                    }
                  }
                }
                else
                {
                  v8 = 0LL;
                  v274 = 0LL;
                }
              }
              *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) = v8;
              if ( v8 <= 1 )
                goto LABEL_83;
              v35 = DWORD1(v296);
              if ( (BYTE4(v296) & 0x20) != 0 )
              {
                *a8 = (struct tagQMSG *)v8;
                *(_DWORD *)(v8 + 100) |= 0x100u;
                v27 = 0;
                v270 = 0;
                v35 = DWORD1(v296);
              }
              if ( (v35 & 0x10000) == 0 )
                break;
              if ( *((_QWORD *)&v296 + 1) == v9 )
                v10 = 1;
              v273 = v10;
              LOBYTE(v8) = 1;
              v272 = v8;
            }
            if ( (v35 & 0x40000) == 0 )
              break;
            LOBYTE(v8) = v272;
            if ( *((_QWORD *)&v296 + 1) == v9 && v10 == 1 )
            {
              v10 = 2;
              v273 = 2;
            }
          }
          if ( (_DWORD)v296 != 4 || !v272 )
            break;
LABEL_74:
          DeferSysPeekMsg((struct tagTHREADINFO *)v9, 0);
          LOBYTE(v8) = v272;
        }
        if ( !v27 )
          goto LABEL_83;
        Valid = DWORD2(v291);
        if ( !v10 || (unsigned int)(DWORD2(v291) - 256) > 9 )
          break;
        DeferSysPeekMsg((struct tagTHREADINFO *)v9, 0);
        v10 = 2;
        v273 = 2;
        LOBYTE(v8) = v272;
      }
      if ( v10 == 2 && ((unsigned int)(DWORD2(v291) - 512) <= 0xE || (unsigned int)(DWORD2(v291) - 160) <= 0xD) )
        goto LABEL_74;
LABEL_83:
      if ( !*(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) )
      {
        if ( a7 == 0x2000 )
          *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= ~0x2000u;
        goto LABEL_841;
      }
      ThreadUnlock1(Valid, v25);
      v36 = v291;
      v37 = 0;
      v38 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v26 = (unsigned __int16)v36;
      if ( (unsigned __int64)(unsigned __int16)v36 < *(_QWORD *)(gpsi + 8LL) )
      {
        v41 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v36 * LODWORD(gSharedInfo[2]);
        v42 = (__int64 *)(gpKernelHandleTable
                        + 16 * ((__int64)((unsigned int)(unsigned __int16)v36 * LODWORD(gSharedInfo[2])) >> 5));
        v43 = v36 >> 16;
        if ( ((_WORD)v43 == *(_WORD *)(v41 + 26)
           || (_WORD)v43 == 0xFFFF
           || !(_WORD)v43 && PsGetCurrentProcessWow64Process(gpsi, v39, v26, v40))
          && (*(_BYTE *)(v41 + 25) & 1) == 0
          && *(_BYTE *)(v41 + 24) == 1 )
        {
          v38 = *v42;
        }
      }
      v279 = v38;
      v307 = *(_QWORD *)(v9 + 368);
      *(_QWORD *)(v9 + 368) = &v307;
      v308 = v38;
      if ( v38 )
        ++*(_DWORD *)(v38 + 8);
      v25 = (unsigned int)v296;
      if ( (_DWORD)v296 )
      {
        if ( (_DWORD)v296 == 4 && *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) != **(_QWORD **)(v9 + 384) )
          goto LABEL_757;
        if ( (_DWORD)v296 == 9 && DWORD2(v291) == 96 )
        {
          v44 = *((_QWORD *)&v290 + 1);
          if ( *((_QWORD *)&v290 + 1) )
          {
            do
            {
              v45 = *(_DWORD *)(v44 + 100);
              if ( (v45 & 0x10000) == 0 && (v45 & 0x40000) == 0 )
                break;
              v44 = *(_QWORD *)(v44 + 8);
            }
            while ( v44 );
            if ( v44 )
              goto LABEL_757;
          }
        }
        if ( !*((_QWORD *)&v296 + 1) || *((_QWORD *)&v296 + 1) == v9 )
        {
          EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL));
          v50 = *(_QWORD *)(v9 + 384);
          v51 = *(_QWORD *)(v50 + 48);
          v52 = *(_QWORD **)(v51 + 8);
          if ( v52 )
            *v52 = *(_QWORD *)v51;
          if ( *(_QWORD *)v51 )
            *(_QWORD *)(*(_QWORD *)v51 + 8LL) = *(_QWORD *)(v51 + 8);
          if ( *(_QWORD *)v50 == v51 )
            *(_QWORD *)v50 = *(_QWORD *)v51;
          if ( *(_QWORD *)(v50 + 8) == v51 )
            *(_QWORD *)(v50 + 8) = *(_QWORD *)(v51 + 8);
          v53 = *(_DWORD *)(v51 + 100);
          if ( (v53 & 0x10000) == 0 && (v53 & 0x40000) == 0 )
            --*(_DWORD *)(v50 + 16);
          if ( (*(_DWORD *)(v51 + 100) & 8) != 0
            && !*(_DWORD *)(v51 + 96)
            && IsPointerInputMessage(*(_DWORD *)(v51 + 24)) )
          {
            FreePointerMessageParams(v51);
          }
          Win32FreeToPagedLookasideList(QEntryLookaside, v51);
          *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) = 0LL;
          xxxProcessEventMessage(v9, (__int64)&v290);
          v10 = v273;
          LOBYTE(v8) = v272;
        }
        else
        {
          v46 = *(_QWORD *)(v9 + 384);
          if ( *(_QWORD *)(*((_QWORD *)&v296 + 1) + 384LL) == v46 )
          {
            v301 = *((_QWORD *)&v296 + 1);
            LockExchangeW32Thread(*((__int64 *)&v296 + 1), (__int64)&v331);
            *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) = 0LL;
            v47 = 0LL;
            v48 = v287;
            v49 = v301;
LABEL_843:
            v236 = 0LL;
LABEL_844:
            *(_QWORD *)(*(_QWORD *)(v9 + 384) + 40LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(v9 + 384) + 32LL) = 0LL;
            **(_DWORD **)(v9 + 400) &= ~1u;
            v255 = v303;
            if ( v306 )
            {
              SetWakeBit(v306, 0x4001u);
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= 0xBFFEu;
            }
            else if ( !v48 && !v49 && !v303 && !v236 )
            {
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 8LL) = 0;
              v256 = 31751;
              v257 = *(_QWORD *)(v9 + 384);
              if ( !*(_DWORD *)(v257 + 16) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 48LL) )
              {
                if ( (*(_BYTE *)(v257 + 340) & 0x20) != 0 )
                  v256 = 31749;
                *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= ~v256;
              }
LABEL_866:
              v258 = 0LL;
              v259 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v259 )
                v258 = *v259;
              *(_QWORD *)(v258 + 16) = v325;
              if ( v326 )
                v327();
              v260 = 0LL;
              v261 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v261 )
                v260 = *v261;
              *(_QWORD *)(v260 + 16) = v328;
              if ( v329 )
                v330();
              v262 = 0LL;
              v263 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v263 )
                v262 = *v263;
              *(_QWORD *)(v262 + 16) = v331;
              if ( v332 )
                v333();
              v264 = 0LL;
              v265 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v265 )
                v264 = *v265;
              *(_QWORD *)(v264 + 16) = v316;
              if ( v317 )
                v318();
              v266 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v266 )
                v47 = *v266;
              *(_QWORD *)(v47 + 16) = v319;
              v268 = v320;
              if ( v320 )
                v321();
              ThreadUnlock1(v268, v267);
              return 0LL;
            }
            if ( v48 )
            {
              SetWakeBit(v48, 0x4006u);
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= 0xBFF9u;
            }
            if ( v255 )
            {
              SetWakeBit(v255, 0x4400u);
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= 0xBBFFu;
            }
            if ( v236 )
            {
              SetWakeBit(v236, 0x5000u);
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= 0xAFFFu;
            }
            if ( v49 )
            {
              SetWakeBit(v49, 0x2040u);
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= ~0x2000u;
            }
            else if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 48LL) )
            {
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 8LL) |= *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) & 0x5C07;
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 6LL) &= 0xA3F8u;
              *(_WORD *)(*(_QWORD *)(v9 + 400) + 4LL) &= 0xA3F8u;
            }
            goto LABEL_866;
          }
          CleanEventMessage(*(struct tagQMSG **)(v46 + 48));
          DelQEntry(*(_QWORD *)(v9 + 384), *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL), 1);
          v10 = v273;
          LOBYTE(v8) = v272;
        }
        goto LABEL_24;
      }
      if ( a7 == 0x2000 )
        goto LABEL_757;
      v54 = DWORD2(v291);
      v55 = DWORD2(v291);
      v269 = DWORD2(v291);
      if ( DWORD2(v291) <= 0x20A )
        break;
      switch ( DWORD2(v291) )
      {
        case 0x20E:
          goto LABEL_405;
        case 0x238:
          goto LABEL_469;
        case 0x240:
LABEL_462:
          if ( !v38 )
            goto LABEL_467;
          if ( *(char *)(v38 + 60) < 0 )
            goto LABEL_467;
          if ( *(char *)(v38 + 59) < 0 )
            goto LABEL_467;
          v147 = *(_BYTE *)(v38 + 71);
          if ( (v147 & 8) != 0 || (v147 & 0x10) == 0 )
            goto LABEL_467;
LABEL_469:
          v277 = *((_QWORD *)&v292 + 1);
          *(_QWORD *)&v284 = v292;
          v281 = v292;
          if ( !v38 )
            goto LABEL_696;
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v38, (struct tagQMSG *)v8, &v278, &v270, a8) )
            goto LABEL_841;
          if ( v278 )
            goto LABEL_696;
          if ( !v282 && a5 == -1 )
            goto LABEL_480;
          if ( v282 <= a5 )
          {
            if ( v55 < v282 || v55 > a5 )
              break;
          }
          else if ( v55 >= a5 && v55 <= v282 )
          {
            break;
          }
LABEL_480:
          if ( (unsigned int)CheckPwndFilter(v38, *(__int64 *)v300) )
          {
            if ( !v270 )
              goto LABEL_802;
            goto LABEL_482;
          }
          break;
        case 0x245:
        case 0x246:
        case 0x247:
        case 0x249:
        case 0x24A:
        case 0x251:
        case 0x252:
        case 0x253:
          goto LABEL_748;
        case 0x2E8:
        case 0x2E9:
        case 0x2EA:
        case 0x2EB:
        case 0x2EC:
        case 0x2ED:
        case 0x2EE:
        case 0x2EF:
        case 0x2F0:
        case 0x2F1:
        case 0x2F2:
        case 0x2F3:
        case 0x2F4:
        case 0x2F5:
          if ( !v282 && a5 == -1 )
            goto LABEL_392;
          if ( v282 <= a5 )
          {
            if ( DWORD2(v291) < v282 || DWORD2(v291) > a5 )
              goto LABEL_841;
          }
          else if ( DWORD2(v291) >= a5 && DWORD2(v291) <= v282 )
          {
            goto LABEL_841;
          }
LABEL_392:
          if ( (unsigned int)IsInsideMenuLoop(v9) )
            goto LABEL_467;
          LODWORD(v8) = v270;
          if ( v270 )
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
          if ( !v38 )
          {
            v38 = *(_QWORD *)(*(_QWORD *)(v9 + 384) + 80LL);
            v279 = v38;
          }
          v56 = v292;
          v277 = *((_QWORD *)&v292 + 1);
          v281 = v292;
          v132 = WORD1(v292);
          v133 = (unsigned __int16)v292;
          v134 = InteractiveControlManager::Instance();
          v334 = 0LL;
          v335 = 0LL;
          if ( (int)InteractiveControlManager::FindDevice(v134, v133, 0LL, &v334, 0LL) >= 0
            && v334
            && (unsigned int)InteractiveControlDevice::GetInputReport(v334, v132, &v335) )
          {
            v135 = 1;
            *((_DWORD *)v335 + 6) = 1;
          }
          else
          {
            v135 = 2;
          }
          v136 = v135 - 1;
          if ( !v136 )
            goto LABEL_802;
          if ( v136 == 1 )
            goto LABEL_841;
          LODWORD(v116) = v269;
          goto LABEL_762;
        default:
LABEL_483:
          *(_QWORD *)&v284 = v281;
LABEL_484:
          v276.x = SWORD4(v292);
          v148 = *((_QWORD *)&v292 + 1);
          v276.y = SWORD5(v292);
          v275 = 1;
          v149 = DWORD1(v296);
          if ( (BYTE4(v296) & 0x20) != 0
            && v38
            && ((*(_BYTE *)(v38 + 368) ^ *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 376LL) + 280LL)) & 0xF) == 0 )
          {
            goto LABEL_526;
          }
          if ( gspwndScreenCapture )
          {
            v38 = gspwndScreenCapture;
            v279 = gspwndScreenCapture;
            v277 = (WORD4(v293) << 16) | WORD2(v293);
            goto LABEL_523;
          }
          if ( v38 && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v38) )
          {
            v150 = 1;
            v286 = 1;
            v151 = *(_QWORD *)(v9 + 384);
            v152 = *(struct tagWND **)(v151 + 72);
            if ( v152 )
            {
              v38 = *(_QWORD *)(v151 + 72);
              v279 = v38;
              if ( !(unsigned int)IsCompositionInputWindowForHitTest(v152) )
              {
                DWORD1(v296) = v149 & 0xFFFFDFFF;
                if ( v8 )
                {
                  if ( IsMouseInPointerActive((_QWORD *)v9, v8) )
                    *(_DWORD *)(v8 + 100) &= ~0x2000u;
                }
              }
              goto LABEL_523;
            }
          }
          else
          {
            v150 = 0;
            v286 = 0;
            v38 = *(_QWORD *)(*(_QWORD *)(v9 + 384) + 72LL);
            v279 = v38;
            if ( v38 )
              goto LABEL_523;
          }
          if ( !v150 )
          {
            v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL) + 16LL);
            v323 = *(_QWORD *)(v9 + 368);
            *(_QWORD *)(v9 + 368) = &v323;
            v324 = v38;
            if ( v38 )
            {
              ++*(_DWORD *)(v38 + 8);
              v148 = *((_QWORD *)&v292 + 1);
              v54 = DWORD2(v291);
            }
          }
          if ( (unsigned int)IsThreadDesktopComposed(v9) )
          {
            v337 = v54;
            v338 = v292;
            v339 = v148;
            v340 = &v275;
            v154 = 1;
            if ( v153 )
              v154 = 9;
            v341 = v154;
            v342 = 0;
            v343 = (char *)&v295 + 8;
            v344 = 0;
            v157 = xxxDCEWindowHitTestIndirect((struct tagWND *)v38, (struct tagPOINT)v295, (__int64)&v337);
            if ( v157 && v344 )
            {
              *((_QWORD *)&v292 + 1) = v339;
              DWORD1(v293) = (__int16)v339;
              v155 = v339 >> 16;
              v156 = (unsigned int)SWORD1(v339);
              DWORD2(v293) = SWORD1(v339);
              v276 = *(struct tagPOINT *)((char *)&v293 + 4);
              v305 = 1;
            }
          }
          else
          {
            v157 = (HWND)xxxWindowHitTest(v38);
          }
          if ( !v286 )
            ThreadUnlock1(v156, v155);
          v38 = HMValidateHandleNoSecure((unsigned __int64)v157, 1);
          v279 = v38;
          if ( !v38 )
          {
            v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 408) + 8LL) + 16LL);
            v279 = v38;
            if ( !v38 )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 408LL) + 8LL) + 16LL);
              v279 = v38;
            }
          }
          if ( !*(_QWORD *)(v9 + 528)
            && ((*(_DWORD *)(*(_QWORD *)(v9 + 376) + 768LL) & 4) != 0
             || (unsigned int)IsShellThreadMiPEnabled((_QWORD *)v9))
            && (v158 = *(_QWORD *)(*(_QWORD *)(v9 + 384) + 392LL)) != 0
            && (v159 = ValidateHwnd(v158)) != 0
            && ((v160 = *(_QWORD *)(v159 + 16), v161 = *(_QWORD *)(v9 + 384), *(_QWORD *)(v160 + 384) == v161)
             || *(_QWORD *)(v160 + 376) == *(_QWORD *)(v9 + 376)) )
          {
            v38 = v159;
            v279 = v159;
            v275 = 1;
            *(_DWORD *)(v161 + 116) = 0;
          }
          else
          {
            v162 = *(_QWORD *)(v9 + 384);
            *(_DWORD *)(v162 + 116) = v275 != 1;
          }
LABEL_523:
          if ( !v305
            && ((*(_BYTE *)(v38 + 368) ^ *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 376LL) + 280LL)) & 0xF) != 0 )
          {
            v276 = (struct tagPOINT)v295;
            PhysicalToLogicalInPlacePointWithParent(v38, &v276, (char *)&v295 + 8);
            v277 = (LOWORD(v276.y) << 16) | LOWORD(v276.x);
            *(struct tagPOINT *)((char *)&v293 + 4) = v276;
          }
LABEL_526:
          ThreadLockExchange(v38, (__int64)&v307);
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v38, (struct tagQMSG *)v8, &v278, &v270, a8) )
            goto LABEL_841;
          v163 = v278;
          if ( v278 )
          {
            v164 = *(_QWORD *)(v38 + 16);
            if ( *(_QWORD *)(v164 + 384) != *(_QWORD *)(v9 + 384) )
            {
              zzzSetCursor(gasyscur[1]);
LABEL_696:
              LODWORD(v8) = v270;
              LODWORD(v116) = v269;
              v56 = v284;
              goto LABEL_762;
            }
            if ( !v287 )
            {
              v287 = *(_QWORD *)(v38 + 16);
              LockExchangeW32Thread(v164, (__int64)&v316);
            }
          }
          else if ( (WORD2(v296) & 0x1000) != 0 )
          {
            v165 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 376LL);
            v166 = *(_QWORD *)(v165 + 824);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v297 <= (unsigned int)v166 )
              {
                if ( (_DWORD)v297 != (_DWORD)v166
                  || (v167 = HIDWORD(v166), DWORD1(v297) != (_DWORD)v167) && DWORD1(v297) != -1 && (_DWORD)v167 != -1 )
                {
                  LODWORD(v116) = v269;
                  EtwTraceUIPIMsgError(0LL, v165, v269, v292, *((_QWORD *)&v292 + 1));
                  zzzSetCursor(gasyscur[1]);
                  LODWORD(v8) = v270;
                  v56 = v284;
                  goto LABEL_762;
                }
              }
            }
          }
          v168 = v276;
          v169 = (unsigned __int64)v276;
          v170 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 384LL) + 116LL);
          if ( v170 && (v171 = v170 - 2) != 0 )
          {
            if ( v171 != 1 )
              goto LABEL_550;
            if ( (*(_BYTE *)(v38 + 66) & 0x40) != 0 )
              v276.x = *(_DWORD *)(v38 + 136) - v276.x;
            else
              v276.x -= *(_DWORD *)(v38 + 128);
            v172 = *(_DWORD *)(v38 + 132);
          }
          else
          {
            if ( (*(_BYTE *)(v38 + 66) & 0x40) != 0 )
              v276.x = *(_DWORD *)(v38 + 152) - v276.x;
            else
              v276.x -= *(_DWORD *)(v38 + 144);
            v172 = *(_DWORD *)(v38 + 148);
          }
          v276.y -= v172;
          v168 = v276;
LABEL_550:
          if ( v163 || *(_QWORD *)(v9 + 384) != gpqCursor )
          {
            LODWORD(v116) = v269;
            goto LABEL_589;
          }
          LOBYTE(v37) = *(_QWORD *)(*(_QWORD *)(v9 + 408) + 184LL) != v38;
          v173 = v275;
          if ( v275 == 5 )
          {
            v174 = *(_QWORD *)(v38 + 208);
            if ( v174 )
            {
              if ( (*(_BYTE *)(v38 + 56) & 1) != 0 )
              {
                v175 = MNItemHitTest(*(_QWORD *)(v38 + 208), v38);
                if ( v175 >= 0 )
                {
                  v176 = *(_QWORD *)(*(_QWORD *)(v174 + 96) + 152LL * v175 + 104);
                  if ( v176 > 6 )
                  {
                    if ( v176 == 7 )
                      goto LABEL_569;
                    if ( v176 != -1LL )
                      goto LABEL_567;
                    v173 = -2;
                  }
                  else if ( v176 >= 5 )
                  {
                    v173 = 68;
                  }
                  else
                  {
                    v177 = v176 - 1;
                    if ( v177 )
                    {
                      v178 = v177 - 1;
                      if ( v178 )
                      {
                        if ( v178 != 1 )
                        {
LABEL_567:
                          v173 = 69;
                          goto LABEL_570;
                        }
LABEL_569:
                        v173 = 67;
                        goto LABEL_570;
                      }
                      v173 = 66;
                    }
                    else
                    {
                      v173 = 65;
                    }
                  }
                }
LABEL_570:
                v179 = v173 | ((unsigned __int16)v175 << 16);
                goto LABEL_578;
              }
            }
          }
          if ( v275 == 7 && (*(_BYTE *)(v38 + 56) & 2) != 0 )
          {
            v179 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v38, 1, v168) | 0x10000;
          }
          else if ( v275 == 6 && (*(_BYTE *)(v38 + 56) & 4) != 0 )
          {
            v179 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v38, 0, v168);
          }
          else
          {
            v179 = v275;
          }
LABEL_578:
          LODWORD(v116) = v269;
          if ( v269 != 512 || v37 || *(_DWORD *)(*(_QWORD *)(v9 + 408) + 192LL) != v179 )
            xxxTrackMouseMove((struct tagWND *)v38, v179, v269);
          if ( !v37 )
          {
            v180 = *(_QWORD *)(v9 + 408);
            if ( (*(_DWORD *)(v180 + 48) & 0x40) != 0
              && ((_DWORD)v116 != 512 || !PtInRect((_DWORD *)(v180 + 196), v169)) )
            {
              ResetMouseHover((struct tagDESKTOP *)v180, (struct tagPOINT)v169);
            }
          }
          v37 = 0;
LABEL_589:
          if ( !(unsigned int)CheckPwndFilter(v38, *(__int64 *)v300) )
            break;
          switch ( (int)v116 )
          {
            case 513:
              v65 = (unsigned __int8)IsMessageInputSourceTouch(&v290) == 0;
              v181 = *(_QWORD *)(v9 + 384);
              if ( v65 )
                *(_DWORD *)(v181 + 340) &= ~0x800000u;
              else
                *(_DWORD *)(v181 + 340) |= 0x800000u;
              v65 = (unsigned __int8)IsMessageInputSourcePen(&v290) == 0;
              v182 = *(_QWORD *)(v9 + 384);
              if ( v65 )
                *(_DWORD *)(v182 + 340) &= ~0x1000000u;
              else
                *(_DWORD *)(v182 + 340) |= 0x1000000u;
              goto LABEL_597;
            case 514:
            case 517:
            case 520:
            case 524:
              goto LABEL_609;
            case 516:
            case 519:
            case 523:
LABEL_597:
              if ( (*(_BYTE *)(*(_QWORD *)(v38 + 168) + 92LL) & 8) != 0
                || *(_DWORD *)(*(_QWORD *)(v9 + 384) + 116LL) == 1
                || (v183 = *(_QWORD *)(v9 + 528)) != 0 && (*(_DWORD *)(v183 + 8) & 1) != 0 )
              {
                v37 = 1;
                v184 = *(_QWORD *)(v9 + 384);
                if ( (unsigned int)v293 <= *(_DWORD *)(v184 + 128)
                  && !gbClientDoubleClickSupport
                  && *(_QWORD *)v38 == *(_QWORD *)(v184 + 136)
                  && (_DWORD)v116 == *(_DWORD *)(v184 + 120)
                  && ((_DWORD)v116 != 523 || WORD1(v292) == *(_WORD *)(v184 + 124)) )
                {
                  v185 = *(_DWORD *)(gpsi + 2024LL) / 2;
                  v186 = *(_DWORD *)(v184 + 144);
                  v336[0] = v186 - v185;
                  v187 = *(_DWORD *)(gpsi + 2028LL);
                  v188 = *(_DWORD *)(v184 + 148);
                  v336[1] = v188 - v187 / 2;
                  v336[2] = v186 + v185;
                  v336[3] = v188 + v187 / 2;
                  if ( PtInRect(v336, *(unsigned __int64 *)((char *)&v293 + 4)) )
                  {
                    LODWORD(v116) = v116 + 2;
                    v269 = v116;
                    v37 = 2;
                  }
                }
              }
LABEL_609:
              v189 = *(_QWORD *)(v9 + 384);
              v190 = *(_DWORD *)(v189 + 340);
              if ( (v190 & 8) != 0 )
                *(_DWORD *)(v189 + 340) = v190 | 4;
              if ( (unsigned int)(v116 - 514) <= 0xA )
              {
                v191 = 1097;
                if ( _bittest(&v191, v116 - 514) )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(v9 + 384) + 128LL) && ((DWORD2(v297) - 4) & 0xFFFFFFFB) == 0 )
                  {
                    if ( DWORD2(v297) == 4 )
                    {
                      TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                    }
                    else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                    {
                      TouchTimeFromCPLValue = *((_DWORD *)off_1C0324040 + 11);
                      if ( TouchTimeFromCPLValue == -1 )
                        TouchTimeFromCPLValue = *((_DWORD *)off_1C0324040 + 10);
                    }
                    else
                    {
                      TouchTimeFromCPLValue = gdtDblClk;
                    }
                    *(_DWORD *)(*(_QWORD *)(v9 + 384) + 128LL) = v299 + TouchTimeFromCPLValue;
                  }
                  v193 = *(_QWORD *)(v9 + 384);
                  if ( *(_DWORD *)(v193 + 128) && DWORD2(v297) == 18 )
                    *(_DWORD *)(v193 + 128) = v299 + gTPThresholds[2];
                }
              }
              break;
            default:
              break;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 384LL) + 116LL) == 1 )
          {
            LODWORD(v116) = v116 - 352;
            v269 = v116;
            v56 = v275;
            *(_QWORD *)&v284 = (unsigned int)v275;
            v281 = (unsigned int)v275;
          }
          else
          {
            v56 = v284;
          }
          v194 = v274;
          if ( !(unsigned int)MiPCheckMsgFilter(v274, v116, v282, a5) )
            break;
          if ( v163 )
            goto LABEL_841;
          if ( (unsigned int)(v116 - 512) <= 0xE && (*(_DWORD *)(v9 + 440) & 0x8000) != 0 )
            break;
          v195 = *(_DWORD *)(v9 + 440);
          if ( (v195 & 0x100000) != 0 )
          {
            *(_DWORD *)(v9 + 440) = v195 & 0xFFEFFFFF;
            xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
          }
          v311 = *(struct tagPOINT *)((char *)&v293 + 4);
          v312 = *(_QWORD *)v38;
          v313 = v275;
          v314 = *((_QWORD *)&v294 + 1);
          v315 = v292;
          LODWORD(v8) = v270;
          if ( v270 )
          {
            if ( (_DWORD)v116 != 512 && (_DWORD)v116 != 160 )
            {
              v280 = 1;
              if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v116, (__int64)&v311) )
                goto LABEL_762;
            }
          }
          if ( ((*(_DWORD *)(**(_QWORD **)(v9 + 416) + 16LL) | *(_DWORD *)(v9 + 600)) & 0x100) != 0 )
          {
            v280 = 1;
            if ( (unsigned int)xxxCallMouseHook((unsigned int)v116, &v311, (unsigned int)v8) )
              goto LABEL_762;
          }
          if ( (*(_DWORD *)(v9 + 1096) & 0x2000) == 0 && ((v275 + 2) & 0xFFFFFFFD) == 0 )
          {
            v214 = 0LL;
            if ( v286 )
            {
              CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v38);
              v214 = (__int64)CompositionInputWindowUIOwner;
              if ( CompositionInputWindowUIOwner )
              {
                v216 = 0;
                if ( (unsigned int)CoreWindowProp::IsComponent(CompositionInputWindowUIOwner) && v269 == 161 )
                {
                  v218 = (_QWORD *)gpqForeground;
                  v216 = *(_QWORD *)(*(_QWORD *)(v217 + 16) + 384LL) == gpqForeground;
                }
                else
                {
                  v218 = (_QWORD *)gpqForeground;
                }
                TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v214);
                TopLevelHost = CoreWindowProp::GetTopLevelHost(TopLevelWindow);
                v214 = GetTopLevelWindow((__int64)TopLevelHost);
                if ( !v214 )
                  v214 = (__int64)TopLevelWindow;
                if ( v216 )
                {
                  v221 = *(_QWORD *)(v214 + 16);
                  if ( *(_QWORD *)(v221 + 384) != *v218 )
                    *(_DWORD *)(v221 + 440) |= 0x20u;
                }
                v323 = *(_QWORD *)(v9 + 368);
                *(_QWORD *)(v9 + 368) = &v323;
                v324 = v214;
                if ( v214 )
                {
                  ++*(_DWORD *)(v214 + 8);
                  v222 = *(_QWORD *)v214;
                }
                else
                {
                  LODWORD(v222) = 0;
                }
                xxxSendMessage(v214, 32, v222, (unsigned __int16)v275 | (WORD4(v291) << 16));
                ThreadUnlock1(v224, v223);
                v194 = v274;
              }
            }
            if ( !v214 )
              xxxSendMessage(v38, 32, *(_QWORD *)v38, (unsigned __int16)v275 | (WORD4(v291) << 16));
            if ( *(struct tagQMSG **)(*(_QWORD *)(v9 + 384) + 48LL) == v194
              && v194
              && IsMouseInPointerActive((_QWORD *)v9, (__int64)v194)
              && (*((_DWORD *)v194 + 25) & 0x800) != 0
              && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v194 + 120)) )
            {
              v225 = IsMiPMouseMessage(*((_DWORD *)v194 + 6));
              LODWORD(v116) = v269;
              if ( v225 )
              {
                GeneratePointerMessageFromMouse((struct tagQMSG *)v395, v269, v194, (struct tagWND *)v38, v8);
                SetMiPPromotion(*(_QWORD *)(v38 + 16), v396);
                v56 = v284;
                goto LABEL_762;
              }
            }
            else
            {
LABEL_329:
              LODWORD(v116) = v269;
            }
LABEL_330:
            v56 = v284;
LABEL_762:
            v124 = v271;
            goto LABEL_763;
          }
          if ( *(struct tagQMSG **)(*(_QWORD *)(v9 + 384) + 48LL) != v194 )
            goto LABEL_841;
          v196 = 0;
          v374 = v290;
          v375 = v291;
          v376 = v292;
          v377 = v293;
          v378 = v294;
          v379 = v295;
          v380 = v296;
          v381 = v297;
          v382 = v298;
          v383 = v299;
          if ( v194 && IsMouseInPointerActive((_QWORD *)v9, (__int64)v194) )
          {
            v197 = v116;
            DWORD2(v375) = v116;
            *(_QWORD *)&v376 = v284;
            if ( (*((_DWORD *)v274 + 25) & 0x800) != 0 )
            {
              v198 = *(_QWORD *)(v9 + 1136);
              if ( v198 && (*(_DWORD *)v198 & 1) != 0 )
              {
                v363 = *(_OWORD *)(v198 + 24);
                v364 = *(_OWORD *)(v198 + 40);
                v365 = *(_OWORD *)(v198 + 56);
                v366 = *(_OWORD *)(v198 + 72);
                v367 = *(_OWORD *)(v198 + 88);
                v368 = *(_OWORD *)(v198 + 104);
                v196 = 1;
              }
              if ( (unsigned int)GeneratePointerMessageFromMouse(
                                   (struct tagQMSG *)&v384,
                                   v116,
                                   v274,
                                   (struct tagWND *)v38,
                                   v8) )
              {
                v290 = v384;
                v291 = v385;
                v292 = v386;
                v293 = v387;
                v294 = v388;
                v295 = v389;
                v296 = v390;
                v297 = v391;
                v298 = v392;
                v299 = v393;
                v283 = 1;
                if ( DWORD2(v385) == 582 )
                {
                  *(_QWORD *)(*(_QWORD *)(v9 + 384) + 392LL) = *(_QWORD *)v38;
                }
                else if ( ((DWORD2(v385) - 579) & 0xFFFFFFFB) == 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v9 + 384) + 392LL) = 0LL;
                }
              }
              v199 = v274;
              if ( !(_DWORD)v8 )
              {
LABEL_722:
                v210 = v283;
                goto LABEL_723;
              }
              *((_DWORD *)v274 + 25) &= ~0x800u;
            }
            else
            {
              if ( !(_DWORD)v8 )
                goto LABEL_722;
              if ( IsMiPMouseMessage(*((_DWORD *)v274 + 6)) )
              {
                if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v199 + 120)) )
                {
                  v200 = *(_DWORD **)(v9 + 1136);
                  if ( v200 )
                  {
                    if ( (*v200 & 2) == 0 && (*v200 & 4) == 0 )
                      goto LABEL_292;
                  }
                }
                v201 = *(_DWORD **)(v9 + 1136);
                if ( v201 )
                  *v201 &= ~2u;
              }
            }
          }
          else
          {
            v197 = DWORD2(v375);
            v199 = v274;
          }
          if ( !(_DWORD)v8 )
            goto LABEL_722;
          if ( (v197 == 512 || v197 == 160)
            && *(_QWORD *)v38 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
            && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v199 + 120)) )
          {
            v203 = HMValidateHandleNoSecure(v202, 1);
            v204 = v203;
            if ( v203 )
            {
              v205 = *(_QWORD **)(v203 + 16);
              if ( IsMouseInPointerActive(v205, 0LL) && (GetMiPWindowFlags((struct tagWND *)v204) & 1) == 0 )
              {
                if ( v205 == (_QWORD *)v9 )
                {
                  v206 = *(_QWORD *)(v9 + 1136);
                  v284 = *(_OWORD *)(v206 + 24);
                  v357 = *(_OWORD *)(v206 + 40);
                  v358 = *(_OWORD *)(v206 + 56);
                  v359 = *(_OWORD *)(v206 + 72);
                  v362 = *(_OWORD *)(v206 + 88);
                  v369 = *(_OWORD *)(v206 + 104);
                  if ( v196 )
                  {
                    *(_OWORD *)(v206 + 24) = v363;
                    *(_OWORD *)(v206 + 40) = v364;
                    *(_OWORD *)(v206 + 56) = v365;
                    *(_OWORD *)(v206 + 72) = v366;
                    *(_OWORD *)(v206 + 88) = v367;
                    *(_OWORD *)(v206 + 104) = v368;
                  }
                  *(_QWORD *)v370 = ((unsigned __int64)(*(_DWORD *)(*(_QWORD *)(v9 + 1136) + 36LL) & 0xE1F7) << 16) | 1;
                  v371 = 0LL;
                  v372 = 0LL;
                  v373 = 0LL;
                  v361[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v361;
                  v361[1] = v204;
                  ++*(_DWORD *)(v204 + 8);
                  FindTimer(v204, 65523LL, 2u, 1, 0LL);
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout(v204, 0x24Au, *(unsigned __int64 *)v370, 0LL, 0, 0, 0LL, 1, 0);
                  ThreadUnlock1(v208, v207);
                  v38 = v279;
                  LODWORD(v8) = v270;
                  if ( v196 )
                  {
                    v209 = *(_QWORD *)(v9 + 1136);
                    *(_OWORD *)(v209 + 24) = v284;
                    *(_OWORD *)(v209 + 40) = v357;
                    *(_OWORD *)(v209 + 56) = v358;
                    *(_OWORD *)(v209 + 72) = v359;
                    *(_OWORD *)(v209 + 88) = v362;
                    *(_OWORD *)(v209 + 104) = v369;
                  }
                  *(_QWORD *)&v284 = v281;
                }
                else
                {
                  PostEventMessageEx((__int64)v205, v205[48], 0x15u, v204, 0, 0LL, 0LL, 0LL);
                }
              }
            }
            LODWORD(v116) = v269;
            if ( v283 )
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = *(_QWORD *)v38;
            else
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
          }
          v210 = v283;
          if ( v283 )
            goto LABEL_689;
          v211 = v37 - 1;
          if ( v211 )
          {
            if ( v211 == 1 )
            {
              v37 = 0;
              *(_DWORD *)(*(_QWORD *)(v9 + 384) + 128LL) = 0;
              goto LABEL_690;
            }
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v9 + 384) + 120LL) = DWORD2(v291);
            *(_WORD *)(*(_QWORD *)(v9 + 384) + 124LL) = WORD1(v292);
            *(_DWORD *)(*(_QWORD *)(v9 + 384) + 128LL) = gdtDblClk + v293;
            *(_QWORD *)(*(_QWORD *)(v9 + 384) + 136LL) = *(_QWORD *)v38;
            *(_QWORD *)(*(_QWORD *)(v9 + 384) + 144LL) = *(_QWORD *)((char *)&v293 + 4);
          }
LABEL_689:
          v37 = 0;
LABEL_690:
          v212 = (const struct tagQMSG *)&v374;
          if ( !v210 )
            v212 = (const struct tagQMSG *)&v290;
          v213 = xxxMouseActivate((struct tagTHREADINFO *)v9, (struct tagWND *)v38, v212, v275) - 1;
          if ( !v213 )
            goto LABEL_330;
          if ( v213 == 1 )
          {
            v54 = DWORD2(v291);
            v8 = (unsigned __int64)v274;
            goto LABEL_484;
          }
LABEL_723:
          if ( (_DWORD)v8 )
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
            if ( v280 )
            {
              if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 416) + 16LL) | *(_BYTE *)(v9 + 600)) & 0x40) != 0 )
                xxxCallHook(6, v116, (__int64)&v311, 5u);
            }
          }
          v280 = 0;
          v277 = (LOWORD(v276.y) << 16) | LOWORD(v276.x);
          if ( (unsigned int)v116 < 0x200 )
          {
            MouseKeyFlags = v284;
          }
          else
          {
            MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(unsigned __int8 **)(v9 + 384));
            v281 = MouseKeyFlags;
          }
          if ( ((unsigned int)(v116 - 171) <= 2 || (unsigned int)(v116 - 523) <= 2) && !v210 )
            v281 = v292 | MouseKeyFlags;
          v227 = *(_QWORD *)(v9 + 528);
          if ( v275 == 5
            && (_DWORD)v8
            && v227
            && (*(_DWORD *)(v227 + 8) & 0x100) != 0
            && *(_QWORD *)v227
            && (**(_DWORD **)v227 & 1) != 0 )
          {
            MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
              (MenuStateOwnerLockxxxUnlock *)&v322,
              *(struct tagMENUSTATE **)(v9 + 528));
            if ( (unsigned int)xxxCallHandleMenuMessages(v229, v38, v116, v228, v277) )
            {
              v10 = v273;
              LOBYTE(v8) = v272;
              if ( v322 )
                xxxUnlockMenuStateInternal(v322, 0);
              goto LABEL_24;
            }
            if ( v322 )
              xxxUnlockMenuStateInternal(v322, 0);
          }
          if ( !v210 )
            goto LABEL_802;
          v8 = (unsigned __int64)v274;
          goto LABEL_747;
      }
LABEL_757:
      v27 = v270;
      LOBYTE(v8) = v272;
LABEL_25:
      v10 = v273;
    }
    if ( DWORD2(v291) == 522 )
      break;
    switch ( DWORD2(v291) )
    {
      case 0x23:
        v56 = 0;
        v281 = 0LL;
        v277 = *((_QWORD *)&v292 + 1);
        if ( v38 )
        {
          v57 = *(_QWORD *)(v38 + 16);
          if ( v57 != v9 )
          {
            if ( *(_QWORD *)(v57 + 384) == *(_QWORD *)(v9 + 384) )
            {
              if ( !v287 )
              {
                v48 = *(_QWORD *)(v38 + 16);
                LockExchangeW32Thread(v57, (__int64)&v316);
LABEL_842:
                v47 = 0LL;
                v49 = 0LL;
                goto LABEL_843;
              }
LABEL_841:
              v48 = v287;
              goto LABEL_842;
            }
            goto LABEL_468;
          }
        }
        if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v8, DWORD2(v291), v282, a5) )
          goto LABEL_841;
        if ( !v270 )
          goto LABEL_802;
        goto LABEL_482;
      case 0xFE:
        goto LABEL_469;
      case 0xFF:
        v277 = *((_QWORD *)&v292 + 1);
        *(_QWORD *)&v284 = v292;
        v281 = v292;
        v38 = 0LL;
        v279 = 0LL;
        if ( *((_QWORD *)&v292 + 1) )
        {
          v126 = HMValidateHandle(*((__int64 *)&v292 + 1), 18);
          if ( v126 )
          {
            v38 = *(_QWORD *)(v126 + 24);
            v279 = v38;
          }
        }
        if ( !v38 )
        {
          v127 = *(_QWORD *)(v9 + 384);
          v38 = *(_QWORD *)(v127 + 80);
          v279 = v38;
          if ( !v38 )
          {
            v38 = *(_QWORD *)(v127 + 88);
            v279 = v38;
            if ( !v38 )
              goto LABEL_696;
          }
        }
        ThreadLockExchangeAlways(v38, (__int64)&v307);
        if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v38, (struct tagQMSG *)v8, &v278, &v270, a8) )
          goto LABEL_841;
        v128 = v278;
        if ( !v278 )
          goto LABEL_371;
        v129 = (__int64 *)(v38 + 16);
        if ( *(_QWORD *)(*(_QWORD *)(v38 + 16) + 384LL) != *(_QWORD *)(v9 + 384) )
          goto LABEL_696;
        if ( (unsigned int)IsInsideMenuLoop(v9) )
        {
          v130 = *(_QWORD *)(**(_QWORD **)(v9 + 528) + 8LL);
        }
        else
        {
          v131 = *(__int64 **)(v9 + 592);
          if ( !v131 )
            goto LABEL_369;
          v130 = *v131;
        }
        if ( v130 )
        {
          v38 = v130;
          v279 = v130;
          v129 = (__int64 *)(v130 + 16);
          v128 = *(_QWORD *)(v130 + 16) != v9;
          v278 = v128;
          ThreadLockExchangeAlways(v130, (__int64)&v307);
        }
LABEL_369:
        if ( !v303 )
        {
          v303 = *v129;
          LockExchangeW32Thread(v303, (__int64)&v328);
        }
LABEL_371:
        if ( !v282 && a5 == -1 )
          goto LABEL_379;
        if ( v282 <= a5 )
        {
          if ( v55 < v282 || v55 > a5 )
            goto LABEL_757;
        }
        else if ( v55 >= a5 && v55 <= v282 )
        {
          goto LABEL_757;
        }
LABEL_379:
        if ( (unsigned int)CheckPwndFilter(v38, *(__int64 *)v300) )
        {
          if ( v128 )
            goto LABEL_841;
          if ( !v270 )
            goto LABEL_802;
LABEL_482:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
          goto LABEL_802;
        }
        goto LABEL_757;
      case 0x100:
      case 0x104:
        v58 = 1;
        v288 = 1;
        if ( (*(_DWORD *)(v9 + 440) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
          goto LABEL_841;
        v59 = v292;
        v60 = (unsigned __int8)v292;
        v61 = v270;
        if ( v270 && (DWORD1(v296) & 0x20000) != 0 )
          goto LABEL_183;
        if ( (unsigned __int8)v292 != 18LL )
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 384) + 340LL) &= 0xFFFFFFF3;
          v59 = v292;
        }
        if ( !LOBYTE(gLangToggle[0]) || gLangToggleKeyState >= 8 )
          goto LABEL_157;
        v62 = 0;
        v63 = gLangToggle;
        while ( 1 )
        {
          v64 = *((_BYTE *)v63 + 1);
          v65 = v64 ? v64 == BYTE10(v292) : *(_BYTE *)v63 == (unsigned __int8)v292;
          if ( v65 )
            break;
          ++v62;
          v63 += 4;
          v66 = v62 == 3;
          if ( v62 >= 3 )
            goto LABEL_155;
        }
        gLangToggleKeyState |= *(_DWORD *)&gLangToggle[4 * v62 + 2];
        v66 = v62 == 3;
LABEL_155:
        if ( v66 )
          gLangToggleKeyState = 8;
LABEL_157:
        v67 = *(_BYTE *)(*(_QWORD *)(v9 + 384) + 196LL);
        v68 = v67 & 0x10;
        if ( v60 != 44 )
          goto LABEL_171;
        if ( (v67 & 0x10) != 0 )
        {
          if ( (*(_DWORD *)(v9 + 764) & 0x10) == 0 )
            goto LABEL_162;
          goto LABEL_171;
        }
        if ( (*(_DWORD *)(v9 + 764) & 0x20) == 0 )
        {
LABEL_162:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
          if ( !v68 && (DWORD2(v292) & 0xFF0000) != 0x10000LL )
          {
            v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 408) + 8LL) + 16LL);
            goto LABEL_168;
          }
          v70 = *(_QWORD *)(v9 + 384);
          v69 = *(_QWORD *)(v70 + 88);
          v71 = v69 == 0;
          if ( v69 )
          {
            v72 = CoreWindowProp::GetTopLevelHost(*(struct tagWND **)(v70 + 88));
            v73 = GetTopLevelWindow((__int64)v72);
            if ( v73 )
              v69 = v73;
LABEL_168:
            v71 = v69 == 0;
          }
          v10 = v273;
          LOBYTE(v8) = v272;
          if ( !v71 )
          {
            v74 = HIDWORD(v297) != 1;
            v323 = *(_QWORD *)(v9 + 368);
            *(_QWORD *)(v9 + 368) = &v323;
            v324 = v69;
            ++*(_DWORD *)(v69 + 8);
            xxxSnapWindow(v69, v74);
            ThreadUnlock1(v76, v75);
          }
          goto LABEL_24;
        }
LABEL_171:
        if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
        {
          v77 = v60;
          if ( (v67 & 0x10) != 0 )
            v77 = v60 | 0x400;
          v78 = v77 | 0x200;
          if ( (v67 & 4) == 0 )
            v78 = v77;
          v79 = v78;
          LODWORD(v79) = v78 | 0x100;
          if ( (v67 & 1) == 0 )
            v79 = v78;
          v80 = HotKeyToWindow(v79);
          if ( v80 )
          {
            if ( *(_QWORD *)(v9 + 408) == *(_QWORD *)(*(_QWORD *)(v80 + 16) + 408LL) )
            {
              PostTransformableMessage(*(_QWORD *)(v81 + 88), 274LL, 61776LL, *(struct _LARGE_STRING **)v80, 0);
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
              v10 = v273;
              LOBYTE(v8) = v272;
              goto LABEL_24;
            }
          }
        }
LABEL_183:
        if ( v60 == 231 )
        {
          *(_WORD *)(v9 + 762) = WORD1(v59);
          v59 = 231LL;
        }
LABEL_186:
        v82 = (unsigned __int8)v59;
        if ( (unsigned __int8)v59 == 231LL )
          v59 = 231LL;
        *(_QWORD *)&v292 = v59;
        if ( !v61 || (DWORD1(v296) & 0x20000) == 0 )
        {
          if ( gbGraveKeyToggle )
          {
            v83 = a1;
            if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && BYTE10(v292) == 41 )
            {
              if ( v61 )
              {
                v84 = *(_QWORD *)(a1 + 384);
                if ( (*(_BYTE *)(v84 + 196) & 0x15) == 0
                  && (*(_BYTE *)(v84 + 214) & 0x40) == 0
                  && (*(_BYTE *)(v84 + 215) & 1) == 0
                  && ((v85 = *(__int64 **)(v84 + 80)) == 0LL && (v85 = *(__int64 **)(v84 + 88)) == 0LL || v85[2] == a1) )
                {
                  v9 = a1;
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v290, 1u);
                  v65 = v58 == 0;
                  v10 = v273;
                  LOBYTE(v8) = v272;
                  if ( v65 && v85 )
                  {
                    v351 = *v85;
                    v352 = 80;
                    v353 = 0LL;
                    v354 = 0LL;
                    v355 = 0LL;
                    v356 = 0LL;
                    xxxCallCtfHook(3, 0, 1LL, (__int64)&v351);
                  }
                  goto LABEL_24;
                }
              }
            }
          }
          else
          {
            v83 = a1;
          }
          if ( !v304 && !v58 && v61 && LOBYTE(gLangToggle[0]) )
          {
            v86 = 0;
            ZwQueryDefaultLocale(0, &DefaultLocaleId);
            v87 = *(_QWORD *)(v83 + 384);
            v88 = *(_QWORD *)(v87 + 80);
            if ( !v88 )
            {
              v88 = *(_QWORD *)(v87 + 88);
              if ( !v88 )
              {
LABEL_234:
                if ( v86 )
                {
                  v94 = &unk_1C03257A4;
                  v95 = 3LL;
                  do
                  {
                    v96 = *((_BYTE *)v94 - 3);
                    if ( v96 )
                      v97 = v96 == BYTE10(v292);
                    else
                      v97 = *((_BYTE *)v94 - 4) == (unsigned __int8)v292;
                    if ( v97 )
                      gLangToggleKeyState &= ~*v94;
                    v94 += 2;
                    --v95;
                  }
                  while ( v95 );
                }
                else
                {
                  gLangToggleKeyState = 0;
                }
                goto LABEL_244;
              }
            }
            v89 = *(_QWORD *)(v88 + 16);
            v90 = *(_QWORD *)(v89 + 392);
            if ( gLangToggleKeyState < 8 && (DefaultLocaleId & 0x3FF) == 1 )
            {
              v91 = HKLtoPKL(*(_QWORD *)(v88 + 16), 1LL);
              v92 = v91;
              if ( v90 )
              {
                if ( v91
                  && *(_QWORD *)(v90 + 40) != *(_QWORD *)(v91 + 40)
                  && v91 == HKLtoPKL(v89, 0LL)
                  && ((*(_DWORD *)(v90 + 40) & 0x3FF) == 1 || (*(_DWORD *)(v92 + 40) & 0x3FF) == 1) )
                {
                  v37 = 1;
                }
              }
            }
            switch ( gLangToggleKeyState )
            {
              case 3:
                v86 = 1;
                if ( !v37 || (v93 = 2LL, (*(_DWORD *)(v90 + 40) & 0x3FF) == 1) )
                {
                  v90 = HKLtoPKL(v89, 1LL);
                  v93 = 2LL;
                }
                break;
              case 5:
                v86 = 1;
                if ( !v37 || (*(_DWORD *)(v90 + 40) & 0x3FF) != 1 )
                  v90 = HKLtoPKL(v89, 0LL);
                v93 = 4LL;
                break;
              case 7:
                v90 = gspklBaseLayout;
                v93 = 0LL;
                break;
              default:
LABEL_233:
                v55 = v269;
                goto LABEL_234;
            }
            if ( v90 || (v90 = *(_QWORD *)(*(_QWORD *)(v88 + 16) + 392LL)) != 0 )
              PostMessage(
                v88,
                80LL,
                v93 | ((*(_DWORD *)(v90 + 64) & gSystemFS) != 0),
                *(struct _LARGE_STRING **)(v90 + 40));
            goto LABEL_233;
          }
        }
LABEL_244:
        if ( v82 == 121 )
        {
          v55 |= 4u;
          v269 = v55;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 384) + 196LL) & 4) != 0 && v82 == 27 )
        {
          v55 |= 4u;
          v269 = v55;
        }
        v9 = a1;
        if ( (*(_DWORD *)(a1 + 440) & 8) == 0 )
          *((_QWORD *)&v292 + 1) &= ~0x2000000uLL;
LABEL_251:
        *(_QWORD *)&v284 = (unsigned __int8)v292;
        v98 = *(_QWORD *)(v9 + 384);
        v38 = *(_QWORD *)(v98 + 80);
        v279 = v38;
        if ( !v38 )
        {
          v38 = *(_QWORD *)(v98 + 88);
          v279 = v38;
          if ( !v38 )
            goto LABEL_696;
          if ( v55 - 256 <= 3 )
          {
            v55 += 4;
            v269 = v55;
          }
        }
        ThreadLockExchangeAlways(v38, (__int64)&v307);
        v99 = (__int64 *)(v38 + 16);
        v100 = *(_QWORD *)(v38 + 16);
        if ( v100 == v9 )
        {
          v101 = 0;
          v278 = 0;
          goto LABEL_266;
        }
        v101 = 1;
        v278 = 1;
        if ( *(_QWORD *)(v100 + 384) != *(_QWORD *)(v9 + 384) )
          goto LABEL_696;
        if ( (unsigned int)IsInsideMenuLoop(v9) )
        {
          v102 = *(_QWORD *)(**(_QWORD **)(v9 + 528) + 8LL);
          goto LABEL_261;
        }
        v103 = *(__int64 **)(v9 + 592);
        if ( v103 )
        {
          v102 = *v103;
LABEL_261:
          if ( v102 )
          {
            v38 = v102;
            v279 = v102;
            v99 = (__int64 *)(v102 + 16);
            v101 = *(_QWORD *)(v102 + 16) != v9;
            v278 = v101;
            ThreadLockExchangeAlways(v102, (__int64)&v307);
          }
        }
        if ( !v306 )
        {
          v306 = *v99;
          LockExchangeW32Thread(v306, (__int64)&v319);
        }
LABEL_266:
        if ( v282 || a5 != -1 )
        {
          if ( v282 <= a5 )
          {
            v27 = v270;
            LOBYTE(v8) = v272;
            if ( v55 < v282 || v55 > a5 )
              goto LABEL_25;
          }
          else if ( v55 >= a5 )
          {
            v27 = v270;
            LOBYTE(v8) = v272;
            if ( v55 <= v282 )
              goto LABEL_25;
          }
        }
        v104 = CheckPwndFilter(v38, *(__int64 *)v300);
        v27 = v270;
        LOBYTE(v8) = v272;
        if ( !v104 )
          goto LABEL_25;
        if ( v101 )
          goto LABEL_841;
        LODWORD(v8) = v270;
        if ( v270 )
        {
          if ( (DWORD1(v296) & 0x20000) != 0 )
          {
            v105 = v310;
LABEL_297:
            v109 = v274;
            goto LABEL_298;
          }
          v106 = IsInsideMenuLoop(v9);
          v107 = v284;
          if ( !v106 )
          {
            if ( (_QWORD)v284 == 93LL && v55 == 257 )
              PostTransformableMessage(
                v38,
                (unsigned int)(v284 + 30),
                *(_QWORD *)v38,
                (struct _LARGE_STRING *)0xFFFFFFFFFFFFFFFFLL,
                0);
            if ( v107 == 112 && v55 == 256 )
              PostMessage(v38, 77LL, 0LL, 0LL);
          }
        }
        else
        {
          v107 = v284;
        }
        if ( v107 == 16 )
        {
          v108 = BYTE11(v292) & 1 | 0xA0;
          if ( !v288
            && ((unsigned __int8)(1 << (2 * ((v108 ^ 1) & 3))) & *(_BYTE *)(((unsigned __int64)(v108 ^ 1u) >> 2)
                                                                          + *(_QWORD *)(v9 + 384)
                                                                          + 192)) != 0
            && (*(_DWORD *)(v9 + 440) & 8) == 0 )
          {
            *(_QWORD *)&v292 = v108;
LABEL_292:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
            v10 = v273;
            LOBYTE(v8) = v272;
            goto LABEL_24;
          }
        }
        v105 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v107 >> 2) + *(_QWORD *)(v9 + 384) + 192) & (1 << (2 * (v107 & 3)));
        v310 = v105;
        if ( !v105 )
          goto LABEL_297;
        v109 = v274;
        if ( !(_DWORD)v8 )
          goto LABEL_304;
        if ( (unsigned __int64)v274 > 1 )
          *((_QWORD *)v274 + 5) |= 0x40000000uLL;
LABEL_298:
        if ( !(_DWORD)v8 )
          goto LABEL_304;
        if ( (DWORD1(v296) & 0x20000) != 0 || (unsigned __int64)v109 <= 1 || (*(_DWORD *)(v9 + 1096) & 0x2000000) == 0 )
        {
          xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
LABEL_304:
          v110 = v289;
          goto LABEL_305;
        }
        v110 = xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 0);
        v289 = v110;
LABEL_305:
        v277 = *((_QWORD *)&v292 + 1);
        *(_QWORD *)&v284 = v292;
        v281 = v292;
        if ( v105 )
          v277 = *((_QWORD *)&v292 + 1) | 0x40000000LL;
        if ( v55 == 257 || v55 == 261 )
          v277 |= 0x80000000uLL;
        v111 = *(_QWORD *)(v9 + 384);
        if ( (*(_BYTE *)(v111 + 196) & 0x10) != 0 )
          v277 |= 0x20000000uLL;
        v112 = *(_QWORD *)(v9 + 528);
        if ( v112 && (*(_DWORD *)(v112 + 8) & 1) != 0 )
          v277 |= 0x10000000uLL;
        if ( (*(_DWORD *)(v111 + 340) & 0x4000) != 0 )
          v277 |= 0x8000000uLL;
        if ( !v304 && !gpImeHotKeyListHeader
          || (DWORD1(v296) & 0x20000) != 0
          || !(_DWORD)v8
          || v112 && (*(_DWORD *)(v112 + 8) & 1) != 0
          || (*(_DWORD *)(v9 + 440) & 0x2000000) != 0 )
        {
          v115 = v285;
        }
        else
        {
          v113 = v292;
          if ( (_QWORD)v292 == 231LL )
            v113 = 231;
          v114 = xxxImmProcessKey(v111, v38, v55, v113, v277);
          v115 = v114;
          v285 = v114;
          if ( (v114 & 0x11) != 0 )
          {
            if ( v110 )
            {
              FreeQEntry((unsigned int *)v110);
              v289 = 0LL;
              goto LABEL_329;
            }
            v56 = v284;
LABEL_761:
            LODWORD(v116) = v269;
            goto LABEL_762;
          }
        }
        if ( (_DWORD)v8 )
        {
          v271 = 1;
          v117 = 0;
          if ( (DWORD1(v296) & 0x20000) != 0 )
          {
            v56 = v284;
          }
          else
          {
            v118 = *(KeyboardInputTelemetry **)(v9 + 384);
            v119 = *((_QWORD *)v118 + 45);
            *((_QWORD *)v118 + 45) = *((_QWORD *)&v294 + 1);
            KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
              v118,
              *(_DWORD *)(*(_QWORD *)v9 + 1600LL));
            v120 = v115 & 2;
            v56 = v284;
            v121 = xxxCallCtfHook(2, v120, v284, v277);
            v117 = v121;
            v122 = *(KeyboardInputTelemetry **)(v9 + 384);
            *((_QWORD *)v122 + 45) = v119;
            v123 = (unsigned int *)v289;
            if ( v289 )
            {
              if ( v121 == 2
                && (*(_DWORD *)(v9 + 1096) & 0x4000000) == 0
                && AllocQEntryEx(*(struct tagMLIST **)(v9 + 384), v289, 1) )
              {
                *(_QWORD *)(*(_QWORD *)(v9 + 384) + 48LL) = **(_QWORD **)(v9 + 384);
                DeferSysPeekMsg((struct tagTHREADINFO *)v9, 1);
                v10 = 1;
                v273 = 1;
                v289 = 0LL;
                v27 = v270;
                LOBYTE(v8) = v272;
                goto LABEL_26;
              }
              FreeQEntry(v123);
              v289 = 0LL;
            }
            KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
              v122,
              *(_DWORD *)(*(_QWORD *)v9 + 1600LL),
              ((DWORD2(v291) - 257) & 0xFFFFFFFB) == 0);
          }
          if ( v117 )
            goto LABEL_761;
        }
        v56 = v284;
        if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 416) + 16LL) | *(_BYTE *)(v9 + 600)) & 8) == 0 )
        {
          v124 = v271;
LABEL_349:
          if ( v124
            && (_DWORD)v8
            && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 416) + 16LL) | *(_BYTE *)(v9 + 600)) & 0x40) != 0 )
          {
            xxxCallHook(7, v56, v277, 5u);
          }
          goto LABEL_803;
        }
        v124 = 1;
        v271 = 1;
        v125 = 3;
        if ( (_DWORD)v8 )
          v125 = 0;
        if ( !(unsigned int)xxxCallHook(v125, v284, v277, 2u) )
          goto LABEL_349;
        LODWORD(v116) = v269;
LABEL_763:
        xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
        if ( v280 )
        {
          v234 = *(_QWORD *)(v9 + 416);
          v25 = (unsigned int)(*(_DWORD *)(v9 + 600) | *(_DWORD *)(*(_QWORD *)v234 + 16LL));
          if ( ((*(_BYTE *)(v9 + 600) | *(_BYTE *)(*(_QWORD *)v234 + 16LL)) & 0x40) != 0 )
            xxxCallHook(6, v116, (__int64)&v311, 5u);
          v280 = 0;
        }
        if ( v124 )
        {
          v235 = *(_QWORD *)(v9 + 416);
          v25 = (unsigned int)(*(_DWORD *)(v9 + 600) | *(_DWORD *)(*(_QWORD *)v235 + 16LL));
          if ( ((*(_BYTE *)(v9 + 600) | *(_BYTE *)(*(_QWORD *)v235 + 16LL)) & 0x40) != 0 )
            xxxCallHook(7, v56, v277, 5u);
          v271 = 0;
        }
        v65 = (_DWORD)v8 == 0;
        v27 = v270;
        v10 = v273;
        LOBYTE(v8) = v272;
        if ( !v65 )
          goto LABEL_24;
        break;
      case 0x101:
      case 0x105:
        v59 = v292;
        v61 = v270;
        v58 = v288;
        goto LABEL_186;
      case 0x102:
        goto LABEL_251;
      case 0x119:
      case 0x11B:
        goto LABEL_462;
      default:
        goto LABEL_483;
    }
  }
LABEL_405:
  if ( (*(_DWORD *)(v9 + 440) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
    goto LABEL_841;
  if ( (gdwMitConfig & 1) != 0 && (DWORD1(v296) & 0x100000) != 0
    || (gdwMitConfig & 1) == 0
    && ((unsigned int)IsWheelTargetDesktopApp(v9)
     || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v9)
     || DWORD2(v297) == 34) )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(v9 + 384) + 80LL);
    v279 = v38;
  }
  else if ( v38 && IsCompositionInputWindow((struct tagWND *)v38) )
  {
    if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v38) )
      goto LABEL_467;
  }
  else if ( !(unsigned int)IsInsideMenuLoop(v9) )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    v360[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v360;
    v360[1] = ThreadDesktopWindow;
    if ( ThreadDesktopWindow )
      ++*(_DWORD *)(ThreadDesktopWindow + 8);
    v345 = 512;
    v346 = v292;
    v347 = &v275;
    v348 = 1LL;
    v349 = 0LL;
    v350 = 0;
    v138 = xxxDCEWindowHitTestIndirect((struct tagWND *)ThreadDesktopWindow, (struct tagPOINT)v295, (__int64)&v345);
    v38 = HMValidateHandleNoSecure((unsigned __int64)v138, 1);
    v279 = v38;
    ThreadUnlock1(v140, v139);
  }
  if ( !v38 || (unsigned int)IsInsideMenuLoop(v9) )
  {
LABEL_467:
    v56 = v281;
LABEL_468:
    LODWORD(v8) = v270;
    LODWORD(v116) = v269;
    goto LABEL_762;
  }
  ThreadLockExchangeAlways(v38, (__int64)&v307);
  v141 = *(_QWORD *)(v38 + 16);
  if ( v141 == v9 )
  {
    v142 = 0;
    v278 = 0;
  }
  else
  {
    v142 = 1;
    v278 = 1;
    if ( *(_QWORD *)(v141 + 384) != *(_QWORD *)(v9 + 384) )
      goto LABEL_467;
    if ( !v306 )
    {
      v306 = v141;
      LockExchangeW32Thread(v141, (__int64)&v319);
    }
  }
  v116 = v269;
  if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)v8, v269, v282, a5)
    || !(unsigned int)CheckPwndFilter(v38, *(__int64 *)v300) )
  {
    goto LABEL_757;
  }
  if ( v142 )
    goto LABEL_841;
  if ( !v8 || !IsMouseInPointerActive((_QWORD *)v9, v8) )
  {
    LODWORD(v8) = v270;
    v109 = v274;
    goto LABEL_452;
  }
  v143 = *(_DWORD *)(v8 + 100);
  if ( (v143 & 0x800) == 0 )
  {
    LODWORD(v8) = v270;
    v109 = v274;
    if ( !v270 )
      goto LABEL_454;
    if ( IsMiPMouseMessage(*((_DWORD *)v274 + 6)) )
    {
      if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v109 + 120)) )
      {
        v144 = *(_DWORD **)(v9 + 1136);
        if ( v144 )
        {
          if ( (*v144 & 2) == 0 && (*v144 & 4) == 0 )
            goto LABEL_292;
        }
      }
      v145 = *(_DWORD **)(v9 + 1136);
      if ( v145 )
        *v145 &= ~2u;
    }
LABEL_452:
    if ( (_DWORD)v8 )
      xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
LABEL_454:
    v146 = GetMouseKeyFlags(*(unsigned __int8 **)(v9 + 384));
    v56 = v292 | v146;
    v281 = v292 | v146;
    v276.x = SWORD4(v292);
    v276.y = SWORD5(v292);
    PhysicalToLogicalDPIPointWithHitTest(&v276, &v276, 0LL);
    v277 = (LOWORD(v276.y) << 16) | LOWORD(v276.x);
    *(struct tagPOINT *)((char *)&v293 + 4) = v276;
    v311 = v276;
    v312 = *(_QWORD *)v38;
    v313 = 0;
    v314 = *((_QWORD *)&v294 + 1);
    v315 = v292;
    if ( !(_DWORD)v8 || (v280 = 1, !(unsigned int)xxxCallCtfHook(7, 0, v116, (__int64)&v311)) )
    {
      if ( ((*(_DWORD *)(**(_QWORD **)(v9 + 416) + 16LL) | *(_DWORD *)(v9 + 600)) & 0x100) == 0
        || (v280 = 1, !(unsigned int)xxxCallMouseHook((unsigned int)v116, &v311, (unsigned int)v8)) )
      {
        if ( v280
          && (_DWORD)v8
          && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 416) + 16LL) | *(_BYTE *)(v9 + 600)) & 0x40) != 0 )
        {
          xxxCallHook(6, v116, (__int64)&v311, 5u);
        }
        goto LABEL_803;
      }
    }
    goto LABEL_762;
  }
  if ( !*(_QWORD *)(v38 + 352) )
    *(_DWORD *)(v8 + 100) = v143 & 0xFFFFDFFF;
  LODWORD(v8) = v270;
  v109 = v274;
  if ( !(unsigned int)GeneratePointerMessageFromMouse((struct tagQMSG *)v394, v116, v274, (struct tagWND *)v38, v270) )
  {
    if ( !(_DWORD)v8 )
      goto LABEL_454;
    *((_DWORD *)v109 + 25) &= ~0x800u;
    goto LABEL_452;
  }
  v290 = v394[0];
  v291 = v394[1];
  v292 = v394[2];
  v293 = v394[3];
  v294 = v394[4];
  v295 = v394[5];
  v296 = v394[6];
  v297 = v394[7];
  v298 = v394[8];
  v299 = v394[9];
  v283 = 1;
  v65 = (_DWORD)v8 == 0;
  v8 = (unsigned __int64)v109;
  if ( !v65 )
    *((_DWORD *)v109 + 25) &= ~0x800u;
LABEL_747:
  v54 = DWORD2(v291);
LABEL_748:
  if ( ((DWORD2(v297) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v297) != 50 )
  {
    v269 = v54;
    v277 = *((_QWORD *)&v292 + 1);
    v281 = v292;
    goto LABEL_777;
  }
  EtwTraceBeginPointerMessageRetrieve(v8, (unsigned __int16)v292, v54);
  v230 = xxxRetrievePointerInputMessage(
           v9,
           v300[0],
           v282,
           a5,
           1,
           0,
           &v270,
           (struct tagQMSG *)v8,
           (__int64)&v279,
           (__int64)&v269,
           (__int64)&v281,
           (__int64)&v277,
           &v278,
           a8);
  EtwTraceEndPointerMessageRetrieve(v8, (unsigned __int16)v292, DWORD2(v291));
  v38 = v279;
  if ( v279 )
    ThreadLockExchange(v279, (__int64)&v307);
  v231 = v230 - 1;
  if ( v231 )
  {
    v232 = v231 - 1;
    if ( !v232 )
    {
      if ( v278 && !v302 )
      {
        v236 = *(_QWORD *)(v38 + 16);
        LockExchangeW32Thread(v236, (__int64)&v325);
        v47 = 0LL;
        v48 = v287;
        v49 = 0LL;
        goto LABEL_844;
      }
      goto LABEL_841;
    }
    v233 = v232 - 1;
    if ( !v233 )
    {
      xxxDefPointerProc(v38, DWORD2(v291), v292, *((_QWORD *)&v292 + 1));
      v56 = v281;
      LODWORD(v8) = v270;
      LODWORD(v116) = v269;
      goto LABEL_762;
    }
    if ( v233 != 1 )
      goto LABEL_467;
    goto LABEL_757;
  }
  v54 = v269;
LABEL_777:
  v237 = v270;
  if ( v270 )
  {
    if ( IsMouseInPointerActive((_QWORD *)v9, 0LL) && v283 )
    {
      if ( v38 )
        v238 = *(_QWORD *)v38;
      else
        v238 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v9 + 1136) + 48LL) = v238;
      v239 = *(_QWORD *)(v9 + 1136);
      v240 = *(_DWORD *)(v239 + 36);
      if ( (v240 & 0x400000) != 0 && !IsCompositionInputWindow((struct tagWND *)v38) )
        *(_DWORD *)(v239 + 36) = v240 & 0xFFBFFFFF;
      v241 = GetMiPWindowFlags((struct tagWND *)v38) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v38 )
        InternalSetProp(v38, (unsigned __int16)gatomMiPFlags, v241, 5);
      if ( ((DWORD2(v291) - 578) & 0xFFFFFFFB) != 0 )
      {
        if ( ((DWORD2(v291) - 579) & 0xFFFFFFFB) == 0 )
          **(_DWORD **)(v9 + 1136) &= ~8u;
      }
      else
      {
        v242 = 0;
        if ( DWORD2(v291) == 578 )
          v242 = 8;
        **(_DWORD **)(v9 + 1136) = v242 | **(_DWORD **)(v9 + 1136) & 0xFFFFFFF7;
      }
    }
    else
    {
      xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
    }
  }
  if ( IsPointerMessageTouchpad((struct tagTHREADINFO *)v9, *((unsigned __int64 *)&v292 + 1), v283) )
  {
    if ( !v237 && !(unsigned int)IsPTPRedirected((struct tagTHREADINFO *)v9, (struct tagMSG *)&v291) )
      xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)&v290, 1u);
    v243 = v277;
    if ( v54 == 595 )
      v243 = -1LL;
    v277 = v243;
  }
LABEL_802:
  v109 = v274;
LABEL_803:
  if ( *(_QWORD *)(v9 + 676) != *(_QWORD *)((char *)&v293 + 4) )
    *(_DWORD *)(v9 + 440) |= 0x100000u;
  if ( (unsigned __int64)v109 > 1 && (BYTE4(v296) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v109 + 6) == 512 )
    {
      if ( v38 )
        v244 = *(_QWORD *)v38;
      else
        v244 = 0LL;
      *((_QWORD *)v109 + 2) = v244;
      *((_DWORD *)v109 + 25) |= 0x400u;
    }
    *((_QWORD *)v109 + 8) = v277;
  }
  *(_QWORD *)(v9 + 676) = *(_QWORD *)((char *)&v293 + 4);
  *(_QWORD *)(v9 + 684) = v295;
  *(_DWORD *)(v9 + 492) = v293;
  *(_QWORD *)(*(_QWORD *)(v9 + 384) + 360LL) = *((_QWORD *)&v294 + 1);
  *(_QWORD *)(*(_QWORD *)(v9 + 384) + 40LL) = 1LL;
  *(_QWORD *)(v9 + 496) = 1LL;
  *(_QWORD *)(v9 + 1100) = *((_QWORD *)&v297 + 1);
  *(_DWORD *)(v9 + 1144) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( *(_DWORD *)(v9 + 1104) == 1 )
    *(_DWORD *)(v9 + 1096) |= 0x20000u;
  else
    *(_DWORD *)(v9 + 1096) &= ~0x20000u;
  **(_DWORD **)(v9 + 400) &= ~8u;
  **(_QWORD **)(v9 + 432) &= 0x7FFFFFFFuLL;
  v245 = 0LL;
  if ( v270 )
  {
    v246 = *(_QWORD **)(v9 + 432);
    if ( (BYTE4(v296) & 1) != 0 )
      *v246 |= 0x1000uLL;
    else
      *v246 &= ~0x1000uLL;
  }
  v247 = v269;
  TransferWakeBit(a1, v269);
  v248 = 31751;
  v249 = *(_QWORD *)(a1 + 384);
  if ( !*(_DWORD *)(v249 + 16) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 48LL) )
  {
    if ( (*(_BYTE *)(v249 + 340) & 0x20) != 0 )
      v248 = 31749;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~v248;
  }
  if ( v270 )
  {
    if ( v283 )
    {
      v250 = *(_DWORD **)(a1 + 1136);
      if ( v250 )
      {
        if ( (*v250 & 1) != 0 && (*v250 & 4) != 0 )
          SetMiPWakeBit((struct tagTHREADINFO *)a1);
      }
    }
  }
  if ( v279 )
    v245 = *(_QWORD *)v279;
  *(_QWORD *)a2 = v245;
  *(_DWORD *)(a2 + 8) = v247;
  v251 = v281;
  if ( (v285 & 2) != 0 )
    v251 = 229LL;
  *(_QWORD *)(a2 + 16) = v251;
  *(_QWORD *)(a2 + 24) = v277;
  *(_DWORD *)(a2 + 32) = v293;
  *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v293 + 4);
  if ( v270 )
  {
    EtwTraceInputProcessDelay(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 384) + 368LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v252 = *(_DWORD *)(a2 + 8);
    if ( v252 == 256 )
    {
      *(_DWORD *)(a1 + 1200) |= 1u;
      *(_QWORD *)(a1 + 1184) = *(_QWORD *)(a1 + 1100);
      *(_DWORD *)(a1 + 1176) = *(unsigned __int16 *)(a2 + 26);
      *(_DWORD *)(a1 + 1180) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 1192) = *((_QWORD *)&v298 + 1);
    }
    else if ( ((v252 - 257) & 0xFFFFFFFB) == 0 )
    {
      *(_DWORD *)(a1 + 1200) &= ~1u;
    }
  }
  EtwTraceRetrieveInputMessage(a2, (unsigned int)v270);
  PopAndFreeW32ThreadLock((__int64)&v325);
  PopAndFreeW32ThreadLock((__int64)&v328);
  PopAndFreeW32ThreadLock((__int64)&v331);
  PopAndFreeW32ThreadLock((__int64)&v316);
  PopAndFreeW32ThreadLock((__int64)&v319);
  ThreadUnlock1(v254, v253);
  return 1LL;
}

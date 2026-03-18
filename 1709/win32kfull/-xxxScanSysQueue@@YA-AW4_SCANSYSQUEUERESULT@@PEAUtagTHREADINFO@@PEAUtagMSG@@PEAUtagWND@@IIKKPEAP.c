/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008364 (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     DeferMessagesOnQueue @ 0x1C0009834 (DeferMessagesOnQueue.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AFC0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000CB98 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C000D130 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     xxxDCEWindowHitTest @ 0x1C0061F80 (xxxDCEWindowHitTest.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0063700 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0084FA4 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0085D70 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     IsHiddenByInputService @ 0x1C009ECA8 (IsHiddenByInputService.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C009ECF0 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00CD370 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     FreeQEntry @ 0x1C00CD688 (FreeQEntry.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     GetAppImeCompatFlags @ 0x1C00CE968 (GetAppImeCompatFlags.c)
 *     xxxImmProcessKey @ 0x1C00CE9BC (xxxImmProcessKey.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00CF124 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CF15C (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     IsInsideMenuLoop @ 0x1C00CF214 (IsInsideMenuLoop.c)
 *     LockExchangeW32Thread @ 0x1C00CF230 (LockExchangeW32Thread.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00CF29C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     PostMove @ 0x1C00CF348 (PostMove.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00CF720 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     GetMouseKeyFlags @ 0x1C00CF764 (GetMouseKeyFlags.c)
 *     IsMouseInPointerActive @ 0x1C00CF7DC (IsMouseInPointerActive.c)
 *     IsThreadMiPEnabled @ 0x1C00CF820 (IsThreadMiPEnabled.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00CF850 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CF8DC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00CF9D8 (TransferWakeBit.c)
 *     CheckPwndFilter @ 0x1C00CFA74 (CheckPwndFilter.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest @ 0x1C01092D8 (xxxWindowHitTest.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     xxxCallMouseHook @ 0x1C0119694 (xxxCallMouseHook.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011F930 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     FreePointerMessageParams @ 0x1C01BF114 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01C048C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     SetMiPPromotion @ 0x1C01C0CFC (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C3E10 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01CB734 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F2F1C (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNItemHitTest @ 0x1C0205964 (MNItemHitTest.c)
 *     xxxCallHandleMenuMessages @ 0x1C0205D10 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C020F46C (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C020F6A4 (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020F81C (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021B580 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0220FA8 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C02267D0 (_W32ExceptionHandler.c)
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
  BOOL v8; // edi
  int v10; // r14d
  __int16 v11; // cx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rbx
  int v23; // edx
  __int64 v24; // rcx
  __int64 *v25; // rax
  struct _KTHREAD *v26; // rdi
  __int64 v27; // rbx
  int v28; // edx
  __int64 v29; // rcx
  __int64 *v30; // rax
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rbx
  int v33; // edx
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 *v38; // rax
  unsigned int v39; // r15d
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 Valid; // rcx
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned __int64 *v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  unsigned __int64 v51; // rbx
  int v52; // r15d
  struct _KTHREAD *v53; // rsi
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // rsi
  __int64 *v59; // r14
  unsigned __int64 v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // r14
  __int64 v68; // rcx
  __int64 v69; // rbx
  _QWORD *v70; // rdx
  int v71; // eax
  unsigned int v72; // esi
  unsigned int v73; // r13d
  struct tagQMSG *v74; // r13
  __int64 v75; // r9
  int v76; // r14d
  __int64 v77; // r8
  __int64 v78; // r10
  __int64 v79; // r11
  int v80; // ebx
  __int64 v81; // rbx
  __int64 v82; // rax
  bool v83; // zf
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rax
  _BOOL8 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned int v89; // ecx
  unsigned int v90; // edx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r11
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 *v96; // rbx
  __int64 v97; // rax
  __int64 *v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // r9
  int v104; // edi
  unsigned __int8 v105; // r8
  struct tagQMSG *v106; // rdx
  struct tagQMSG *v107; // rbx
  __int64 v108; // r10
  __int64 v109; // rcx
  KeyboardInputTelemetry *v110; // rcx
  __int64 v111; // rbx
  int v112; // eax
  KeyboardInputTelemetry *v113; // rcx
  unsigned int *v114; // rbx
  int v115; // ebx
  int v116; // ecx
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // ebx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // r9
  unsigned int v123; // edi
  unsigned int v124; // ebx
  InteractiveControlManager *v125; // rax
  int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  struct tagWND *v131; // rcx
  unsigned __int64 v132; // rax
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rcx
  int v138; // ebx
  int v139; // eax
  _DWORD *v140; // rax
  _DWORD *v141; // rax
  unsigned int MouseKeyFlags; // eax
  char v143; // al
  unsigned __int64 v144; // rdi
  int v145; // ebx
  int v146; // r8d
  __int64 v147; // rax
  struct tagWND *v148; // rcx
  __int64 v149; // r9
  int v150; // r8d
  __int64 v151; // r9
  int v152; // eax
  unsigned __int64 v153; // rdx
  __int64 v154; // rcx
  HWND v155; // rbx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // rax
  __int64 v163; // rcx
  int v164; // r13d
  __int64 v165; // rcx
  __int64 v166; // rdx
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // rax
  struct tagPOINT v169; // r8
  unsigned __int64 v170; // rbx
  int v171; // edx
  int v172; // edx
  int v173; // eax
  unsigned __int16 v174; // di
  __int64 v175; // rsi
  int v176; // eax
  unsigned __int64 v177; // rcx
  unsigned __int64 v178; // rcx
  unsigned __int64 v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // r8
  int v182; // esi
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // r11
  int v187; // r10d
  int v188; // r9d
  int v189; // kr04_4
  int v190; // edx
  __int64 v191; // rcx
  int v192; // eax
  int v193; // ecx
  unsigned int TouchTimeFromCPLValue; // ecx
  struct tagQMSG *v195; // rbx
  int v196; // eax
  struct tagQMSG *v197; // r10
  unsigned int v198; // r13d
  unsigned int v199; // ebx
  __int64 v200; // rcx
  _DWORD *v201; // rax
  _DWORD *v202; // rax
  __int64 v203; // rdx
  unsigned __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rax
  __int64 v207; // rbx
  __int64 v208; // rdx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // r11
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rax
  int v217; // ecx
  int v218; // esi
  const struct tagQMSG *v219; // r8
  int v220; // eax
  __int64 v221; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  bool v223; // si
  struct tagWND *v224; // rbx
  struct tagWND *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rdx
  __int64 v228; // rcx
  BOOL v229; // eax
  __int64 v230; // r10
  int v231; // r10d
  int v232; // ebx
  int v233; // ebx
  int v234; // ebx
  int v235; // ebx
  __int64 v236; // r13
  __int64 v237; // r9
  unsigned __int64 v238; // rcx
  __int64 v239; // rbx
  int v240; // r11d
  unsigned __int64 v241; // rax
  int v242; // edx
  __int64 v243; // r9
  __int64 v244; // rax
  unsigned __int64 v245; // rax
  __int64 v246; // r14
  _QWORD *v247; // rax
  unsigned int v248; // esi
  __int16 v249; // dx
  __int64 v250; // r8
  _DWORD *v251; // rax
  __int64 v252; // rax
  int v253; // eax
  __int64 v254; // rdx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rax
  __int64 v258; // rdx
  __int64 v259; // r8
  __int64 v260; // r9
  __int64 v261; // rax
  __int64 v262; // rdx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rax
  __int64 v266; // rdx
  __int64 v267; // r8
  __int64 v268; // r9
  __int64 v269; // rax
  __int64 v270; // rdx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rax
  __int64 v274; // rdx
  __int64 v275; // r8
  __int64 v276; // rcx
  __int64 v277; // r15
  __int64 v278; // r8
  struct _KTHREAD *v279; // rdi
  __int64 v280; // rbx
  __int64 v281; // rdx
  __int64 v282; // r8
  __int64 *v283; // rax
  __int64 v284; // rcx
  struct _KTHREAD *v285; // rdi
  __int64 v286; // rbx
  __int64 v287; // rdx
  __int64 v288; // r8
  __int64 *v289; // rax
  __int64 v290; // rcx
  struct _KTHREAD *v291; // rdi
  __int64 v292; // rbx
  __int64 v293; // rdx
  __int64 v294; // r8
  __int64 *v295; // rax
  __int64 v296; // rcx
  struct _KTHREAD *v297; // rdi
  __int64 v298; // rbx
  __int64 v299; // rdx
  __int64 v300; // r8
  __int64 *v301; // rax
  __int64 v302; // rcx
  struct _KTHREAD *v303; // rbx
  __int64 v304; // rdx
  __int64 v305; // r8
  __int64 *v306; // rax
  __int64 v307; // rcx
  unsigned int v308; // [rsp+70h] [rbp-698h] BYREF
  int v309; // [rsp+74h] [rbp-694h] BYREF
  int v310; // [rsp+78h] [rbp-690h]
  int v311; // [rsp+7Ch] [rbp-68Ch]
  BOOL v312; // [rsp+80h] [rbp-688h]
  int v313; // [rsp+84h] [rbp-684h] BYREF
  struct tagPOINT v314; // [rsp+88h] [rbp-680h] BYREF
  struct tagQMSG *v315; // [rsp+90h] [rbp-678h]
  __int64 v316; // [rsp+98h] [rbp-670h] BYREF
  __int64 ThreadDesktopWindow; // [rsp+A0h] [rbp-668h] BYREF
  int v318; // [rsp+A8h] [rbp-660h] BYREF
  int v319; // [rsp+ACh] [rbp-65Ch]
  __int64 v320; // [rsp+B0h] [rbp-658h] BYREF
  int v321; // [rsp+B8h] [rbp-650h]
  unsigned int v322; // [rsp+BCh] [rbp-64Ch]
  int v323; // [rsp+C0h] [rbp-648h]
  __int64 v324; // [rsp+C8h] [rbp-640h]
  int v325; // [rsp+D0h] [rbp-638h]
  int v326; // [rsp+D4h] [rbp-634h]
  struct tagQMSG *v327; // [rsp+D8h] [rbp-630h]
  __int128 v328; // [rsp+E0h] [rbp-628h] BYREF
  __int128 v329; // [rsp+F0h] [rbp-618h] BYREF
  __int128 v330; // [rsp+100h] [rbp-608h]
  __int128 v331; // [rsp+110h] [rbp-5F8h]
  __int128 v332; // [rsp+120h] [rbp-5E8h]
  __int128 v333; // [rsp+130h] [rbp-5D8h] BYREF
  __int128 v334; // [rsp+140h] [rbp-5C8h]
  __int128 v335; // [rsp+150h] [rbp-5B8h]
  __int128 v336; // [rsp+160h] [rbp-5A8h]
  __int128 v337; // [rsp+170h] [rbp-598h]
  int v338[2]; // [rsp+180h] [rbp-588h]
  __int64 v339; // [rsp+188h] [rbp-580h]
  __int64 v340; // [rsp+190h] [rbp-578h]
  __int64 v341; // [rsp+198h] [rbp-570h]
  int v342; // [rsp+1A0h] [rbp-568h]
  __int64 v343; // [rsp+1A8h] [rbp-560h]
  __int64 v344; // [rsp+1B0h] [rbp-558h] BYREF
  __int64 v345; // [rsp+1B8h] [rbp-550h]
  int v346; // [rsp+1C8h] [rbp-540h]
  int v347; // [rsp+1CCh] [rbp-53Ch]
  __int64 v348; // [rsp+1D0h] [rbp-538h] BYREF
  __int64 v349; // [rsp+1D8h] [rbp-530h]
  LONG_PTR (__fastcall *v350)(__int64); // [rsp+1E0h] [rbp-528h]
  __int64 v351; // [rsp+1E8h] [rbp-520h] BYREF
  __int64 v352; // [rsp+1F0h] [rbp-518h]
  LONG_PTR (__fastcall *v353)(__int64); // [rsp+1F8h] [rbp-510h]
  __int64 v354; // [rsp+200h] [rbp-508h] BYREF
  __int64 v355; // [rsp+208h] [rbp-500h]
  LONG_PTR (__fastcall *v356)(__int64); // [rsp+210h] [rbp-4F8h]
  __int64 v357; // [rsp+218h] [rbp-4F0h] BYREF
  __int64 v358; // [rsp+220h] [rbp-4E8h]
  LONG_PTR (__fastcall *v359)(__int64); // [rsp+228h] [rbp-4E0h]
  __int64 v360; // [rsp+230h] [rbp-4D8h] BYREF
  __int64 v361; // [rsp+238h] [rbp-4D0h]
  LONG_PTR (__fastcall *v362)(__int64); // [rsp+240h] [rbp-4C8h]
  struct tagPOINT v363; // [rsp+248h] [rbp-4C0h] BYREF
  unsigned __int64 v364; // [rsp+250h] [rbp-4B8h]
  int v365; // [rsp+258h] [rbp-4B0h]
  __int64 v366; // [rsp+260h] [rbp-4A8h]
  int v367; // [rsp+268h] [rbp-4A0h]
  struct tagMENUSTATE *v368; // [rsp+270h] [rbp-498h] BYREF
  __int64 v369; // [rsp+278h] [rbp-490h] BYREF
  __int64 v370; // [rsp+280h] [rbp-488h]
  struct InteractiveControlDevice *v371; // [rsp+290h] [rbp-478h] BYREF
  struct InteractiveControlInput *v372; // [rsp+298h] [rbp-470h] BYREF
  _DWORD v373[6]; // [rsp+2A0h] [rbp-468h] BYREF
  unsigned int v374; // [rsp+2B8h] [rbp-450h] BYREF
  __int64 v375; // [rsp+2C0h] [rbp-448h]
  unsigned __int64 v376; // [rsp+2C8h] [rbp-440h]
  int *v377; // [rsp+2D0h] [rbp-438h]
  int v378; // [rsp+2D8h] [rbp-430h]
  int v379; // [rsp+2DCh] [rbp-42Ch]
  char *v380; // [rsp+2E0h] [rbp-428h]
  int v381; // [rsp+2E8h] [rbp-420h]
  __int64 v382; // [rsp+2F0h] [rbp-418h] BYREF
  int v383; // [rsp+2F8h] [rbp-410h]
  __int64 v384; // [rsp+300h] [rbp-408h]
  __int64 v385; // [rsp+308h] [rbp-400h]
  __int64 v386; // [rsp+310h] [rbp-3F8h]
  __int64 v387; // [rsp+318h] [rbp-3F0h]
  __int128 v388; // [rsp+320h] [rbp-3E8h]
  __int128 v389; // [rsp+340h] [rbp-3C8h]
  __int128 v390; // [rsp+350h] [rbp-3B8h]
  __int128 v391; // [rsp+360h] [rbp-3A8h]
  _QWORD v392[3]; // [rsp+370h] [rbp-398h] BYREF
  _QWORD v393[3]; // [rsp+388h] [rbp-380h] BYREF
  __int128 v394; // [rsp+3A0h] [rbp-368h]
  __int128 v395; // [rsp+3B0h] [rbp-358h]
  __int128 v396; // [rsp+3C0h] [rbp-348h]
  __int128 v397; // [rsp+3D0h] [rbp-338h]
  __int128 v398; // [rsp+3E0h] [rbp-328h]
  __int128 v399; // [rsp+3F0h] [rbp-318h]
  __int128 v400; // [rsp+400h] [rbp-308h]
  __int128 v401; // [rsp+410h] [rbp-2F8h]
  unsigned __int64 v402; // [rsp+430h] [rbp-2D8h]
  __int64 v403; // [rsp+438h] [rbp-2D0h]
  __int64 v404; // [rsp+440h] [rbp-2C8h]
  __int64 v405; // [rsp+448h] [rbp-2C0h]
  __int128 v406; // [rsp+450h] [rbp-2B8h] BYREF
  __int128 v407; // [rsp+460h] [rbp-2A8h]
  __int128 v408; // [rsp+470h] [rbp-298h]
  __int128 v409; // [rsp+480h] [rbp-288h]
  __int128 v410; // [rsp+490h] [rbp-278h]
  __int128 v411; // [rsp+4A0h] [rbp-268h]
  __int128 v412; // [rsp+4B0h] [rbp-258h]
  __int128 v413; // [rsp+4C0h] [rbp-248h]
  __int128 v414; // [rsp+4D0h] [rbp-238h]
  __int128 v415; // [rsp+4E0h] [rbp-228h]
  __int128 v416; // [rsp+4F0h] [rbp-218h] BYREF
  __int128 v417; // [rsp+500h] [rbp-208h]
  __int128 v418; // [rsp+510h] [rbp-1F8h]
  __int128 v419; // [rsp+520h] [rbp-1E8h]
  __int128 v420; // [rsp+530h] [rbp-1D8h]
  __int128 v421; // [rsp+540h] [rbp-1C8h]
  __int128 v422; // [rsp+550h] [rbp-1B8h]
  __int128 v423; // [rsp+560h] [rbp-1A8h]
  __int128 v424; // [rsp+570h] [rbp-198h]
  __int128 v425; // [rsp+580h] [rbp-188h]
  _OWORD v426[10]; // [rsp+590h] [rbp-178h] BYREF
  char v427[24]; // [rsp+630h] [rbp-D8h] BYREF
  unsigned int v428; // [rsp+648h] [rbp-C0h]

  v322 = a4;
  *(_QWORD *)v338 = a3;
  v316 = 0LL;
  v309 = a6 & 1;
  v323 = 0;
  v342 = 0;
  v10 = 0;
  v311 = 0;
  LOBYTE(v8) = 0;
  v312 = v8;
  v327 = 0LL;
  *a8 = 0LL;
  v11 = a7;
  if ( a7 == 0x2000 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
      return 0LL;
    }
    v11 = 0x2000;
  }
  v325 = 0;
  v321 = 0;
  v310 = 0;
  v12 = *(_QWORD *)(a1 + 408);
  if ( !*(_QWORD *)(v12 + 64) )
  {
    *(_QWORD *)(v12 + 64) = a1;
    **(_DWORD **)(a1 + 424) |= 1u;
  }
  if ( (v11 & 0x1C07) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 408);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 380) &= ~0x400u;
    else
      *(_DWORD *)(v13 + 380) |= 0x400u;
  }
  v14 = *(_QWORD *)(a1 + 408);
  if ( *(_QWORD *)(v14 + 64) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v324 = 0LL;
  v343 = 0LL;
  v339 = 0LL;
  v341 = 0LL;
  v340 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v17 = *ThreadWin32Thread;
  }
  v351 = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = &v351;
  v352 = 0LL;
  v353 = DereferenceW32Thread;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v25 )
      v22 = *v25;
  }
  v348 = *(_QWORD *)(v22 + 16);
  *(_QWORD *)(v22 + 16) = &v348;
  v349 = 0LL;
  v350 = DereferenceW32Thread;
  v26 = KeGetCurrentThread();
  v27 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23) )
  {
    v30 = (__int64 *)PsGetThreadWin32Thread(v26);
    if ( v30 )
      v27 = *v30;
  }
  v360 = *(_QWORD *)(v27 + 16);
  *(_QWORD *)(v27 + 16) = &v360;
  v361 = 0LL;
  v362 = DereferenceW32Thread;
  v31 = KeGetCurrentThread();
  v32 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v31);
    if ( v35 )
      v32 = *v35;
  }
  v357 = *(_QWORD *)(v32 + 16);
  *(_QWORD *)(v32 + 16) = &v357;
  v358 = 0LL;
  v359 = DereferenceW32Thread;
  v36 = (__int64)KeGetCurrentThread();
  v37 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v36);
    if ( v38 )
      v37 = *v38;
  }
  v354 = *(_QWORD *)(v37 + 16);
  *(_QWORD *)(v37 + 16) = &v354;
  v355 = 0LL;
  v356 = DereferenceW32Thread;
  v344 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = &v344;
  v345 = 0LL;
LABEL_29:
  v39 = v309;
LABEL_30:
  while ( 2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) = 0LL;
    v40 = v312;
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
LABEL_32:
              v347 = (**(_DWORD **)(a1 + 456) >> 9) & 1;
              v41 = *(_QWORD *)(a1 + 408);
              v42 = *(_QWORD *)(v41 + 80);
              if ( v42 )
              {
                if ( !(_BYTE)v40 )
                {
                  v40 = v10 != 0;
                  v312 = v10 != 0;
                }
                LODWORD(v36) = v312;
              }
              else
              {
                v10 = 0;
                v311 = 0;
                LOBYTE(v36) = 0;
                v312 = v36;
              }
              v319 = 0;
              v320 = 0LL;
              v326 = 0;
              Valid = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 48LL);
              if ( !Valid )
                goto LABEL_846;
              if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
                Valid = PhkNextValid(Valid);
              if ( Valid && (v44 = grpdeskRitInput, *(_QWORD *)(a1 + 432) == grpdeskRitInput) )
              {
                if ( v42 )
                {
                  v40 = 0LL;
                  v315 = 0LL;
                }
                else
                {
                  v45 = xxxCallJournalPlaybackHook(&v328, v40);
                  if ( v45 == -1 )
                  {
                    v40 = 0LL;
                    v315 = 0LL;
                  }
                  else if ( v45 )
                  {
                    *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= 0xE3F8u;
                    *(_WORD *)(*(_QWORD *)(a1 + 424) + 4LL) &= 0xE3F8u;
                    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 392LL) = DWORD2(v329);
                    qword_1C0327A80 = InternalSetTimer(0LL, qword_1C0327A80, v45, (__int64)JournalTimer, 32, 276);
                    v40 = 0LL;
                    v315 = 0LL;
                  }
                  else
                  {
                    WakeSomeone(*(_QWORD *)(a1 + 408), 0LL, DWORD2(v329), 0LL);
                    CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
                    v40 = 1LL;
                    v315 = (struct tagQMSG *)1;
                  }
                }
              }
              else
              {
LABEL_846:
                if ( (*(_DWORD *)(v41 + 380) & 0x20) != 0 )
                  PostMove((struct tagQ *)v41);
                v46 = *(_QWORD *)(a1 + 408);
                v44 = v46 + 24;
                if ( !*(_DWORD *)(v46 + 40) )
                {
                  v40 = 0LL;
                  v315 = 0LL;
                  goto LABEL_69;
                }
                if ( v42 && (v47 = *(unsigned __int64 **)(v46 + 80), (unsigned __int64)v47 > 1) )
                  v40 = *v47;
                else
                  v40 = *(_QWORD *)v44;
                v315 = (struct tagQMSG *)v40;
                if ( (*(_DWORD *)(a1 + 1184) & 0x2000) != 0 )
                {
                  if ( !v40 )
                    goto LABEL_69;
                  do
                  {
                    v48 = *(_DWORD *)(v40 + 100);
                    if ( (v48 & 0x20) == 0 )
                      break;
                    if ( (v48 & 0x10) == 0 )
                      break;
                    v40 = *(_QWORD *)v40;
                    v315 = (struct tagQMSG *)v40;
                  }
                  while ( v40 );
                }
                if ( v40 )
                {
                  v49 = *(_QWORD *)(v40 + 104);
                  if ( v49 && v49 != a1 && (*(_DWORD *)(v49 + 464) & 0x10000) != 0 )
                  {
                    v40 = (unsigned __int64)DeferMessagesOnQueue((struct tagMLIST *)v44, (struct tagQMSG *)v40);
                    v315 = (struct tagQMSG *)v40;
                  }
                  if ( v40 )
                  {
                    v44 = (__int64)&v328;
                    v328 = *(_OWORD *)v40;
                    v329 = *(_OWORD *)(v40 + 16);
                    v330 = *(_OWORD *)(v40 + 32);
                    v331 = *(_OWORD *)(v40 + 48);
                    v332 = *(_OWORD *)(v40 + 64);
                    v333 = *(_OWORD *)(v40 + 80);
                    v334 = *(_OWORD *)(v40 + 96);
                    v335 = *(_OWORD *)(v40 + 112);
                    v336 = *(_OWORD *)(v40 + 128);
                    v337 = *(_OWORD *)(v40 + 144);
                  }
                }
              }
LABEL_69:
              *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) = v40;
              if ( v40 <= 1 )
                goto LABEL_91;
              v50 = DWORD1(v334);
              if ( (BYTE4(v334) & 0x20) != 0 )
              {
                *a8 = (struct tagQMSG *)v40;
                *(_DWORD *)(v40 + 100) |= 0x100u;
                v39 = 0;
                v309 = 0;
                v50 = DWORD1(v334);
              }
              if ( (v50 & 0x10000) == 0 )
                break;
              if ( *((_QWORD *)&v334 + 1) == a1 )
                v10 = 1;
              v311 = v10;
              LOBYTE(v40) = 1;
              v312 = v40;
            }
            if ( (v50 & 0x40000) == 0 )
              break;
            v40 = v312;
            if ( *((_QWORD *)&v334 + 1) == a1 && v10 == 1 )
            {
              v10 = 2;
              v311 = 2;
            }
          }
          if ( (_DWORD)v334 != 4 || !(_BYTE)v36 )
            break;
LABEL_82:
          DeferSysPeekMsg((struct tagTHREADINFO *)a1, 0);
          v40 = v312;
        }
        if ( !v39 )
          goto LABEL_91;
        v44 = DWORD2(v329);
        if ( !v10 || (unsigned int)(DWORD2(v329) - 256) > 9 )
          break;
        DeferSysPeekMsg((struct tagTHREADINFO *)a1, 0);
        v10 = 2;
        v311 = 2;
        v40 = v312;
      }
      if ( v10 == 2 && ((unsigned int)(DWORD2(v329) - 512) <= 0xE || (unsigned int)(DWORD2(v329) - 160) <= 0xD) )
        goto LABEL_82;
LABEL_91:
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) )
      {
        if ( a7 == 0x2000 )
          *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= ~0x2000u;
        goto LABEL_792;
      }
      ThreadUnlock1(v44, v40);
      v51 = v329;
      v52 = 0;
      v36 = 0LL;
      v53 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v55, v54) )
        PsGetThreadWin32Thread(v53);
      v57 = (unsigned __int16)v51;
      if ( (unsigned __int64)(unsigned __int16)v51 < *(_QWORD *)(gpsi + 8LL) )
      {
        v58 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v51 * LODWORD(gSharedInfo[2]);
        v59 = (__int64 *)(gpKernelHandleTable
                        + 24 * ((__int64)((unsigned int)(unsigned __int16)v51 * LODWORD(gSharedInfo[2])) >> 5));
        v60 = v51 >> 16;
        if ( ((_WORD)v60 == *(_WORD *)(v58 + 26)
           || (_WORD)v60 == 0xFFFF
           || !(_WORD)v60 && PsGetCurrentProcessWow64Process(gpKernelHandleTable))
          && (*(_BYTE *)(v58 + 25) & 1) == 0
          && *(_BYTE *)(v58 + 24) == 1 )
        {
          v36 = *v59;
        }
      }
      v61 = v36;
      ThreadDesktopWindow = v36;
      v344 = *(_QWORD *)(a1 + 392);
      *(_QWORD *)(a1 + 392) = &v344;
      v345 = v36;
      if ( v36 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
        v61 = ThreadDesktopWindow;
      }
      v62 = (unsigned int)v334;
      if ( (_DWORD)v334 )
      {
        if ( (_DWORD)v334 == 4 && *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) != *(_QWORD *)(*(_QWORD *)(a1 + 408) + 24LL) )
          goto LABEL_698;
        if ( (_DWORD)v334 == 9 && DWORD2(v329) == 96 )
        {
          v63 = *((_QWORD *)&v328 + 1);
          if ( *((_QWORD *)&v328 + 1) )
          {
            do
            {
              if ( !IsHiddenByInputService(v63) )
                break;
              v63 = *(_QWORD *)(v63 + 8);
            }
            while ( v63 );
            if ( v63 )
              goto LABEL_698;
          }
        }
        if ( !*((_QWORD *)&v334 + 1) || *((_QWORD *)&v334 + 1) == a1 )
        {
          EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL));
          v68 = *(_QWORD *)(a1 + 408);
          v69 = *(_QWORD *)(v68 + 80);
          v70 = *(_QWORD **)(v69 + 8);
          if ( v70 )
            *v70 = *(_QWORD *)v69;
          if ( *(_QWORD *)v69 )
            *(_QWORD *)(*(_QWORD *)v69 + 8LL) = *(_QWORD *)(v69 + 8);
          if ( *(_QWORD *)(v68 + 24) == v69 )
            *(_QWORD *)(v68 + 24) = *(_QWORD *)v69;
          if ( *(_QWORD *)(v68 + 32) == v69 )
            *(_QWORD *)(v68 + 32) = *(_QWORD *)(v69 + 8);
          v71 = *(_DWORD *)(v69 + 100);
          if ( (v71 & 0x10000) == 0 && (v71 & 0x40000) == 0 )
            --*(_DWORD *)(v68 + 40);
          if ( (*(_DWORD *)(v69 + 100) & 8) != 0
            && !*(_DWORD *)(v69 + 96)
            && IsPointerInputMessage(*(_DWORD *)(v69 + 24)) )
          {
            FreePointerMessageParams(v69);
          }
          Win32FreeToPagedLookasideList(QEntryLookaside, v69);
          *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) = 0LL;
          xxxProcessEventMessage(a1, (__int64)&v328);
          v10 = v311;
        }
        else
        {
          v64 = *(_QWORD *)(a1 + 408);
          if ( *(_QWORD *)(*((_QWORD *)&v334 + 1) + 408LL) == v64 )
          {
            v339 = *((_QWORD *)&v334 + 1);
            LockExchangeW32Thread(*((__int64 *)&v334 + 1), (__int64)&v360);
            *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) = 0LL;
            v65 = 0LL;
            v66 = v324;
            v67 = v339;
LABEL_794:
            v236 = 0LL;
LABEL_795:
            *(_QWORD *)(*(_QWORD *)(a1 + 408) + 72LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 408) + 64LL) = 0LL;
            **(_DWORD **)(a1 + 424) &= ~1u;
            v277 = v341;
            if ( v343 )
            {
              SetWakeBit(v343, 16385LL);
              *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= 0xBFFEu;
            }
            else if ( !v66 && !v67 && !v341 && !v236 )
            {
              *(_WORD *)(*(_QWORD *)(a1 + 424) + 8LL) = 0;
              LODWORD(v40) = 31751;
              v278 = *(_QWORD *)(a1 + 408);
              if ( !*(_DWORD *)(v278 + 40) )
              {
                v44 = gptiCurrent;
                if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 48LL) )
                {
                  if ( (*(_BYTE *)(v278 + 380) & 0x20) != 0 )
                    LODWORD(v40) = 31749;
                  LOWORD(v40) = ~(_WORD)v40;
                  *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= v40;
                }
              }
LABEL_817:
              v279 = KeGetCurrentThread();
              v280 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v44, v40) )
              {
                v283 = (__int64 *)PsGetThreadWin32Thread(v279);
                if ( v283 )
                  v280 = *v283;
              }
              *(_QWORD *)(v280 + 16) = v354;
              v284 = v355;
              if ( v355 )
                ((void (__fastcall *)(__int64, __int64, __int64))v356)(v355, v281, v282);
              v285 = KeGetCurrentThread();
              v286 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v284, v281) )
              {
                v289 = (__int64 *)PsGetThreadWin32Thread(v285);
                if ( v289 )
                  v286 = *v289;
              }
              *(_QWORD *)(v286 + 16) = v357;
              v290 = v358;
              if ( v358 )
                ((void (__fastcall *)(__int64, __int64, __int64))v359)(v358, v287, v288);
              v291 = KeGetCurrentThread();
              v292 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v290, v287) )
              {
                v295 = (__int64 *)PsGetThreadWin32Thread(v291);
                if ( v295 )
                  v292 = *v295;
              }
              *(_QWORD *)(v292 + 16) = v360;
              v296 = v361;
              if ( v361 )
                ((void (__fastcall *)(__int64, __int64, __int64))v362)(v361, v293, v294);
              v297 = KeGetCurrentThread();
              v298 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v296, v293) )
              {
                v301 = (__int64 *)PsGetThreadWin32Thread(v297);
                if ( v301 )
                  v298 = *v301;
              }
              *(_QWORD *)(v298 + 16) = v348;
              v302 = v349;
              if ( v349 )
                ((void (__fastcall *)(__int64, __int64, __int64))v350)(v349, v299, v300);
              v303 = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v302, v299) )
              {
                v306 = (__int64 *)PsGetThreadWin32Thread(v303);
                if ( v306 )
                  v65 = *v306;
              }
              *(_QWORD *)(v65 + 16) = v351;
              v307 = v352;
              if ( v352 )
                ((void (__fastcall *)(__int64, __int64, __int64))v353)(v352, v304, v305);
              ThreadUnlock1(v307, v304);
              return 0LL;
            }
            if ( v66 )
            {
              SetWakeBit(v66, 16390LL);
              *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= 0xBFF9u;
            }
            if ( v277 )
            {
              SetWakeBit(v277, 17408LL);
              *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= 0xBBFFu;
            }
            if ( v236 )
            {
              SetWakeBit(v236, 20480LL);
              *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= 0xAFFFu;
            }
            if ( v67 )
            {
              SetWakeBit(v67, 8256LL);
              *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= ~0x2000u;
            }
            else
            {
              v44 = gptiCurrent;
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 48LL) )
              {
                LODWORD(v40) = 23559;
                *(_WORD *)(*(_QWORD *)(a1 + 424) + 8LL) |= *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) & 0x5C07;
                v44 = 41976LL;
                *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= 0xA3F8u;
                *(_WORD *)(*(_QWORD *)(a1 + 424) + 4LL) &= 0xA3F8u;
              }
            }
            goto LABEL_817;
          }
          CleanEventMessage(*(struct tagQMSG **)(v64 + 80), v62, v57);
          DelQEntry((_QWORD *)(*(_QWORD *)(a1 + 408) + 24LL), *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL));
          v10 = v311;
        }
        goto LABEL_29;
      }
      if ( a7 == 0x2000 )
        goto LABEL_698;
      v72 = DWORD2(v329);
      v73 = DWORD2(v329);
      v308 = DWORD2(v329);
      if ( DWORD2(v329) > 0x20A )
        break;
      if ( DWORD2(v329) == 522 )
      {
LABEL_357:
        if ( (*(_DWORD *)(a1 + 464) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
          goto LABEL_792;
        if ( (DWORD1(v334) & 0x100000) != 0 )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 112LL);
          ThreadDesktopWindow = v61;
        }
        else if ( v36 && (unsigned int)IsCompositionInputWindow((struct tagWND *)v36) )
        {
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v36) )
            goto LABEL_700;
        }
        else if ( !(unsigned int)IsInsideMenuLoop(a1) )
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
          v130 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v127, v128, v129);
          v392[0] = *(_QWORD *)(v130 + 392);
          *(_QWORD *)(v130 + 392) = v392;
          v131 = (struct tagWND *)ThreadDesktopWindow;
          v392[1] = ThreadDesktopWindow;
          if ( ThreadDesktopWindow )
          {
            _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
            v131 = (struct tagWND *)ThreadDesktopWindow;
          }
          v132 = xxxDCEWindowHitTest(v131);
          v61 = HMValidateHandleNoSecure(v132, 1LL, v133, v134);
          ThreadDesktopWindow = v61;
          ThreadUnlock1(v136, v135);
        }
        if ( v61 && !(unsigned int)IsInsideMenuLoop(a1) )
        {
          ThreadLockExchangeAlways(v61, (__int64)&v344);
          v137 = *(_QWORD *)(v61 + 16);
          if ( v137 == a1 )
          {
            v138 = 0;
            v318 = 0;
          }
          else
          {
            v138 = 1;
            v318 = 1;
            if ( *(_QWORD *)(v137 + 408) != *(_QWORD *)(a1 + 408) )
              goto LABEL_700;
            if ( !v343 )
            {
              v343 = v137;
              LockExchangeW32Thread(v137, (__int64)&v351);
            }
          }
          v36 = v308;
          v74 = v315;
          if ( !(unsigned int)MiPCheckMsgFilter(v315, v308, v322, a5)
            || !(unsigned int)CheckPwndFilter(v61, *(__int64 *)v338) )
          {
            goto LABEL_698;
          }
          if ( v138 )
            goto LABEL_792;
          if ( v74 && IsMouseInPointerActive(a1, (__int64)v74) )
          {
            v139 = *((_DWORD *)v74 + 25);
            if ( (v139 & 0x800) != 0 )
            {
              if ( !*(_QWORD *)(v61 + 352) )
                *((_DWORD *)v74 + 25) = v139 & 0xFFFFDFFF;
              v39 = v309;
              if ( (unsigned int)GeneratePointerMessageFromMouse(
                                   (struct tagQMSG *)v426,
                                   v36,
                                   v74,
                                   (struct tagWND *)v61,
                                   v309) )
              {
                v328 = v426[0];
                v329 = v426[1];
                v330 = v426[2];
                v331 = v426[3];
                v332 = v426[4];
                v333 = v426[5];
                v334 = v426[6];
                v335 = v426[7];
                v336 = v426[8];
                v337 = v426[9];
                v319 = 1;
                if ( v39 )
                  *((_DWORD *)v74 + 25) &= ~0x800u;
                goto LABEL_688;
              }
              if ( !v39 )
              {
LABEL_400:
                MouseKeyFlags = GetMouseKeyFlags(*(unsigned __int8 **)(a1 + 408));
                v320 = v330 | MouseKeyFlags;
                v314.x = SWORD4(v330);
                v314.y = SWORD5(v330);
                PhysicalToLogicalDPIPointWithHitTest(&v314, &v314, 0LL);
                v316 = (LOWORD(v314.y) << 16) | LOWORD(v314.x);
                *(struct tagPOINT *)((char *)&v331 + 4) = v314;
                v363 = v314;
                v364 = *(_QWORD *)v61;
                v365 = 0;
                v366 = *((_QWORD *)&v332 + 1);
                v367 = v330;
                if ( !v39 || (v321 = 1, !(unsigned int)xxxCallCtfHook(7, 0, v36, (__int64)&v363)) )
                {
                  if ( ((*(_DWORD *)(a1 + 656) | *(_DWORD *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x100) == 0
                    || (v321 = 1, !(unsigned int)xxxCallMouseHook((unsigned int)v36, &v363, v39)) )
                  {
                    if ( v321
                      && v39
                      && ((*(_BYTE *)(a1 + 656) | *(_BYTE *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x40) != 0 )
                    {
                      xxxCallHook(6, v36, (__int64)&v363, 5u);
                    }
                    goto LABEL_744;
                  }
                }
                goto LABEL_704;
              }
              *((_DWORD *)v74 + 25) &= ~0x800u;
            }
            else
            {
              v39 = v309;
              if ( !v309 )
                goto LABEL_400;
              if ( IsMiPMouseMessage(*((_DWORD *)v74 + 6)) )
              {
                if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v74 + 120)) )
                {
                  v140 = *(_DWORD **)(a1 + 1224);
                  if ( v140 )
                  {
                    if ( (*v140 & 2) == 0 && (*v140 & 4) == 0 )
                      goto LABEL_663;
                  }
                }
                v141 = *(_DWORD **)(a1 + 1224);
                if ( v141 )
                  *v141 &= ~2u;
              }
            }
          }
          else
          {
            v39 = v309;
          }
          if ( v39 )
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v103);
          goto LABEL_400;
        }
        goto LABEL_413;
      }
      v40 = 0x1C0000000uLL;
      switch ( DWORD2(v329) )
      {
        case 0x23:
          v320 = 0LL;
          v316 = *((_QWORD *)&v330 + 1);
          if ( !v36 || (v44 = *(_QWORD *)(v36 + 16), v44 == a1) )
          {
            v74 = v315;
            if ( (unsigned int)MiPCheckMsgFilter(v315, DWORD2(v329), v322, a5) )
            {
              if ( v309 )
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v75);
              goto LABEL_744;
            }
            goto LABEL_792;
          }
          if ( *(_QWORD *)(v44 + 408) != *(_QWORD *)(a1 + 408) )
            goto LABEL_413;
          if ( !v324 )
          {
            v66 = *(_QWORD *)(v36 + 16);
            LockExchangeW32Thread(v44, (__int64)&v348);
LABEL_793:
            v65 = 0LL;
            v67 = 0LL;
            goto LABEL_794;
          }
          goto LABEL_792;
        case 0xFE:
          goto LABEL_415;
        case 0xFF:
          v316 = *((_QWORD *)&v330 + 1);
          v320 = v330;
          v61 = 0LL;
          ThreadDesktopWindow = 0LL;
          if ( *((_QWORD *)&v330 + 1) )
          {
            LOBYTE(v40) = 18;
            v117 = HMValidateHandle(*((__int64 *)&v330 + 1), v40, v57, v56);
            if ( v117 )
            {
              v61 = *(_QWORD *)(v117 + 24);
              ThreadDesktopWindow = v61;
            }
          }
          if ( !v61 )
          {
            v118 = *(_QWORD *)(a1 + 408);
            v61 = *(_QWORD *)(v118 + 112);
            ThreadDesktopWindow = v61;
            if ( !v61 )
            {
              v61 = *(_QWORD *)(v118 + 120);
              ThreadDesktopWindow = v61;
              if ( !v61 )
                goto LABEL_413;
            }
          }
          ThreadLockExchangeAlways(v61, (__int64)&v344);
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v61, v315, &v318, &v309, a8) )
            goto LABEL_792;
          v119 = v318;
          if ( !v318 )
            goto LABEL_322;
          v36 = v61 + 16;
          if ( *(_QWORD *)(*(_QWORD *)(v61 + 16) + 408LL) != *(_QWORD *)(a1 + 408) )
            goto LABEL_413;
          if ( (unsigned int)IsInsideMenuLoop(a1) )
          {
            v120 = *(_QWORD *)(**(_QWORD **)(a1 + 584) + 8LL);
          }
          else
          {
            v121 = *(_QWORD *)(a1 + 648);
            if ( !v121 )
              goto LABEL_320;
            v120 = *(_QWORD *)(v121 + 16);
          }
          if ( v120 )
          {
            v61 = v120;
            ThreadDesktopWindow = v120;
            v36 = v120 + 16;
            v119 = *(_QWORD *)(v120 + 16) != a1;
            v318 = v119;
            ThreadLockExchangeAlways(v120, (__int64)&v344);
          }
LABEL_320:
          if ( !v341 )
          {
            v341 = *(_QWORD *)v36;
            LockExchangeW32Thread(v341, (__int64)&v357);
          }
LABEL_322:
          if ( !v322 && a5 == -1 )
            goto LABEL_330;
          if ( v322 <= a5 )
          {
            if ( v73 < v322 || v73 > a5 )
              goto LABEL_698;
          }
          else if ( v73 >= a5 && v73 <= v322 )
          {
            goto LABEL_698;
          }
LABEL_330:
          if ( (unsigned int)CheckPwndFilter(v61, *(__int64 *)v338) )
          {
            if ( v119 )
            {
LABEL_792:
              v66 = v324;
              goto LABEL_793;
            }
            if ( v309 )
            {
LABEL_428:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v122);
              v74 = v315;
              goto LABEL_744;
            }
LABEL_304:
            v74 = v315;
            goto LABEL_744;
          }
          goto LABEL_698;
        case 0x100:
        case 0x104:
          v76 = 1;
          v325 = 1;
          if ( (*(_DWORD *)(a1 + 464) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
            goto LABEL_792;
          v77 = v330;
          v78 = (unsigned __int8)v330;
          v320 = (unsigned __int8)v330;
          v39 = v309;
          if ( v309 && (DWORD1(v334) & 0x20000) != 0 )
            goto LABEL_180;
          if ( (unsigned __int8)v330 != 18LL )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 408) + 380LL) &= 0xFFFFFFF3;
            v77 = v330;
          }
          v79 = *(_QWORD *)(a1 + 408);
          v56 = *(unsigned __int8 *)(v79 + 228);
          v80 = *(_BYTE *)(v79 + 228) & 0x10;
          if ( v78 != 44 )
            goto LABEL_168;
          if ( (*(_BYTE *)(v79 + 228) & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(a1 + 852) & 0x20) != 0 )
              goto LABEL_168;
LABEL_159:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v56);
            if ( v80 || (DWORD2(v330) & 0xFF0000) == 0x10000LL )
            {
              v82 = *(_QWORD *)(a1 + 408);
              v81 = *(_QWORD *)(v82 + 120);
              v83 = v81 == 0;
              if ( !v81 )
                goto LABEL_166;
              TopLevelHost = CoreWindowProp::GetTopLevelHost(*(struct tagWND **)(v82 + 120));
              TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
              if ( TopLevelWindow )
                v81 = TopLevelWindow;
            }
            else
            {
              v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 8LL) + 16LL);
            }
            v83 = v81 == 0;
LABEL_166:
            v10 = v311;
            if ( !v83 )
            {
              v86 = HIDWORD(v335) != 1;
              v369 = *(_QWORD *)(a1 + 392);
              *(_QWORD *)(a1 + 392) = &v369;
              v370 = v81;
              _InterlockedIncrement((volatile signed __int32 *)(v81 + 8));
              xxxSnapWindow(v81, v86);
              ThreadUnlock1(v88, v87);
              goto LABEL_29;
            }
            goto LABEL_30;
          }
          if ( (*(_DWORD *)(a1 + 852) & 0x10) == 0 )
            goto LABEL_159;
LABEL_168:
          if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
          {
            v89 = v78;
            if ( (v56 & 0x10) != 0 )
              v89 = v78 | 0x400;
            v90 = v89 | 0x200;
            if ( (v56 & 4) == 0 )
              v90 = v89;
            v91 = v90;
            LODWORD(v91) = v90 | 0x100;
            if ( (v56 & 1) == 0 )
              v91 = v90;
            v92 = HotKeyToWindow(v91);
            v56 = v92;
            if ( v92 )
            {
              v40 = *(_QWORD *)(*(_QWORD *)(v92 + 16) + 432LL);
              if ( *(_QWORD *)(a1 + 432) == v40 )
              {
                PostTransformableMessage(*(_QWORD *)(v93 + 120), 274LL, 0xF150uLL, *(struct _LARGE_STRING **)v92, 0);
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v94);
                v10 = v311;
                goto LABEL_30;
              }
            }
          }
LABEL_180:
          if ( v78 == 231 )
          {
            *(_WORD *)(a1 + 850) = WORD1(v77);
            v77 = 231LL;
          }
LABEL_183:
          v36 = (unsigned __int8)v77;
          if ( (unsigned __int8)v77 == 231LL )
            v77 = 231LL;
          *(_QWORD *)&v330 = v77;
          if ( !v39 || (DWORD1(v334) & 0x20000) == 0 )
          {
            if ( gbGraveKeyToggle )
            {
              if ( (GetAppImeCompatFlags(0LL, v40, v77, v56) & 0x800000) == 0 && BYTE10(v330) == 41 )
              {
                if ( v39 )
                {
                  v95 = *(_QWORD *)(a1 + 408);
                  if ( (*(_BYTE *)(v95 + 228) & 0x15) == 0
                    && (*(_BYTE *)(v95 + 246) & 0x40) == 0
                    && (*(_BYTE *)(v95 + 247) & 1) == 0
                    && ((v96 = *(__int64 **)(v95 + 112)) == 0LL && (v96 = *(__int64 **)(v95 + 120)) == 0LL
                     || v96[2] == a1) )
                  {
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v56);
                    v83 = v76 == 0;
                    v10 = v311;
                    if ( v83 && v96 )
                    {
                      v382 = *v96;
                      v383 = 80;
                      v384 = 0LL;
                      v385 = 0LL;
                      v386 = 0LL;
                      v387 = 0LL;
                      xxxCallCtfHook(3, 0, 1LL, (__int64)&v382);
                    }
                    goto LABEL_30;
                  }
                }
              }
            }
          }
          if ( v36 == 121 )
          {
            v73 |= 4u;
            v308 = v73;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 408) + 228LL) & 4) != 0 && v36 == 27 )
          {
            v73 |= 4u;
            v308 = v73;
          }
          if ( (*(_DWORD *)(a1 + 464) & 8) == 0 )
            *((_QWORD *)&v330 + 1) &= ~0x2000000uLL;
LABEL_208:
          v320 = (unsigned __int8)v330;
          v97 = *(_QWORD *)(a1 + 408);
          v61 = *(_QWORD *)(v97 + 112);
          ThreadDesktopWindow = v61;
          if ( !v61 )
          {
            v61 = *(_QWORD *)(v97 + 120);
            ThreadDesktopWindow = v61;
            if ( !v61 )
              goto LABEL_414;
            if ( v73 - 256 <= 3 )
            {
              v73 += 4;
              v308 = v73;
            }
          }
          ThreadLockExchangeAlways(v61, (__int64)&v344);
          v98 = (__int64 *)(v61 + 16);
          v99 = *(_QWORD *)(v61 + 16);
          if ( v99 == a1 )
          {
            LODWORD(v36) = 0;
            v318 = 0;
            goto LABEL_223;
          }
          LODWORD(v36) = 1;
          v318 = 1;
          if ( *(_QWORD *)(v99 + 408) != *(_QWORD *)(a1 + 408) )
            goto LABEL_701;
          if ( (unsigned int)IsInsideMenuLoop(a1) )
          {
            v100 = *(_QWORD *)(**(_QWORD **)(a1 + 584) + 8LL);
            goto LABEL_218;
          }
          v101 = *(_QWORD *)(a1 + 648);
          if ( v101 )
          {
            v100 = *(_QWORD *)(v101 + 16);
LABEL_218:
            if ( v100 )
            {
              v61 = v100;
              ThreadDesktopWindow = v100;
              v98 = (__int64 *)(v100 + 16);
              LODWORD(v36) = *(_QWORD *)(v100 + 16) != a1;
              v318 = v36;
              ThreadLockExchangeAlways(v100, (__int64)&v344);
            }
          }
          if ( !v343 )
          {
            v343 = *v98;
            LockExchangeW32Thread(v343, (__int64)&v351);
          }
LABEL_223:
          if ( v322 || a5 != -1 )
          {
            if ( v322 <= a5 )
            {
              v40 = v312;
              if ( v73 < v322 || v73 > a5 )
              {
LABEL_31:
                v10 = v311;
                goto LABEL_32;
              }
            }
            else if ( v73 >= a5 )
            {
              v40 = v312;
              if ( v73 <= v322 )
                goto LABEL_31;
            }
          }
          v102 = CheckPwndFilter(v61, *(__int64 *)v338);
          v40 = v312;
          if ( !v102 )
            goto LABEL_31;
          if ( (_DWORD)v36 )
            goto LABEL_792;
          if ( v39 )
          {
            if ( (DWORD1(v334) & 0x20000) != 0 )
            {
              v104 = v346;
LABEL_252:
              v106 = v315;
              goto LABEL_253;
            }
            if ( !(unsigned int)IsInsideMenuLoop(a1) )
            {
              if ( v320 == 93 && v73 == 257 )
                PostTransformableMessage(v61, 123LL, *(_QWORD *)v61, (struct _LARGE_STRING *)0xFFFFFFFFFFFFFFFFLL, 0);
              if ( v320 == 112 && v73 == 256 )
                PostMessage(v61, 77LL, 0LL, 0LL);
            }
          }
          if ( v320 == 16 )
          {
            v105 = BYTE11(v330) & 1 | 0xA0;
            v103 = v105;
            LOBYTE(v103) = v105 ^ 1;
            if ( !v325
              && ((unsigned __int8)(1 << (2 * (v103 & 3))) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v103 >> 2)
                                                                      + *(_QWORD *)(a1 + 408)
                                                                      + 224)) != 0
              && (*(_DWORD *)(a1 + 464) & 8) == 0 )
            {
              *(_QWORD *)&v330 = v105;
LABEL_663:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v103);
              v10 = v311;
              goto LABEL_30;
            }
          }
          v104 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v320 >> 2) + *(_QWORD *)(a1 + 408) + 224) & (1 << (2 * (v320 & 3)));
          v346 = v104;
          if ( !v104 )
            goto LABEL_252;
          v106 = v315;
          if ( !v39 )
            goto LABEL_259;
          if ( (unsigned __int64)v315 > 1 )
            *((_QWORD *)v315 + 5) |= 0x40000000uLL;
LABEL_253:
          if ( v39 )
          {
            if ( (DWORD1(v334) & 0x20000) == 0
              && (unsigned __int64)v106 > 1
              && (*(_DWORD *)(a1 + 1184) & 0x8000000) != 0 )
            {
              v107 = xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 0LL, v103);
              v327 = v107;
              goto LABEL_260;
            }
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v103);
          }
LABEL_259:
          v107 = v327;
LABEL_260:
          v316 = *((_QWORD *)&v330 + 1);
          v56 = v330;
          v320 = v330;
          if ( v104 )
            v316 = *((_QWORD *)&v330 + 1) | 0x40000000LL;
          if ( v73 == 257 || v73 == 261 )
            v316 |= 0x80000000uLL;
          v108 = *(_QWORD *)(a1 + 408);
          if ( (*(_BYTE *)(v108 + 228) & 0x10) != 0 )
            v316 |= 0x20000000uLL;
          v109 = *(_QWORD *)(a1 + 584);
          if ( v109 && (*(_DWORD *)(v109 + 8) & 1) != 0 )
            v316 |= 0x10000000uLL;
          if ( (*(_DWORD *)(v108 + 380) & 0x4000) != 0 )
            v316 |= 0x8000000uLL;
          if ( !v347 && !gpImeHotKeyListHeader || (DWORD1(v334) & 0x20000) != 0 )
            goto LABEL_284;
          if ( v39 )
          {
            if ( (!v109 || (*(_DWORD *)(v109 + 8) & 1) == 0) && (*(_DWORD *)(a1 + 464) & 0x2000000) == 0 )
            {
              if ( (_QWORD)v330 == 231LL )
                LOWORD(v56) = 231;
              *(_QWORD *)(a1 + 1188) = *((_QWORD *)&v335 + 1);
              v326 = xxxImmProcessKey(v108, v61, v73, v56, v316);
              if ( (v326 & 0x11) != 0 )
              {
                if ( !v107 )
                  goto LABEL_701;
                FreeQEntry((unsigned int *)v107);
                v327 = 0LL;
                LODWORD(v36) = v308;
                goto LABEL_704;
              }
            }
LABEL_284:
            if ( v39 )
            {
              v310 = 1;
              LODWORD(v36) = 0;
              if ( (DWORD1(v334) & 0x20000) == 0 )
              {
                v110 = *(KeyboardInputTelemetry **)(a1 + 408);
                v111 = *((_QWORD *)v110 + 50);
                *((_QWORD *)v110 + 50) = *((_QWORD *)&v332 + 1);
                KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
                  v110,
                  *(_DWORD *)(*(_QWORD *)a1 + 1600LL));
                v112 = xxxCallCtfHook(2, v326 & 2, v320, v316);
                LODWORD(v36) = v112;
                v113 = *(KeyboardInputTelemetry **)(a1 + 408);
                *((_QWORD *)v113 + 50) = v111;
                v114 = (unsigned int *)v327;
                if ( v327 )
                {
                  if ( v112 == 2
                    && (*(_DWORD *)(a1 + 1184) & 0x10000000) == 0
                    && AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(a1 + 408) + 24LL), v327, 1) )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 408) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 24LL);
                    DeferSysPeekMsg((struct tagTHREADINFO *)a1, 1);
                    v10 = 1;
                    v311 = 1;
                    v327 = 0LL;
                    v40 = v312;
                    goto LABEL_32;
                  }
                  FreeQEntry(v114);
                  v327 = 0LL;
                }
                KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
                  v113,
                  *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
                  ((DWORD2(v329) - 257) & 0xFFFFFFFB) == 0);
              }
              if ( (_DWORD)v36 )
              {
                LODWORD(v36) = v308;
                v115 = 1;
                goto LABEL_705;
              }
            }
          }
          if ( ((*(_BYTE *)(a1 + 656) | *(_BYTE *)(**(_QWORD **)(a1 + 440) + 16LL)) & 8) == 0 )
          {
            v115 = v310;
LABEL_300:
            if ( v115 && v39 && ((*(_BYTE *)(a1 + 656) | *(_BYTE *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x40) != 0 )
              xxxCallHook(7, v320, v316, 5u);
            goto LABEL_304;
          }
          v115 = 1;
          v310 = 1;
          v116 = 3;
          if ( v39 )
            v116 = 0;
          if ( !(unsigned int)xxxCallHook(v116, v320, v316, 2u) )
            goto LABEL_300;
          LODWORD(v36) = v308;
LABEL_705:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v56);
          if ( v321 )
          {
            if ( ((*(_BYTE *)(a1 + 656) | *(_BYTE *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x40) != 0 )
              xxxCallHook(6, v36, (__int64)&v363, 5u);
            v321 = 0;
          }
          if ( v115 )
          {
            if ( ((*(_BYTE *)(a1 + 656) | *(_BYTE *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x40) != 0 )
              xxxCallHook(7, v320, v316, 5u);
            v310 = 0;
          }
          v10 = v311;
          v40 = v312;
          if ( v39 )
            goto LABEL_30;
          break;
        case 0x101:
        case 0x105:
          v39 = v309;
          v77 = v330;
          v76 = v325;
          goto LABEL_183;
        case 0x102:
          v39 = v309;
          goto LABEL_208;
        case 0x119:
        case 0x11B:
          goto LABEL_408;
        default:
          goto LABEL_431;
      }
    }
    v40 = 0x1C0000000uLL;
    switch ( DWORD2(v329) )
    {
      case 0x20E:
        goto LABEL_357;
      case 0x238:
        goto LABEL_415;
      case 0x240:
LABEL_408:
        if ( !v36 )
          goto LABEL_413;
        if ( *(char *)(v36 + 60) < 0 )
          goto LABEL_413;
        if ( *(char *)(v36 + 59) < 0 )
          goto LABEL_413;
        v143 = *(_BYTE *)(v36 + 71);
        if ( (v143 & 8) != 0 || (v143 & 0x10) == 0 )
          goto LABEL_413;
LABEL_415:
        v316 = *((_QWORD *)&v330 + 1);
        v320 = v330;
        if ( !v36 )
          goto LABEL_413;
        if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v36, v315, &v318, &v309, a8) )
          goto LABEL_792;
        if ( v318 )
          goto LABEL_413;
        if ( !v322 && a5 == -1 )
          goto LABEL_426;
        if ( v322 <= a5 )
        {
          if ( v73 < v322 || v73 > a5 )
            goto LABEL_698;
        }
        else if ( v73 >= a5 && v73 <= v322 )
        {
          goto LABEL_698;
        }
LABEL_426:
        if ( (unsigned int)CheckPwndFilter(v36, *(__int64 *)v338) )
        {
          if ( !v309 )
          {
LABEL_429:
            v74 = v315;
            goto LABEL_744;
          }
          goto LABEL_428;
        }
LABEL_698:
        v39 = v309;
        v40 = v312;
        goto LABEL_31;
      case 0x245:
      case 0x246:
      case 0x247:
      case 0x249:
      case 0x24A:
      case 0x251:
      case 0x252:
      case 0x253:
        v39 = v309;
        v74 = v315;
        goto LABEL_689;
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
        v44 = a5;
        if ( !v322 && a5 == -1 )
          goto LABEL_343;
        if ( v322 <= a5 )
        {
          if ( DWORD2(v329) < v322 || DWORD2(v329) > a5 )
            goto LABEL_792;
        }
        else if ( DWORD2(v329) >= a5 && DWORD2(v329) <= v322 )
        {
          goto LABEL_792;
        }
LABEL_343:
        if ( (unsigned int)IsInsideMenuLoop(a1) )
          goto LABEL_700;
        v39 = v309;
        if ( v309 )
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v56);
        if ( !v36 )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 112LL);
          ThreadDesktopWindow = v61;
        }
        v316 = *((_QWORD *)&v330 + 1);
        v320 = v330;
        v123 = WORD1(v330);
        v124 = (unsigned __int16)v330;
        v125 = InteractiveControlManager::Instance();
        v371 = 0LL;
        v372 = 0LL;
        if ( (int)InteractiveControlManager::FindDevice(v125, v124, 0LL, &v371, 0LL) >= 0
          && v371
          && (unsigned int)InteractiveControlDevice::GetInputReport(v371, v123, &v372) )
        {
          *((_DWORD *)v372 + 6) = 1;
          v126 = 1;
        }
        else
        {
          v126 = 2;
        }
        v44 = (unsigned int)(v126 - 1);
        if ( !(_DWORD)v44 )
          goto LABEL_429;
        if ( (_DWORD)v44 == 1 )
          goto LABEL_792;
        goto LABEL_355;
      default:
LABEL_431:
        while ( 2 )
        {
          v314.x = SWORD4(v330);
          v144 = *((_QWORD *)&v330 + 1);
          v314.y = SWORD5(v330);
          v313 = 1;
          v145 = DWORD1(v334);
          if ( (BYTE4(v334) & 0x20) != 0
            && v61
            && (((unsigned __int16)(*(_DWORD *)(v61 + 368) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 400LL)
                                                                                                + 280LL) >> 8)) & 0x1FF) == 0 )
          {
            goto LABEL_472;
          }
          if ( gspwndScreenCapture )
          {
            v61 = gspwndScreenCapture;
            ThreadDesktopWindow = gspwndScreenCapture;
            v316 = (WORD4(v331) << 16) | WORD2(v331);
            goto LABEL_469;
          }
          if ( v61 && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v61) )
          {
            v146 = 1;
            v323 = 1;
            v147 = *(_QWORD *)(a1 + 408);
            v148 = *(struct tagWND **)(v147 + 104);
            if ( v148 )
            {
              v61 = *(_QWORD *)(v147 + 104);
              ThreadDesktopWindow = v61;
              if ( !(unsigned int)IsCompositionInputWindowForHitTest(v148) )
              {
                DWORD1(v334) = v145 & 0xFFFFDFFF;
                if ( v315 )
                {
                  if ( IsMouseInPointerActive(a1, (__int64)v315) )
                    *(_DWORD *)(v149 + 100) &= ~0x2000u;
                }
              }
              goto LABEL_469;
            }
          }
          else
          {
            v146 = 0;
            v323 = 0;
            v61 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 104LL);
            ThreadDesktopWindow = v61;
            if ( v61 )
              goto LABEL_469;
          }
          if ( !v146 )
          {
            v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 432LL) + 8LL) + 16LL);
            v369 = *(_QWORD *)(a1 + 392);
            *(_QWORD *)(a1 + 392) = &v369;
            v370 = v61;
            if ( v61 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v61 + 8));
              v144 = *((_QWORD *)&v330 + 1);
              v72 = DWORD2(v329);
            }
          }
          if ( (unsigned int)IsThreadDesktopComposed(a1) )
          {
            v374 = v72;
            v375 = v330;
            v376 = v144;
            v377 = &v313;
            v152 = 1;
            if ( v150 )
              v152 = 9;
            v378 = v152;
            v379 = 0;
            v380 = (char *)&v333 + 8;
            v381 = 0;
            v155 = xxxDCEWindowHitTestIndirect((struct tagWND *)v61, (struct tagPOINT)v333, (__int64)&v374, v151);
            if ( v155 && v381 )
            {
              *((_QWORD *)&v330 + 1) = v376;
              DWORD1(v331) = (__int16)v376;
              v153 = v376 >> 16;
              v154 = (unsigned int)SWORD1(v376);
              DWORD2(v331) = SWORD1(v376);
              v314 = *(struct tagPOINT *)((char *)&v331 + 4);
              v342 = 1;
            }
          }
          else
          {
            v155 = (HWND)xxxWindowHitTest(v61);
          }
          if ( !v323 )
            ThreadUnlock1(v154, v153);
          v61 = HMValidateHandleNoSecure((unsigned __int64)v155, 1LL, v156, v157);
          ThreadDesktopWindow = v61;
          if ( !v61 )
          {
            v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 8LL) + 16LL);
            ThreadDesktopWindow = v61;
            if ( !v61 )
            {
              v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 432LL) + 8LL) + 16LL);
              ThreadDesktopWindow = v61;
            }
          }
          if ( !*(_QWORD *)(a1 + 584)
            && IsThreadMiPEnabled(a1)
            && (v158 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 432LL)) != 0
            && (v159 = ValidateHwnd(v158)) != 0
            && ((v160 = *(_QWORD *)(v159 + 16), v161 = *(_QWORD *)(a1 + 408), *(_QWORD *)(v160 + 408) == v161)
             || *(_QWORD *)(v160 + 400) == *(_QWORD *)(a1 + 400)) )
          {
            v61 = v159;
            ThreadDesktopWindow = v159;
            v313 = 1;
            *(_DWORD *)(v161 + 148) = 0;
          }
          else
          {
            v162 = *(_QWORD *)(a1 + 408);
            *(_DWORD *)(v162 + 148) = v313 != 1;
          }
LABEL_469:
          if ( !v342
            && (((unsigned __int16)(*(_DWORD *)(v61 + 368) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 400LL)
                                                                                                + 280LL) >> 8)) & 0x1FF) != 0 )
          {
            v314 = (struct tagPOINT)v333;
            PhysicalToLogicalInPlacePointWithParent(v61, &v314, (char *)&v333 + 8);
            v316 = (LOWORD(v314.y) << 16) | LOWORD(v314.x);
            *(struct tagPOINT *)((char *)&v331 + 4) = v314;
          }
LABEL_472:
          v163 = v345;
          v345 = v61;
          if ( v61 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v61 + 8));
            v61 = ThreadDesktopWindow;
          }
          if ( v163 )
            HMUnlockObject(v163);
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v61, v315, &v318, &v309, a8) )
            goto LABEL_792;
          v164 = v318;
          if ( v318 )
          {
            v165 = *(_QWORD *)(v61 + 16);
            if ( *(_QWORD *)(v165 + 408) != *(_QWORD *)(a1 + 408) )
            {
              zzzSetCursor(*(_QWORD *)&gasyscur[4]);
LABEL_413:
              v39 = v309;
LABEL_414:
              LODWORD(v36) = v308;
LABEL_704:
              v115 = v310;
              goto LABEL_705;
            }
            if ( !v324 )
            {
              v324 = *(_QWORD *)(v61 + 16);
              LockExchangeW32Thread(v165, (__int64)&v348);
            }
          }
          else if ( (WORD2(v334) & 0x1000) != 0 )
          {
            v166 = *(_QWORD *)(*(_QWORD *)(v61 + 16) + 400LL);
            v167 = *(_QWORD *)(v166 + 832);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v335 <= (unsigned int)v167 )
              {
                if ( (_DWORD)v335 != (_DWORD)v167
                  || (v168 = HIDWORD(v167), DWORD1(v335) != (_DWORD)v168) && DWORD1(v335) != -1 && (_DWORD)v168 != -1 )
                {
                  LODWORD(v36) = v308;
                  EtwTraceUIPIMsgError(0LL, v166, v308, v330, *((_QWORD *)&v330 + 1));
                  zzzSetCursor(*(_QWORD *)&gasyscur[4]);
                  v39 = v309;
                  goto LABEL_704;
                }
              }
            }
          }
          v169 = v314;
          v170 = (unsigned __int64)v314;
          v171 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 408LL) + 148LL);
          if ( v171 && (v172 = v171 - 2) != 0 )
          {
            if ( v172 != 1 )
              goto LABEL_500;
            if ( (*(_BYTE *)(v61 + 66) & 0x40) != 0 )
              v314.x = *(_DWORD *)(v61 + 136) - v314.x;
            else
              v314.x -= *(_DWORD *)(v61 + 128);
            v173 = *(_DWORD *)(v61 + 132);
          }
          else
          {
            if ( (*(_BYTE *)(v61 + 66) & 0x40) != 0 )
              v314.x = *(_DWORD *)(v61 + 152) - v314.x;
            else
              v314.x -= *(_DWORD *)(v61 + 144);
            v173 = *(_DWORD *)(v61 + 148);
          }
          v314.y -= v173;
          v169 = v314;
LABEL_500:
          if ( v164 || *(_QWORD *)(a1 + 408) != gpqCursor )
          {
            LODWORD(v36) = v308;
            goto LABEL_538;
          }
          LOBYTE(v52) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 184LL) != v61;
          v174 = v313;
          if ( v313 == 5 )
          {
            v175 = *(_QWORD *)(v61 + 208);
            if ( v175 )
            {
              if ( (*(_BYTE *)(v61 + 56) & 1) != 0 )
              {
                v176 = MNItemHitTest(*(_QWORD *)(v61 + 208), v61);
                if ( v176 >= 0 )
                {
                  v177 = *(_QWORD *)(*(_QWORD *)(v175 + 96) + 152LL * v176 + 104);
                  if ( v177 > 6 )
                  {
                    if ( v177 != 7 )
                    {
                      if ( v177 == -1LL )
                      {
                        v174 = -2;
                        goto LABEL_520;
                      }
                      goto LABEL_517;
                    }
LABEL_519:
                    v174 = 67;
                    goto LABEL_520;
                  }
                  if ( v177 >= 5 )
                  {
                    v174 = 68;
                  }
                  else
                  {
                    v178 = v177 - 1;
                    if ( v178 )
                    {
                      v179 = v178 - 1;
                      if ( v179 )
                      {
                        if ( v179 != 1 )
                        {
LABEL_517:
                          v174 = 69;
                          goto LABEL_520;
                        }
                        goto LABEL_519;
                      }
                      v174 = 66;
                    }
                    else
                    {
                      v174 = 65;
                    }
                  }
                }
LABEL_520:
                v180 = v174 | ((unsigned __int16)v176 << 16);
                goto LABEL_528;
              }
            }
          }
          if ( v313 == 7 && (*(_BYTE *)(v61 + 56) & 2) != 0 )
          {
            v180 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v61, 1, v169);
            LODWORD(v180) = v180 | 0x10000;
          }
          else if ( v313 == 6 && (*(_BYTE *)(v61 + 56) & 4) != 0 )
          {
            v180 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v61, 0, v169);
          }
          else
          {
            v180 = (unsigned int)v313;
          }
LABEL_528:
          LODWORD(v36) = v308;
          if ( v308 != 512 || v52 || *(_DWORD *)(*(_QWORD *)(a1 + 432) + 192LL) != (_DWORD)v180 )
            xxxTrackMouseMove((struct tagWND *)v61, v180, v308);
          if ( !v52 )
          {
            v181 = *(_QWORD *)(a1 + 432);
            if ( (*(_DWORD *)(v181 + 48) & 0x40) != 0 && ((_DWORD)v36 != 512 || !PtInRect((_DWORD *)(v181 + 196), v170)) )
              ResetMouseHover((struct tagDESKTOP *)v181, (struct tagPOINT)v170);
          }
LABEL_538:
          if ( !(unsigned int)CheckPwndFilter(v61, *(__int64 *)v338) )
            goto LABEL_698;
          v182 = 0;
          switch ( (int)v36 )
          {
            case 513:
              v83 = (unsigned __int8)IsMessageInputSourceTouch(&v328) == 0;
              v183 = *(_QWORD *)(a1 + 408);
              if ( v83 )
                *(_DWORD *)(v183 + 380) &= ~0x800000u;
              else
                *(_DWORD *)(v183 + 380) |= 0x800000u;
              v83 = (unsigned __int8)IsMessageInputSourcePen(&v328) == 0;
              v184 = *(_QWORD *)(a1 + 408);
              if ( v83 )
                *(_DWORD *)(v184 + 380) &= ~0x1000000u;
              else
                *(_DWORD *)(v184 + 380) |= 0x1000000u;
              goto LABEL_546;
            case 514:
            case 517:
            case 520:
            case 524:
              goto LABEL_558;
            case 516:
            case 519:
            case 523:
LABEL_546:
              if ( (*(_BYTE *)(*(_QWORD *)(v61 + 168) + 100LL) & 8) != 0
                || *(_DWORD *)(*(_QWORD *)(a1 + 408) + 148LL) == 1
                || (v185 = *(_QWORD *)(a1 + 584)) != 0 && (*(_DWORD *)(v185 + 8) & 1) != 0 )
              {
                v182 = 1;
                v186 = *(_QWORD *)(a1 + 408);
                if ( (unsigned int)v331 <= *(_DWORD *)(v186 + 160)
                  && !gbClientDoubleClickSupport
                  && *(_QWORD *)v61 == *(_QWORD *)(v186 + 168)
                  && (_DWORD)v36 == *(_DWORD *)(v186 + 152)
                  && ((_DWORD)v36 != 523 || WORD1(v330) == *(_WORD *)(v186 + 156)) )
                {
                  v187 = *(_DWORD *)(gpsi + 2024LL) / 2;
                  v188 = *(_DWORD *)(v186 + 176);
                  v373[0] = v188 - v187;
                  v189 = *(_DWORD *)(gpsi + 2028LL);
                  v190 = *(_DWORD *)(v186 + 180);
                  v373[1] = v190 - v189 / 2;
                  v373[2] = v188 + v187;
                  v373[3] = v190 + v189 / 2;
                  if ( PtInRect(v373, *(unsigned __int64 *)((char *)&v331 + 4)) )
                  {
                    LODWORD(v36) = v36 + 2;
                    v308 = v36;
                    v182 = 2;
                  }
                }
              }
LABEL_558:
              v191 = *(_QWORD *)(a1 + 408);
              v192 = *(_DWORD *)(v191 + 380);
              if ( (v192 & 8) != 0 )
                *(_DWORD *)(v191 + 380) = v192 | 4;
              if ( (unsigned int)(v36 - 514) <= 0xA )
              {
                v193 = 1097;
                if ( _bittest(&v193, v36 - 514) )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(a1 + 408) + 160LL) && ((DWORD2(v335) - 4) & 0xFFFFFFFB) == 0 )
                  {
                    if ( DWORD2(v335) == 4 )
                    {
                      TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                    }
                    else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                    {
                      TouchTimeFromCPLValue = *((_DWORD *)off_1C0320040 + 11);
                      if ( TouchTimeFromCPLValue == -1 )
                        TouchTimeFromCPLValue = *((_DWORD *)off_1C0320040 + 10);
                    }
                    else
                    {
                      TouchTimeFromCPLValue = gdtDblClk;
                    }
                    *(_DWORD *)(*(_QWORD *)(a1 + 408) + 160LL) = v337 + TouchTimeFromCPLValue;
                  }
                }
              }
              break;
            default:
              break;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 408LL) + 148LL) == 1 )
          {
            LODWORD(v36) = v36 - 352;
            v308 = v36;
            v320 = (unsigned int)v313;
          }
          v195 = v315;
          if ( !(unsigned int)MiPCheckMsgFilter(v315, v36, v322, a5) )
            goto LABEL_698;
          if ( v164 )
            goto LABEL_792;
          if ( (unsigned int)(v36 - 512) <= 0xE && (*(_DWORD *)(a1 + 464) & 0x8000) != 0 )
            goto LABEL_698;
          v196 = *(_DWORD *)(a1 + 464);
          if ( (v196 & 0x100000) != 0 )
          {
            *(_DWORD *)(a1 + 464) = v196 & 0xFFEFFFFF;
            xxxWindowEvent(0x800Bu, 0LL, 4294967287LL, 0LL, 1);
          }
          v363 = *(struct tagPOINT *)((char *)&v331 + 4);
          v364 = *(_QWORD *)v61;
          v365 = v313;
          v366 = *((_QWORD *)&v332 + 1);
          v367 = v330;
          v39 = v309;
          if ( v309 )
          {
            if ( (_DWORD)v36 != 512 && (_DWORD)v36 != 160 )
            {
              v321 = 1;
              if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v36, (__int64)&v363) )
                goto LABEL_704;
            }
          }
          v44 = (unsigned int)(*(_DWORD *)(**(_QWORD **)(a1 + 440) + 16LL) | *(_DWORD *)(a1 + 656));
          if ( ((*(_WORD *)(**(_QWORD **)(a1 + 440) + 16LL) | *(_WORD *)(a1 + 656)) & 0x100) != 0 )
          {
            v321 = 1;
            if ( (unsigned int)xxxCallMouseHook((unsigned int)v36, &v363, v39) )
              goto LABEL_704;
          }
          if ( (*(_DWORD *)(a1 + 1184) & 0x2000) == 0 && ((v313 + 2) & 0xFFFFFFFD) == 0 )
          {
            v221 = 0LL;
            if ( v323 )
            {
              CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v61);
              v221 = (__int64)CompositionInputWindowUIOwner;
              if ( CompositionInputWindowUIOwner )
              {
                v223 = 0;
                if ( (unsigned int)CoreWindowProp::IsComponent(CompositionInputWindowUIOwner) && v308 == 161 )
                  v223 = *(_QWORD *)(*(_QWORD *)(v221 + 16) + 408LL) == gpqForeground;
                v224 = (struct tagWND *)GetTopLevelWindow(v221);
                v225 = CoreWindowProp::GetTopLevelHost(v224);
                v221 = GetTopLevelWindow((__int64)v225);
                if ( !v221 )
                  v221 = (__int64)v224;
                if ( v223 )
                {
                  v226 = *(_QWORD *)(v221 + 16);
                  if ( *(_QWORD *)(v226 + 408) != gpqForeground )
                    *(_DWORD *)(v226 + 464) |= 0x20u;
                }
                v369 = *(_QWORD *)(a1 + 392);
                *(_QWORD *)(a1 + 392) = &v369;
                v370 = v221;
                if ( v221 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v221 + 8));
                  v39 = v309;
                  v61 = ThreadDesktopWindow;
                }
                xxxSendMessage(v221);
                ThreadUnlock1(v228, v227);
                v195 = v315;
              }
            }
            if ( !v221 )
              xxxSendMessage(v61);
            if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 408) + 80LL) == v195
              && v195
              && IsMouseInPointerActive(a1, (__int64)v195)
              && (*((_DWORD *)v195 + 25) & 0x800) != 0
              && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v195 + 120)) )
            {
              v229 = IsMiPMouseMessage(*((_DWORD *)v195 + 6));
              LODWORD(v36) = v308;
              if ( v229 )
              {
                GeneratePointerMessageFromMouse((struct tagQMSG *)v427, v308, v195, (struct tagWND *)v61, v39);
                SetMiPPromotion(*(_QWORD *)(v61 + 16), v428);
              }
            }
            else
            {
LABEL_355:
              LODWORD(v36) = v308;
            }
            goto LABEL_704;
          }
          v197 = v195;
          if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 408) + 80LL) != v195 )
            goto LABEL_792;
          LODWORD(v36) = 0;
          v406 = v328;
          v407 = v329;
          v408 = v330;
          v409 = v331;
          v410 = v332;
          v411 = v333;
          v412 = v334;
          v413 = v335;
          v414 = v336;
          v415 = v337;
          if ( v195 && IsMouseInPointerActive(a1, (__int64)v195) )
          {
            v198 = v308;
            v199 = v308;
            DWORD2(v407) = v308;
            *(_QWORD *)&v408 = v320;
            if ( (*((_DWORD *)v197 + 25) & 0x800) != 0 )
            {
              v200 = *(_QWORD *)(a1 + 1224);
              if ( v200 && (*(_DWORD *)v200 & 1) != 0 )
              {
                v395 = *(_OWORD *)(v200 + 24);
                v396 = *(_OWORD *)(v200 + 40);
                v397 = *(_OWORD *)(v200 + 56);
                v398 = *(_OWORD *)(v200 + 72);
                v399 = *(_OWORD *)(v200 + 88);
                v400 = *(_OWORD *)(v200 + 104);
                LODWORD(v36) = 1;
              }
              if ( (unsigned int)GeneratePointerMessageFromMouse(
                                   (struct tagQMSG *)&v416,
                                   v308,
                                   v197,
                                   (struct tagWND *)v61,
                                   v39) )
              {
                v328 = v416;
                v329 = v417;
                v330 = v418;
                v331 = v419;
                v332 = v420;
                v333 = v421;
                v334 = v422;
                v335 = v423;
                v336 = v424;
                v337 = v425;
                v319 = 1;
                if ( DWORD2(v417) == 582 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 408) + 432LL) = *(_QWORD *)v61;
                }
                else if ( ((DWORD2(v417) - 579) & 0xFFFFFFFB) == 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 408) + 432LL) = 0LL;
                }
              }
              v197 = v315;
              if ( !v39 )
                break;
              *((_DWORD *)v315 + 25) &= ~0x800u;
            }
            else
            {
              if ( !v39 )
                break;
              if ( IsMiPMouseMessage(*((_DWORD *)v197 + 6)) )
              {
                if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v197 + 120)) )
                {
                  v201 = *(_DWORD **)(a1 + 1224);
                  if ( v201 )
                  {
                    if ( (*v201 & 2) == 0 && (*v201 & 4) == 0 )
                      goto LABEL_663;
                  }
                }
                v202 = *(_DWORD **)(a1 + 1224);
                if ( v202 )
                  *v202 &= ~2u;
              }
            }
          }
          else
          {
            v199 = DWORD2(v407);
            v198 = v308;
          }
          if ( v39 )
          {
            if ( (v199 == 512 || v199 == 160)
              && *(PVOID *)v61 != WPP_MAIN_CB.Queue.Wcb.DeviceContext
              && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v197 + 120)) )
            {
              LOBYTE(v203) = 1;
              v206 = HMValidateHandleNoSecure(v204, v203, v204, v205);
              v207 = v206;
              if ( v206
                && IsMouseInPointerActive(*(_QWORD *)(v206 + 16), 0LL)
                && (GetMiPWindowFlags((struct tagWND *)v207) & 1) == 0 )
              {
                if ( v211 == a1 )
                {
                  v212 = *(_QWORD *)(a1 + 1224);
                  v389 = *(_OWORD *)(v212 + 24);
                  v390 = *(_OWORD *)(v212 + 40);
                  v391 = *(_OWORD *)(v212 + 56);
                  v394 = *(_OWORD *)(v212 + 72);
                  v401 = *(_OWORD *)(v212 + 88);
                  v388 = *(_OWORD *)(v212 + 104);
                  if ( (_DWORD)v36 )
                  {
                    *(_OWORD *)(v212 + 24) = v395;
                    *(_OWORD *)(v212 + 40) = v396;
                    *(_OWORD *)(v212 + 56) = v397;
                    *(_OWORD *)(v212 + 72) = v398;
                    *(_OWORD *)(v212 + 88) = v399;
                    *(_OWORD *)(v212 + 104) = v400;
                  }
                  v402 = ((*(_DWORD *)(*(_QWORD *)(a1 + 1224) + 36LL) & 0xE1F7u) << 16) | 1LL;
                  v403 = 0LL;
                  v404 = 0LL;
                  v405 = 0LL;
                  v213 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v208, v209, v210);
                  v393[0] = *(_QWORD *)(v213 + 392);
                  *(_QWORD *)(v213 + 392) = v393;
                  v393[1] = v207;
                  _InterlockedIncrement((volatile signed __int32 *)(v207 + 8));
                  FindTimer(v207, 65523, 2, 1, 0LL);
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout((__int64 *)v207, 586LL, v402, 0LL, 0, 0, 0LL, 1u, 0);
                  ThreadUnlock1(v215, v214);
                  v39 = v309;
                  v61 = ThreadDesktopWindow;
                  v198 = v308;
                  if ( (_DWORD)v36 )
                  {
                    v216 = *(_QWORD *)(a1 + 1224);
                    *(_OWORD *)(v216 + 24) = v389;
                    *(_OWORD *)(v216 + 40) = v390;
                    *(_OWORD *)(v216 + 56) = v391;
                    *(_OWORD *)(v216 + 72) = v394;
                    *(_OWORD *)(v216 + 88) = v401;
                    *(_OWORD *)(v216 + 104) = v388;
                  }
                }
                else
                {
                  PostEventMessageEx(
                    (struct tagTHREADINFO *)v211,
                    *(_QWORD *)(v211 + 408),
                    0x15u,
                    v207,
                    0,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              v217 = v319;
              if ( v319 )
                WPP_MAIN_CB.Queue.Wcb.DeviceContext = *(PVOID *)v61;
              else
                WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
            }
            else
            {
              v217 = v319;
            }
            if ( !v217 )
            {
              v218 = v182 - 1;
              if ( v218 )
              {
                if ( v218 == 1 )
                  *(_DWORD *)(*(_QWORD *)(a1 + 408) + 160LL) = 0;
              }
              else
              {
                *(_DWORD *)(*(_QWORD *)(a1 + 408) + 152LL) = DWORD2(v329);
                *(_WORD *)(*(_QWORD *)(a1 + 408) + 156LL) = WORD1(v330);
                *(_DWORD *)(*(_QWORD *)(a1 + 408) + 160LL) = gdtDblClk + v331;
                *(_QWORD *)(*(_QWORD *)(a1 + 408) + 168LL) = *(_QWORD *)v61;
                *(_QWORD *)(*(_QWORD *)(a1 + 408) + 176LL) = *(_QWORD *)((char *)&v331 + 4);
              }
            }
            v219 = (const struct tagQMSG *)&v406;
            if ( !v319 )
              v219 = (const struct tagQMSG *)&v328;
            v220 = xxxMouseActivate((struct tagTHREADINFO *)a1, (struct tagWND *)v61, v219, v313) - 1;
            if ( !v220 )
              goto LABEL_414;
            if ( v220 == 1 )
            {
              v72 = DWORD2(v329);
              v52 = 0;
              continue;
            }
            if ( v39 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v56);
          }
          break;
        }
        if ( v39
          && v321
          && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 440) + 16LL) | *(_BYTE *)(a1 + 656)) & 0x40) != 0 )
        {
          xxxCallHook(6, v198, (__int64)&v363, 5u);
        }
        v321 = 0;
        v316 = (LOWORD(v314.y) << 16) | LOWORD(v314.x);
        if ( v198 >= 0x200 )
          v320 = (unsigned int)GetMouseKeyFlags(*(unsigned __int8 **)(a1 + 408));
        if ( (v198 - 171 <= 2 || v198 - 523 <= 2) && !v319 )
          v320 |= v330;
        v230 = *(_QWORD *)(a1 + 584);
        if ( v313 != 5
          || !v39
          || !v230
          || (*(_DWORD *)(v230 + 8) & 0x100) == 0
          || !*(_QWORD *)v230
          || (**(_DWORD **)v230 & 1) == 0 )
        {
          goto LABEL_687;
        }
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v368,
          *(struct tagMENUSTATE **)(a1 + 584));
        if ( (unsigned int)xxxCallHandleMenuMessages(v231, v61, v198, v320, v316) )
        {
          v10 = v311;
          if ( v368 )
            xxxUnlockMenuStateInternal(v368, 0);
          continue;
        }
        if ( v368 )
          xxxUnlockMenuStateInternal(v368, 0);
LABEL_687:
        v74 = v315;
        if ( !v319 )
          goto LABEL_744;
LABEL_688:
        v72 = DWORD2(v329);
LABEL_689:
        if ( ((DWORD2(v335) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v335) != 50 )
        {
          v308 = v72;
          v316 = *((_QWORD *)&v330 + 1);
          v320 = v330;
          goto LABEL_719;
        }
        EtwTraceBeginPointerMessageRetrieve(v74, (unsigned __int16)v330, v72);
        v232 = xxxRetrievePointerInputMessage(
                 a1,
                 v338[0],
                 v322,
                 a5,
                 1,
                 0,
                 &v309,
                 v74,
                 (__int64)&ThreadDesktopWindow,
                 (__int64)&v308,
                 (__int64)&v320,
                 (__int64)&v316,
                 &v318,
                 a8);
        EtwTraceEndPointerMessageRetrieve(v74, (unsigned __int16)v330, DWORD2(v329));
        v61 = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ThreadLockExchange(ThreadDesktopWindow, &v344);
        v233 = v232 - 1;
        if ( v233 )
        {
          v234 = v233 - 1;
          if ( !v234 )
          {
            if ( v318 && !v340 )
            {
              v236 = *(_QWORD *)(v61 + 16);
              LockExchangeW32Thread(v236, (__int64)&v354);
              v65 = 0LL;
              v66 = v324;
              v67 = 0LL;
              goto LABEL_795;
            }
            goto LABEL_792;
          }
          v235 = v234 - 1;
          if ( v235 )
          {
            if ( v235 == 1 )
              goto LABEL_698;
          }
          else
          {
            xxxDefPointerProc(v61, DWORD2(v329), v330, *((_QWORD *)&v330 + 1));
          }
LABEL_700:
          v39 = v309;
LABEL_701:
          LODWORD(v36) = v308;
          goto LABEL_704;
        }
        v39 = v309;
        v72 = v308;
LABEL_719:
        if ( v39 )
        {
          if ( IsMouseInPointerActive(a1, 0LL) && v319 )
          {
            if ( v61 )
              v238 = *(_QWORD *)v61;
            else
              v238 = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 1224) + 48LL) = v238;
            v239 = *(_QWORD *)(a1 + 1224);
            if ( (*(_DWORD *)(v239 + 36) & 0x400000) != 0
              && !(unsigned int)IsCompositionInputWindow((struct tagWND *)v61) )
            {
              *(_DWORD *)(v239 + 36) = v240 & 0xFFBFFFFF;
            }
            v241 = GetMiPWindowFlags((struct tagWND *)v61) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v61 )
              InternalSetProp(v61, (unsigned __int16)gatomMiPFlags, v241, 5);
            if ( ((DWORD2(v329) - 578) & 0xFFFFFFFB) != 0 )
            {
              if ( ((DWORD2(v329) - 579) & 0xFFFFFFFB) == 0 )
                **(_DWORD **)(a1 + 1224) &= ~8u;
            }
            else
            {
              v242 = 0;
              if ( DWORD2(v329) == 578 )
                v242 = 8;
              **(_DWORD **)(a1 + 1224) = v242 | **(_DWORD **)(a1 + 1224) & 0xFFFFFFF7;
            }
          }
          else
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v237);
          }
        }
        if ( IsPointerMessageTouchpad((struct tagTHREADINFO *)a1, *((unsigned __int64 *)&v330 + 1), v319) )
        {
          if ( !v39 && !(unsigned int)IsPTPRedirected((struct tagTHREADINFO *)a1, (struct tagMSG *)&v329) )
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v328, 1LL, v243);
          v244 = v316;
          if ( v72 == 595 )
            v244 = -1LL;
          v316 = v244;
        }
LABEL_744:
        if ( *(_QWORD *)(a1 + 732) != *(_QWORD *)((char *)&v331 + 4) )
          *(_DWORD *)(a1 + 464) |= 0x100000u;
        if ( (unsigned __int64)v74 > 1 && (BYTE4(v334) & 0x20) != 0 )
        {
          if ( *((_DWORD *)v74 + 6) == 512 )
          {
            if ( v61 )
              v245 = *(_QWORD *)v61;
            else
              v245 = 0LL;
            *((_QWORD *)v74 + 2) = v245;
            *((_DWORD *)v74 + 25) |= 0x400u;
          }
          *((_QWORD *)v74 + 8) = v316;
        }
        *(_QWORD *)(a1 + 732) = *(_QWORD *)((char *)&v331 + 4);
        *(_QWORD *)(a1 + 740) = v333;
        *(_DWORD *)(a1 + 544) = v331;
        *(_QWORD *)(*(_QWORD *)(a1 + 408) + 400LL) = *((_QWORD *)&v332 + 1);
        *(_QWORD *)(*(_QWORD *)(a1 + 408) + 72LL) = 1LL;
        *(_QWORD *)(a1 + 552) = 1LL;
        *(_QWORD *)(a1 + 1188) = *((_QWORD *)&v335 + 1);
        *(_DWORD *)(a1 + 1232) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( *(_DWORD *)(a1 + 1192) == 1 )
          *(_DWORD *)(a1 + 1184) |= 0x20000u;
        else
          *(_DWORD *)(a1 + 1184) &= ~0x20000u;
        **(_DWORD **)(a1 + 424) &= ~8u;
        **(_QWORD **)(a1 + 456) &= 0x7FFFFFFFuLL;
        v246 = 0LL;
        if ( v309 )
        {
          v247 = *(_QWORD **)(a1 + 456);
          if ( (BYTE4(v334) & 1) != 0 )
            *v247 |= 0x1000uLL;
          else
            *v247 &= ~0x1000uLL;
        }
        v248 = v308;
        TransferWakeBit(a1, v308);
        v249 = 31751;
        v250 = *(_QWORD *)(a1 + 408);
        if ( !*(_DWORD *)(v250 + 40) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 48LL) )
        {
          if ( (*(_BYTE *)(v250 + 380) & 0x20) != 0 )
            v249 = 31749;
          *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= ~v249;
        }
        if ( v309 )
        {
          if ( v319 )
          {
            v251 = *(_DWORD **)(a1 + 1224);
            if ( v251 )
            {
              if ( (*v251 & 1) != 0 && (*v251 & 4) != 0 )
                SetMiPWakeBit((struct tagTHREADINFO *)a1);
            }
          }
        }
        if ( ThreadDesktopWindow )
          v246 = *(_QWORD *)ThreadDesktopWindow;
        *(_QWORD *)a2 = v246;
        *(_DWORD *)(a2 + 8) = v248;
        v252 = v320;
        if ( (v326 & 2) != 0 )
          v252 = 229LL;
        *(_QWORD *)(a2 + 16) = v252;
        *(_QWORD *)(a2 + 24) = v316;
        *(_DWORD *)(a2 + 32) = v331;
        *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v331 + 4);
        if ( v309 )
        {
          EtwTraceInputProcessDelay(a1);
          *(_DWORD *)(*(_QWORD *)(a1 + 408) + 408LL) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v253 = *(_DWORD *)(a2 + 8);
          if ( v253 == 256 )
          {
            *(_DWORD *)(a1 + 1288) |= 1u;
            *(_QWORD *)(a1 + 1272) = *(_QWORD *)(a1 + 1188);
            *(_DWORD *)(a1 + 1264) = *(unsigned __int16 *)(a2 + 26);
            *(_DWORD *)(a1 + 1268) = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a1 + 1280) = *((_QWORD *)&v336 + 1);
          }
          else if ( ((v253 - 257) & 0xFFFFFFFB) == 0 )
          {
            *(_DWORD *)(a1 + 1288) &= ~1u;
          }
        }
        EtwTraceRetrieveInputMessage(a2, (unsigned int)v309);
        v257 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v254, v255, v256);
        *(_QWORD *)(v257 + 16) = v354;
        if ( v355 )
          ((void (__fastcall *)(__int64, __int64, __int64))v356)(v355, v258, v259);
        v261 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v258, v259, v260);
        *(_QWORD *)(v261 + 16) = v357;
        if ( v358 )
          ((void (__fastcall *)(__int64, __int64, __int64))v359)(v358, v262, v263);
        v265 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v262, v263, v264);
        *(_QWORD *)(v265 + 16) = v360;
        if ( v361 )
          ((void (__fastcall *)(__int64, __int64, __int64))v362)(v361, v266, v267);
        v269 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v266, v267, v268);
        *(_QWORD *)(v269 + 16) = v348;
        if ( v349 )
          ((void (__fastcall *)(__int64, __int64, __int64))v350)(v349, v270, v271);
        v273 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v270, v271, v272);
        *(_QWORD *)(v273 + 16) = v351;
        v276 = v352;
        if ( v352 )
          ((void (__fastcall *)(__int64, __int64, __int64))v353)(v352, v274, v275);
        ThreadUnlock1(v276, v274);
        return 1LL;
    }
  }
}

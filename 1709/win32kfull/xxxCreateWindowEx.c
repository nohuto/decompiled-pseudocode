/*
 * XREFs of xxxCreateWindowEx @ 0x1C006F794
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C0073740 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00CD8AC (xxxCreateDefaultImeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 *     xxxCsDdeInitialize @ 0x1C01189A4 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0009730 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     HasMessageRootWindow @ 0x1C000BA90 (HasMessageRootWindow.c)
 *     DwmAsyncChildCreate @ 0x1C004590C (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     xxxSendSizeMessage @ 0x1C0049940 (xxxSendSizeMessage.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     SetMinimize @ 0x1C004BB24 (SetMinimize.c)
 *     xxxCreateClassSmIcon @ 0x1C00534E4 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C0053BA0 (xxxClientLoadMenu.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C0057E40 (PWInsertAfter.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     xxxLoadUserApiHook @ 0x1C00586D0 (xxxLoadUserApiHook.c)
 *     CalcForegroundInsertAfter @ 0x1C00587B8 (CalcForegroundInsertAfter.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C005B470 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C005D5D8 (UpdateTopLevelWindowDPITransform.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     DereferenceClass @ 0x1C0060640 (DereferenceClass.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UnlinkWindow @ 0x1C0062338 (UnlinkWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0065344 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C0072B58 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C0072C0C (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0072CD4 (ValidateParentDepth.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072D6C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     GetClassPtr @ 0x1C0072FE0 (GetClassPtr.c)
 *     IsValidBandForProcess @ 0x1C0073288 (IsValidBandForProcess.c)
 *     RECTFromSIZERECT @ 0x1C007332C (RECTFromSIZERECT.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00733A0 (SetWindowSubtreeCoreWindowStatus.c)
 *     GetAppCompatFlags @ 0x1C0073430 (GetAppCompatFlags.c)
 *     ClassLock @ 0x1C0073454 (ClassLock.c)
 *     ReferenceClass @ 0x1C0073510 (ReferenceClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0073710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     RegisterDefaultClass @ 0x1C0075794 (RegisterDefaultClass.c)
 *     SetTiledRect @ 0x1C0076C18 (SetTiledRect.c)
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     LockWndMenu @ 0x1C007C744 (LockWndMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C007C7DC (RtlInitUnicodeStringOrId.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxAdjustSize @ 0x1C009662C (xxxAdjustSize.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C009C3A0 (NeedsWindowEdge.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A0F3C (MapClientNeuterToClientPfn.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsImmersiveAppIORestricted @ 0x1C00C8A38 (IsImmersiveAppIORestricted.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00CD8AC (xxxCreateDefaultImeWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     RegisterIconTitleClass @ 0x1C0108AB4 (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C010D27C (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C010E8FC (ValidateOwnerDepth.c)
 *     RtlInitLargeAnsiString @ 0x1C010EAF0 (RtlInitLargeAnsiString.c)
 *     xxxShowWindow @ 0x1C0111E58 (xxxShowWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GetTopMostInsertAfter @ 0x1C01AB1DC (GetTopMostInsertAfter.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C457C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     _W32ExceptionHandler @ 0x1C02267D0 (_W32ExceptionHandler.c)
 */

_DWORD *__fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        struct tagWND *a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  struct tagWND *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ebx
  int v26; // ecx
  int v27; // edi
  int v28; // r13d
  __int64 v29; // rcx
  int v30; // r13d
  __int64 v31; // r14
  unsigned __int16 Atom; // di
  __int64 *ClassPtr; // rax
  __int64 v34; // r13
  __int64 v35; // r8
  int v36; // r10d
  unsigned int v37; // r10d
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // r14
  struct tagWND *v42; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rdi
  int CurrentThreadDpiAwarenessContext; // eax
  int v48; // ecx
  int v49; // edx
  struct tagCLS *v50; // rdi
  __int64 v51; // r13
  __int64 *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  unsigned int v57; // edx
  unsigned int v58; // eax
  __int64 *InheritedMonitor; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 *ThreadDesktopWindow; // rbx
  __int64 v65; // r13
  __int64 v66; // rbx
  int ClassStyle; // edi
  __int64 v68; // rcx
  void *v69; // rax
  unsigned __int16 v70; // bx
  unsigned int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  SIZE_T v75; // rcx
  volatile void *v76; // rax
  int AppCompatFlags; // eax
  char v78; // bl
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  unsigned int v85; // eax
  int v86; // r8d
  int v87; // r9d
  unsigned int v88; // r10d
  unsigned int v89; // r11d
  _QWORD *v90; // r13
  int v91; // edi
  int v92; // ebx
  int v93; // r8d
  int v94; // r9d
  int v95; // edx
  __int64 v96; // rcx
  struct tagMONITOR *v97; // rax
  __int64 v98; // r8
  struct tagMONITOR *v99; // rdx
  __int64 v100; // rax
  int v101; // r8d
  __int16 v102; // ax
  int v103; // eax
  _DWORD *v104; // rcx
  unsigned __int64 v105; // xmm0_8
  int v106; // edi
  int v107; // ebx
  int v108; // eax
  _QWORD *Menu; // r8
  _QWORD *v110; // rcx
  __int64 v111; // rcx
  char v112; // bl
  __int64 v113; // rcx
  __int64 NonChildAncestor; // rbx
  _QWORD *v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // r13
  unsigned int v118; // eax
  int v119; // ecx
  __int64 KernelEvent; // rax
  __int64 *v121; // rbx
  __int64 *v122; // rdi
  __int64 v123; // rdx
  unsigned int v124; // eax
  NTSTATUS v125; // eax
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rax
  int v131; // ecx
  int v132; // eax
  int v133; // edx
  int v134; // ecx
  _DWORD *v135; // r13
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 *v138; // rdx
  __int64 v139; // rax
  int v140; // eax
  __int64 v141; // rcx
  char v142; // al
  __int64 StyleWindow; // rbx
  __int64 CacheDC; // rax
  int v145; // ebx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // r8
  __int64 SystemMenu; // rbx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  _QWORD *v154; // rdi
  __int64 DefaultImeWindow; // rax
  __int64 v156; // rbx
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  int v160; // ecx
  __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rax
  unsigned __int64 TopLevelWindow; // rbx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rcx
  int v170; // eax
  struct tagWND *v171; // rax
  struct tagWND *v172; // rdi
  struct tagWND *TopLevelHost; // rax
  __int64 TopMostInsertAfter; // rax
  int v175; // edx
  int v176; // ecx
  struct tagCLS *v177; // rbx
  __int64 v178; // rdx
  __int64 v179; // r8
  __int64 v180; // rax
  __int64 v181; // rcx
  void *v182; // rax
  __int64 v183; // rcx
  __int64 *v184; // rbx
  __int64 v185; // rbx
  void *v186; // rax
  char v187; // al
  unsigned int v188; // edx
  __int64 v189; // rcx
  ULONG_PTR v190; // rcx
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  _DWORD *result; // rax
  wchar_t *v199; // rcx
  unsigned int v200; // [rsp+58h] [rbp-3F0h]
  char v201; // [rsp+5Ch] [rbp-3ECh]
  unsigned __int16 v202; // [rsp+60h] [rbp-3E8h]
  int v203; // [rsp+68h] [rbp-3E0h]
  unsigned int v204; // [rsp+70h] [rbp-3D8h]
  unsigned __int64 v205; // [rsp+78h] [rbp-3D0h] BYREF
  int v206; // [rsp+80h] [rbp-3C8h]
  int v207; // [rsp+84h] [rbp-3C4h]
  struct tagMONITOR *v208; // [rsp+88h] [rbp-3C0h]
  struct tagCLS *v209; // [rsp+90h] [rbp-3B8h]
  int v210; // [rsp+98h] [rbp-3B0h]
  int v211; // [rsp+9Ch] [rbp-3ACh]
  int WindowCloakStateComponentUIAware; // [rsp+A0h] [rbp-3A8h]
  int v213; // [rsp+A4h] [rbp-3A4h]
  int v214; // [rsp+A8h] [rbp-3A0h]
  int v215; // [rsp+ACh] [rbp-39Ch]
  __int16 v216; // [rsp+B0h] [rbp-398h]
  __int16 v217; // [rsp+B2h] [rbp-396h]
  __int16 v218; // [rsp+B4h] [rbp-394h]
  __int16 v219; // [rsp+B6h] [rbp-392h]
  __int16 v220; // [rsp+B8h] [rbp-390h]
  int v221; // [rsp+BCh] [rbp-38Ch]
  int v222; // [rsp+C0h] [rbp-388h]
  int v223; // [rsp+C4h] [rbp-384h]
  int v224; // [rsp+C8h] [rbp-380h]
  BOOL v225; // [rsp+CCh] [rbp-37Ch]
  unsigned __int64 v226; // [rsp+D0h] [rbp-378h]
  __int64 v227; // [rsp+D8h] [rbp-370h]
  int v228; // [rsp+E0h] [rbp-368h]
  int v229; // [rsp+E8h] [rbp-360h]
  __m128i v230; // [rsp+F0h] [rbp-358h]
  __int64 v231; // [rsp+100h] [rbp-348h]
  wchar_t *Str1; // [rsp+108h] [rbp-340h]
  __int64 v233; // [rsp+110h] [rbp-338h]
  __int64 v234; // [rsp+118h] [rbp-330h]
  _QWORD *v235; // [rsp+120h] [rbp-328h]
  __int64 v236; // [rsp+128h] [rbp-320h]
  __int64 v237; // [rsp+130h] [rbp-318h]
  __int64 *v238; // [rsp+138h] [rbp-310h]
  struct tagCLS *v239; // [rsp+140h] [rbp-308h]
  __int64 v240; // [rsp+148h] [rbp-300h]
  struct tagWND *v241; // [rsp+150h] [rbp-2F8h]
  _OWORD v242[7]; // [rsp+160h] [rbp-2E8h] BYREF
  __int64 v243; // [rsp+1D0h] [rbp-278h]
  wchar_t *v244; // [rsp+1D8h] [rbp-270h]
  __int64 v245; // [rsp+1E0h] [rbp-268h]
  int v246; // [rsp+1E8h] [rbp-260h]
  char v247[8]; // [rsp+1F0h] [rbp-258h] BYREF
  char v248[8]; // [rsp+1F8h] [rbp-250h] BYREF
  __int64 v249; // [rsp+200h] [rbp-248h]
  _OWORD *v250; // [rsp+208h] [rbp-240h] BYREF
  unsigned __int64 v251; // [rsp+210h] [rbp-238h]
  __int128 v252; // [rsp+220h] [rbp-228h]
  __int128 v253; // [rsp+230h] [rbp-218h]
  __int128 v254; // [rsp+240h] [rbp-208h]
  __int128 v255; // [rsp+250h] [rbp-1F8h]
  __int128 v256; // [rsp+260h] [rbp-1E8h]
  __int128 v257; // [rsp+270h] [rbp-1D8h]
  _QWORD v258[3]; // [rsp+280h] [rbp-1C8h] BYREF
  __int64 v259[3]; // [rsp+298h] [rbp-1B0h] BYREF
  __int128 v260; // [rsp+2B0h] [rbp-198h] BYREF
  void *v261[2]; // [rsp+2C0h] [rbp-188h] BYREF
  __int128 v262; // [rsp+2D0h] [rbp-178h] BYREF
  __int128 v263; // [rsp+2E0h] [rbp-168h] BYREF
  __m128i v264; // [rsp+2F0h] [rbp-158h] BYREF
  __int128 v265; // [rsp+300h] [rbp-148h] BYREF
  __int128 v266; // [rsp+310h] [rbp-138h] BYREF
  __int128 v267; // [rsp+320h] [rbp-128h] BYREF
  _QWORD v268[3]; // [rsp+338h] [rbp-110h] BYREF
  _QWORD v269[3]; // [rsp+350h] [rbp-F8h] BYREF
  _QWORD v270[3]; // [rsp+368h] [rbp-E0h] BYREF
  _QWORD v271[3]; // [rsp+380h] [rbp-C8h] BYREF
  _QWORD v272[3]; // [rsp+398h] [rbp-B0h] BYREF
  __int64 v273[5]; // [rsp+3B0h] [rbp-98h] BYREF
  __int128 v274; // [rsp+3D8h] [rbp-70h] BYREF
  __int128 v275; // [rsp+3E8h] [rbp-60h] BYREF
  struct tagRECT v276; // [rsp+3F8h] [rbp-50h] BYREF

  v234 = a4;
  v231 = a3;
  Str1 = a2;
  v200 = a1;
  v237 = (__int64)a11;
  v244 = a2;
  v245 = a3;
  v230.m128i_i64[0] = a4;
  v19 = a10;
  v241 = a10;
  v235 = a11;
  v227 = a12;
  v236 = a13;
  v221 = 0;
  v228 = 0;
  v223 = 0;
  v211 = 0;
  v275 = 0uLL;
  v213 = 5;
  v229 = 5;
  v238 = 0LL;
  v249 = gptiCurrent;
  v214 = 0;
  v20 = 0LL;
  v210 = 0;
  v21 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL);
  v215 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v22 = 0LL;
  v204 = 0;
  if ( (v21 & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass(v21, 0LL, a3, 0LL) )
    {
LABEL_3:
      v23 = 87LL;
LABEL_534:
      UserSetLastError(v23, v20);
      return 0LL;
    }
    v22 = 0LL;
  }
  if ( a1 < 0 )
  {
    v210 = 800;
    v200 = a1 & 0x7FFFFFFF;
  }
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  v233 = v24;
  v243 = v24;
  if ( a10 && *((_QWORD *)a10 + 3) != v24 )
    goto LABEL_3;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 400LL), v20, a3, 0LL) )
    {
LABEL_11:
      v23 = 5LL;
      goto LABEL_534;
    }
    v22 = 1LL;
    v204 = 1;
  }
  if ( (a16 & 2) != 0 )
  {
    if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 400LL)) )
      goto LABEL_11;
    v22 = v204;
  }
  v25 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14, v20, a3, v22) )
      goto LABEL_3;
    if ( a14 == 15 )
      goto LABEL_3;
    v26 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 776LL);
    if ( (v26 & 0x30) == 0x10
      && (v26 & 0x200) == 0
      && a14 == 1
      && (!gfEnableModernOnDesktop || !(_DWORD)v22 && !(unsigned int)HasMessageRootWindow((__int64)a10)) )
    {
      goto LABEL_3;
    }
  }
  v27 = HIWORD(a5) & 0xC000;
  v224 = v27;
  v216 = HIWORD(a5) & 0xC000;
  v220 = HIWORD(a5) & 0xC000;
  v219 = HIWORD(a5) & 0xC000;
  v218 = HIWORD(a5) & 0xC000;
  v217 = HIWORD(a5) & 0xC000;
  v225 = (_WORD)v27 == 0x4000;
  v222 = v225;
  if ( (_WORD)v27 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(gptiCurrent + 400LL), a10, a3, v22) )
      v19 = 0LL;
    v241 = v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( !a14 )
    {
      if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 400LL), v20, a3, v22) )
      {
        v28 = 1;
        v204 = 1;
        v25 = 15;
        goto LABEL_42;
      }
      if ( (*(_DWORD *)(v29 + 776) & 2) == 0 || (v25 = 2, (v200 & 8) == 0) )
        v25 = 1;
    }
    v28 = v204;
  }
  else
  {
    v28 = *((_BYTE *)v19 + 306) & 0x40;
    v204 = v28;
    if ( a14 )
    {
      if ( a14 != *((_DWORD *)v19 + 80) )
        goto LABEL_3;
    }
    else
    {
      v25 = *((_DWORD *)v19 + 80);
    }
  }
LABEL_42:
  LODWORD(v208) = v28;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 400LL), v25, v19) )
    goto LABEL_43;
  v30 = v200;
  if ( (v200 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      if ( (_WORD)v27 != 0x4000 || (*((_BYTE *)v19 + 66) & 0x50) != 0x40 )
        goto LABEL_54;
      v30 = v200 | 0x400000;
    }
    else
    {
      if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == 0x8002
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(0x400000LL) + 780) & 1) == 0 )
      {
        goto LABEL_54;
      }
      v30 = v200 | 0x400000;
    }
    v200 = v30;
  }
LABEL_54:
  if ( (v30 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  v31 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 568LL) && !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 864LL), 2u) )
  {
LABEL_43:
    v23 = 5LL;
    goto LABEL_534;
  }
  if ( (_WORD)v27 != 0x4000 )
    goto LABEL_61;
  if ( !v19 )
  {
    v23 = 1406LL;
    goto LABEL_534;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_61:
    if ( (v231 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v247);
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(v231 + 8)) < 0 )
      {
        Atom = 0;
        v202 = 0;
        v215 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
        v202 = Atom;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v247);
    }
    else
    {
      Atom = v231;
      v202 = v231;
    }
    if ( Atom )
    {
      ClassPtr = (__int64 *)GetClassPtr(Atom, *(_QWORD *)(v31 + 400), v227);
      if ( ClassPtr )
        break;
    }
LABEL_526:
    if ( v215
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v199 = Str1)
        : (v199 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v199)) )
    {
      v23 = 1407LL;
      goto LABEL_534;
    }
    v215 = 1;
    v31 = gptiCurrent;
  }
  v34 = *ClassPtr;
  if ( (unsigned int)NeedsWindowEdge(a5, v200, a15 >= 0x400u) )
    v37 = v36 | 0x100;
  else
    v37 = v36 & 0xFFFFFEFF;
  v200 = v37;
  LOBYTE(v35) = 1;
  v38 = HMAllocObject(v31, v233, v35, 400LL);
  v41 = (_QWORD *)v38;
  v240 = v38;
  if ( !v38 )
    return 0LL;
  *(_QWORD *)(v38 + 384) = 0LL;
  *(_QWORD *)(v38 + 392) = 0LL;
  *(_DWORD *)(v38 + 304) &= ~0x80000000;
  if ( v217 != 0x4000 || !v19 || v19 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
  {
    v46 = gptiCurrent;
LABEL_83:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v40, v39);
    goto LABEL_84;
  }
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v44 = *(_QWORD *)(ThreadWin32Thread + 432);
    if ( v44 )
      v42 = *(struct tagWND **)(v44 + 104);
  }
  v45 = v19 == v42;
  v46 = gptiCurrent;
  if ( v45 )
    goto LABEL_83;
  v40 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 400LL);
  if ( *(_QWORD *)(gptiCurrent + 400LL) != v40 )
    goto LABEL_83;
  CurrentThreadDpiAwarenessContext = *((_DWORD *)v19 + 92);
LABEL_84:
  *((_DWORD *)v41 + 92) = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0xF0) == 0x20 )
  {
    v48 = 0x20000000;
    v49 = 0x40000000;
  }
  else
  {
    v48 = 0;
    v49 = 0;
  }
  *((_DWORD *)v41 + 76) = v49 | v48 & 0xBFFFFFFF | v41[38] & 0x9FFFFFFF;
  v41[21] = v34;
  *((_DWORD *)v41 + 17) = a5 & 0xEFFFFFFF;
  *((_DWORD *)v41 + 16) = v200 & 0xFDF7FFFF;
  *((_DWORD *)v41 + 62) = *(_DWORD *)(v34 + 116);
  *((_DWORD *)v41 + 63) = *(_DWORD *)(v34 + 80);
  if ( v41[3] == *(_QWORD *)(v34 + 16) )
    *((_BYTE *)v41 + 304) |= 0x80u;
  else
    *((_BYTE *)v41 + 304) &= ~0x80u;
  if ( !(unsigned int)ReferenceClass((void *)v34) )
    goto LABEL_92;
  v209 = (struct tagCLS *)v41[21];
  v239 = v209;
  if ( !(unsigned int)ClassLock(v209, v259) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v46 + 400), (__int64)v41);
LABEL_92:
    HMFreeObject(v41);
    goto LABEL_526;
  }
  v41[35] = a17;
  v50 = v209;
  v51 = gptiCurrent;
  if ( *((_WORD *)v209 + 5) == *(_WORD *)(gpsi + 852LL) )
  {
    v41[33] = 0LL;
  }
  else
  {
    v52 = *(__int64 **)(gptiCurrent + 760LL);
    if ( v52 )
      v53 = *v52;
    else
      v53 = 0LL;
    v41[33] = v53;
  }
  *((_DWORD *)v41 + 80) = v25;
  if ( v25 == 1 )
    v54 = 0;
  else
    v54 = IsTopLevelParent(v19);
  if ( v54 )
    *((_DWORD *)v41 + 16) |= 8u;
  if ( v204 )
    *((_BYTE *)v41 + 306) |= 0x40u;
  ++*(_DWORD *)(gptiCurrent + 868LL);
  memset(v242, 0, sizeof(v242));
  DWORD2(v242[4]) = v200;
  *((_QWORD *)&v242[0] + 1) = v227;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (_WORD)v210 )
    {
      *(_QWORD *)&v242[4] = *((_QWORD *)v50 + 20);
      if ( (*(_QWORD *)&v242[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v242[6]);
    }
    else
    {
      *(_QWORD *)&v242[4] = *((_QWORD *)Str1 + 1);
      v242[6] = *(_OWORD *)Str1;
    }
  }
  else
  {
    *(_QWORD *)&v242[4] = Str1;
  }
  if ( v234 )
  {
    *((_QWORD *)&v242[3] + 1) = *(_QWORD *)(v234 + 8);
    v242[5] = *(_OWORD *)v234;
  }
  LODWORD(v242[3]) = a5;
  *((_QWORD *)&v242[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v242[2] = __PAIR64__(a8, a9);
  if ( v19 )
    *((_QWORD *)&v242[1] + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v242[1] + 1) = 0LL;
  if ( v218 == 0x4000 )
  {
    *(_QWORD *)&v242[1] = v235;
    *((_DWORD *)v41 + 16) |= *((_DWORD *)v19 + 16) & 0xC4000000;
  }
  else if ( v235 )
  {
    *(_QWORD *)&v242[1] = *v235;
  }
  else
  {
    *(_QWORD *)&v242[1] = 0LL;
  }
  *(_QWORD *)&v242[0] = v236;
  v258[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v258;
  v258[1] = v41;
  _InterlockedAdd((volatile signed __int32 *)v41 + 2, 1u);
  if ( a6 == 0x80000000 || a6 == 0x8000 )
  {
    v55 = 0;
    v276.left = 0;
  }
  else
  {
    v55 = a6;
    v276.left = a6;
  }
  if ( a7 == 0x80000000 || a7 == 0x8000 )
  {
    v56 = 0;
    v276.top = 0;
  }
  else
  {
    v56 = a7;
    v276.top = a7;
  }
  if ( a8 == 0x80000000 || (v57 = a8, a8 == 0x8000) )
    v57 = 0;
  v276.right = v57 + v55;
  if ( a9 == 0x80000000 || (v58 = a9, a9 == 0x8000) )
    v58 = 0;
  v276.bottom = v56 + v58;
  InheritedMonitor = (__int64 *)GetInheritedMonitor((struct tagWND *)v41);
  if ( InheritedMonitor )
  {
    v203 = 1;
  }
  else
  {
    v203 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*((_QWORD *)v19 + 45));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v276, 2u, 0), v61 = 0LL, InheritedMonitor) )
    v61 = *InheritedMonitor;
  v41[45] = v61;
  *((_DWORD *)v41 + 93) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  *((_DWORD *)v41 + 76) &= ~0x8000000u;
  if ( v219 != 0x4000 )
    UpdateTopLevelWindowDPITransform((__int64)v41, (__int64)InheritedMonitor, v60);
  v208 = 0LL;
  if ( v220 == 0x4000 && v19 )
    *((_WORD *)v41 + 187) = *((_WORD *)v19 + 187);
  v62 = v41[3];
  if ( v62 )
  {
    v63 = *(_QWORD *)(v62 + 104);
    *(_QWORD *)&v253 = v41 + 13;
    *((_QWORD *)&v253 + 1) = v63;
    v260 = v253;
    HMAssignmentLock(&v260);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v41) )
  {
    ThreadDesktopWindow = (__int64 *)v19;
    if ( (_WORD)v224 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    memset(v273, 0, sizeof(v273));
    GetWindowCompositionInfo((__int64)v41, (__int64)v273);
    v65 = 0LL;
    if ( ThreadDesktopWindow )
      v65 = *ThreadDesktopWindow;
    v66 = ***(_QWORD ***)(v41[3] + 8LL);
    ClassStyle = DwmGetClassStyle((__int64)v41);
    v69 = (void *)ReferenceDwmApiPort(v68);
    DwmAsyncChildCreate(
      v69,
      *v41,
      v65,
      *((_DWORD *)v41 + 17),
      *((_DWORD *)v41 + 16),
      *((_DWORD *)v41 + 76),
      ClassStyle,
      (__int128 *)v273,
      v66,
      (__int128 *)&v276.left);
    v51 = gptiCurrent;
    v50 = v209;
  }
  v41[9] = v227;
  v70 = v210;
  v41[20] = MapClientNeuterToClientPfn(v50, 0LL, (unsigned __int16)v210);
  SetOrClrWF((*((_BYTE *)v50 + 34) & 1) != 0, v41, 516LL, 1LL);
  v71 = *((_DWORD *)v50 + 20);
  if ( v71 )
  {
    v72 = Win32AllocPoolWithQuotaZInit(v71, 1937208149LL);
    v41[49] = v72;
    if ( !v72 )
      goto LABEL_425;
  }
  v75 = *((unsigned int *)v50 + 29);
  if ( (_DWORD)v75 )
  {
    v76 = xxxClientAllocWindowClassExtraBytes(v75);
    v41[48] = v76;
    if ( !v76 )
      goto LABEL_425;
    if ( (unsigned int)IsWindowBeingDestroyed(v41)
      || (v73 = gSharedInfo[0],
          v74 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v41,
          LOBYTE(v74) = *(_BYTE *)(v74 + gSharedInfo[1] + 25),
          (v74 & 1) != 0) )
    {
      v41[48] = 0LL;
      goto LABEL_425;
    }
  }
  if ( *((_QWORD *)v50 + 16) && !*((_QWORD *)v50 + 21) && (unsigned int)PsGetWin32KFilterSet() != 5 )
    xxxCreateClassSmIcon((__int64)v50);
  SetOrClrWF(1LL, v41, v70, 1LL);
  if ( (*((_BYTE *)v50 + 34) & 2) != 0
    || v70
    && (v202 == *(_WORD *)(gpsi + 852LL)
     || v202 == *(_WORD *)(gpsi + 862LL)
     || v202 == *(_WORD *)(gpsi + 866LL)
     || v202 == *(_WORD *)(gpsi + 888LL)
     || v202 == *(_WORD *)(gpsi + 854LL)
     || v202 == *(_WORD *)(gpsi + 858LL)
     || v202 == *(_WORD *)(gpsi + 864LL)
     || v202 == *(_WORD *)(gpsi + 882LL)
     || v202 == *(_WORD *)(gpsi + 856LL)) )
  {
    SetOrClrWF(1LL, v41, 520LL, 1LL);
  }
  AppCompatFlags = GetAppCompatFlags(v51);
  v78 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v41, 1032LL, 1LL);
    v200 &= 0x3Fu;
    DWORD2(v242[4]) = BYTE8(v242[4]) & 0x3F;
  }
  *((_WORD *)v41 + 40) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v78 & 0x40) != 0 )
    {
      v79 = 1600LL;
LABEL_191:
      SetOrClrWF(1LL, v41, v79, 1LL);
    }
  }
  else
  {
    SetOrClrWF(1LL, v41, 1281LL, 1LL);
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1LL, v41, 1282LL, 1LL);
      if ( a15 >= 0x500u )
      {
        v79 = 1284LL;
        goto LABEL_191;
      }
    }
  }
  v80 = a15;
  if ( a15 <= *(_WORD *)(v51 + 612) )
    v80 = *(_DWORD *)(v51 + 612);
  *((_DWORD *)v41 + 81) = v80;
  v81 = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(v81 + 608) <= 0x9900u )
    v84 = *(_DWORD *)(v81 + 624);
  else
    v84 = 0;
  if ( (v84 & 0x10000000) != 0 )
    SetOrClrWF(1LL, v41, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook(v83, v82);
  if ( (unsigned int)WantImeWindow(v19, (struct tagWND *)v41) )
    xxxCallCtfHook(5, 3, *v41, 0LL);
  v85 = *(_DWORD *)(**(_QWORD **)(v51 + 440) + 16LL);
  v74 = v85 | *(_DWORD *)(v51 + 656);
  if ( (((unsigned __int8)v85 | *(_BYTE *)(v51 + 656)) & 0x40) == 0 )
  {
    v226 = 0LL;
    v86 = a6;
    v87 = a7;
    v88 = a8;
    v89 = a9;
    goto LABEL_207;
  }
  v250 = v242;
  v251 = 0LL;
  if ( (unsigned int)xxxCallHook(3LL, *v41, &v250, 5LL) )
    goto LABEL_425;
  v86 = HIDWORD(v242[2]);
  a6 = HIDWORD(v242[2]);
  v87 = DWORD2(v242[2]);
  a7 = DWORD2(v242[2]);
  v88 = DWORD1(v242[2]);
  a8 = DWORD1(v242[2]);
  v89 = v242[2];
  a9 = v242[2];
  v74 = v251;
  v226 = v251;
LABEL_207:
  LOBYTE(v73) = *((_BYTE *)v41 + 71) & 0xC0;
  v201 = v73;
  v222 = (_BYTE)v73 == 64;
  if ( (_BYTE)v73 == 64 && !v19 )
    goto LABEL_425;
  v90 = 0LL;
  if ( ((_BYTE)v73 == 64) == v225 )
    v90 = (_QWORD *)v237;
  if ( (_BYTE)v73 )
  {
    if ( v86 == 0x80000000 || v86 == 0x8000 )
    {
      v86 = 0;
      a6 = 0;
      v87 = 0;
      a7 = 0;
    }
    if ( v88 == 0x80000000 || v88 == 0x8000 )
    {
      v88 = 0;
      a8 = 0;
      v89 = 0;
      a9 = 0;
    }
  }
  v91 = v86;
  v205 = __PAIR64__(v87, v86);
  v92 = v87;
  v206 = v88;
  v207 = v89;
  if ( (_BYTE)v73 == 64 )
  {
    if ( v19 != (struct tagWND *)GetDesktopWindow((__int64)v41) )
    {
      v91 = v93 + *((_DWORD *)v19 + 36);
      LODWORD(v205) = v91;
      v92 = v94 + *((_DWORD *)v19 + 37);
      HIDWORD(v205) = v92;
    }
    v226 = 1LL;
  }
  if ( !(_BYTE)v73 )
  {
    SetOrClrWF(1LL, v41, 3844LL, 1LL);
    v221 = 192;
    if ( (*((_BYTE *)v41 + 61) & 2) != 0 )
      SetOrClrWF(1LL, v41, 2305LL, 1LL);
    SetOrClrWF(1LL, v41, 16LL, 1LL);
    if ( (a6 == 0x80000000 || a6 == 0x8000) && v92 != 0x80000000 )
    {
      v95 = v213;
      if ( v92 != 0x8000 )
        v95 = v92;
      v213 = v95;
    }
    if ( !v203 && (a6 == 0x80000000 || a6 == 0x8000 || a8 == 0x80000000 || a8 == 0x8000) )
    {
      v96 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 664LL);
      if ( v96 )
      {
        v97 = (struct tagMONITOR *)ValidateHmonitor(v96);
        goto LABEL_238;
      }
      if ( v19 )
      {
        v97 = _MonitorFromWindowInternal(v19, 2, 0);
LABEL_238:
        v208 = v97;
      }
      else
      {
        v97 = 0LL;
      }
      if ( !v97 )
      {
        v97 = *(struct tagMONITOR **)(GetDispInfo() + 88);
        v208 = v97;
        goto LABEL_245;
      }
    }
    else
    {
      v97 = 0LL;
LABEL_245:
      if ( !v97 )
      {
        v97 = (struct tagMONITOR *)ValidateHmonitor(v41[45]);
        v208 = v97;
        if ( !v97 )
        {
          if ( v203 )
            v99 = (struct tagMONITOR *)GetInheritedMonitor((struct tagWND *)v41);
          else
            v99 = 0LL;
          v208 = v99;
          if ( v99
            || (v99 = (struct tagMONITOR *)MonitorFromRect((struct tagRECT *)v41 + 8, 2u, 0), v208 = v99,
                                                                                              v100 = 0LL,
                                                                                              v99) )
          {
            v100 = *(_QWORD *)v99;
          }
          v41[45] = v100;
          *((_WORD *)v41 + 186) = *(_WORD *)(*((_QWORD *)v99 + 5) + 64LL);
          UpdateTopLevelWindowDPITransform((__int64)v41, (__int64)v99, v98);
          v97 = v208;
        }
      }
    }
    SetTiledRect(v41, &v275, v97);
    v101 = a6;
    if ( a6 == 0x80000000 || a6 == 0x8000 )
    {
      v73 = gptiCurrent;
      v104 = *(_DWORD **)(gptiCurrent + 400LL);
      if ( (v104[192] & 4) != 0 )
      {
        v211 = 1;
        v91 = v104[188];
        LODWORD(v205) = v91;
        v101 = v91;
        v92 = v104[189];
        HIDWORD(v205) = v92;
        a7 = v92;
      }
      else
      {
        v101 = v275;
        v91 = v275;
        v205 = v275;
        a7 = DWORD1(v275);
        v92 = DWORD1(v275);
      }
      a6 = v101;
      v103 = 1;
      v74 = (__int64)v208;
    }
    else
    {
      v74 = (__int64)v208;
      v102 = *((_WORD *)v208 + 113);
      v73 = gptiCurrent;
      if ( v102 )
        *((_WORD *)v208 + 113) = v102 - 1;
      v103 = v223;
    }
    if ( a8 == 0x80000000 || a8 == 0x8000 )
    {
      v74 = *(_QWORD *)(v73 + 400);
      if ( (*(_DWORD *)(v74 + 768) & 2) != 0 )
      {
        v211 = 1;
        v206 = *(_DWORD *)(v74 + 760);
        v108 = *(_DWORD *)(v74 + 764);
      }
      else
      {
        v206 = DWORD2(v275) - v101;
        v108 = HIDWORD(v275) - a7;
      }
      v207 = v108;
    }
    else if ( v103 )
    {
      v230 = *(__m128i *)GetMonitorRect(&v274, v74);
      v105 = _mm_srli_si128(v230, 8).m128i_u64[0];
      v106 = a8 + v91 - v105;
      v107 = a9 + v92 - HIDWORD(v105);
      if ( v106 > 0 )
      {
        a6 -= v106;
        LODWORD(v205) = a6;
        if ( a6 < v230.m128i_i32[0] )
        {
          a6 = v230.m128i_i32[0];
          LODWORD(v205) = v230.m128i_i32[0];
        }
      }
      if ( v107 > 0 )
      {
        a7 -= v107;
        HIDWORD(v205) = a7;
        if ( a7 < v230.m128i_i32[1] )
        {
          a7 = v230.m128i_i32[1];
          HIDWORD(v205) = v230.m128i_i32[1];
        }
      }
    }
  }
  if ( v211 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 768LL) &= 0xFFFFFFF9;
  if ( (((*((_BYTE *)v41 + 71) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1LL, v41, 3844LL, 1LL);
  *((_WORD *)v41 + 35) |= v221;
  Menu = v90;
  if ( !v90 && v201 != 64 && *((_QWORD *)v209 + 19) )
  {
    v110 = v41;
    if ( v41[13] )
      v110 = (_QWORD *)v41[13];
    zzzLockDisplayAreaAndInvalidateDCCache(v110, 16LL);
    RtlInitUnicodeStringOrId(v261, *((_QWORD *)v209 + 19));
    Menu = (_QWORD *)xxxClientLoadMenu(*((_QWORD *)v209 + 15), v261);
    v74 = (*((_BYTE *)v41 + 71) & 0xC0) == 64;
    if ( v222 != (_DWORD)v74 )
    {
      DestroyMenu(Menu);
      Menu = 0LL;
    }
    if ( Menu )
      *(_QWORD *)&v242[1] = *Menu;
    else
      *(_QWORD *)&v242[1] = 0LL;
  }
  if ( (*((_BYTE *)v41 + 71) & 0xC0) == 0x40 )
    v41[26] = Menu;
  else
    LockWndMenu(v41, v41 + 26, Menu);
  if ( (*((_BYTE *)v41 + 71) & 0xC0) != 0x40 )
  {
    v112 = a16;
    if ( (a16 & 4) != 0 )
      CoreWindowProp::ChangeRole((struct tagWND *)v41, 1, 1u);
    *(_QWORD *)&v254 = v41 + 32;
    *((_QWORD *)&v254 + 1) = v41;
    v262 = v254;
    HMAssignmentLock(&v262);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      v115 = v41 + 15;
      v230 = (__m128i)(unsigned __int64)(v41 + 15);
      v264 = v230;
      HMAssignmentLock(&v264);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v113);
      if ( !(unsigned int)ValidateOwnerDepth(v41, NonChildAncestor) )
      {
LABEL_296:
        v111 = 87LL;
        goto LABEL_297;
      }
      if ( NonChildAncestor )
      {
        *((_DWORD *)v41 + 80) = *(_DWORD *)(NonChildAncestor + 320);
        SetOrClrWF(*(_BYTE *)(NonChildAncestor + 306) & 0x40, v41, 64064LL, 1LL);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
      }
      v115 = v41 + 15;
      *(_QWORD *)&v255 = v41 + 15;
      *((_QWORD *)&v255 + 1) = NonChildAncestor;
      v263 = v255;
      HMAssignmentLock(&v263);
      if ( v41[15] && ((*(_BYTE *)(v41[15] + 64LL) & 8) != 0 || *((_DWORD *)v41 + 80) != 1) )
        SetOrClrWF(1LL, v41, 2056LL, 1LL);
      if ( v202 != *(_WORD *)(gpsi + 882LL) )
      {
        v117 = gptiCurrent;
        if ( *v115 )
        {
          v116 = *(_QWORD *)(*v115 + 16LL);
          if ( v116 != gptiCurrent )
            zzzAttachThreadInput(gptiCurrent, v116, 1LL);
        }
        v112 = a16;
LABEL_316:
        if ( !*v115 && !(unsigned int)CoreWindowProp::IsComponent((struct tagWND *)v41) )
        {
          if ( (v118 = *((_DWORD *)v41 + 80), v118 <= 0xF) && (v119 = 44800, _bittest(&v119, v118))
            || (*((_BYTE *)v41 + 306) & 0x40) != 0 )
          {
            WindowCloakStateComponentUIAware = 2;
          }
        }
        if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
        {
          v19 = (struct tagWND *)GetThreadDesktopWindow(0LL);
          v268[0] = *(_QWORD *)(v117 + 392);
          *(_QWORD *)(v117 + 392) = v268;
          v268[1] = v19;
          if ( v19 )
            _InterlockedAdd((volatile signed __int32 *)v19 + 2, 1u);
          v214 = 1;
        }
        if ( (v112 & 2) == 0 )
          goto LABEL_333;
        if ( *(_QWORD *)(v117 + 1352) )
        {
          UserSetLastError(87LL, v116);
        }
        else
        {
          SetOrClrWF(1LL, v41, 64128LL, 1LL);
          *(_DWORD *)(v117 + 1184) |= 0x40000u;
          *(_DWORD *)(*(_QWORD *)(v117 + 408) + 380LL) |= 0x2000000u;
          if ( *(_QWORD *)(v117 + 1344)
            || (KernelEvent = CreateKernelEvent(1LL, 0LL), (*(_QWORD *)(v117 + 1344) = KernelEvent) != 0LL) )
          {
            *(_QWORD *)&v256 = v117 + 1352;
            *((_QWORD *)&v256 + 1) = v41;
            v265 = v256;
            HMAssignmentLock(&v265);
            goto LABEL_333;
          }
        }
LABEL_426:
        v145 = *((_BYTE *)v41 + 71) & 0x10;
        if ( v214 )
          ThreadUnlock1(v74, v73);
        SetOrClrWF(1LL, v41, 1152LL, 1LL);
        SetOrClrWF(1LL, v41, 896LL, 1LL);
        if ( v145 )
          SetVisible((struct tagWND *)v41);
        v146 = v41[13];
        if ( v146 )
        {
          if ( v145 )
            zzzLockDisplayAreaAndInvalidateDCCache(v146, 16LL);
          if ( (*((_BYTE *)v41 + 71) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v41) )
          {
            v147 = *(_QWORD *)(v41[13] + 16LL);
            if ( v117 != v147 )
              zzzAttachThreadInput(v41[2], v147, 0LL);
          }
          UnlinkWindow(v41, (__int64 *)v41[13]);
        }
        v148 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(v148 + 16) = v259[0];
        ClassUnlockWorker(v209);
        xxxFreeWindow((struct tagWND *)v41, (struct tagSwitchWndInfo *)v258, v149);
        return 0LL;
      }
      v112 = a16;
    }
    v117 = gptiCurrent;
    goto LABEL_316;
  }
  if ( !v19 )
    goto LABEL_425;
  if ( (a16 & 2) != 0 )
    goto LABEL_296;
LABEL_333:
  if ( (v41[38] & 8) != 0 )
  {
    v121 = (__int64 *)v41[13];
    UnlinkWindow(v41, v121);
  }
  else
  {
    v121 = v238;
  }
  if ( !(unsigned int)IsTopLevelParent(v19) )
  {
    *((_DWORD *)v41 + 80) = *((_DWORD *)v19 + 80);
    SetOrClrWF(*((_BYTE *)v19 + 306) & 0x40, v41, 64064LL, 1LL);
  }
  if ( v19 && !(unsigned int)ValidateNewParent(v41, v19) )
    goto LABEL_425;
  v122 = v41 + 13;
  *(_QWORD *)&v257 = v41 + 13;
  *((_QWORD *)&v257 + 1) = v19;
  v266 = v257;
  HMAssignmentLock(&v266);
  if ( v19 )
    v123 = (unsigned int)-__CFSHR__(*((_DWORD *)v19 + 76), 27);
  else
    v123 = 0LL;
  SetWindowSubtreeCoreWindowStatus(v41, v123);
  if ( (v41[46] & 0xF) == 2 )
    *((_DWORD *)v41 + 76) ^= (*((_DWORD *)v41 + 76) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)v41) << 28)) & 0x10000000;
  if ( (*((_BYTE *)v41 + 61) & 1) == 0 && (*((_DWORD *)v209 + 25) & 0x80u) != 0 && (*((_BYTE *)v19 + 71) & 2) == 0 )
    SetOrClrWF(0LL, v41, 3846LL, 1LL);
  v124 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *((_BYTE *)v41 + 306) |= 0x20u;
  if ( v124 )
  {
    v125 = zzzSetWindowCompositionCloak((__int64)v41, 0LL, v124);
    if ( v125 < 0 )
    {
      v111 = RtlNtStatusToDosError(v125);
LABEL_297:
      UserSetLastError(v111, v73);
      goto LABEL_425;
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v248);
  if ( v121 )
    zzzLockDisplayAreaAndInvalidateDCCache(v121, 16LL);
  if ( v19 )
    zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v248);
  if ( (*((_BYTE *)v41 + 71) & 0xC0) != 0x40 || (unsigned int)IsTopLevelWindow((__int64)v41) )
  {
LABEL_367:
    v126 = gptiCurrent;
  }
  else
  {
    v126 = gptiCurrent;
    if ( *v122 )
    {
      v127 = *(_QWORD *)(*v122 + 16);
      if ( gptiCurrent != v127 )
      {
        zzzAttachThreadInput(gptiCurrent, v127, 1LL);
        v128 = 0LL;
        v129 = v41[3];
        if ( v129 )
          v128 = *(_QWORD *)(v129 + 104);
        v130 = *v122;
        if ( *v122 != v128 && ((*((_BYTE *)v41 + 368) ^ *(_BYTE *)(v130 + 368)) & 0xF) != 0 )
          xxxForceUpdateProcessDpiAwarenessContext((struct tagWND *)v41, *(_DWORD *)(v130 + 368));
        goto LABEL_367;
      }
    }
  }
  if ( v231 != (unsigned __int16)gatomMessage && v231 != 32769 && v231 != 32774 && !*(_DWORD *)(v126 + 868) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v126 + 424) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize((struct tagWND *)v41);
  v131 = v205;
  v132 = 0x7FFF;
  if ( (int)v205 <= 0x7FFF )
  {
    if ( (int)v205 < -32768 )
      v131 = -32768;
  }
  else
  {
    v131 = 0x7FFF;
  }
  LODWORD(v205) = v131;
  if ( SHIDWORD(v205) <= 0x7FFF )
  {
    v132 = HIDWORD(v205);
    if ( SHIDWORD(v205) < -32768 )
      v132 = -32768;
  }
  HIDWORD(v205) = v132;
  v133 = v206;
  v134 = 0xFFFF;
  if ( v206 <= 0xFFFF )
  {
    if ( v206 < 0 )
      v133 = 0;
  }
  else
  {
    v133 = 0xFFFF;
  }
  v206 = v133;
  if ( v207 <= 0xFFFF )
  {
    v134 = v207;
    if ( v207 < 0 )
      v134 = 0;
  }
  v207 = v134;
  if ( v41[3] && (*((_BYTE *)v41 + 71) & 0x40) == 0 && *((char *)v41 + 64) >= 0 )
  {
    xxxCheckFullScreen((struct tagWND *)v41, (struct tagSIZERECT *)&v205);
    v134 = v207;
    v133 = v206;
  }
  if ( v133 < 0 )
    v133 = 0;
  v206 = v133;
  if ( v134 < 0 )
    v134 = 0;
  v207 = v134;
  v135 = v41 + 16;
  RECTFromSIZERECT(v41 + 16);
  if ( v201 == 64 )
  {
    v137 = ValidateHmonitorNoRip(*((_QWORD *)v19 + 45));
LABEL_400:
    v138 = (__int64 *)v137;
  }
  else
  {
    if ( v203 )
    {
      v137 = GetInheritedMonitor((struct tagWND *)v41);
      goto LABEL_400;
    }
    v138 = 0LL;
  }
  if ( v138 || (v138 = (__int64 *)MonitorFromRect((struct tagRECT *)v41 + 8, 2u, 0), v139 = 0LL, v138) )
    v139 = *v138;
  if ( v139 != v41[45] )
  {
    v41[45] = v139;
    *((_WORD *)v41 + 186) = *(_WORD *)(v138[5] + 64);
    if ( v201 != 64 )
      UpdateTopLevelWindowDPITransform((__int64)v41, (__int64)v138, v136);
  }
  if ( (*((_BYTE *)v41 + 67) & 0x20) != 0 && GetRedirectionBitmap(v41) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    v140 = RecreateRedirectionBitmap((struct tagWND *)v41, 0, 0LL);
    v141 = *(_QWORD *)(gpDispInfo + 32LL);
    if ( v140 < 0 )
    {
LABEL_410:
      GreUnlockVisRgn(v141);
      goto LABEL_425;
    }
    GreUnlockVisRgn(v141);
  }
  v142 = *((_BYTE *)v209 + 100);
  if ( (v142 & 0x20) != 0 || (v142 & 0x40) != 0 && !*((_QWORD *)v209 + 3) )
  {
    StyleWindow = GetStyleWindow((__int64)v41, 2848);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    CacheDC = CreateCacheDC(v41, StyleWindow != 0 ? 49152 : 0x8000, 0LL);
    v141 = *(_QWORD *)(gpDispInfo + 32LL);
    if ( !CacheDC )
      goto LABEL_410;
    GreUnlockVisRgn(v141);
  }
  if ( (v200 & 0x80000) != 0 && (*((_BYTE *)v41 + 66) & 8) == 0 && (int)xxxSetLayeredWindow((struct tagWND *)v41) < 0 )
    goto LABEL_425;
  if ( (v200 & 0x2000000) != 0 && !GetStyleWindow(*v122, 2818) )
  {
    SetOrClrWF(1LL, v41, 2818LL, 1LL);
    if ( (int)SetRedirectedWindow((struct tagWND *)v41) < 0 )
    {
      SetOrClrWF(0LL, v41, 2818LL, 1LL);
      goto LABEL_425;
    }
  }
  *((_QWORD *)&v242[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v242[2] = __PAIR64__(a8, a9);
  if ( !xxxSendMessage(v41, 129LL, 0LL, v242) )
  {
LABEL_425:
    v117 = gptiCurrent;
    goto LABEL_426;
  }
  if ( (*(_BYTE *)(v41[21] + 101LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu(v41, 0LL);
    if ( SystemMenu )
    {
      v151 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v269[0] = *(_QWORD *)(v151 + 392);
      *(_QWORD *)(v151 + 392) = v269;
      v269[1] = SystemMenu;
      _InterlockedAdd((volatile signed __int32 *)(SystemMenu + 8), 1u);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      ThreadUnlock1(v153, v152);
    }
  }
  if ( (*((_BYTE *)v41 + 58) & 2) != 0 && (!*((_QWORD *)&v242[5] + 1) || LODWORD(v242[5]) || v41[30]) )
  {
    *((_QWORD *)&v242[3] + 1) = v41[30];
    v242[5] = *(_OWORD *)(v41 + 29);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v154 = (_QWORD *)(gptiCurrent + 752LL);
    if ( !*(_QWORD *)(gptiCurrent + 752LL) && (unsigned int)WantImeWindow(v19, (struct tagWND *)v41) )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v41);
      *(_QWORD *)&v252 = gptiCurrent + 752LL;
      *((_QWORD *)&v252 + 1) = DefaultImeWindow;
      v267 = v252;
      HMAssignmentLock(&v267);
      v156 = *v154;
      if ( *v154 )
      {
        v157 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v270[0] = *(_QWORD *)(v157 + 392);
        *(_QWORD *)(v157 + 392) = v270;
        v270[1] = v156;
        _InterlockedAdd((volatile signed __int32 *)(v156 + 8), 1u);
        xxxSendMessage(*v154, 647LL, 33LL, 0LL);
        ThreadUnlock1(v159, v158);
      }
      v160 = (**(_DWORD **)(gptiCurrent + 456LL) >> 6) & 1;
      v246 = v160;
      v161 = *v154;
      if ( *v154 && v160 )
      {
        v162 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v271[0] = *(_QWORD *)(v162 + 392);
        *(_QWORD *)(v162 + 392) = v271;
        v271[1] = v161;
        if ( v161 )
          _InterlockedAdd((volatile signed __int32 *)(v161 + 8), 1u);
        xxxSendMessage(*v154, 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 40LL));
        **(_QWORD **)(gptiCurrent + 456LL) &= ~0x40uLL;
        ThreadUnlock1(v164, v163);
      }
    }
    v122 = v41 + 13;
  }
  if ( !v19 || (v41[38] & 8) != 0 && (struct tagWND *)*v122 != v19 )
  {
LABEL_487:
    if ( (*((_BYTE *)v41 + 71) & 0xC0) == 0x40 && (*((_BYTE *)v19 + 66) & 0x40) != 0 )
    {
      v175 = *((_DWORD *)v41 + 34) - *v135;
      v176 = *((_DWORD *)v19 + 36) + *((_DWORD *)v19 + 38) - *v135;
      *((_DWORD *)v41 + 34) = v176;
      *v135 = v176 - v175;
    }
    v275 = *(_OWORD *)v135;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((ULONG_PTR)v41, 0, 0, 0LL, 1, 0);
    *((_OWORD *)v41 + 9) = v275;
    if ( xxxSendMessage(v41, 1LL, 0LL, v242) == -1 )
      goto LABEL_491;
    SetOrClrWF(1LL, v41, 1920LL, 1LL);
    if ( (unsigned int)IsWindowDesktopComposed(v41) )
    {
      v182 = (void *)ReferenceDwmApiPort(v181);
      DwmAsyncChildStyleChange(v182);
      DwmChildRectChange(v41);
      v184 = (__int64 *)v41[15];
      if ( v184 )
        v185 = *v184;
      else
        v185 = 0LL;
      v186 = (void *)ReferenceDwmApiPort(v183);
      DwmAsyncOwnerChange(v186, *v41, v185);
    }
    xxxWindowEvent(0x8000u, (volatile signed __int32 *)v41, 0LL, 0LL, 0);
    if ( (v41[7] & 0x10) == 0 )
    {
      xxxSendSizeMessage((ULONG_PTR)v41);
      if ( v19 && (struct tagWND *)GetDesktopWindow((__int64)v41) != v19 )
      {
        LODWORD(v275) = v275 - *((_DWORD *)v19 + 36);
        DWORD1(v275) -= *((_DWORD *)v19 + 37);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((ULONG_PTR)v41, 0, 0, 0LL, 1, 0);
    }
    v187 = *((_BYTE *)v41 + 71);
    if ( (v187 & 0x20) != 0 )
    {
      SetMinimize((__int64)v41, 0);
      v188 = 7;
    }
    else
    {
      if ( (v187 & 1) == 0 )
        goto LABEL_511;
      SetOrClrWF(0LL, v41, 3841LL, 1LL);
      v188 = 3;
    }
    xxxMinMaximizeEx((struct tagWND *)v41, v188, gdwPUDFlags & 0x10000 | 1, 0LL, 0LL);
LABEL_511:
    CalcWindowFullScreen((struct tagWND *)v41);
    if ( (*((_BYTE *)v41 + 71) & 0xC0) == 0x40 && (v41[8] & 4) == 0 )
    {
      v189 = *v122;
      if ( *v122 )
      {
        v272[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v272;
        v272[1] = v189;
        _InterlockedAdd((volatile signed __int32 *)(v189 + 8), 1u);
        v190 = *v122;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v190, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v192, v191);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v41, 0LL, 0);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow(v41, v213 | gdwPUDFlags & 0x10000u);
    if ( (*((_BYTE *)v41 + 71) & 0xC0) == 0 || (*((_BYTE *)v41 + 66) & 4) != 0 )
    {
      v194 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 400LL) + 660LL);
      if ( (_DWORD)v194 )
      {
        xxxSendMessage(v41, 50LL, (unsigned int)v194, 0LL);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 660LL) = 0;
      }
    }
    if ( v214 )
      ThreadUnlock1(v194, v193);
    v195 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v195 + 16) = v259[0];
    ClassUnlockWorker(v209);
    result = (_DWORD *)ThreadUnlock1(v197, v196);
    if ( !result
      || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*result + gSharedInfo[1] + 25LL) & 1) != 0 )
    {
      return 0LL;
    }
    return result;
  }
  v165 = PWInsertAfter(v226, v73);
  TopLevelWindow = v165;
  if ( (unsigned __int64)(v165 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v165 + 104) != *v122 )
    TopLevelWindow = v201 == 64;
  v167 = v41[15];
  if ( v167 )
  {
    *((_DWORD *)v41 + 80) = *(_DWORD *)(v167 + 320);
    SetOrClrWF(*(_BYTE *)(v167 + 306) & 0x40, v41, 64064LL, 1LL);
  }
  if ( (unsigned int)ValidateNewParent(v41, v19) )
  {
    UnlinkWindow(v41, (__int64 *)*v122);
    if ( (*((_BYTE *)v41 + 71) & 0xC0) != 0x40 && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
    {
      if ( (v41[8] & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v41);
          if ( TopMostInsertAfter )
            TopLevelWindow = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !TopLevelWindow )
          goto LABEL_476;
        v170 = 0;
        if ( TopLevelWindow >= 0xFFFFFFFFFFFFFFFEuLL || TopLevelWindow == 1 )
          v170 = 1;
        if ( !v170 && (*(_BYTE *)(TopLevelWindow + 64) & 8) != 0 )
        {
LABEL_476:
          v171 = CalcForegroundInsertAfter((__int64)v41);
          v172 = v171;
          if ( v41[15] )
          {
            TopLevelWindow = (unsigned __int64)v171;
          }
          else
          {
            TopLevelHost = CoreWindowProp::GetTopLevelHost(v171);
            TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
            if ( !TopLevelWindow )
              TopLevelWindow = (unsigned __int64)v172;
          }
          v122 = v41 + 13;
        }
      }
    }
    if ( TopLevelWindow <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LinkWindow((struct tagWND *)v41, TopLevelWindow, (__int64)v19);
      zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL);
      goto LABEL_487;
    }
  }
LABEL_491:
  v177 = v209;
  if ( v214 )
    ThreadUnlock1(v169, v168);
  if ( ThreadUnlock1(v169, v168) )
    xxxDestroyWindow((volatile signed __int32 *)v41, v178, v179);
  v180 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v180 + 16) = v259[0];
  ClassUnlockWorker(v177);
  return 0LL;
}

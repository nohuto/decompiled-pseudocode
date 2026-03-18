/*
 * XREFs of xxxCreateWindowEx @ 0x1C006A17C
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     NtUserCreateWindowEx @ 0x1C00378A0 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     xxxCsDdeInitialize @ 0x1C010FB1C (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0004908 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     HasMessageRootWindow @ 0x1C0006410 (HasMessageRootWindow.c)
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     DwmAsyncChildCreate @ 0x1C0016300 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     IsImmersiveAppIORestricted @ 0x1C00185E8 (IsImmersiveAppIORestricted.c)
 *     IsValidBandForProcess @ 0x1C0018B24 (IsValidBandForProcess.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018D90 (SetWindowSubtreeCoreWindowStatus.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     CalcForegroundInsertAfter @ 0x1C001C8FC (CalcForegroundInsertAfter.c)
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001E9F4 (GetWindowCloakStateComponentUIAware.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C001FF60 (PWInsertAfter.c)
 *     xxxShowWindow @ 0x1C0020664 (xxxShowWindow.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     GetClassPtr @ 0x1C0035DD0 (GetClassPtr.c)
 *     RegisterDefaultClass @ 0x1C0036E20 (RegisterDefaultClass.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     MapClientNeuterToClientPfn @ 0x1C003AEB8 (MapClientNeuterToClientPfn.c)
 *     xxxLoadUserApiHook @ 0x1C003C330 (xxxLoadUserApiHook.c)
 *     xxxSendSizeMessage @ 0x1C003C8A0 (xxxSendSizeMessage.c)
 *     NeedsWindowEdge @ 0x1C0041AAC (NeedsWindowEdge.c)
 *     xxxAdjustSize @ 0x1C0041AE8 (xxxAdjustSize.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxUpdateInputHangInfo @ 0x1C00526B0 (xxxUpdateInputHangInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C005CFBC (DwmAsyncOwnerChange.c)
 *     DereferenceClass @ 0x1C005D600 (DereferenceClass.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C005F568 (ShouldUseLogPixelsForWindowMetrics.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ValidateNewParent @ 0x1C0069E64 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C0069F1C (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0069FE4 (ValidateParentDepth.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     LockWndMenu @ 0x1C00C315C (LockWndMenu.c)
 *     xxxCreateClassSmIcon @ 0x1C00C3454 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C00C37B4 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00C3BC0 (RtlInitUnicodeStringOrId.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00E65E0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C00E8A70 (SetMinimize.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00EA644 (xxxClientAllocWindowClassExtraBytes.c)
 *     ClassLock @ 0x1C00EB620 (ClassLock.c)
 *     RECTFromSIZERECT @ 0x1C00EC384 (RECTFromSIZERECT.c)
 *     SetTiledRect @ 0x1C00EF694 (SetTiledRect.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00F25C0 (UpdateTopLevelWindowDPITransform.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     ReferenceClass @ 0x1C00F4DC0 (ReferenceClass.c)
 *     GetAppCompatFlags @ 0x1C00F8ED0 (GetAppCompatFlags.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F9260 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     RegisterIconTitleClass @ 0x1C00FCD80 (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C0100EE0 (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C01022E8 (ValidateOwnerDepth.c)
 *     RtlInitLargeAnsiString @ 0x1C0103D30 (RtlInitLargeAnsiString.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GetTopMostInsertAfter @ 0x1C01A3DA4 (GetTopMostInsertAfter.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C0E2C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     _W32ExceptionHandler @ 0x1C0225268 (_W32ExceptionHandler.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r9d
  int v27; // ecx
  int v28; // eax
  int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // r14
  int v32; // ecx
  __int64 CurrentProcessWin32Process; // rax
  int v34; // eax
  unsigned __int16 Atom; // di
  __int64 *ClassPtr; // rax
  __int64 v37; // r15
  __int64 v38; // r8
  int v39; // r10d
  unsigned int v40; // r10d
  __int64 v41; // rax
  ULONG_PTR v42; // r14
  struct tagWND *v43; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v45; // rax
  int CurrentThreadDpiAwarenessContext; // eax
  char v47; // cl
  int v48; // eax
  __int64 v49; // r15
  __int64 *v50; // rax
  __int64 v51; // rax
  struct tagWND *v52; // r15
  __int64 v54; // rdx
  int v55; // edx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  __int64 *InheritedMonitor; // rdx
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 *ThreadDesktopWindow; // rbx
  __int64 v65; // r15
  __int64 v66; // rbx
  int ClassStyle; // edi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  void *v72; // rax
  unsigned __int16 v73; // bx
  __int64 v74; // r10
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  struct tagCLS *v79; // rax
  SIZE_T v80; // rcx
  __int64 v81; // r8
  int AppCompatFlags; // eax
  char v83; // bl
  unsigned __int16 v84; // r8
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  unsigned int v89; // eax
  int v90; // r8d
  int v91; // r9d
  int v92; // r10d
  int v93; // r11d
  char v94; // al
  int v95; // edi
  struct tagMENU *v96; // rbx
  int v97; // r8d
  int v98; // r9d
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  __int64 v102; // rdx
  int v103; // edx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // r8d
  __int16 v108; // ax
  int v109; // eax
  _DWORD *v110; // rax
  int v111; // ebx
  _DWORD *v112; // rax
  int v113; // edi
  int v114; // r15d
  int *v115; // rax
  int *v116; // rax
  int v117; // ebx
  int *v118; // rax
  int *v119; // rax
  int v120; // eax
  struct tagMENU *Menu; // r8
  ULONG_PTR v122; // rcx
  struct tagWND *v123; // r13
  __int64 v124; // rcx
  char v125; // bl
  __int64 v126; // rcx
  __int64 NonChildAncestor; // rbx
  ULONG_PTR v128; // rdi
  __int64 v129; // rdx
  unsigned int v130; // eax
  int v131; // ecx
  __int64 KernelEvent; // rax
  __int64 v133; // rbx
  __int64 *v134; // r15
  unsigned int v135; // edx
  unsigned int v136; // eax
  NTSTATUS v137; // eax
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rax
  int v143; // ecx
  int v144; // eax
  int v145; // edx
  int v146; // ecx
  _DWORD *v147; // rdi
  __int64 v148; // rax
  __int64 *v149; // rdx
  __int64 v150; // rax
  int v151; // eax
  __int64 v152; // rcx
  char v153; // al
  __int64 StyleWindow; // rbx
  __int64 CacheDC; // rax
  int v156; // ebx
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // r8
  int v161; // r9d
  __int64 SystemMenu; // rbx
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 *v165; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v167; // rdx
  __int64 v168; // rdx
  __int64 v169; // rcx
  int v170; // ecx
  __int64 v171; // r9
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rax
  unsigned __int64 v175; // rbx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  int v179; // eax
  __int64 TopMostInsertAfter; // rax
  int v181; // edx
  int v182; // ecx
  struct tagCLS *v183; // rbx
  __int64 v184; // rdx
  __int64 v185; // r8
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  void *v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 *v196; // rbx
  __int64 v197; // rbx
  void *v198; // rax
  char v199; // al
  __int64 v200; // rcx
  struct _LARGE_STRING *v201; // r9
  unsigned __int64 v202; // r8
  ULONG_PTR v203; // rcx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  _DWORD *result; // rax
  wchar_t *v212; // rcx
  unsigned int v213; // [rsp+50h] [rbp-3F8h]
  unsigned __int16 v214; // [rsp+54h] [rbp-3F4h]
  unsigned __int16 v215; // [rsp+60h] [rbp-3E8h]
  int v216; // [rsp+60h] [rbp-3E8h]
  int v217; // [rsp+68h] [rbp-3E0h]
  int v218; // [rsp+70h] [rbp-3D8h]
  int v219; // [rsp+78h] [rbp-3D0h] BYREF
  int v220; // [rsp+7Ch] [rbp-3CCh]
  int v221; // [rsp+80h] [rbp-3C8h] BYREF
  int v222; // [rsp+84h] [rbp-3C4h] BYREF
  struct tagCLS *v223; // [rsp+88h] [rbp-3C0h]
  __int16 v224; // [rsp+90h] [rbp-3B8h]
  struct tagWND *v225; // [rsp+98h] [rbp-3B0h]
  int v226; // [rsp+A0h] [rbp-3A8h]
  int v227; // [rsp+A4h] [rbp-3A4h]
  int WindowCloakStateComponentUIAware; // [rsp+A8h] [rbp-3A0h]
  int v229; // [rsp+ACh] [rbp-39Ch]
  int v230; // [rsp+B0h] [rbp-398h]
  int v231; // [rsp+B4h] [rbp-394h]
  int v232; // [rsp+B8h] [rbp-390h]
  int v233; // [rsp+BCh] [rbp-38Ch]
  int v234; // [rsp+C0h] [rbp-388h]
  unsigned __int64 v235; // [rsp+C8h] [rbp-380h]
  struct tagMENU *v236; // [rsp+D0h] [rbp-378h]
  __int64 v237; // [rsp+D8h] [rbp-370h]
  int v238; // [rsp+E0h] [rbp-368h]
  int v239; // [rsp+E4h] [rbp-364h]
  int v240; // [rsp+E8h] [rbp-360h]
  int v241; // [rsp+F0h] [rbp-358h]
  int v242; // [rsp+F8h] [rbp-350h]
  int v243; // [rsp+FCh] [rbp-34Ch]
  int v244; // [rsp+100h] [rbp-348h]
  char v245[8]; // [rsp+108h] [rbp-340h] BYREF
  __int64 v246; // [rsp+110h] [rbp-338h]
  wchar_t *Str1; // [rsp+118h] [rbp-330h]
  char v248[8]; // [rsp+120h] [rbp-328h] BYREF
  __int64 v249; // [rsp+128h] [rbp-320h]
  __int64 v250; // [rsp+130h] [rbp-318h]
  _QWORD *v251; // [rsp+138h] [rbp-310h]
  __int64 v252; // [rsp+140h] [rbp-308h]
  __int64 v253; // [rsp+148h] [rbp-300h]
  __int64 v254; // [rsp+150h] [rbp-2F8h]
  struct tagCLS *v255; // [rsp+158h] [rbp-2F0h]
  __int64 v256; // [rsp+160h] [rbp-2E8h]
  _OWORD v257[7]; // [rsp+170h] [rbp-2D8h] BYREF
  __int128 v258; // [rsp+1E0h] [rbp-268h]
  __int64 v259; // [rsp+1F0h] [rbp-258h]
  __int64 v260; // [rsp+1F8h] [rbp-250h]
  wchar_t *v261; // [rsp+200h] [rbp-248h]
  __int64 v262; // [rsp+208h] [rbp-240h]
  int v263; // [rsp+210h] [rbp-238h]
  _OWORD *v264; // [rsp+218h] [rbp-230h] BYREF
  unsigned __int64 v265; // [rsp+220h] [rbp-228h]
  __int128 v266; // [rsp+230h] [rbp-218h]
  __int128 v267; // [rsp+240h] [rbp-208h]
  __int128 v268; // [rsp+250h] [rbp-1F8h]
  __int128 v269; // [rsp+260h] [rbp-1E8h]
  __int128 v270; // [rsp+270h] [rbp-1D8h]
  __int128 v271; // [rsp+280h] [rbp-1C8h]
  _QWORD v272[3]; // [rsp+290h] [rbp-1B8h] BYREF
  __int64 v273[3]; // [rsp+2A8h] [rbp-1A0h] BYREF
  __int128 v274; // [rsp+2C0h] [rbp-188h] BYREF
  _BYTE v275[16]; // [rsp+2D0h] [rbp-178h] BYREF
  __int128 v276; // [rsp+2E0h] [rbp-168h] BYREF
  __int128 v277; // [rsp+2F0h] [rbp-158h] BYREF
  __int128 v278; // [rsp+300h] [rbp-148h] BYREF
  __int128 v279; // [rsp+310h] [rbp-138h] BYREF
  __int128 v280; // [rsp+320h] [rbp-128h] BYREF
  _QWORD v281[3]; // [rsp+338h] [rbp-110h] BYREF
  _QWORD v282[3]; // [rsp+350h] [rbp-F8h] BYREF
  _QWORD v283[3]; // [rsp+368h] [rbp-E0h] BYREF
  _QWORD v284[3]; // [rsp+380h] [rbp-C8h] BYREF
  _QWORD v285[3]; // [rsp+398h] [rbp-B0h] BYREF
  __int128 v286; // [rsp+3B0h] [rbp-98h] BYREF
  __int64 v287[5]; // [rsp+3C0h] [rbp-88h] BYREF
  int v288[4]; // [rsp+3E8h] [rbp-60h] BYREF
  __int128 v289; // [rsp+3F8h] [rbp-50h] BYREF

  v250 = a4;
  v246 = a3;
  Str1 = a2;
  v213 = a1;
  v253 = (__int64)a11;
  v261 = a2;
  v262 = a3;
  *(_QWORD *)&v258 = a4;
  v19 = a10;
  v225 = (struct tagWND *)a10;
  v251 = a11;
  v237 = a12;
  v252 = a13;
  v234 = 0;
  v240 = 0;
  v233 = 0;
  v227 = 0;
  memset(v288, 0, sizeof(v288));
  v229 = 5;
  v241 = 5;
  v254 = 0LL;
  v259 = gptiCurrent;
  v230 = 0;
  v226 = 0;
  v224 = 0;
  v20 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL);
  v231 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v218 = 0;
  if ( (v20 & 0x10000000) == 0 && !(unsigned int)RegisterIconTitleClass(v20, 0LL, a3, 0LL) )
    goto LABEL_3;
  if ( a1 < 0 )
  {
    v226 = 800;
    v224 = 800;
    v213 = a1 & 0x7FFFFFFF;
  }
  v22 = *(_QWORD *)(gptiCurrent + 408LL);
  v249 = v22;
  v260 = v22;
  if ( a10 )
  {
    if ( *(_QWORD *)(a10 + 24) != v22 )
      goto LABEL_3;
  }
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 376LL)) )
    {
LABEL_10:
      v21 = 5LL;
      goto LABEL_576;
    }
    v218 = 1;
  }
  if ( (a16 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL)) )
    goto LABEL_10;
  v23 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_3;
    if ( a14 == 15 )
      goto LABEL_3;
    v27 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL);
    if ( (v27 & 0x30) == 0x10
      && (v27 & 0x200) == 0
      && a14 == 1
      && (!gfEnableModernOnDesktop || !v26 && !(unsigned int)HasMessageRootWindow(a10, v24, v25)) )
    {
      goto LABEL_3;
    }
  }
  v232 = (HIWORD(a5) & 0xC000) == 0x4000;
  v242 = v232;
  LODWORD(v236) = v232;
  LODWORD(v235) = v232;
  v239 = v232;
  v238 = v232;
  v244 = v232;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(gptiCurrent + 376LL), a10) )
      v19 = 0LL;
    v225 = (struct tagWND *)v19;
  }
  if ( !v19 || (LOBYTE(v28) = IsDesktopWindow(v19), v28) )
  {
    if ( !a14 )
    {
      if ( IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
      {
        v29 = 1;
        v218 = 1;
        v23 = 15;
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(v30 + 768) & 2) == 0 || (v23 = 2, (v213 & 8) == 0) )
        v23 = 1;
    }
    v29 = v218;
  }
  else
  {
    v29 = *(_BYTE *)(v19 + 306) & 0x40;
    v218 = v29;
    if ( a14 )
    {
      if ( a14 != *(_DWORD *)(v19 + 320) )
        goto LABEL_3;
    }
    else
    {
      v23 = *(_DWORD *)(v19 + 320);
    }
  }
LABEL_40:
  v243 = v29;
  v31 = gptiCurrent;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 376LL), v23, v19) )
  {
LABEL_41:
    v21 = 5LL;
    goto LABEL_576;
  }
  v32 = v213;
  if ( (v213 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      if ( (HIWORD(a5) & 0xC000) == 0x4000 && (*(_BYTE *)(v19 + 66) & 0x50) == 0x40 )
      {
        v32 = v213 | 0x400000;
        v213 |= 0x400000u;
      }
    }
    else if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (_WORD)a2 != 0x8002 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v213, 0x400000LL);
      v32 = v213;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 772) & 1) != 0 )
      {
        v32 = v213 | 0x400000;
        v213 |= 0x400000u;
      }
    }
  }
  if ( (v32 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  if ( *(_QWORD *)(gptiCurrent + 512LL) && !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), 2u) )
    goto LABEL_41;
  if ( !v232 )
    goto LABEL_58;
  if ( !v19 )
  {
    v21 = 1406LL;
    goto LABEL_576;
  }
  LOBYTE(v34) = ValidateParentDepth(0LL, v19);
  if ( !v34 )
  {
LABEL_3:
    v21 = 87LL;
LABEL_576:
    UserSetLastError(v21);
    return 0LL;
  }
  while ( 1 )
  {
LABEL_58:
    if ( (v246 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v248);
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(v246 + 8)) < 0 )
      {
        Atom = 0;
        v215 = 0;
        v214 = 0;
        v231 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
        v215 = Atom;
        v214 = Atom;
      }
      if ( !v248[0] )
      {
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v248);
      }
    }
    else
    {
      Atom = v246;
      v215 = v246;
      v214 = v246;
    }
    if ( Atom )
    {
      ClassPtr = (__int64 *)GetClassPtr(Atom, *(_QWORD *)(v31 + 376), v237);
      if ( ClassPtr )
        break;
    }
LABEL_568:
    if ( v231
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v212 = Str1)
        : (v212 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v212)) )
    {
      v21 = 1407LL;
      goto LABEL_576;
    }
    v231 = 1;
    v31 = gptiCurrent;
  }
  v37 = *ClassPtr;
  if ( (unsigned int)NeedsWindowEdge(a5, v213, a15 >= 0x400u) )
    v40 = v39 | 0x100;
  else
    v40 = v39 & 0xFFFFFEFF;
  v213 = v40;
  LOBYTE(v38) = 1;
  v41 = HMAllocObject(v31, v249, v38, 400LL);
  v42 = v41;
  v256 = v41;
  if ( !v41 )
    return 0LL;
  *(_QWORD *)(v41 + 384) = 0LL;
  *(_QWORD *)(v41 + 392) = 0LL;
  *(_DWORD *)(v41 + 304) &= ~0x80000000;
  if ( !v244 || !v225 || v225 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_81;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v45 = *(_QWORD *)(ThreadWin32Thread + 408);
    if ( v45 )
      v43 = *(struct tagWND **)(v45 + 104);
  }
  if ( v225 == v43 || *(_QWORD *)(gptiCurrent + 376LL) != *(_QWORD *)(*((_QWORD *)v225 + 2) + 376LL) )
  {
    Atom = v214;
    v215 = v214;
LABEL_81:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    goto LABEL_82;
  }
  CurrentThreadDpiAwarenessContext = *((_DWORD *)v225 + 92);
  Atom = v214;
  v215 = v214;
LABEL_82:
  *(_DWORD *)(v42 + 368) = CurrentThreadDpiAwarenessContext;
  v47 = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (v48 = 1, (v47 & 0xF0) != 0x20) )
    v48 = 0;
  *(_DWORD *)(v42 + 304) = *(_DWORD *)(v42 + 304) & 0x9FFFFFFF | (((2 * v48) | v48 & 0xFFFFFFFD) << 29);
  *(_QWORD *)(v42 + 168) = v37;
  *(_DWORD *)(v42 + 68) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(v42 + 64) = v213 & 0xFDF7FFFF;
  *(_DWORD *)(v42 + 248) = *(_DWORD *)(v37 + 108);
  *(_DWORD *)(v42 + 252) = *(_DWORD *)(v37 + 80);
  if ( *(_QWORD *)(v42 + 24) == *(_QWORD *)(v37 + 16) )
    *(_BYTE *)(v42 + 304) |= 0x80u;
  else
    *(_BYTE *)(v42 + 304) &= ~0x80u;
  if ( !(unsigned int)ReferenceClass((void *)v37) )
    goto LABEL_89;
  v49 = *(_QWORD *)(v42 + 168);
  v223 = (struct tagCLS *)v49;
  v255 = (struct tagCLS *)v49;
  if ( !(unsigned int)ClassLock(v49, v273) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), v42);
LABEL_89:
    HMFreeObject(v42);
    goto LABEL_568;
  }
  *(_QWORD *)(v42 + 280) = a17;
  if ( *(_WORD *)(v49 + 10) == *(_WORD *)(gpsi + 852LL) )
  {
    *(_QWORD *)(v42 + 264) = 0LL;
  }
  else
  {
    v50 = *(__int64 **)(gptiCurrent + 704LL);
    if ( v50 )
      v51 = *v50;
    else
      v51 = 0LL;
    *(_QWORD *)(v42 + 264) = v51;
  }
  *(_DWORD *)(v42 + 320) = v23;
  v52 = v225;
  if ( v23 != 1 && IsTopLevelParent((__int64)v225) )
    *(_DWORD *)(v42 + 64) |= 8u;
  if ( v218 )
    *(_BYTE *)(v42 + 306) |= 0x40u;
  ++*(_DWORD *)(gptiCurrent + 780LL);
  memset(v257, 0, sizeof(v257));
  DWORD2(v257[4]) = v213;
  *((_QWORD *)&v257[0] + 1) = v237;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (_WORD)v226 )
    {
      v54 = *((_QWORD *)v223 + 19);
      *(_QWORD *)&v257[4] = v54;
      if ( (v54 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v257[6], v54);
    }
    else
    {
      *(_QWORD *)&v257[4] = *((_QWORD *)Str1 + 1);
      v257[6] = *(_OWORD *)Str1;
    }
  }
  else
  {
    *(_QWORD *)&v257[4] = Str1;
  }
  if ( v250 )
  {
    *((_QWORD *)&v257[3] + 1) = *(_QWORD *)(v250 + 8);
    v257[5] = *(_OWORD *)v250;
  }
  LODWORD(v257[3]) = a5;
  v55 = a7;
  *((_QWORD *)&v257[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v257[2] = __PAIR64__(a8, a9);
  if ( v52 )
    *((_QWORD *)&v257[1] + 1) = *(_QWORD *)v52;
  else
    *((_QWORD *)&v257[1] + 1) = 0LL;
  if ( v238 )
  {
    *(_QWORD *)&v257[1] = v251;
    *(_DWORD *)(v42 + 64) |= *((_DWORD *)v52 + 16) & 0xC4000000;
  }
  else if ( v251 )
  {
    *(_QWORD *)&v257[1] = *v251;
  }
  else
  {
    *(_QWORD *)&v257[1] = 0LL;
  }
  *(_QWORD *)&v257[0] = v252;
  v272[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v272;
  v272[1] = v42;
  ++*(_DWORD *)(v42 + 8);
  if ( a6 == 0x80000000 || a6 == 0x8000 )
  {
    v56 = 0;
    LODWORD(v289) = 0;
  }
  else
  {
    v56 = a6;
    LODWORD(v289) = a6;
  }
  if ( a7 == 0x80000000 || a7 == 0x8000 )
    v55 = 0;
  DWORD1(v289) = v55;
  if ( a8 == 0x80000000 || (v57 = a8, a8 == 0x8000) )
    v57 = 0;
  DWORD2(v289) = v57 + v56;
  if ( a9 == 0x80000000 || (v58 = a9, a9 == 0x8000) )
    v58 = 0;
  HIDWORD(v289) = v55 + v58;
  InheritedMonitor = (__int64 *)GetInheritedMonitor((struct tagWND *)v42);
  if ( InheritedMonitor )
  {
    v217 = 1;
  }
  else
  {
    v217 = 0;
    if ( v52 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*((_QWORD *)v52 + 45));
  }
  if ( InheritedMonitor
    || (InheritedMonitor = (__int64 *)MonitorFromRect((int *)&v289, 2u), v60 = 0LL, InheritedMonitor) )
  {
    v60 = *InheritedMonitor;
  }
  *(_QWORD *)(v42 + 360) = v60;
  *(_DWORD *)(v42 + 372) = *(unsigned __int16 *)(InheritedMonitor[5] + 128);
  *(_DWORD *)(v42 + 304) &= ~0x8000000u;
  if ( !v239 )
    UpdateTopLevelWindowDPITransform(v42, InheritedMonitor);
  v61 = 0LL;
  if ( (_DWORD)v235 && v52 )
    *(_WORD *)(v42 + 374) = *((_WORD *)v52 + 187);
  v62 = *(_QWORD *)(v42 + 24);
  if ( v62 )
  {
    v63 = *(_QWORD *)(v62 + 104);
    *(_QWORD *)&v268 = v42 + 104;
    *((_QWORD *)&v268 + 1) = v63;
    v274 = v268;
    HMAssignmentLock(&v274);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v42) )
  {
    ThreadDesktopWindow = (__int64 *)v52;
    if ( !(_DWORD)v236 && (!v52 || v52 != *(struct tagWND **)(*((_QWORD *)v52 + 3) + 104LL)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    memset(v287, 0, sizeof(v287));
    GetWindowCompositionInfo(v42, (__int64)v287);
    v65 = 0LL;
    if ( ThreadDesktopWindow )
      v65 = *ThreadDesktopWindow;
    v66 = ***(_QWORD ***)(*(_QWORD *)(v42 + 24) + 8LL);
    ClassStyle = DwmGetClassStyle(v42);
    v72 = (void *)ReferenceDwmApiPort(v69, v68, v70, v71);
    DwmAsyncChildCreate(
      v72,
      *(_QWORD *)v42,
      v65,
      *(_DWORD *)(v42 + 68),
      *(_DWORD *)(v42 + 64),
      *(_DWORD *)(v42 + 304),
      ClassStyle,
      (__int128 *)v287,
      v66,
      &v289);
    Atom = v215;
    v52 = v225;
  }
  *(_QWORD *)(v42 + 72) = v237;
  v73 = v226;
  *(_QWORD *)(v42 + 160) = MapClientNeuterToClientPfn((__int64)v223, 0LL, (unsigned __int16)v226);
  SetOrClrWF((*(_BYTE *)(v74 + 34) & 1) != 0, (_DWORD *)v42, 0x204u, 1);
  v75 = *((_DWORD *)v223 + 20);
  if ( v75 )
  {
    v76 = Win32AllocPoolWithQuotaZInit(v75, 1937208149LL);
    *(_QWORD *)(v42 + 392) = v76;
    if ( !v76 )
      goto LABEL_474;
  }
  v79 = v223;
  v80 = *((unsigned int *)v223 + 27);
  if ( (_DWORD)v80 )
  {
    if ( xxxClientAllocWindowClassExtraBytes(v80) )
    {
      if ( !(unsigned int)IsWindowBeingDestroyed(v42) )
      {
        v77 = gSharedInfo[0];
        v78 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v42;
        LOBYTE(v78) = *(_BYTE *)(v78 + gSharedInfo[1] + 25);
        if ( (v78 & 1) == 0 && !*(_QWORD *)(v42 + 384) )
        {
          *(_QWORD *)(v42 + 384) = v81;
          v79 = v223;
          goto LABEL_164;
        }
      }
    }
    goto LABEL_474;
  }
LABEL_164:
  if ( *((_QWORD *)v79 + 15) && !*((_QWORD *)v79 + 20) )
    xxxCreateClassSmIcon(v79);
  SetOrClrWF(1, (_DWORD *)v42, v73, 1);
  if ( (*((_BYTE *)v223 + 34) & 2) != 0
    || v73
    && (Atom == *(_WORD *)(gpsi + 852LL)
     || Atom == *(_WORD *)(gpsi + 862LL)
     || Atom == *(_WORD *)(gpsi + 866LL)
     || Atom == *(_WORD *)(gpsi + 888LL)
     || Atom == *(_WORD *)(gpsi + 854LL)
     || Atom == *(_WORD *)(gpsi + 858LL)
     || Atom == *(_WORD *)(gpsi + 864LL)
     || Atom == *(_WORD *)(gpsi + 882LL)
     || Atom == *(_WORD *)(gpsi + 856LL)) )
  {
    SetOrClrWF(1, (_DWORD *)v42, 0x208u, 1);
  }
  AppCompatFlags = GetAppCompatFlags(gptiCurrent);
  v83 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (_DWORD *)v42, 0x408u, 1);
    v213 &= 0x3Fu;
    DWORD2(v257[4]) = BYTE8(v257[4]) & 0x3F;
  }
  *(_WORD *)(v42 + 80) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v83 & 0x40) != 0 )
    {
      v84 = 1600;
LABEL_187:
      SetOrClrWF(1, (_DWORD *)v42, v84, 1);
    }
  }
  else
  {
    SetOrClrWF(1, (_DWORD *)v42, 0x501u, 1);
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1, (_DWORD *)v42, 0x502u, 1);
      if ( a15 >= 0x500u )
      {
        v84 = 1284;
        goto LABEL_187;
      }
    }
  }
  v85 = a15;
  if ( a15 <= *(_WORD *)(gptiCurrent + 556LL) )
    v85 = *(_DWORD *)(gptiCurrent + 556LL);
  *(_DWORD *)(v42 + 324) = v85;
  v86 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_DWORD *)(v86 + 552) <= 0x9900u )
    v88 = *(_DWORD *)(v86 + 568);
  else
    v88 = 0;
  if ( (v88 & 0x10000000) != 0 )
    SetOrClrWF(1, (_DWORD *)v42, 0xA80u, 1);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook(v87);
  if ( (unsigned int)WantImeWindow(v52, (struct tagWND *)v42) )
    xxxCallCtfHook(5, 3, *(_QWORD *)v42, 0LL);
  v89 = *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL);
  v78 = v89 | *(_DWORD *)(gptiCurrent + 600LL);
  if ( (((unsigned __int8)v89 | *(_BYTE *)(gptiCurrent + 600LL)) & 0x40) != 0 )
  {
    v264 = v257;
    v265 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v42, (__int64)&v264, 5u) )
      goto LABEL_474;
    v90 = HIDWORD(v257[2]);
    a6 = HIDWORD(v257[2]);
    v91 = DWORD2(v257[2]);
    a7 = DWORD2(v257[2]);
    v92 = DWORD1(v257[2]);
    a8 = DWORD1(v257[2]);
    v93 = v257[2];
    a9 = v257[2];
    v78 = v265;
    v235 = v265;
  }
  else
  {
    v235 = 0LL;
    v90 = a6;
    v91 = a7;
    v92 = a8;
    v93 = a9;
  }
  v94 = *(_BYTE *)(v42 + 71) & 0xC0;
  v95 = v94 == 64;
  v216 = v95;
  if ( v94 == 64 && !v52 )
    goto LABEL_474;
  v96 = 0LL;
  if ( v95 == v232 )
    v96 = (struct tagMENU *)v253;
  v236 = v96;
  v77 = v94 == 0;
  if ( v94 )
  {
    if ( v90 == 0x80000000 || v90 == 0x8000 )
    {
      v90 = 0;
      a6 = 0;
      v91 = 0;
      a7 = 0;
    }
    if ( v92 == 0x80000000 || v92 == 0x8000 )
    {
      v92 = 0;
      a8 = 0;
      v93 = 0;
      a9 = 0;
    }
  }
  v219 = v90;
  v220 = v91;
  v221 = v92;
  v222 = v93;
  if ( v94 == 64 )
  {
    if ( v52 != (struct tagWND *)GetDesktopWindow(v42) )
    {
      v219 = v97 + *((_DWORD *)v52 + 36);
      v78 = (unsigned int)(v98 + *((_DWORD *)v52 + 37));
      v220 = v98 + *((_DWORD *)v52 + 37);
    }
    v235 = 1LL;
  }
  if ( (_DWORD)v77 )
  {
    SetOrClrWF(1, (_DWORD *)v42, 0xF04u, 1);
    v234 = 192;
    if ( (*(_BYTE *)(v42 + 61) & 2) != 0 )
      SetOrClrWF(1, (_DWORD *)v42, 0x901u, 1);
    SetOrClrWF(1, (_DWORD *)v42, 0x10u, 1);
    v101 = a6;
    v102 = 0x80000000LL;
    if ( a6 == 0x80000000 || a6 == 0x8000 )
    {
      if ( v220 != 0x80000000 )
      {
        v103 = v229;
        if ( v220 != 0x8000 )
          v103 = v220;
        v229 = v103;
        v102 = 0x80000000LL;
      }
      v101 = a6;
    }
    if ( !v217 && (v101 == 0x80000000 || v101 == 0x8000 || a8 == 0x80000000 || a8 == 0x8000) )
    {
      v104 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 656LL);
      if ( v104 )
      {
        v105 = ValidateHmonitor(v104, 0x80000000LL, v99, v100);
        goto LABEL_237;
      }
      if ( v52 )
      {
        v105 = MonitorFromWindow((__int64)v52, 2u);
LABEL_237:
        v61 = v105;
      }
      if ( !v61 )
      {
        v61 = *(_QWORD *)(GetDispInfo() + 88);
        goto LABEL_240;
      }
    }
    else
    {
LABEL_240:
      if ( !v61 )
      {
        v61 = ValidateHmonitor(*(_QWORD *)(v42 + 360), v102, v99, v100);
        if ( !v61 )
        {
          if ( v217 )
            v61 = GetInheritedMonitor((struct tagWND *)v42);
          else
            v61 = 0LL;
          if ( v61 || (v61 = MonitorFromRect((int *)(v42 + 128), 2u), v106 = 0LL, v61) )
            v106 = *(_QWORD *)v61;
          *(_QWORD *)(v42 + 360) = v106;
          *(_WORD *)(v42 + 372) = *(_WORD *)(*(_QWORD *)(v61 + 40) + 128LL);
          UpdateTopLevelWindowDPITransform(v42, v61);
        }
      }
    }
    SetTiledRect(v42, v288, v61);
    v107 = a6;
    if ( a6 == 0x80000000 || a6 == 0x8000 )
    {
      v77 = gptiCurrent;
      v78 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( (*(_DWORD *)(v78 + 760) & 4) != 0 )
      {
        v227 = 1;
        v107 = *(_DWORD *)(v78 + 744);
        v220 = *(_DWORD *)(v78 + 748);
        a7 = v220;
      }
      else
      {
        v107 = v288[0];
        v78 = (unsigned int)v288[1];
        a7 = v288[1];
        v220 = v288[1];
      }
      v219 = v107;
      a6 = v107;
      v109 = 1;
    }
    else
    {
      v108 = *(_WORD *)(v61 + 114);
      v77 = gptiCurrent;
      if ( v108 )
        *(_WORD *)(v61 + 114) = v108 - 1;
      v109 = v233;
    }
    if ( a8 == 0x80000000 || a8 == 0x8000 )
    {
      v78 = *(_QWORD *)(v77 + 376);
      if ( (*(_DWORD *)(v78 + 760) & 2) != 0 )
      {
        v227 = 1;
        v221 = *(_DWORD *)(v78 + 752);
        v120 = *(_DWORD *)(v78 + 756);
      }
      else
      {
        v221 = v288[2] - v107;
        v120 = v288[3] - a7;
      }
      v222 = v120;
    }
    else if ( v109 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v110 = (_DWORD *)(*(_QWORD *)(v61 + 40) + 52LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v110 = (_DWORD *)(*(_QWORD *)(v61 + 40) + 68LL);
      }
      else
      {
        v110 = (_DWORD *)(*(_QWORD *)(v61 + 40) + 36LL);
      }
      v111 = a8 + v219 - *v110;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
            (*(_DWORD *)(v78 + 52) & 1) != 0) )
      {
        v112 = (_DWORD *)(*(_QWORD *)(v61 + 40) + 56LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                 (*(_DWORD *)(v78 + 52) & 1) != 0) )
      {
        v112 = (_DWORD *)(*(_QWORD *)(v61 + 40) + 72LL);
      }
      else
      {
        v112 = (_DWORD *)(*(_QWORD *)(v61 + 40) + 40LL);
      }
      v113 = a9 + v220 - *v112;
      if ( v111 > 0 )
      {
        v114 = a6 - v111;
        a6 = v114;
        v219 = v114;
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
              (*(_DWORD *)(v78 + 52) & 1) != 0) )
        {
          v115 = (int *)(*(_QWORD *)(v61 + 40) + 44LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                   (*(_DWORD *)(v78 + 52) & 1) != 0) )
        {
          v115 = (int *)(*(_QWORD *)(v61 + 40) + 60LL);
        }
        else
        {
          v115 = (int *)(*(_QWORD *)(v61 + 40) + 28LL);
        }
        if ( v114 < *v115 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                (*(_DWORD *)(v78 + 52) & 1) != 0) )
          {
            v116 = (int *)(*(_QWORD *)(v61 + 40) + 44LL);
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                     (*(_DWORD *)(v78 + 52) & 1) != 0) )
          {
            v116 = (int *)(*(_QWORD *)(v61 + 40) + 60LL);
          }
          else
          {
            v116 = (int *)(*(_QWORD *)(v61 + 40) + 28LL);
          }
          a6 = *v116;
          v219 = *v116;
        }
      }
      if ( v113 > 0 )
      {
        v117 = a7 - v113;
        a7 = v117;
        v220 = v117;
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
              (*(_DWORD *)(v78 + 52) & 1) != 0) )
        {
          v118 = (int *)(*(_QWORD *)(v61 + 40) + 48LL);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
               && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                   (*(_DWORD *)(v78 + 52) & 1) != 0) )
        {
          v118 = (int *)(*(_QWORD *)(v61 + 40) + 64LL);
        }
        else
        {
          v118 = (int *)(*(_QWORD *)(v61 + 40) + 32LL);
        }
        if ( v117 < *v118 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                (*(_DWORD *)(v78 + 52) & 1) != 0) )
          {
            v119 = (int *)(*(_QWORD *)(v61 + 40) + 48LL);
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 && (v78 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL),
                     (*(_DWORD *)(v78 + 52) & 1) != 0) )
          {
            v119 = (int *)(*(_QWORD *)(v61 + 40) + 64LL);
          }
          else
          {
            v119 = (int *)(*(_QWORD *)(v61 + 40) + 32LL);
          }
          a7 = *v119;
          v220 = *v119;
        }
      }
      v96 = v236;
      v95 = v216;
    }
  }
  if ( v227 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 760LL) &= 0xFFFFFFF9;
  if ( (((*(_BYTE *)(v42 + 71) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1, (_DWORD *)v42, 0xF04u, 1);
  *(_WORD *)(v42 + 70) |= v234;
  Menu = v96;
  if ( !v96 && !v95 && *((_QWORD *)v223 + 18) )
  {
    v122 = v42;
    if ( *(_QWORD *)(v42 + 104) )
      v122 = *(_QWORD *)(v42 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v122, 16LL, 0LL);
    RtlInitUnicodeStringOrId(v275, *((_QWORD *)v223 + 18));
    Menu = (struct tagMENU *)xxxClientLoadMenu(*((_QWORD *)v223 + 14), v275);
    v78 = (*(_BYTE *)(v42 + 71) & 0xC0) == 64;
    if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0x40 )
    {
      DestroyMenu(Menu);
      Menu = 0LL;
    }
    if ( Menu )
      *(_QWORD *)&v257[1] = *(_QWORD *)Menu;
    else
      *(_QWORD *)&v257[1] = 0LL;
  }
  if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0x40 )
    *(_QWORD *)(v42 + 208) = Menu;
  else
    LockWndMenu(v42, v42 + 208, Menu);
  if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0x40 )
  {
    v123 = v225;
    if ( !v225 )
      goto LABEL_474;
    if ( (a16 & 2) != 0 )
    {
LABEL_346:
      v124 = 87LL;
LABEL_347:
      UserSetLastError(v124);
      goto LABEL_474;
    }
  }
  else
  {
    v125 = a16;
    if ( (a16 & 4) != 0 )
      CoreWindowProp::ChangeRole((struct tagWND *)v42, 1, 1u);
    *(_QWORD *)&v269 = v42 + 256;
    *((_QWORD *)&v269 + 1) = v42;
    v276 = v269;
    HMAssignmentLock(&v276);
    v123 = v225;
    if ( IsTopLevelParent((__int64)v225) )
    {
      v128 = v42 + 120;
      v258 = v42 + 120;
      v278 = v258;
      HMAssignmentLock(&v278);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v126);
      if ( !(unsigned int)ValidateOwnerDepth(v42) )
        goto LABEL_346;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(v42 + 320) = *(_DWORD *)(NonChildAncestor + 320);
        SetOrClrWF(*(_BYTE *)(NonChildAncestor + 306) & 0x40, (_DWORD *)v42, 0xFA40u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
      }
      v128 = v42 + 120;
      *(_QWORD *)&v270 = v42 + 120;
      *((_QWORD *)&v270 + 1) = NonChildAncestor;
      v277 = v270;
      HMAssignmentLock(&v277);
      if ( *(_QWORD *)(v42 + 120)
        && ((*(_BYTE *)(*(_QWORD *)(v42 + 120) + 64LL) & 8) != 0 || *(_DWORD *)(v42 + 320) != 1) )
      {
        SetOrClrWF(1, (_DWORD *)v42, 0x808u, 1);
      }
      if ( v214 != *(_WORD *)(gpsi + 882LL) )
      {
        if ( *(_QWORD *)v128 )
        {
          v129 = *(_QWORD *)(*(_QWORD *)v128 + 16LL);
          if ( v129 != gptiCurrent )
            zzzAttachThreadInput(gptiCurrent, v129, 1LL);
        }
      }
      v125 = a16;
    }
    if ( !*(_QWORD *)v128 && !(unsigned int)CoreWindowProp::IsComponent((struct tagWND *)v42) )
    {
      if ( (v130 = *(_DWORD *)(v42 + 320), v130 <= 0xF) && (v131 = 44800, _bittest(&v131, v130))
        || (*(_BYTE *)(v42 + 306) & 0x40) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !v123 || v123 != *(struct tagWND **)(*((_QWORD *)v123 + 3) + 104LL) )
    {
      v123 = (struct tagWND *)GetThreadDesktopWindow(0LL);
      v281[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v281;
      v281[1] = v123;
      if ( v123 )
        ++*((_DWORD *)v123 + 2);
      v230 = 1;
    }
    if ( (v125 & 2) != 0 )
    {
      if ( *(_QWORD *)(gptiCurrent + 1264LL) )
        goto LABEL_346;
      SetOrClrWF(1, (_DWORD *)v42, 0xFA80u, 1);
      *(_DWORD *)(gptiCurrent + 1096LL) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) |= 0x2000000u;
      if ( !*(_QWORD *)(gptiCurrent + 1256LL) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        *(_QWORD *)(gptiCurrent + 1256LL) = KernelEvent;
        if ( !KernelEvent )
          goto LABEL_474;
      }
      *(_QWORD *)&v271 = gptiCurrent + 1264LL;
      *((_QWORD *)&v271 + 1) = v42;
      v279 = v271;
      HMAssignmentLock(&v279);
    }
  }
  if ( (*(_DWORD *)(v42 + 304) & 8) != 0 )
  {
    v133 = *(_QWORD *)(v42 + 104);
    UnlinkWindow(v42, v133);
  }
  else
  {
    v133 = v254;
  }
  if ( !IsTopLevelParent((__int64)v123) )
  {
    *(_DWORD *)(v42 + 320) = *((_DWORD *)v123 + 80);
    SetOrClrWF(*((_BYTE *)v123 + 306) & 0x40, (_DWORD *)v42, 0xFA40u, 1);
  }
  if ( v123 && !(unsigned int)ValidateNewParent(v42, (__int64)v123) )
    goto LABEL_474;
  v134 = (__int64 *)(v42 + 104);
  *(_QWORD *)&v267 = v42 + 104;
  *((_QWORD *)&v267 + 1) = v123;
  v280 = v267;
  HMAssignmentLock(&v280);
  if ( v123 )
    v135 = -__CFSHR__(*((_DWORD *)v123 + 76), 27);
  else
    v135 = 0;
  SetWindowSubtreeCoreWindowStatus(v42, v135);
  if ( (*(_DWORD *)(v42 + 368) & 0xF) == 2 )
    *(_DWORD *)(v42 + 304) ^= (*(_DWORD *)(v42 + 304) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(v42) << 28)) & 0x10000000;
  if ( (*(_BYTE *)(v42 + 61) & 1) == 0 && (*((_DWORD *)v223 + 23) & 0x80u) != 0 && (*((_BYTE *)v123 + 71) & 2) == 0 )
    SetOrClrWF(0, (_DWORD *)v42, 0xF06u, 1);
  v136 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *(_BYTE *)(v42 + 306) |= 0x20u;
  if ( v136 )
  {
    v137 = zzzSetWindowCompositionCloak(v42, 0LL, v136);
    if ( v137 < 0 )
    {
      v124 = RtlNtStatusToDosError(v137);
      goto LABEL_347;
    }
  }
  v245[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v245);
  if ( v133 )
    zzzLockDisplayAreaAndInvalidateDCCache(v133, 16LL, 0LL);
  if ( v123 )
    zzzLockDisplayAreaAndInvalidateDCCache(v123, 16LL, 0LL);
  if ( !v245[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v245);
  }
  if ( (*(_BYTE *)(v42 + 71) & 0xC0) != 0x40 || (unsigned int)IsTopLevelWindow(v42) )
  {
LABEL_416:
    v138 = gptiCurrent;
  }
  else
  {
    v138 = gptiCurrent;
    if ( *v134 )
    {
      v139 = *(_QWORD *)(*v134 + 16);
      if ( gptiCurrent != v139 )
      {
        zzzAttachThreadInput(gptiCurrent, v139, 1LL);
        v140 = 0LL;
        v141 = *(_QWORD *)(v42 + 24);
        if ( v141 )
          v140 = *(_QWORD *)(v141 + 104);
        v142 = *v134;
        if ( *v134 != v140 && ((*(_BYTE *)(v42 + 368) ^ *(_BYTE *)(v142 + 368)) & 0xF) != 0 )
          xxxForceUpdateProcessDpiAwarenessContext((struct tagWND *)v42, *(_DWORD *)(v142 + 368));
        goto LABEL_416;
      }
    }
  }
  if ( v246 != (unsigned __int16)gatomMessage && v246 != 32769 && v246 != 32774 && !*(_DWORD *)(v138 + 780) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v138 + 400) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1);
  }
  xxxAdjustSize(v42, &v221, &v222);
  v143 = v219;
  v144 = 0x7FFF;
  if ( v219 <= 0x7FFF )
  {
    if ( v219 < -32768 )
      v143 = -32768;
  }
  else
  {
    v143 = 0x7FFF;
  }
  v219 = v143;
  if ( v220 <= 0x7FFF )
  {
    v144 = v220;
    if ( v220 < -32768 )
      v144 = -32768;
  }
  v220 = v144;
  v145 = v221;
  v146 = 0xFFFF;
  if ( v221 <= 0xFFFF )
  {
    if ( v221 < 0 )
      v145 = 0;
  }
  else
  {
    v145 = 0xFFFF;
  }
  v221 = v145;
  if ( v222 <= 0xFFFF )
  {
    v146 = v222;
    if ( v222 < 0 )
      v146 = 0;
  }
  v222 = v146;
  if ( *(_QWORD *)(v42 + 24) && (*(_BYTE *)(v42 + 71) & 0x40) == 0 && *(char *)(v42 + 64) >= 0 )
  {
    xxxCheckFullScreen(v42, (__int64)&v219);
    v146 = v222;
    v145 = v221;
  }
  if ( v145 < 0 )
    v145 = 0;
  v221 = v145;
  if ( v146 < 0 )
    v146 = 0;
  v222 = v146;
  v147 = (_DWORD *)(v42 + 128);
  RECTFromSIZERECT(v42 + 128);
  if ( v216 )
  {
    v148 = ValidateHmonitorNoRip(*((_QWORD *)v123 + 45));
LABEL_449:
    v149 = (__int64 *)v148;
  }
  else
  {
    if ( v217 )
    {
      v148 = GetInheritedMonitor((struct tagWND *)v42);
      goto LABEL_449;
    }
    v149 = 0LL;
  }
  if ( v149 || (v149 = (__int64 *)MonitorFromRect((int *)(v42 + 128), 2u), v150 = 0LL, v149) )
    v150 = *v149;
  if ( v150 != *(_QWORD *)(v42 + 360) )
  {
    *(_QWORD *)(v42 + 360) = v150;
    *(_WORD *)(v42 + 372) = *(_WORD *)(v149[5] + 128);
    if ( !v216 )
      UpdateTopLevelWindowDPITransform(v42, v149);
  }
  if ( (*(_BYTE *)(v42 + 67) & 0x20) != 0 && GetRedirectionBitmap(v42) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    v151 = RecreateRedirectionBitmap((struct tagWND *)v42, 0, 0LL);
    v152 = *(_QWORD *)(gpDispInfo + 32LL);
    if ( v151 < 0 )
    {
LABEL_459:
      GreUnlockVisRgn(v152);
      goto LABEL_474;
    }
    GreUnlockVisRgn(v152);
  }
  v153 = *((_BYTE *)v223 + 92);
  if ( (v153 & 0x20) != 0 || (v153 & 0x40) != 0 && !*((_QWORD *)v223 + 3) )
  {
    StyleWindow = GetStyleWindow(v42, 2848);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    CacheDC = CreateCacheDC(v42, StyleWindow != 0 ? 49152 : 0x8000, 0LL);
    v152 = *(_QWORD *)(gpDispInfo + 32LL);
    if ( !CacheDC )
      goto LABEL_459;
    GreUnlockVisRgn(v152);
  }
  if ( (v213 & 0x80000) != 0
    && (*(_BYTE *)(v42 + 66) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v42, 0, 0LL) < 0 )
  {
    goto LABEL_474;
  }
  if ( (v213 & 0x2000000) != 0 && !GetStyleWindow(*v134, 2818) )
  {
    SetOrClrWF(1, (_DWORD *)v42, 0xB02u, 1);
    if ( (int)SetRedirectedWindow((struct tagWND *)v42, 2) < 0 )
    {
      SetOrClrWF(0, (_DWORD *)v42, 0xB02u, 1);
      goto LABEL_474;
    }
  }
  *((_QWORD *)&v257[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v257[2] = __PAIR64__(a8, a9);
  if ( !xxxSendMessage(v42, 129, 0, (int)v257) )
  {
LABEL_474:
    v156 = *(_BYTE *)(v42 + 71) & 0x10;
    if ( v230 )
      ThreadUnlock1(v78, v77);
    SetOrClrWF(1, (_DWORD *)v42, 0x480u, 1);
    SetOrClrWF(1, (_DWORD *)v42, 0x380u, 1);
    if ( v156 )
      SetVisible((_QWORD *)v42, 0);
    v157 = *(_QWORD *)(v42 + 104);
    if ( v157 )
    {
      if ( v156 )
        zzzLockDisplayAreaAndInvalidateDCCache(v157, 16LL, 0LL);
      if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v42) )
      {
        v158 = *(_QWORD *)(*(_QWORD *)(v42 + 104) + 16LL);
        if ( gptiCurrent != v158 )
          zzzAttachThreadInput(*(_QWORD *)(v42 + 16), v158, 0LL);
      }
      UnlinkWindow(v42, *(_QWORD *)(v42 + 104));
    }
    v159 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v159 + 16) = v273[0];
    ClassUnlockWorker(v223);
    xxxFreeWindow((struct tagWND *)v42, (struct tagSwitchWndInfo *)v272, v160, v161);
    return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v42 + 168) + 93LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu(v42, 0LL);
    if ( SystemMenu )
    {
      v282[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v282;
      v282[1] = SystemMenu;
      ++*(_DWORD *)(SystemMenu + 8);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      ThreadUnlock1(v164, v163);
    }
  }
  if ( (*(_BYTE *)(v42 + 58) & 2) != 0 && (!*((_QWORD *)&v257[5] + 1) || LODWORD(v257[5]) || *(_QWORD *)(v42 + 240)) )
  {
    *((_QWORD *)&v257[3] + 1) = *(_QWORD *)(v42 + 240);
    v257[5] = *(_OWORD *)(v42 + 232);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v165 = (__int64 *)(gptiCurrent + 696LL);
    if ( !*(_QWORD *)(gptiCurrent + 696LL) )
    {
      if ( (unsigned int)WantImeWindow(v123, (struct tagWND *)v42) )
      {
        DefaultImeWindow = xxxCreateDefaultImeWindow(v42, v214, v237);
        *(_QWORD *)&v266 = gptiCurrent + 696LL;
        *((_QWORD *)&v266 + 1) = DefaultImeWindow;
        v286 = v266;
        HMAssignmentLock(&v286);
        v167 = *v165;
        if ( *v165 )
        {
          v283[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v283;
          v283[1] = v167;
          ++*(_DWORD *)(v167 + 8);
          xxxSendMessage(*v165, 647, 33, 0);
          ThreadUnlock1(v169, v168);
        }
        v77 = gptiCurrent;
        v170 = (**(_DWORD **)(gptiCurrent + 432LL) >> 6) & 1;
        v263 = v170;
        v171 = *v165;
        if ( *v165 && v170 )
        {
          v284[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v284;
          v284[1] = v171;
          if ( v171 )
            ++*(_DWORD *)(v171 + 8);
          xxxSendMessage(*v165, 647, 25, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 40LL));
          **(_QWORD **)(gptiCurrent + 432LL) &= ~0x40uLL;
          ThreadUnlock1(v173, v172);
        }
      }
    }
  }
  if ( !v123 || (*(_DWORD *)(v42 + 304) & 8) != 0 && (struct tagWND *)*v134 != v123 )
  {
LABEL_529:
    if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0x40 && (*((_BYTE *)v123 + 66) & 0x40) != 0 )
    {
      v181 = *(_DWORD *)(v42 + 136) - *v147;
      v182 = *((_DWORD *)v123 + 36) + *((_DWORD *)v123 + 38) - *v147;
      *(_DWORD *)(v42 + 136) = v182;
      *v147 = v182 - v181;
    }
    *(_OWORD *)v288 = *(_OWORD *)v147;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v42, 0x83u, 0LL, (struct _LARGE_STRING *)v288, 0, 0, 0LL, 1, 0);
    *(_OWORD *)(v42 + 144) = *(_OWORD *)v288;
    if ( xxxSendMessage(v42, 1, 0, (int)v257) == -1 )
      goto LABEL_533;
    SetOrClrWF(1, (_DWORD *)v42, 0x780u, 1);
    if ( (unsigned int)IsWindowDesktopComposed(v42) )
    {
      v191 = (void *)ReferenceDwmApiPort(v188, v187, v189, v190);
      DwmAsyncChildStyleChange(v191, *(_QWORD *)v42, -16, *(_DWORD *)(v42 + 68));
      DwmChildRectChange(v42);
      v196 = *(__int64 **)(v42 + 120);
      if ( v196 )
        v197 = *v196;
      else
        v197 = 0LL;
      v198 = (void *)ReferenceDwmApiPort(v193, v192, v194, v195);
      DwmAsyncOwnerChange(v198, *(_QWORD *)v42, v197);
    }
    xxxWindowEvent(0x8000u, (__int64 *)v42, 0, 0, 0);
    if ( (*(_BYTE *)(v42 + 56) & 0x10) == 0 )
    {
      xxxSendSizeMessage(v42, 0);
      if ( v123 && (struct tagWND *)GetDesktopWindow(v42) != v123 )
      {
        v288[0] -= *((_DWORD *)v123 + 36);
        v288[1] -= *((_DWORD *)v123 + 37);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(
        v42,
        3u,
        0LL,
        (struct _LARGE_STRING *)(LOWORD(v288[0]) | (LOWORD(v288[1]) << 16)),
        0,
        0,
        0LL,
        1,
        0);
    }
    v199 = *(_BYTE *)(v42 + 71);
    if ( (v199 & 0x20) != 0 )
    {
      SetMinimize(v42, 0LL);
    }
    else
    {
      if ( (v199 & 1) == 0 )
        goto LABEL_553;
      SetOrClrWF(0, (_DWORD *)v42, 0xF01u, 1);
    }
    xxxMinMaximizeEx((struct tagWND *)v42, 0LL);
LABEL_553:
    CalcWindowFullScreen(v42);
    if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0x40 && (*(_BYTE *)(v42 + 64) & 4) == 0 )
    {
      v200 = *v134;
      if ( *v134 )
      {
        v285[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v285;
        v285[1] = v200;
        ++*(_DWORD *)(v200 + 8);
        v201 = *(struct _LARGE_STRING **)v42;
        v202 = (*(unsigned __int16 *)(v42 + 208) << 16) | 1;
        v203 = *v134;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v203, 0x210u, v202, v201, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v205, v204);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v42, 0LL, 0);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow((struct tagWND *)v42);
    if ( (*(_BYTE *)(v42 + 71) & 0xC0) == 0 || (*(_BYTE *)(v42 + 66) & 4) != 0 )
    {
      v207 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 652LL);
      if ( (_DWORD)v207 )
      {
        xxxSendMessage(v42, 50, v207, 0);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 652LL) = 0;
      }
    }
    if ( v230 )
      ThreadUnlock1(v207, v206);
    v208 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v208 + 16) = v273[0];
    ClassUnlockWorker(v223);
    result = (_DWORD *)ThreadUnlock1(v210, v209);
    if ( !result
      || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*result + gSharedInfo[1] + 25LL) & 1) != 0 )
    {
      return 0LL;
    }
    return result;
  }
  v174 = PWInsertAfter(v235, v77);
  v175 = v174;
  if ( (unsigned __int64)(v174 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v174 + 104) != *v134 )
    v175 = v216 != 0;
  v176 = *(_QWORD *)(v42 + 120);
  if ( v176 )
  {
    *(_DWORD *)(v42 + 320) = *(_DWORD *)(v176 + 320);
    SetOrClrWF(*(_BYTE *)(v176 + 306) & 0x40, (_DWORD *)v42, 0xFA40u, 1);
  }
  if ( (unsigned int)ValidateNewParent(v42, (__int64)v123) )
  {
    UnlinkWindow(v42, *v134);
    if ( (*(_BYTE *)(v42 + 71) & 0xC0) != 0x40 && v123 != *(struct tagWND **)(*((_QWORD *)v123 + 3) + 104LL) )
    {
      if ( (*(_BYTE *)(v42 + 64) & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v42);
          if ( TopMostInsertAfter )
            v175 = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !v175 )
          goto LABEL_523;
        v179 = 0;
        if ( v175 >= 0xFFFFFFFFFFFFFFFEuLL || v175 == 1 )
          v179 = 1;
        if ( !v179 && (*(_BYTE *)(v175 + 64) & 8) != 0 )
LABEL_523:
          v175 = (unsigned __int64)CalcForegroundInsertAfter(v42);
      }
    }
    if ( v175 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LinkWindow((struct tagWND *)v42, v175, (__int64 *)v123);
      zzzLockDisplayAreaAndInvalidateDCCache(v123, 16LL, 0LL);
      goto LABEL_529;
    }
  }
LABEL_533:
  v183 = v223;
  if ( v230 )
    ThreadUnlock1(v178, v177);
  if ( ThreadUnlock1(v178, v177) )
    xxxDestroyWindow(v42, v184, v185);
  v186 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v186 + 16) = v273[0];
  ClassUnlockWorker(v183);
  return 0LL;
}

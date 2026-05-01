/*
 * XREFs of ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00
 * Callers:
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18003D2A4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18003D358 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F0F34 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180110470 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800068C0 (-GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800073D0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180007480 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800269E0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180026B10 (-HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180026D80 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18003AF78 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180041B8C (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x180041BFC (-_ShouldKeepImmersiveRealmStatusQuo@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180046490 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C7B0 (-GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800709D0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 *     ?HandleDeactivation@CImmersiveWindowManager@@UEAAJW4IWM_ACTION_TYPE@@W4ZBID@@@Z @ 0x180070CB0 (-HandleDeactivation@CImmersiveWindowManager@@UEAAJW4IWM_ACTION_TYPE@@W4ZBID@@@Z.c)
 *     ?QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080E10 (-QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180080E30 (-Release@CEnumerableObjectCollection@@UEAAKXZ.c)
 *     ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x180080F50 (-AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?GetAt@CEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800810B0 (-GetAt@CEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18008A6A0 (-HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?HandleDeactivation@CCharmsWindowManager@@UEAAXXZ @ 0x18008A720 (-HandleDeactivation@CCharmsWindowManager@@UEAAXXZ.c)
 *     ?EndAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18008B840 (-EndAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800900A4 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?HandleActivation@CRealmActivationHistory@@UEAAJW4ZBID@@W4WindowType@@_N@Z @ 0x180090370 (-HandleActivation@CRealmActivationHistory@@UEAAJW4ZBID@@W4WindowType@@_N@Z.c)
 *     ?IsFallbackWindow@CFallbackWindow@@UEBA_NPEAUHWND__@@@Z @ 0x1800961D0 (-IsFallbackWindow@CFallbackWindow@@UEBA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18010980C (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18010FAA0 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall CApplicationManager::_HandleActivation2(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12d
  __int64 v4; // rsi
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // eax
  BOOL v9; // eax
  int ApartmentId; // ebx
  _BOOL8 v11; // rdi
  HWND v12; // r13
  unsigned __int8 v13; // r15
  _BOOL8 v14; // r13
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // r15d
  __int64 (__fastcall *v18)(__int64, HWND *, __int64); // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, IUnknown **); // rcx
  int v24; // eax
  void *v25; // rcx
  CCharmsWindowManager *v26; // rcx
  __int64 v27; // rax
  void (*v28)(void); // rax
  IUnknown *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 (__fastcall *v33)(__int64, unsigned int); // rax
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(_DWORD *, int, char); // rax
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rdx
  void (__fastcall *v41)(__int64, __int64, __int64, __int64); // rax
  void *v42; // r10
  IUnknown *v43; // rax
  __int64 (__fastcall *v44)(void *, IUnknown *, HWND, _QWORD, int, _QWORD); // r11
  int v45; // eax
  IUnknown *v46; // rcx
  __int64 v47; // rdx
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  struct IImmersiveMonitor *v49; // rbx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r12
  char *v55; // r15
  unsigned __int64 v56; // r13
  int v57; // eax
  struct IImmersiveMonitor **v58; // rcx
  struct IImmersiveMonitor *v59; // rcx
  struct IObjectArray *v60; // rcx
  char v61; // r15
  int v62; // edi
  __int64 (__fastcall ***v63)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  CEnumerableObjectCollection *v64; // rbx
  __int64 (__fastcall *v65)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int (__fastcall *v67)(CEnumerableObjectCollection *__hidden); // rax
  unsigned __int64 i; // rbx
  struct IUnknown *v69; // rdx
  __int64 (__fastcall *v70)(CEnumerableObjectCollection *__hidden, struct IUnknown *); // rax
  __int64 (__fastcall *v71)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  int SingleMonitorObjectArray; // eax
  CEnumerableObjectCollection *v73; // rcx
  void (*v74)(void); // rax
  unsigned __int64 j; // rbx
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // r15
  PSRWLOCK v79; // rdi
  PVOID Ptr; // rbx
  __int64 v81; // r13
  _QWORD *v82; // rdi
  _QWORD *v83; // rax
  _QWORD *v84; // rsi
  void (*v85)(void); // rax
  Windows::Internal::ComTaskPool::TaskData *v86; // rdx
  int v87; // r12d
  Windows::Internal::ComTaskPool::TaskData *v88; // r8
  __int64 v89; // r9
  Windows::Internal::ComTaskPool::TaskData *v90; // rsi
  __int64 v91; // rsi
  void (__fastcall *v92)(_QWORD *); // rax
  void *v93; // rbx
  RTL_SRWLOCK *v94; // rcx
  __int64 (__fastcall *v95)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  void *v96; // rcx
  HRESULT v97; // edi
  IUnknown *v98; // rcx
  void *v99; // rcx
  CImmersiveApplicationTransitionHelper *v100; // rcx
  void (*v101)(void); // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  void (__fastcall *v106)(__int64, int); // rax
  __int64 v107; // rcx
  CEnumerableObjectCollection *v108; // rcx
  void (*v109)(void); // rax
  IUnknown *v110; // rcx
  void *v111; // rcx
  CEnumerableObjectCollection *v112; // rcx
  __int64 (__fastcall *v113)(CEnumerableObjectCollection *__hidden, unsigned int, const struct _GUID *, void **); // rax
  int v114; // eax
  __int64 v115; // r8
  void *v116; // rcx
  void (__fastcall *v117)(void *, __int64, __int64); // rax
  int v118; // eax
  __int64 v119; // rcx
  __int64 (__fastcall *v120)(__int64, volatile int *, LPVOID *); // rax
  CClassicWindowManager *v121; // rcx
  __int64 (__fastcall *v122)(CClassicWindowManager *, HWND); // rax
  __int64 ApplicationViewWindow; // rax
  unsigned __int8 v124; // bl
  CClassicWindowManager *v125; // rcx
  __int64 (__fastcall *v126)(CClassicWindowManager *, HWND, char); // rax
  int v127; // eax
  struct IImmersiveMonitor *v128; // rcx
  __int64 v129; // rbx
  __int64 v130; // rbx
  unsigned __int64 v131; // rcx
  __int64 *v132; // rdx
  CFallbackWindow *v133; // rcx
  bool (__fastcall *v134)(CFallbackWindow *__hidden, HWND); // rax
  bool IsFallbackWindow; // al
  HWND v136; // rdx
  void (__fastcall *v137)(CCharmsWindowManager *__hidden, HWND); // rax
  HWND v138; // rdx
  _QWORD *v139; // rax
  int cchValue[2]; // [rsp+20h] [rbp-E0h]
  Windows::Internal::ComTaskPool::TaskData **bIgnoreCase; // [rsp+28h] [rbp-D8h]
  __int64 *v142; // [rsp+30h] [rbp-D0h]
  char v143; // [rsp+40h] [rbp-C0h]
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v146; // [rsp+58h] [rbp-A8h]
  int v147; // [rsp+5Ch] [rbp-A4h]
  __int64 v148; // [rsp+60h] [rbp-A0h] BYREF
  struct IObjectArray *v149; // [rsp+68h] [rbp-98h] BYREF
  int v150; // [rsp+70h] [rbp-90h]
  CEnumerableObjectCollection *v151; // [rsp+78h] [rbp-88h] BYREF
  HWND v152; // [rsp+80h] [rbp-80h]
  void *ppvOut; // [rsp+88h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v155; // [rsp+98h] [rbp-68h]
  __int64 v156; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v157; // [rsp+A8h] [rbp-58h]
  struct IImmersiveMonitor *v158; // [rsp+B0h] [rbp-50h] BYREF
  int v159; // [rsp+B8h] [rbp-48h]
  IUnknown *v160; // [rsp+C0h] [rbp-40h] BYREF
  struct IImmersiveMonitor *v161; // [rsp+C8h] [rbp-38h] BYREF
  struct IImmersiveMonitor *v162; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+D8h] [rbp-28h]
  __int64 v164; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v165; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v166; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v167; // [rsp+F8h] [rbp-8h] BYREF
  int v168; // [rsp+FCh] [rbp-4h] BYREF
  int v169; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v170; // [rsp+104h] [rbp+4h]
  int v171; // [rsp+108h] [rbp+8h]
  unsigned int v172; // [rsp+10Ch] [rbp+Ch] BYREF
  LPMALLOC ppMalloc; // [rsp+110h] [rbp+10h] BYREF
  __int64 v174; // [rsp+118h] [rbp+18h] BYREF
  PVOID v175; // [rsp+120h] [rbp+20h]
  __int64 v176; // [rsp+128h] [rbp+28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall ***v178)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // [rsp+138h] [rbp+38h]
  HWND v179; // [rsp+140h] [rbp+40h] BYREF
  __int64 v180; // [rsp+148h] [rbp+48h]
  Windows::Internal::ComTaskPool::TaskData *v181[2]; // [rsp+150h] [rbp+50h] BYREF
  PVOID v182; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v183[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v184; // [rsp+178h] [rbp+78h]
  _BOOL8 v185; // [rsp+180h] [rbp+80h]
  __int64 v186[10]; // [rsp+188h] [rbp+88h] BYREF
  int v187; // [rsp+1D8h] [rbp+D8h]
  __int64 v188; // [rsp+1E0h] [rbp+E0h]
  __int64 v189; // [rsp+1E8h] [rbp+E8h]
  WCHAR Filename[264]; // [rsp+1F0h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+448h] [rbp+348h]

  v186[1] = -2LL;
  v3 = a3;
  v147 = a3;
  v4 = a2;
  v176 = a2;
  v171 = 0;
  if ( a1 )
    v6 = a1 + 384;
  else
    v6 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v186[9] = v6;
  v7 = *(_DWORD *)(v6 + 44);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_255;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_248;
      }
LABEL_255:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_248:
  if ( *(_DWORD *)(v6 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v167);
    v150 = ApartmentId;
    if ( ApartmentId >= 0 )
    {
      if ( v167 != *(_DWORD *)(v6 + 40) )
        ApartmentId = -2147417842;
      v150 = ApartmentId;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue[0]);
      v11 = 0LL;
      goto LABEL_9;
    }
  }
LABEL_6:
  v9 = TryEnterCriticalSection((LPCRITICAL_SECTION)v6);
  ApartmentId = -2147417842;
  v11 = 0LL;
  if ( v9 )
    ApartmentId = 0;
  v150 = ApartmentId;
LABEL_9:
  v187 = ApartmentId;
  v12 = *(HWND *)(v4 + 8);
  v152 = v12;
  v13 = 1;
  v143 = 1;
  if ( *(_DWORD *)(v4 + 16) == 1 )
  {
    v162 = 0LL;
    if ( *(_BYTE *)(v4 + 20) || *(_BYTE *)(v4 + 21) )
    {
      v124 = 0;
    }
    else
    {
      v124 = 1;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v162);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)a1, v12, &v162);
    }
    if ( v12 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 744) + 24LL))(*(_QWORD *)(a1 + 744))
      && v12 != (HWND)1 )
    {
      v125 = *(CClassicWindowManager **)(a1 + 528);
      v126 = *(__int64 (__fastcall **)(CClassicWindowManager *, HWND, char))(*(_QWORD *)v125 + 56LL);
      v127 = v126 == CClassicWindowManager::HandleActivation
           ? CClassicWindowManager::HandleActivation(v125, v12, v124)
           : v126(v125, v12, v124);
      if ( v127 >= 0
        && (!v162
         || (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)(a1 + 528) + 32LL))(
              *(_QWORD *)(a1 + 528),
              v12)) )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 552) + 32LL))(*(_QWORD *)(a1 + 552), &v172);
        if ( v172 > 1 && *(_DWORD *)(v4 + 24) == 1 )
        {
          v13 = !CApplicationManager::_ShouldKeepImmersiveRealmStatusQuo((CApplicationManager *)a1, v12);
          v143 = v13;
        }
      }
    }
    v128 = v162;
    if ( v162 )
    {
      v162 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v128 + 16LL))(v128);
    }
  }
  ppv = 0LL;
  punk = 0LL;
  v185 = 0LL;
  if ( *(_DWORD *)(v4 + 16) == 2 )
  {
    punk = 0LL;
    v186[2] = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    if ( *(_QWORD *)(a1 + 632) )
    {
      v186[8] = 0LL;
      do
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v15);
        v184 = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v17 = -1;
        v164 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
               v16,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v164) >= 0 )
        {
          v179 = v152;
          v180 = 0LL;
          v18 = *(__int64 (__fastcall **)(__int64, HWND *, __int64))(*(_QWORD *)v164 + 296LL);
          if ( (char *)v18 == (char *)CImmersiveApp::MatchByWindow )
            v19 = CImmersiveApp::MatchByWindow(v164, &v179, 2LL);
          else
            v19 = v18(v164, &v179, 2LL);
          v17 = -1;
          if ( v19 )
            v17 = 0;
          v20 = v180;
          if ( v180 )
          {
            v180 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
        v21 = v164;
        if ( v164 )
        {
          v164 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v184 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( !v17 )
        {
          v14 = v15;
          v22 = 0;
          v13 = v143;
          goto LABEL_25;
        }
        ++v15;
      }
      while ( v15 < *(_QWORD *)(a1 + 632) );
      v13 = v143;
    }
    v22 = -2147319765;
LABEL_25:
    if ( v22 < 0
      || (v23 = *(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 624) + 8 * v14),
          v24 = (**v23)(v23, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &punk),
          v11 = v14,
          v185 = v14,
          v24 < 0) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      CApplicationManager::_IWMFromWindow(
        (CApplicationManager *)a1,
        v138,
        &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
        &ppv);
    }
    else
    {
      v25 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    }
    v3 = v147;
    v12 = v152;
  }
  v26 = *(CCharmsWindowManager **)(a1 + 584);
  v27 = *(_QWORD *)v26;
  if ( *(_DWORD *)(v4 + 16) == 3 )
  {
    v136 = *(HWND *)(v4 + 8);
    v137 = *(void (__fastcall **)(CCharmsWindowManager *__hidden, HWND))(v27 + 40);
    if ( v137 == CCharmsWindowManager::HandleActivation )
      CCharmsWindowManager::HandleActivation(v26, v136);
    else
      v137(v26, v136);
  }
  else
  {
    v28 = *(void (**)(void))(v27 + 48);
    if ( (char *)v28 == (char *)CCharmsWindowManager::HandleDeactivation )
      CCharmsWindowManager::HandleDeactivation(v26);
    else
      v28();
  }
  *(_QWORD *)(a1 + 480) = v12;
  *(_DWORD *)(a1 + 496) = v3;
  v29 = punk;
  if ( punk && *(IUnknown **)(a1 + 504) != punk )
  {
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
    v30 = *(_QWORD *)(a1 + 504);
    *(_QWORD *)(a1 + 504) = v29;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v29 = punk;
  }
  if ( *(_DWORD *)(v4 + 16) != 2 || v29 )
  {
    v31 = *(_QWORD *)(a1 + 520);
    v32 = *(unsigned int *)(v4 + 24);
    v33 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v31 + 40LL);
    if ( v33 == CImmersiveMode::HandleActivation )
      CImmersiveMode::HandleActivation(v31, v32);
    else
      v33(v31, v32);
    v34 = *(_DWORD **)(a1 + 520);
    v35 = *(unsigned int *)(v4 + 24);
    v36 = *(__int64 (__fastcall **)(_DWORD *, int, char))(*(_QWORD *)v34 + 88LL);
    if ( v36 == CImmersiveMode::HandleActivationDeprecated )
      CImmersiveMode::HandleActivationDeprecated(v34, v35, v13);
    else
      v36(v34, v35, v13);
  }
  v37 = *(_QWORD *)(a1 + 512);
  v38 = *(unsigned __int8 *)(v4 + 28);
  v39 = *(unsigned int *)(v4 + 16);
  v40 = *(unsigned int *)(v4 + 24);
  v41 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v37 + 24LL);
  if ( (char *)v41 == (char *)CRealmActivationHistory::HandleActivation )
    CRealmActivationHistory::HandleActivation(v37, v40, v39, v38);
  else
    v41(v37, v40, v39, v38);
  v42 = ppv;
  v43 = punk;
  if ( ppv && punk )
  {
    v44 = *(__int64 (__fastcall **)(void *, IUnknown *, HWND, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL);
    if ( (char *)v44 == (char *)CImmersiveWindowManager::HandleWindowAction )
      v45 = CImmersiveWindowManager::HandleWindowAction(ppv, punk, v12, 0LL, 2, 0LL);
    else
      v45 = v44(ppv, punk, v12, 0LL, 2, 0LL);
    if ( v45 >= 0 && v11 )
      CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewActiveApp(
        a1 + 616,
        &punk,
        v11);
    v42 = ppv;
    v43 = punk;
  }
  if ( *(_DWORD *)(v4 + 16) == 2 )
  {
    if ( v43 )
      goto LABEL_57;
    v115 = 0LL;
    v116 = v42;
    v117 = *(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v42 + 40LL);
LABEL_278:
    v117(v116, 4LL, v115);
    goto LABEL_57;
  }
  if ( v42 )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v112 = *(CEnumerableObjectCollection **)(a1 + 568);
  v113 = *(__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v112 + 32LL);
  if ( v113 == CEnumerableObjectCollection::GetAt )
    v114 = CEnumerableObjectCollection::GetAt(v112, 0, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
  else
    v114 = v113(v112, 0, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
  if ( v114 >= 0 )
  {
    if ( v13 )
      v115 = *(unsigned int *)(v4 + 24);
    else
      v115 = 0LL;
    v116 = ppv;
    v117 = *(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppv + 40LL);
    if ( (char *)v117 == (char *)CImmersiveWindowManager::HandleDeactivation )
    {
      CImmersiveWindowManager::HandleDeactivation(ppv, 4LL, v115);
      goto LABEL_57;
    }
    goto LABEL_278;
  }
LABEL_57:
  v149 = 0LL;
  v148 = 0LL;
  v159 = 0xFFFF;
  LOBYTE(v11) = 1;
  v146 = v11;
  if ( GetShellWindow() == v12
    || (unsigned int)GetPropW(v12, L"MultimonitorActivationException")
    || (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 744) + 24LL))(*(_QWORD *)(a1 + 744)) == v12 )
  {
    v146 = v12 != (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 744) + 24LL))(*(_QWORD *)(a1 + 744));
    goto LABEL_122;
  }
  pv = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v46 = punk;
  if ( punk )
  {
    v47 = v148;
    if ( v148 )
    {
      v148 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      v46 = punk;
    }
    ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))v46->lpVtbl->QueryInterface)(
      v46,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      &v148);
    v161 = 0LL;
    AddRef = punk->lpVtbl[19].AddRef;
    if ( (char *)AddRef == (char *)CImmersiveApp::GetMonitorInternal )
      CImmersiveApp::GetMonitorInternal((CImmersiveApp *)punk, &v161);
    else
      ((void (__fastcall *)(IUnknown *, struct IImmersiveMonitor **))AddRef)(punk, &v161);
    v49 = v161;
    v158 = v161;
    if ( v161 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v161 + 8LL))(v161);
    v50 = v155;
    if ( v155 != v157 )
      goto LABEL_86;
    v51 = v155 + 1;
    if ( v155 + 1 <= 0xFFFFFFFE )
    {
      if ( v51 <= v157 )
      {
LABEL_86:
        v155 = v50 + 1;
        v58 = (struct IImmersiveMonitor **)((char *)pv + 8 * v50);
        if ( v58 )
        {
          *v58 = 0LL;
          if ( v58 != &v158 )
          {
            *v58 = v49;
            v49 = 0LL;
            v158 = 0LL;
          }
        }
        goto LABEL_89;
      }
      v186[3] = (v157 * (unsigned __int128)2uLL) >> 64;
      v52 = 2 * v157;
      if ( is_mul_ok(v157, 2uLL) )
      {
        if ( v157 > 0x1000 )
          v52 = v157 + 4096;
        if ( v51 <= v52 )
          v53 = v52;
        else
          v53 = v155 + 1;
        if ( v53 > 0xFFFFFFFE )
        {
          v52 = 4294967294LL;
        }
        else if ( v51 > v52 )
        {
          v52 = v155 + 1;
        }
        v186[4] = (v52 * (unsigned __int128)8uLL) >> 64;
        v54 = 8 * v52;
        if ( is_mul_ok(v52, 8uLL) )
        {
          v55 = (char *)CoTaskMemRealloc(pv, 8 * v52);
          if ( !v55 )
            goto LABEL_89;
          if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
          {
            v56 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v55);
            ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
            if ( v56 > v54 )
              memset_0(&v55[v54], 0, v56 - v54);
            v12 = v152;
          }
          v57 = 0;
          v157 = v52;
          pv = v55;
          v50 = v155;
        }
        else
        {
          v57 = -2147024362;
        }
        if ( v57 >= 0 )
          goto LABEL_86;
      }
    }
LABEL_89:
    if ( v49 )
    {
      v158 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v59 = v161;
    if ( v161 )
    {
      v161 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v59 + 16LL))(v59);
    }
    goto LABEL_93;
  }
  v118 = *(_DWORD *)(v4 + 16);
  if ( v118 == 1 )
  {
    v119 = *(_QWORD *)(a1 + 528);
    v120 = *(__int64 (__fastcall **)(__int64, volatile int *, LPVOID *))(*(_QWORD *)v119 + 48LL);
    if ( v120 == CClassicWindowManager::GetIntersectingMonitors )
      CClassicWindowManager::GetIntersectingMonitors(v119, (volatile int *)v12, &pv);
    else
      v120(v119, (volatile int *)v12, &pv);
    goto LABEL_93;
  }
  if ( v118 == 2 )
    goto LABEL_292;
  if ( *(_DWORD *)(v4 + 24) != 1 && *(_DWORD *)(v4 + 24) != 8 )
  {
    v166 = 0LL;
    v129 = *(_QWORD *)(a1 + 552);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v166);
    if ( (*(int (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v129 + 88LL))(
           v129,
           v12,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v166) < 0 )
    {
LABEL_232:
      v133 = *(CFallbackWindow **)(a1 + 560);
      v134 = *(bool (__fastcall **)(CFallbackWindow *__hidden, HWND))(*(_QWORD *)v133 + 64LL);
      if ( v134 == CFallbackWindow::IsFallbackWindow )
        IsFallbackWindow = CFallbackWindow::IsFallbackWindow(v133, v12);
      else
        IsFallbackWindow = v134(v133, v12);
      if ( IsFallbackWindow )
        v159 = 65534;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v166);
      goto LABEL_93;
    }
    v130 = v166;
    v165 = v166;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v165);
    v131 = v155;
    if ( v155 == v157 )
    {
      if ( (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                  &pv,
                  v155 + 1) < 0 )
      {
LABEL_231:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v165);
        goto LABEL_232;
      }
      v131 = v155;
    }
    v155 = v131 + 1;
    v132 = (__int64 *)((char *)pv + 8 * v131);
    if ( v132 )
    {
      *v132 = 0LL;
      if ( v132 != &v165 )
      {
        *v132 = v130;
        v165 = 0LL;
      }
    }
    goto LABEL_231;
  }
LABEL_93:
  v60 = v149;
  if ( v149 )
  {
    v149 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v60->lpVtbl->Release)(v60);
  }
  v61 = 0;
  v149 = 0LL;
  v151 = 0LL;
  v62 = -2147024882;
  v63 = (__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v64 = (CEnumerableObjectCollection *)v63;
  v178 = v63;
  if ( v63 )
  {
    *v63 = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))&CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v63[1] = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))&CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v63[2] = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))&CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v63 + 6) = 1;
    *(__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))((char *)v63 + 28) = (__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))4;
    v63[5] = 0LL;
    v63[6] = 0LL;
    v63[7] = 0LL;
    v63[8] = 0LL;
    v65 = **v63;
    if ( v65 == CEnumerableObjectCollection::QueryInterface )
      Interface = CEnumerableObjectCollection::QueryInterface(
                    v64,
                    &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
                    (void **)&v151);
    else
      Interface = v65(v64, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, (void **)&v151);
    v62 = Interface;
    v67 = *(unsigned int (__fastcall **)(CEnumerableObjectCollection *__hidden))(*(_QWORD *)v64 + 16LL);
    if ( v67 == CEnumerableObjectCollection::Release )
      CEnumerableObjectCollection::Release(v64);
    else
      v67(v64);
  }
  if ( v62 >= 0 )
  {
    for ( i = 0LL; i < v155; ++i )
    {
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)pv + i) + 48LL))(*((_QWORD *)pv + i), &v168);
      if ( v168 )
      {
        v69 = (struct IUnknown *)*((_QWORD *)pv + i);
        v70 = *(__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, struct IUnknown *))(*(_QWORD *)v151 + 40LL);
        if ( v70 == CEnumerableObjectCollection::AddObject )
          CEnumerableObjectCollection::AddObject(v151, v69);
        else
          v70(v151, v69);
      }
    }
    (*(void (__fastcall **)(CEnumerableObjectCollection *, int *))(*(_QWORD *)v151 + 24LL))(v151, &v169);
    if ( v169 )
    {
      v71 = **(__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))v151;
      if ( v71 == CEnumerableObjectCollection::QueryInterface )
        SingleMonitorObjectArray = CEnumerableObjectCollection::QueryInterface(
                                     v151,
                                     &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                     (void **)&v149);
      else
        SingleMonitorObjectArray = v71(v151, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, (void **)&v149);
    }
    else
    {
      v61 = 1;
      SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                   (CApplicationManager *)a1,
                                   0LL,
                                   &v149);
    }
    v62 = SingleMonitorObjectArray;
  }
  v73 = v151;
  if ( v151 )
  {
    v151 = 0LL;
    v74 = *(void (**)(void))(*(_QWORD *)v73 + 16LL);
    if ( (char *)v74 == (char *)CEnumerableObjectCollection::Release )
      CEnumerableObjectCollection::Release(v73);
    else
      v74();
  }
  if ( v62 >= 0 )
  {
    if ( v61 && punk )
      v147 = 8;
    goto LABEL_115;
  }
LABEL_292:
  LOBYTE(v146) = 0;
LABEL_115:
  if ( pv )
  {
    for ( j = 0LL; j < v155; ++j )
    {
      v76 = *((_QWORD *)pv + j);
      if ( v76 )
      {
        *((_QWORD *)pv + j) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v155 = 0LL;
  v157 = 0LL;
LABEL_122:
  v77 = (__int64)v12;
  v78 = v148;
  if ( !v148 && v12 )
  {
    v121 = *(CClassicWindowManager **)(a1 + 528);
    v122 = *(__int64 (__fastcall **)(CClassicWindowManager *, HWND))(*(_QWORD *)v121 + 112LL);
    if ( v122 == CClassicWindowManager::GetApplicationViewWindow )
      ApplicationViewWindow = CClassicWindowManager::GetApplicationViewWindow(v121, v12);
    else
      ApplicationViewWindow = v122(v121, v12);
    v78 = v148;
    v77 = ApplicationViewWindow;
  }
  v188 = v78;
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
  v189 = v77;
  v79 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v186[0] = (__int64)Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v175 = Ptr;
    v182 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v81 = v78;
    v183[0] = v78;
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
    v183[1] = v77;
    v170 = (unsigned int)v79[15].Ptr;
    v82 = 0LL;
    v186[5] = 0LL;
    v83 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v84 = v83;
    if ( v83 )
    {
      *v83 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      *((_DWORD *)v83 + 3) = 1;
      *v83 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v85 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v85 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v85();
      }
      *v84 = off_18031B7F0;
      v86 = 0LL;
      v84[2] = 0LL;
      if ( v84 + 2 != &v182 )
      {
        v84[2] = Ptr;
        v175 = 0LL;
        v182 = 0LL;
      }
      v84[3] = 0LL;
      if ( v84 + 3 != v183 )
      {
        v84[3] = v78;
        v81 = 0LL;
        v183[0] = 0LL;
      }
      v84[4] = v77;
      v82 = v84;
    }
    else
    {
      v86 = 0LL;
    }
    v186[6] = (__int64)v82;
    if ( v82 )
    {
      v186[7] = 0LL;
      hObject = 0LL;
      v174 = 0LL;
      *(_OWORD *)v181 = 0LL;
      AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
      v142 = &v174;
      bIgnoreCase = v181;
      cchValue[1] = HIDWORD(v82);
      v87 = Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(hObject, 0LL, 2LL, v170);
      ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
      v88 = v181[0];
      v158 = v181[0];
      v86 = v181[0];
      v89 = 0LL;
      v90 = v181[1];
      if ( v181[0] )
      {
        v88 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)v181[0] + 3);
        v158 = v88;
        *((_QWORD *)v181[0] + 3) = 0LL;
        if ( v90 == v86 )
          v90 = 0LL;
      }
      while ( v86 )
      {
        Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v86);
        v88 = v158;
        v89 = 0LL;
        v86 = v158;
        if ( v158 )
        {
          v139 = (_QWORD *)((char *)v158 + 24);
          v88 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)v158 + 3);
          v158 = v88;
          *v139 = 0LL;
          if ( v90 == v86 )
            v90 = 0LL;
        }
      }
      v91 = v174;
      if ( v87 >= 0 && v174 )
      {
        if ( WaitForSingleObject(*(HANDLE *)(v174 + 56), 0xFFFFFFFF) == -1 )
          ResultFromKnownLastError();
        if ( (*(_BYTE *)(v91 + 132) & 2) == 0 )
        {
          CloseHandle(*(HANDLE *)(v91 + 56));
          *(_QWORD *)(v91 + 56) = 0LL;
        }
      }
      if ( hObject )
      {
        AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
        if ( !Windows::Internal::ComTaskPool::s_hEventCache )
        {
          Windows::Internal::ComTaskPool::s_hEventCache = hObject;
          hObject = 0LL;
        }
        ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
        if ( hObject )
          CloseHandle(hObject);
      }
      if ( v91 )
        (*(void (__fastcall **)(__int64, Windows::Internal::ComTaskPool::TaskData *, Windows::Internal::ComTaskPool::TaskData *, __int64, _QWORD *, Windows::Internal::ComTaskPool::TaskData **, __int64 *))(*(_QWORD *)v91 + 16LL))(
          v91,
          v86,
          v88,
          v89,
          v82,
          v181,
          &v174);
    }
    if ( v82 )
    {
      v92 = *(void (__fastcall **)(_QWORD *))(*v82 + 16LL);
      if ( (char *)v92 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
          v82,
          (volatile int *)v86);
      else
        v92(v82);
    }
    if ( v81 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    if ( v175 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v175 + 16LL))(v175);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v12 = v152;
    v4 = v176;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v186);
  }
  if ( v146 )
  {
    v93 = 0LL;
    v178 = 0LL;
    ppvOut = 0LL;
    v94 = (RTL_SRWLOCK *)(a1 + 48);
    v160 = 0LL;
    v171 = 2;
    v95 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*(_QWORD *)(a1 + 48) + 32LL);
    if ( v95 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(v94, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v160);
    else
      v95(v94, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v160);
    v96 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v96 + 16LL))(v96);
    }
    v97 = IUnknown_QueryService(v160, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
    v98 = v160;
    if ( v160 )
    {
      v160 = 0LL;
      ((void (__fastcall *)(IUnknown *))v98->lpVtbl->Release)(v98);
    }
    v99 = ppvOut;
    if ( v97 >= 0 )
    {
      if ( ppvOut )
      {
        (*(void (**)(void))(*(_QWORD *)ppvOut + 8LL))();
        v99 = ppvOut;
      }
      v93 = v99;
      v178 = (__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))v99;
      v97 = 0;
    }
    if ( v99 )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v99 + 16LL))(v99);
    }
    if ( v97 >= 0 )
    {
      LODWORD(v142) = v159;
      LODWORD(bIgnoreCase) = v147;
      cchValue[0] = *(_DWORD *)(v4 + 24);
      (*(void (__fastcall **)(void *, struct IObjectArray *, __int64, __int64, int *, Windows::Internal::ComTaskPool::TaskData **, __int64 *))(*(_QWORD *)v93 + 24LL))(
        v93,
        v149,
        a1 + 248,
        v148,
        *(int **)cchValue,
        bIgnoreCase,
        v142);
    }
    if ( v93 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v93 + 16LL))(v93);
  }
  if ( *(_BYTE *)(a1 + 472) )
  {
    v100 = *(CImmersiveApplicationTransitionHelper **)(a1 + 544);
    v101 = *(void (**)(void))(*(_QWORD *)v100 + 48LL);
    if ( (char *)v101 == (char *)CImmersiveApplicationTransitionHelper::EndAppTransitionRequest )
      CImmersiveApplicationTransitionHelper::EndAppTransitionRequest(v100);
    else
      v101();
  }
  v102 = *(_QWORD *)(a1 + 504);
  if ( v102 )
  {
    *(_QWORD *)(a1 + 504) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
  }
  *(_DWORD *)(a1 + 496) = 0;
  v103 = *(_QWORD *)(a1 + 480);
  if ( v103 != 1 )
    *(_QWORD *)(a1 + 488) = v103;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_BYTE *)(a1 + 472) = 0;
  v104 = *(_QWORD *)(a1 + 520);
  v105 = *(unsigned int *)(v4 + 24);
  v106 = *(void (__fastcall **)(__int64, int))(*(_QWORD *)v104 + 48LL);
  if ( v106 == CImmersiveMode::ValidateActivationAndBroadcastChanged )
    CImmersiveMode::ValidateActivationAndBroadcastChanged(v104, v105);
  else
    v106(v104, v105);
  *(_QWORD *)(a1 + 760) = v12;
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
  v107 = v148;
  if ( v148 )
  {
    v148 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
  }
  v108 = (CEnumerableObjectCollection *)v149;
  if ( v149 )
  {
    v149 = 0LL;
    v109 = *(void (**)(void))(*(_QWORD *)v108 + 16LL);
    if ( (char *)v109 == (char *)CEnumerableObjectCollection::Release )
      CEnumerableObjectCollection::Release(v108);
    else
      v109();
  }
  v110 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v110->lpVtbl->Release)(v110);
  }
  v111 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v111 + 16LL))(v111);
  }
  if ( v150 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}

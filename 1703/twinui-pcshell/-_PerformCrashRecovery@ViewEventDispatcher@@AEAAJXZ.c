/*
 * XREFs of ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508
 * Callers:
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800F4C50 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x180044290 (wil--ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1800EE078 (-Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x1800F05C8 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x1800F9BF8 (--1-$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@URecover.c)
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForView@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForView@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForView@@@@@@QEAAJ_K@Z @ 0x1800FAF64 (-EnsureCapacity@-$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecove.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@QEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE564 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGQEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE65C (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGQEAVViewE.c)
 *     ??$Start@$$V@CrashRecovery@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x1800FEEEC (--$Start@$$V@CrashRecovery@ViewManagerInteropTraceLogging@@SA-AV01@XZ.c)
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1800FEF98 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180108770 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x180109E50 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180109ED0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewEventDispatcher::_PerformCrashRecovery(ViewEventDispatcher *this)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  int v4; // esi
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // r13
  __int64 *v8; // r12
  __int64 v9; // r14
  __int64 v10; // r9
  _DWORD *v11; // rax
  int AppUserModelIdForView; // eax
  unsigned __int16 **v13; // r8
  CallerIdentity *v14; // rcx
  signed int v15; // eax
  int v16; // eax
  __int64 v17; // rdi
  char *v18; // rcx
  wchar_t *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // r8
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // edx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  unsigned int v33; // edx
  bool v35[8]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  struct MsgString *v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  struct MsgString **v42; // [rsp+78h] [rbp-90h] BYREF
  ViewEventDispatcher *v43; // [rsp+80h] [rbp-88h] BYREF
  wchar_t *v44; // [rsp+88h] [rbp-80h] BYREF
  int v45[2]; // [rsp+90h] [rbp-78h] BYREF
  ViewEventDispatcher *v46; // [rsp+98h] [rbp-70h] BYREF
  LPARAM lParam; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  char v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v56[2]; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  __int64 v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h] BYREF
  __int64 v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char v62; // [rsp+118h] [rbp+10h]
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+18h] BYREF
  _QWORD *v64; // [rsp+128h] [rbp+20h] BYREF
  char v65; // [rsp+130h] [rbp+28h]
  __int128 v66; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v67; // [rsp+148h] [rbp+40h]
  unsigned __int64 v68; // [rsp+150h] [rbp+48h]
  __int64 v69; // [rsp+158h] [rbp+50h]
  _QWORD v70[40]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v69 = -2LL;
  ViewManagerInteropTraceLogging::CrashRecovery::Start<>((ViewManagerInteropTraceLogging::CrashRecovery *)v70);
  v2 = 0LL;
  lParam = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v3 = CTSimpleArray<RecoveredWindowForView,4294967294,CTPolicyCoTaskMem<RecoveredWindowForView>,CSimpleArrayStandardCompareHelper<RecoveredWindowForView>,CSimpleArrayStandardMergeHelper<RecoveredWindowForView>>::EnsureCapacity(
         &lParam,
         50LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC5C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_77;
  }
  EnumWindows(ViewEventDispatcher::s_RecoverWindowsProc, (LPARAM)&lParam);
  v5 = v48;
  v68 = v48;
  v55 = 0LL;
  *(_QWORD *)v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v6 = (_QWORD *)*((_QWORD *)this + 55);
  v55 = v6[18];
  v57 = v6[20];
  *(_QWORD *)v56 = v6[19];
  v58 = v6[21];
  v6[18] = 0LL;
  v6[20] = 0LL;
  v6[19] = 0LL;
  v6[21] = 0LL;
  v37 = 0;
  SHRegGetBOOL(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
    L"DisableAppRecoveryAfterShellRestart",
    &v37);
  *(_DWORD *)v35 = 0;
  v7 = *(_QWORD *)v56;
  v8 = 0LL;
  if ( !*(_QWORD *)v56 )
  {
LABEL_75:
    ViewManagerInteropTraceLogging::CrashRecovery::Stop((ViewManagerInteropTraceLogging::CrashRecovery *)v70, v7, v2);
    v2 = 0LL;
    v4 = 0;
    goto LABEL_76;
  }
  v9 = 0LL;
  while ( 1 )
  {
    *(_QWORD *)&v66 = this;
    *((_QWORD *)&v66 + 1) = &v55;
    v67 = v8;
    wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___((__int64)&v51, &v66);
    LODWORD(v41) = *(_DWORD *)(v9 + v55 + 8);
    v38 = 0;
    LODWORD(v39) = 0;
    *(_QWORD *)&v66 = &v41;
    *((_QWORD *)&v66 + 1) = &v38;
    v67 = &v39;
    wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___((__int64)&v59, &v66);
    if ( v37 )
      goto LABEL_48;
    v2 = 0LL;
    if ( !v5 )
    {
LABEL_47:
      LODWORD(v2) = *(_DWORD *)v35;
      goto LABEL_48;
    }
    v11 = (_DWORD *)(lParam + 8);
    while ( *v11 != *(_DWORD *)(v9 + v10 + 8) )
    {
      ++v2;
      v11 += 6;
      if ( v2 >= v5 )
        goto LABEL_47;
    }
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                              *((ViewManagerBridge **)this + 55),
                              *(struct IUnknown **)(v9 + v10),
                              &v40);
    v4 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC9B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)AppUserModelIdForView);
      v2 = 0LL;
      goto LABEL_70;
    }
    v42 = &v40;
    wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v64, &v42);
    if ( v40 )
    {
      v15 = *(_DWORD *)v40 & 0xE0000000;
      if ( v15 == 0x40000000 )
      {
        v14 = (struct MsgString *)((char *)v40 + 8);
      }
      else
      {
        if ( v15 != 0x80000000 )
        {
          __debugbreak();
LABEL_57:
          __debugbreak();
LABEL_58:
          v28 = 3246LL;
LABEL_63:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v28,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_64;
        }
        v14 = (CallerIdentity *)*((_QWORD *)v40 + 1);
      }
    }
    else
    {
      v14 = 0LL;
    }
    v16 = IsLegacyApp(v14, &v35[4], v13);
    v4 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCA2,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
      v2 = 0LL;
      goto LABEL_67;
    }
    v36 = 0LL;
    if ( !v35[4] )
      break;
    v43 = this;
    LODWORD(v42) = 0;
    v17 = 24 * v2;
    v44 = off_1801BD1F8[*(_QWORD *)(24 * v2 + lParam + 16) & -(__int64)(*(_QWORD *)(24 * v2 + lParam + 16) < 3uLL)];
    v2 = 0LL;
    if ( v40 )
    {
      v15 = *(_DWORD *)v40 & 0xE0000000;
      if ( v15 == 0x40000000 )
      {
        v18 = (char *)v40 + 8;
      }
      else
      {
        if ( v15 != 0x80000000 )
          goto LABEL_57;
        v18 = (char *)*((_QWORD *)v40 + 1);
      }
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)v45 = v18;
    v46 = *(ViewEventDispatcher **)(v9 + v55);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher * const>(
            (unsigned int)&v36,
            (int)v9 + (int)v55 + 8,
            (unsigned int)&v46,
            (unsigned int)v45,
            (__int64)&v44,
            (__int64)&v42,
            (__int64)&v43);
    v4 = v15;
    if ( v15 < 0 )
      goto LABEL_58;
LABEL_35:
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 28, &SRWLock);
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)v36 + 648LL))(
      v36,
      *(_QWORD *)(v17 + lParam),
      1LL);
    v21 = *((_QWORD *)this + 42);
    if ( v21 == *((_QWORD *)this + 44) )
    {
      v4 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             (__int64)this + 328,
             v21 + 1);
      if ( v4 < 0 )
        goto LABEL_60;
    }
    v22 = (unsigned __int64 *)(*((_QWORD *)this + 41) + 8 * (*((_QWORD *)this + 42))++);
    if ( !v22 || (*v22 = 0LL, v22 == &v36) )
    {
      v23 = v36;
    }
    else
    {
      *v22 = v36;
      v23 = 0LL;
      v36 = 0LL;
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v23 = v36;
    }
    LODWORD(v2) = ++*(_DWORD *)v35;
    v38 = 1;
    LODWORD(v39) = *(_DWORD *)(v17 + lParam);
    v54 = 0;
    if ( v23 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    if ( v65 )
    {
      v65 = 0;
      MsgRelease(*v64);
    }
LABEL_48:
    if ( v62 )
      ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(v59, v60, v61);
    if ( v54 )
    {
      v24 = v52;
      v25 = 2 * v53;
      v26 = v51;
      ViewManagerBridge::NavigateView(*(_QWORD *)(v51 + 440), *(unsigned int *)(*v52 + 16 * v53 + 8), 0LL);
      v27 = *(_DWORD *)(*v24 + 8 * v25 + 12);
      if ( v27 )
        ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(v26 + 440), v27);
      LODWORD(v2) = *(_DWORD *)v35;
    }
    v8 = (__int64 *)((char *)v8 + 1);
    v9 += 16LL;
    if ( (unsigned __int64)v8 >= v7 )
      goto LABEL_75;
    v5 = v68;
  }
  v46 = this;
  v17 = 24 * v2;
  *(_QWORD *)v45 = off_1801BD1F8[*(_QWORD *)(24 * v2 + lParam + 16) & -(__int64)(*(_QWORD *)(24 * v2 + lParam + 16) < 3uLL)];
  v2 = 0LL;
  if ( !v40 )
  {
    v19 = 0LL;
    goto LABEL_34;
  }
  v20 = *(_DWORD *)v40 & 0xE0000000;
  if ( v20 == 0x40000000 )
  {
    v19 = (wchar_t *)((char *)v40 + 8);
LABEL_34:
    v44 = v19;
    v43 = *(ViewEventDispatcher **)(v9 + v55);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher * const>(
            (unsigned int)&v36,
            (int)v9 + (int)v55 + 8,
            (unsigned int)&v43,
            (unsigned int)&v44,
            (__int64)v45,
            (__int64)&v46);
    v4 = v15;
    if ( v15 < 0 )
    {
      v28 = 3256LL;
      goto LABEL_63;
    }
    goto LABEL_35;
  }
  if ( v20 == 0x80000000 )
  {
    v19 = (wchar_t *)*((_QWORD *)v40 + 1);
    goto LABEL_34;
  }
  __debugbreak();
LABEL_60:
  v2 = 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xCBF,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v4);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_64:
  v29 = v36;
  if ( v36 )
  {
    v36 = v2;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
LABEL_67:
  if ( v65 != (_BYTE)v2 )
    MsgRelease(*v64);
LABEL_70:
  if ( v62 != (_BYTE)v2 )
    ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(v59, v60, v61);
  if ( v54 != (_BYTE)v2 )
  {
    v30 = v51;
    v31 = 2 * v53;
    v32 = v52;
    ViewManagerBridge::NavigateView(*(_QWORD *)(v51 + 440), *(unsigned int *)(*v52 + 16 * v53 + 8), 0LL);
    v33 = *(_DWORD *)(*v32 + 8 * v31 + 12);
    v2 = 0LL;
    if ( v33 )
      ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(v30 + 440), v33);
  }
LABEL_76:
  CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>(&v55);
LABEL_77:
  if ( lParam )
  {
    CoTaskMemFree((LPVOID)lParam);
    lParam = v2;
  }
  v48 = v2;
  v50 = v2;
  v70[0] = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v70);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v70);
  return (unsigned int)v4;
}

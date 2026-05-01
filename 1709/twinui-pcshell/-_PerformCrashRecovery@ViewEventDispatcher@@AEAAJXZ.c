/*
 * XREFs of ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0
 * Callers:
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18011FAC0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18011896C (-StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x180118AB4 (-Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x18011AFF8 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x180124F24 (--1-$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@URecover.c)
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForView@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForView@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForView@@@@@@QEAAJ_K@Z @ 0x180126318 (-EnsureCapacity@-$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecove.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129324 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAPEAVViewEventDispatcher@@@Z @ 0x18012941C (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGPEAVViewE.c)
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x180129878 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x180134800 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180134880 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewEventDispatcher::_PerformCrashRecovery(ViewEventDispatcher *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int64 v4; // r13
  _QWORD *v5; // rcx
  int v6; // edi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  char v10; // bl
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rax
  int AppUserModelIdForView; // eax
  unsigned __int16 **v14; // r8
  signed int v15; // eax
  CallerIdentity *v16; // rcx
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // r13
  char *v20; // rcx
  wchar_t *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r12
  unsigned int v30; // edx
  bool v32[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+64h] [rbp-A4h] BYREF
  struct MsgString *v38; // [rsp+68h] [rbp-A0h] BYREF
  int v39[2]; // [rsp+70h] [rbp-98h] BYREF
  ViewEventDispatcher *v40; // [rsp+78h] [rbp-90h] BYREF
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v42[2]; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+A0h] [rbp-68h] BYREF
  ViewEventDispatcher *v46; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t *v47; // [rsp+B0h] [rbp-58h] BYREF
  int v48[2]; // [rsp+B8h] [rbp-50h] BYREF
  LPARAM lParam; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  __int64 v52; // [rsp+D8h] [rbp-30h]
  __int128 v53; // [rsp+E0h] [rbp-28h]
  int *v54; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v55; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v56; // [rsp+100h] [rbp-8h]
  struct MsgString **v57; // [rsp+108h] [rbp+0h]
  char v58; // [rsp+110h] [rbp+8h]
  __int64 v59; // [rsp+118h] [rbp+10h]
  __int128 v60; // [rsp+120h] [rbp+18h]
  unsigned __int64 v61; // [rsp+130h] [rbp+28h]
  char v62; // [rsp+138h] [rbp+30h]
  __int128 v63; // [rsp+140h] [rbp+38h]
  int *v64; // [rsp+150h] [rbp+48h]
  char v65; // [rsp+158h] [rbp+50h]
  _QWORD v66[4]; // [rsp+168h] [rbp+60h] BYREF
  int v67; // [rsp+188h] [rbp+80h]
  int *v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  int v70; // [rsp+1A0h] [rbp+98h] BYREF
  char v71; // [rsp+1A4h] [rbp+9Ch]
  int v72; // [rsp+1C8h] [rbp+C0h] BYREF
  const char *v73; // [rsp+1D0h] [rbp+C8h]
  __int64 v74; // [rsp+1D8h] [rbp+D0h]
  char v75; // [rsp+1E0h] [rbp+D8h]
  __int64 v76; // [rsp+1E8h] [rbp+E0h]
  _BYTE v77[144]; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v78; // [rsp+280h] [rbp+178h]
  __int64 v79; // [rsp+288h] [rbp+180h]
  __int64 v80; // [rsp+290h] [rbp+188h]
  __int64 v81; // [rsp+298h] [rbp+190h]
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v59 = -2LL;
  v66[1] = 0LL;
  v66[2] = v66;
  v66[3] = 0LL;
  v67 = 0;
  v68 = &v72;
  v69 = &v70;
  v70 = 0;
  v71 = 0;
  v75 = 0;
  v72 = 0;
  v73 = "CrashRecovery";
  v74 = 0LL;
  v76 = 1LL;
  v78 = 0LL;
  v79 = 0LL;
  memset(v77, 0, sizeof(v77));
  v80 = 0LL;
  v81 = 0LL;
  v66[0] = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  ViewManagerInteropTraceLogging::CrashRecovery::StartActivity((ViewManagerInteropTraceLogging::CrashRecovery *)v66);
  lParam = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v2 = CTSimpleArray<RecoveredWindowForView,4294967294,CTPolicyCoTaskMem<RecoveredWindowForView>,CSimpleArrayStandardCompareHelper<RecoveredWindowForView>,CSimpleArrayStandardMergeHelper<RecoveredWindowForView>>::EnsureCapacity(
         &lParam,
         50LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCDE,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_70;
  }
  EnumWindows(ViewEventDispatcher::s_RecoverWindowsProc, (LPARAM)&lParam);
  v4 = v50;
  v56 = v50;
  v41 = 0LL;
  *(_QWORD *)v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 64);
  v41 = v5[20];
  v43 = v5[22];
  *(_QWORD *)v42 = v5[21];
  v44 = v5[23];
  v5[20] = 0LL;
  v5[22] = 0LL;
  v5[21] = 0LL;
  v5[23] = 0LL;
  v39[0] = 0;
  SHRegGetBOOL(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
    L"DisableAppRecoveryAfterShellRestart",
    v39);
  v6 = 0;
  v36 = 0;
  v7 = *(_QWORD *)v42;
  v55 = *(_QWORD *)v42;
  v8 = 0LL;
  if ( !*(_QWORD *)v42 )
  {
LABEL_68:
    ViewManagerInteropTraceLogging::CrashRecovery::Stop((ViewManagerInteropTraceLogging::CrashRecovery *)v66, v7, v6);
    v3 = 0;
    goto LABEL_69;
  }
  v9 = 0LL;
  while ( 1 )
  {
    *(_QWORD *)&v53 = this;
    *((_QWORD *)&v53 + 1) = &v41;
    v54 = (int *)v8;
    v60 = v53;
    v61 = v8;
    v10 = 1;
    v62 = 1;
    v37 = *(_DWORD *)(v9 + v41 + 8);
    LODWORD(v34) = 0;
    v33 = 0;
    *(_QWORD *)&v53 = &v37;
    *((_QWORD *)&v53 + 1) = &v34;
    v54 = &v33;
    v63 = v53;
    v64 = &v33;
    v65 = 1;
    if ( v39[0] )
    {
      ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(&v37, &v34, &v33);
LABEL_49:
      ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), *(unsigned int *)(v9 + v41 + 8), 0LL);
      v26 = *(_DWORD *)(v9 + v41 + 12);
      if ( v26 )
        ViewManagerBridge::CloseServerWindow(*((ViewManagerBridge **)this + 64), v26);
      goto LABEL_51;
    }
    v11 = 0LL;
    if ( !v4 )
    {
LABEL_47:
      v6 = v36;
      goto LABEL_48;
    }
    v12 = (_DWORD *)(lParam + 8);
    while ( *v12 != *(_DWORD *)(v9 + v41 + 8) )
    {
      ++v11;
      v12 += 6;
      if ( v11 >= v4 )
        goto LABEL_47;
    }
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                              *((ViewManagerBridge **)this + 64),
                              *(struct IUnknown **)(v9 + v41),
                              &v38);
    v3 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
      break;
    v57 = &v38;
    v58 = 1;
    v15 = (int)v38;
    if ( v38 )
    {
      v17 = *(_DWORD *)v38 & 0xE0000000;
      if ( v17 == 0x40000000 )
      {
        v16 = (struct MsgString *)((char *)v38 + 8);
      }
      else
      {
        if ( v17 != 0x80000000 )
        {
          __debugbreak();
LABEL_54:
          __debugbreak();
LABEL_55:
          v27 = 3376LL;
LABEL_60:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v27,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v15);
LABEL_61:
          v28 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
LABEL_64:
          MsgRelease(v38);
          goto LABEL_66;
        }
        v16 = (CallerIdentity *)*((_QWORD *)v38 + 1);
      }
    }
    else
    {
      v16 = 0LL;
    }
    v18 = IsLegacyApp(v16, v32, v14);
    v3 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD24,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_64;
    }
    v35 = 0LL;
    v19 = 24 * v11;
    if ( v32[0] )
    {
      v46 = this;
      v45 = 0;
      v47 = off_180214A18[*(_QWORD *)(lParam + v19 + 16) & -(__int64)(*(_QWORD *)(lParam + v19 + 16) < 3uLL)];
      if ( v38 )
      {
        v15 = *(_DWORD *)v38 & 0xE0000000;
        if ( v15 == 0x40000000 )
        {
          v20 = (char *)v38 + 8;
        }
        else
        {
          if ( v15 != 0x80000000 )
            goto LABEL_54;
          v20 = (char *)*((_QWORD *)v38 + 1);
        }
      }
      else
      {
        v20 = 0LL;
      }
      *(_QWORD *)v48 = v20;
      v40 = *(ViewEventDispatcher **)(v9 + v41);
      v15 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
              (unsigned int)&v35,
              (int)v9 + (int)v41 + 8,
              (unsigned int)&v40,
              (unsigned int)v48,
              (__int64)&v47,
              (__int64)&v45,
              (__int64)&v46);
      v3 = v15;
      if ( v15 < 0 )
        goto LABEL_55;
    }
    else
    {
      v40 = this;
      *(_QWORD *)v48 = off_180214A18[*(_QWORD *)(lParam + v19 + 16) & -(__int64)(*(_QWORD *)(lParam + v19 + 16) < 3uLL)];
      if ( v38 )
      {
        v22 = *(_DWORD *)v38 & 0xE0000000;
        if ( v22 == 0x40000000 )
        {
          v21 = (wchar_t *)((char *)v38 + 8);
        }
        else
        {
          if ( v22 != 0x80000000 )
          {
            __debugbreak();
LABEL_57:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0xD41,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v3);
            if ( v11 )
              ReleaseSRWLockExclusive((PSRWLOCK)v11);
            goto LABEL_61;
          }
          v21 = (wchar_t *)*((_QWORD *)v38 + 1);
        }
      }
      else
      {
        v21 = 0LL;
      }
      v47 = v21;
      v46 = *(ViewEventDispatcher **)(v9 + v41);
      v15 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher *>(
              (unsigned int)&v35,
              (int)v9 + (int)v41 + 8,
              (unsigned int)&v46,
              (unsigned int)&v47,
              (__int64)v48,
              (__int64)&v40);
      v3 = v15;
      if ( v15 < 0 )
      {
        v27 = 3386LL;
        goto LABEL_60;
      }
    }
    v11 = (unsigned __int64)this + 296;
    AcquireSRWLockExclusive((PSRWLOCK)this + 37);
    v40 = (ViewEventDispatcher *)((char *)this + 296);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v35 + 648LL))(v35, *(_QWORD *)(lParam + v19), 1LL);
    v23 = *((_QWORD *)this + 51);
    if ( v23 == *((_QWORD *)this + 53) )
    {
      v3 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
             (__int64)this + 400,
             v23 + 1);
      if ( v3 < 0 )
        goto LABEL_57;
    }
    v24 = (__int64 *)(*((_QWORD *)this + 50) + 8 * (*((_QWORD *)this + 51))++);
    if ( !v24 || (*v24 = 0LL, v24 == &v35) )
    {
      v25 = v35;
    }
    else
    {
      *v24 = v35;
      v25 = 0LL;
      v35 = 0LL;
    }
    if ( this != (ViewEventDispatcher *)-296LL )
    {
      ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
      v25 = v35;
    }
    v6 = ++v36;
    LODWORD(v34) = 1;
    v33 = *(_DWORD *)(lParam + v19);
    v10 = 0;
    v62 = 0;
    if ( v25 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v58 = 0;
    MsgRelease(v38);
    v7 = v55;
    v4 = v56;
LABEL_48:
    ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(&v37, &v34, &v33);
    if ( v10 )
      goto LABEL_49;
LABEL_51:
    ++v8;
    v9 += 16LL;
    if ( v8 >= v7 )
      goto LABEL_68;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xD1D,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)AppUserModelIdForView);
LABEL_66:
  ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(&v37, &v34, &v33);
  v29 = 2 * v8;
  ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), *(unsigned int *)(v41 + 8 * v29 + 8), 0LL);
  v30 = *(_DWORD *)(v41 + 8 * v29 + 12);
  if ( v30 )
    ViewManagerBridge::CloseServerWindow(*((ViewManagerBridge **)this + 64), v30);
LABEL_69:
  CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>(&v41);
LABEL_70:
  if ( lParam )
  {
    CoTaskMemFree((LPVOID)lParam);
    lParam = 0LL;
  }
  v50 = 0LL;
  v52 = 0LL;
  v66[0] = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v66);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v66);
  return (unsigned int)v3;
}

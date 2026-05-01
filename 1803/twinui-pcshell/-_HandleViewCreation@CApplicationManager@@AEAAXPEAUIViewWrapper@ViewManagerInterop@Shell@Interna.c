/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180111218 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x180044210 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006FE70 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18009C890 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800F0D9C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?GetRawBuffer@String@Internal@Windows@@QEBAPEBGPEAI@Z @ 0x1800F7574 (-GetRawBuffer@String@Internal@Windows@@QEBAPEBGPEAI@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180102024 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801034D4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180256628 (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct _GUID *a3)
{
  struct _GUID *v3; // r14
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdi
  unsigned int v6; // r15d
  RTL_SRWLOCK *v7; // rcx
  char v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r14
  int First; // ebx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  int v14; // edi
  unsigned int *v15; // rdx
  char *v16; // rcx
  unsigned __int64 v17; // rdi
  int v18; // eax
  struct IImmersiveApplicationInternal *v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r14
  int v23; // edi
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  WINBOOL v25; // r15d
  unsigned int *v26; // rdx
  const unsigned __int16 *RawBuffer; // r13
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  int (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v31; // rbx
  struct IImmersiveApplicationInternal *v32; // rcx
  struct IImmersiveMonitor *v33; // rbx
  const unsigned __int16 *v34; // rax
  struct IImmersiveMonitor *v35; // rcx
  struct IImmersiveApplicationInternal *v36; // r14
  const WCHAR *v37; // rdi
  int *v38; // rbx
  __int64 v39; // rbx
  int *v40; // r8
  const GUID *v41; // r9
  __int64 v42; // rbx
  DWORD v43; // edi
  LPVOID *v44; // rbx
  _QWORD *v45; // rcx
  HANDLE ProcessHeap; // rax
  signed __int64 v47; // rax
  struct _GUID *v48; // r15
  __int64 v49; // rcx
  volatile signed __int32 *v50; // rdx
  char v51; // di
  int v52; // eax
  __int64 v53; // rdx
  void *v54; // rdi
  HANDLE v55; // rax
  HANDLE v56; // rax
  __int64 v57; // rcx
  struct IImmersiveApplicationInternal *v58; // rcx
  const struct _GUID *UserData; // [rsp+28h] [rbp-D8h]
  char v60; // [rsp+40h] [rbp-C0h]
  struct IImmersiveApplicationInternal *v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-ACh] BYREF
  int v64; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID *v65; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveMonitor *v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  int v73; // [rsp+A0h] [rbp-60h]
  unsigned int v74; // [rsp+A8h] [rbp-58h] BYREF
  int v75; // [rsp+ACh] [rbp-54h] BYREF
  int v76; // [rsp+B0h] [rbp-50h] BYREF
  int v77; // [rsp+B4h] [rbp-4Ch] BYREF
  WINBOOL v78; // [rsp+B8h] [rbp-48h] BYREF
  DWORD CurrentThreadId; // [rsp+BCh] [rbp-44h] BYREF
  WINBOOL v80; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v82; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID v86; // [rsp+F0h] [rbp-10h] BYREF
  LPVOID v87; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v88; // [rsp+100h] [rbp+0h] BYREF
  __int64 v89; // [rsp+108h] [rbp+8h] BYREF
  int (__fastcall ***v90)(_QWORD, GUID *, __int64 *); // [rsp+110h] [rbp+10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v91; // [rsp+118h] [rbp+18h]
  struct IImmersiveApplicationInternal *v92; // [rsp+120h] [rbp+20h]
  char v93[8]; // [rsp+128h] [rbp+28h] BYREF
  const unsigned __int16 *v94; // [rsp+130h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+138h] [rbp+38h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v97; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v98; // [rsp+158h] [rbp+58h]
  unsigned __int64 v99; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v100; // [rsp+168h] [rbp+68h]
  __int64 v101; // [rsp+170h] [rbp+70h]
  __int64 v102; // [rsp+178h] [rbp+78h]
  __int64 v103; // [rsp+180h] [rbp+80h]
  void **v104; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v105[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  DWORD v107; // [rsp+1B0h] [rbp+B0h]
  int *v108; // [rsp+1B8h] [rbp+B8h]
  int *v109; // [rsp+1C0h] [rbp+C0h]
  int v110; // [rsp+1C8h] [rbp+C8h] BYREF
  char v111; // [rsp+1CCh] [rbp+CCh]
  char v112[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v113; // [rsp+1F0h] [rbp+F0h] BYREF
  const char *v114; // [rsp+1F8h] [rbp+F8h]
  LPVOID v115; // [rsp+200h] [rbp+100h]
  char v116; // [rsp+208h] [rbp+108h]
  __int64 v117; // [rsp+210h] [rbp+110h]
  char v118[144]; // [rsp+218h] [rbp+118h] BYREF
  LPVOID lpMem; // [rsp+2A8h] [rbp+1A8h]
  __int64 v120; // [rsp+2B0h] [rbp+1B0h]
  __int64 v121; // [rsp+2B8h] [rbp+1B8h]
  void *v122; // [rsp+2C0h] [rbp+1C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v124; // [rsp+2E0h] [rbp+1E0h]
  int v125; // [rsp+2E8h] [rbp+1E8h]
  int v126; // [rsp+2ECh] [rbp+1ECh]
  DWORD *p_CurrentThreadId; // [rsp+2F0h] [rbp+1F0h]
  __int64 v128; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+300h] [rbp+200h] BYREF

  v101 = -2LL;
  v3 = a3;
  v65 = a3;
  v4 = a2;
  v91 = a2;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)v4 + 56LL))(
         v4,
         &string) < 0 )
    goto LABEL_142;
  v66 = -1LL;
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)v4 + 576LL))(
    v4,
    &v66);
  v64 = 0;
  v6 = 0;
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v69 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v4)(
      v4,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      &v69);
    if ( (*(int (__fastcall **)(__int64, const WCHAR *, unsigned int *))(*(_QWORD *)v69 + 80LL))(
           v69,
           L"LastSetGlomIdForReconstitution",
           &v74) >= 0 )
      v6 = v74;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
  }
  v61 = 0LL;
  v8 = 0;
  v60 = 0;
  AcquireSRWLockExclusive(v7);
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    v97 = v66;
    v98 = v6;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v97, &v61);
    v62 = First;
  }
  else
  {
    v9 = v66;
    v61 = 0LL;
    v102 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    if ( *((_QWORD *)this + 79) )
    {
      while ( 1 )
      {
        v88 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v88);
        v82 = *(_QWORD *)(*((_QWORD *)this + 78) + 8 * v11);
        Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v82);
        v14 = -1;
        v81 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v82, &v81) >= 0 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, int *))(*(_QWORD *)v81 + 32LL))(v81, v9, &v75);
          v14 = (v75 != 0) - 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v81);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v82);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v88);
        if ( !v14 )
          break;
        if ( (unsigned __int64)++v11 >= *((_QWORD *)this + 79) )
          goto LABEL_8;
      }
      v10 = v11;
      First = 0;
    }
    else
    {
LABEL_8:
      First = -2147319765;
    }
    if ( First >= 0 )
    {
      v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 78)
                                                                                                + 8 * v10);
      First = (**v13)(v13, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v61);
    }
    v62 = First;
    v4 = v91;
    v8 = 0;
    v3 = v65;
  }
  if ( First >= 0 )
  {
    v8 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v61 + 408LL))(v61) == 0;
    v60 = v8;
    UserData = v3;
    First = CApplicationManager::_AddViewToGlom(this, v4, v61, 1LL, 0LL);
    v62 = First;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( First >= 0 )
  {
    v48 = v65;
    goto LABEL_135;
  }
  fPending = -1;
  v16 = (char *)this + 192;
  v17 = 0LL;
  if ( !this )
    v16 = 0LL;
  v72 = 0LL;
  v73 = -2147467259;
  (*(void (__fastcall **)(char *, GUID *, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL))(
    v16,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v72);
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 40LL))(v72);
  v73 = v18;
  if ( v18 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    v18 = v73;
  }
  v64 = v18;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    v99 = v66;
    v100 = v6;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v99, &v61);
    v62 = First;
  }
  else
  {
    v19 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v66;
    v61 = 0LL;
    v103 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( *((_QWORD *)this + 79) )
    {
      while ( 1 )
      {
        v89 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v89);
        v84 = *(_QWORD *)(*((_QWORD *)this + 78) + 8 * v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v84);
        v23 = -1;
        v83 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v84, &v83) >= 0 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, int *))(*(_QWORD *)v83 + 32LL))(v83, v20, &v76);
          v23 = (v76 != 0) - 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v83);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v84);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v89);
        if ( !v23 )
          break;
        ++v22;
        v17 = 0LL;
        if ( v22 >= *((_QWORD *)this + 79) )
          goto LABEL_34;
      }
      v21 = v22;
      v17 = 0LL;
      First = 0;
    }
    else
    {
LABEL_34:
      First = -2147319765;
    }
    if ( First >= 0 )
    {
      v24 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 78)
                                                                                                + 8 * v21);
      First = (**v24)(v24, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v61);
    }
    v62 = First;
    v8 = v60;
  }
  if ( First >= 0 )
  {
    v25 = 1;
    v8 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v61 + 408LL))(v61) == 0;
    goto LABEL_63;
  }
  if ( First != -2147319765 )
  {
    v25 = fPending;
    goto LABEL_63;
  }
  v70 = 0LL;
  First = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(**((_QWORD **)this + 69)
                                                                                                 + 72LL))(
            *((_QWORD *)this + 69),
            0LL,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &v70);
  v62 = First;
  if ( First >= 0 )
  {
    if ( !v6 )
    {
      RawBuffer = Windows::Internal::String::GetRawBuffer((Windows::Internal::String *)&string, v26);
      v6 = 1;
      v28 = *((_QWORD *)this + 83);
      if ( v28 )
      {
        v29 = 0LL;
        while ( 1 )
        {
          v68 = 0LL;
          v90 = **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v29 + *((_QWORD *)this + 82));
          v30 = v90;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v90);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v68);
          LOBYTE(v30) = (**v30)(v30, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v68) >= 0;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v90);
          if ( (_BYTE)v30 )
          {
            if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v68 + 88LL))(
                   v68,
                   RawBuffer,
                   &v77) >= 0
              && v77 )
            {
              break;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v68);
          ++v17;
          v29 += 40LL;
          if ( v17 >= v28 )
            goto LABEL_54;
        }
        v31 = *((_QWORD *)this + 82) + 40 * v17;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v68);
        if ( v31 )
        {
          v6 = *(_DWORD *)(v31 + 32);
          *(_DWORD *)(v31 + 32) = v6 + 1;
        }
      }
    }
LABEL_54:
    v32 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v70;
    v34 = Windows::Internal::String::GetRawBuffer((Windows::Internal::String *)&string, v26);
    First = CApplicationManager::_CreateImmersiveApp(this, v34, v66, v6, v33, UserData, (void **)&v61);
    v62 = First;
    if ( First >= 0 )
    {
      v25 = 0;
      v8 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr);
      goto LABEL_60;
    }
    v8 = v60;
  }
  v25 = fPending;
LABEL_60:
  v35 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v35 + 16LL))(v35);
  }
LABEL_63:
  if ( First < 0 )
  {
    v48 = v65;
    goto LABEL_130;
  }
  v36 = v61;
  v37 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v61 + 24LL))(v61);
  v105[0] = 0LL;
  v105[1] = &v104;
  v106 = 0LL;
  v107 = 0;
  v108 = &v113;
  v109 = &v110;
  v110 = 0;
  v111 = 0;
  v116 = 0;
  v113 = 0;
  v114 = "AddWindowToGlom";
  v115 = 0LL;
  v117 = 1LL;
  lpMem = 0LL;
  memset_0(v118, 0, sizeof(v118));
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v104 = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  v38 = v109;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v38 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v38 + 2));
  *v38 = 1;
  v86 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v78, &v86) && v78 )
  {
    v86 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v39 = *((_QWORD *)v86 + 1);
  if ( *(_DWORD *)v39 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v128 = 4LL;
    TlgCreateWsz(&pDesc, v37);
    v40 = v109;
    if ( !*((_BYTE *)v109 + 4) || _TlgGuidIsZero((const struct _GUID *)(v109 + 6)) )
      v41 = 0LL;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180385DE5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    v123.Ptr = *(_QWORD *)(v39 + 8);
    v123.Size = *(unsigned __int16 *)v123.Ptr;
    v123.Reserved = 2;
    v124 = &unk_180385DF0;
    v125 = 50;
    v126 = 1;
    EventWriteTransfer(*(_QWORD *)(v39 + 32), &EventDescriptor, (LPCGUID)(v40 + 2), v41, 4u, &v123);
  }
  if ( !v107 )
  {
    v42 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_88;
    v43 = GetCurrentThreadId();
    v44 = (LPVOID *)(v42 + 8 * (v43 % 0xAuLL));
    v45 = *v44;
    if ( *v44 )
    {
      while ( *((_DWORD *)v45 + 2) != v43 )
      {
        v45 = (_QWORD *)v45[2];
        if ( !v45 )
          goto LABEL_83;
      }
      goto LABEL_89;
    }
LABEL_83:
    ProcessHeap = GetProcessHeap();
    v45 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( v45 )
    {
      *v45 = 0LL;
      *((_DWORD *)v45 + 2) = v43;
      v45[2] = 0LL;
      _m_prefetchw(v44);
      do
      {
        v47 = (signed __int64)*v44;
        v45[2] = *v44;
      }
      while ( v47 != _InterlockedCompareExchange64((volatile signed __int64 *)v44, (signed __int64)v45, v47) );
    }
    else
    {
LABEL_88:
      v45 = 0LL;
    }
LABEL_89:
    v105[0] = v45;
    if ( v45 )
    {
      v106 = *v45;
      *v45 = v105;
      v107 = GetCurrentThreadId();
    }
  }
  v71 = 0LL;
  First = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 71) + 32LL))(
            *((_QWORD *)this + 71),
            0LL,
            &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
            &v71);
  if ( First < 0
    || (First = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, WINBOOL, _QWORD))(*(_QWORD *)v71 + 48LL))(
                  v71,
                  v36,
                  0LL,
                  v91,
                  v25,
                  0LL),
        First < 0)
    || v25 )
  {
    v48 = v65;
  }
  else
  {
    v92 = v36;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v36 + 8LL))(v36);
    v48 = v65;
    First = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp((CApplicationManager *)((char *)this + 616));
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v36 + 16LL))(v36);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v104, First);
  v49 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  v104 = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  v50 = (volatile signed __int32 *)v122;
  if ( !v122 )
    goto LABEL_106;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v104,
    &SRWLock);
  v50 = (volatile signed __int32 *)v122;
  if ( v122 && *(_DWORD *)v122 == 1 )
  {
    v51 = 1;
  }
  else
  {
    v51 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v122);
    v50 = (volatile signed __int32 *)v122;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v50 = (volatile signed __int32 *)v122;
  }
  if ( v51 )
  {
LABEL_106:
    if ( *v109 == 1 )
    {
      v52 = v109[21];
      v53 = 2147942974LL;
      if ( v52 < 0 )
        v53 = (unsigned int)v52;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v109,
        v53,
        v93);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v104);
      v50 = (volatile signed __int32 *)v122;
    }
  }
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50, 0xFFFFFFFF) == 1 )
    {
      v54 = v122;
      if ( v122 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v122 + 8);
        operator delete(v54, (const struct std::nothrow_t *)0x100);
      }
    }
    v122 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v55 = GetProcessHeap();
      HeapFree(v55, 0, lpMem);
    }
    lpMem = 0LL;
    v120 = 0LL;
  }
  if ( v116 )
  {
    v56 = GetProcessHeap();
    HeapFree(v56, 0, v115);
    v116 = 0;
  }
  v115 = 0LL;
  if ( v110 == 1 )
  {
    v110 = 2;
    v87 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v80, &v87) && v80 )
    {
      v87 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v87 + 1), v112);
  }
  v110 = 3;
  if ( v107 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v105);
  v62 = First;
LABEL_130:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72);
  v57 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  if ( First >= 0 )
  {
LABEL_135:
    if ( v8 )
    {
      First = CApplicationManager::HandleInitialPosition(
                (CApplicationManager *)((char *)this + 240),
                v61,
                (struct IUnknown *)v48);
      v62 = First;
    }
    if ( First >= 0 && v64 >= 0 )
      goto LABEL_140;
  }
  v94 = Windows::Internal::String::GetRawBuffer((Windows::Internal::String *)&string, v15);
  CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
    &v94,
    &v66,
    &v62,
    &v64);
LABEL_140:
  v58 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v58 + 16LL))(v58);
  }
LABEL_142:
  if ( string )
    WindowsDeleteString(string);
}

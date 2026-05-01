/*
 * XREFs of ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18003C894 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F5B4 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$Start@AEAU_GUID@@AEAUtagPOINT@@@DragEnter@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@AEAUtagPOINT@@@Z @ 0x18004401C (--$Start@AEAU_GUID@@AEAUtagPOINT@@@DragEnter@CAppViewManagerTelemetry@@SA-AV01@AEAU_GUID@@AEAUta.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAppViewManager::DragEnter(
        IUnknown **this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        struct tagPOINT a4)
{
  HRESULT v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  RTL_SRWLOCK *v10; // rbx
  int v11; // eax
  RTL_SRWLOCK *v12; // rbx
  IUnknown *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  PSRWLOCK v17; // rcx
  __int64 v18; // rcx
  PSRWLOCK v19; // rcx
  __int64 v20; // r9
  int ViewForSwitchInternal; // eax
  __int64 v22; // rdi
  RTL_SRWLOCK *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r15
  HRESULT v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  RTL_SRWLOCK *v31; // rbx
  int v32; // eax
  PSRWLOCK v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  PSRWLOCK v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  void *v39; // rcx
  PSRWLOCK v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B0h] BYREF
  int v46[2]; // [rsp+58h] [rbp-A8h]
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v48[3]; // [rsp+64h] [rbp-9Ch] BYREF
  struct _GUID v49; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v50; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v51[2]; // [rsp+88h] [rbp-78h] BYREF
  char v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v56[40]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v53 = -2LL;
  v50 = a4;
  CAppViewManagerTelemetry::DragEnter::Start<_GUID &,tagPOINT &>((CAppViewManagerTelemetry::DragEnter *)v56, a2, &v50);
  ppvOut = 0LL;
  v7 = IUnknown_QueryService(
         this[8],
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 851LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_75;
  }
  v7 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v47);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 855LL;
    goto LABEL_5;
  }
  if ( v47 )
  {
    v8 = -2147019873;
    goto LABEL_75;
  }
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)v46 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v49 = *a2;
  v11 = ((__int64 (__fastcall *)(IUnknown *, struct _GUID *, _DWORD *))this[16]->lpVtbl[1].QueryInterface)(
          this[16],
          &v49,
          v48);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x360,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    if ( v10 )
      ReleaseSRWLockShared(v10);
    goto LABEL_75;
  }
  if ( v10 )
    ReleaseSRWLockShared(v10);
  if ( v48[0] )
    goto LABEL_74;
  v43 = 0LL;
  v41 = 0LL;
  ((void (__fastcall *)(IUnknown *, GUID *, PSRWLOCK *))this[8]->lpVtbl->QueryInterface)(
    this[8],
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v41);
  v42 = 0LL;
  (*((void (__fastcall **)(PSRWLOCK, GUID *, GUID *, __int64 *))v41->Ptr + 3))(
    v41,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v42);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)v46 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = this[8];
  v14 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = ((__int64 (__fastcall *)(IUnknown *, const unsigned __int16 *, __int64 *))v13->lpVtbl[6].Release)(v13, a3, &v43);
  v8 = v15;
  if ( v15 >= 0 )
  {
    if ( v12 )
      ReleaseSRWLockExclusive(v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 48LL))(v42);
    v18 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v19->Ptr + 2))(v19);
    }
    *(_QWORD *)&v49.Data1 = this - 6;
    *(_QWORD *)v49.Data4 = &v43;
    wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___(v51, &v49);
    *(_QWORD *)v46 = 0LL;
    ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(v20);
    v8 = ViewForSwitchInternal;
    v22 = *(_QWORD *)v46;
    if ( ViewForSwitchInternal < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x380,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)ViewForSwitchInternal);
LABEL_58:
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v52 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v51[0] + 112LL) + 168LL))(
          *(_QWORD *)(v51[0] + 112LL),
          *(_QWORD *)v51[1]);
      goto LABEL_62;
    }
    v23 = CApplicationManagerUtility::g_pIAMGlobals;
    v41 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 384LL))(v22);
    if ( !v25 )
    {
      v8 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)0x8000FFFFLL);
      if ( v23 )
        ReleaseSRWLockExclusive(v23);
      goto LABEL_58;
    }
    LOBYTE(v24) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 552LL))(v43, v24);
    if ( v23 )
      ReleaseSRWLockExclusive(v23);
    v44 = 0LL;
    string = 0LL;
    v26 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v26 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
      __debugbreak();
    }
    v27 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            string,
            &v44);
    v8 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x395,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v27);
LABEL_56:
      v34 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      goto LABEL_58;
    }
    v42 = v44;
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
    v28 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v42,
            v25,
            0);
    v8 = v28;
    if ( v28 < 0 )
    {
      v29 = 920LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v28);
LABEL_54:
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      goto LABEL_56;
    }
    v28 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64))this[8]->lpVtbl[6].QueryInterface)(this[8], v43, v44);
    v8 = v28;
    if ( v28 < 0 )
    {
      v29 = 924LL;
      goto LABEL_46;
    }
    v41 = 0LL;
    v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, PSRWLOCK *))v43)(
            v43,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            &v41);
    v8 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3A1,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v30);
LABEL_52:
      v33 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v33->Ptr + 2))(v33);
      }
      goto LABEL_54;
    }
    v31 = CApplicationManagerUtility::g_pIAMGlobals;
    *(_QWORD *)&v49.Data1 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(struct _GUID *)&hstringHeader.Reserved.Reserved1 = *a2;
    v32 = ((__int64 (__fastcall *)(IUnknown *, HSTRING_HEADER *, PSRWLOCK))this[16]->lpVtbl[1].AddRef)(
            this[16],
            &hstringHeader,
            v41);
    v8 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3A3,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v32);
      if ( v31 )
        ReleaseSRWLockExclusive(v31);
      goto LABEL_52;
    }
    if ( v31 )
      ReleaseSRWLockExclusive(v31);
    v36 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v36->Ptr + 2))(v36);
    }
    v52 = 0;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    v37 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v38 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
LABEL_74:
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v56, 0);
    v8 = 0;
    goto LABEL_75;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x36F,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v15);
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 48LL))(v42);
  v16 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*((void (__fastcall **)(PSRWLOCK))v17->Ptr + 2))(v17);
  }
LABEL_62:
  v35 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
LABEL_75:
  v39 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v56[0] = &CAppViewManagerTelemetry::DragEnter::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v56);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v56);
  return v8;
}

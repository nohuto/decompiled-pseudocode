/*
 * XREFs of ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003F890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18003D94C (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180040F6C (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?StartActivity@DragEnter@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1800478E8 (-StartActivity@DragEnter@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  int ViewForSwitchInternal; // eax
  __int64 v21; // rdi
  RTL_SRWLOCK *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r15
  HRESULT v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  RTL_SRWLOCK *v30; // rbx
  int v31; // eax
  PSRWLOCK v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  PSRWLOCK v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  void *v38; // rcx
  PSRWLOCK v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B0h] BYREF
  int v45[2]; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v47[3]; // [rsp+64h] [rbp-9Ch] BYREF
  struct _GUID v48; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  struct _GUID v51; // [rsp+90h] [rbp-70h]
  char v52; // [rsp+A0h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v55[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v56; // [rsp+F0h] [rbp-10h]
  int *v57; // [rsp+F8h] [rbp-8h]
  int *v58; // [rsp+100h] [rbp+0h]
  int v59; // [rsp+108h] [rbp+8h] BYREF
  char v60; // [rsp+10Ch] [rbp+Ch]
  int v61; // [rsp+130h] [rbp+30h] BYREF
  const char *v62; // [rsp+138h] [rbp+38h]
  __int64 v63; // [rsp+140h] [rbp+40h]
  char v64; // [rsp+148h] [rbp+48h]
  __int64 v65; // [rsp+150h] [rbp+50h]
  _BYTE v66[144]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v67; // [rsp+1E8h] [rbp+E8h]
  __int64 v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  __int64 v70; // [rsp+200h] [rbp+100h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v50 = -2LL;
  v49 = a4;
  v55[1] = 0LL;
  v55[2] = v55;
  v55[3] = 0LL;
  v56 = 0;
  v57 = &v61;
  v58 = &v59;
  v59 = 0;
  v60 = 0;
  v64 = 0;
  v61 = 0;
  v62 = "DragEnter";
  v63 = 0LL;
  v65 = 1LL;
  v67 = 0LL;
  v68 = 0LL;
  memset(v66, 0, sizeof(v66));
  v69 = 0LL;
  v70 = 0LL;
  v55[0] = &CAppViewManagerTelemetry::DragEnter::`vftable';
  CAppViewManagerTelemetry::DragEnter::StartActivity((CAppViewManagerTelemetry::DragEnter *)v55, a2, &v49);
  ppvOut = 0LL;
  v7 = IUnknown_QueryService(
         this[8],
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 858LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_74;
  }
  v7 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v46);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 862LL;
    goto LABEL_5;
  }
  if ( v46 )
  {
    v8 = -2147019873;
    goto LABEL_74;
  }
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)v45 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v48 = *a2;
  v11 = ((__int64 (__fastcall *)(IUnknown *, struct _GUID *, _DWORD *))this[16]->lpVtbl[1].QueryInterface)(
          this[16],
          &v48,
          v47);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x367,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    if ( v10 )
      ReleaseSRWLockShared(v10);
    goto LABEL_74;
  }
  if ( v10 )
    ReleaseSRWLockShared(v10);
  if ( v47[0] )
    goto LABEL_73;
  v41 = 0LL;
  v40 = 0LL;
  ((void (__fastcall *)(IUnknown *, GUID *, PSRWLOCK *))this[8]->lpVtbl->QueryInterface)(
    this[8],
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v40);
  v42 = 0LL;
  (*((void (__fastcall **)(PSRWLOCK, GUID *, GUID *, __int64 *))v40->Ptr + 3))(
    v40,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v42);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_QWORD *)v45 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = this[8];
  v14 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = ((__int64 (__fastcall *)(IUnknown *, const unsigned __int16 *, __int64 *))v13->lpVtbl[6].Release)(v13, a3, &v41);
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
    v19 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v19->Ptr + 2))(v19);
    }
    *(_QWORD *)&v48.Data1 = this - 8;
    *(_QWORD *)v48.Data4 = &v41;
    v51 = v48;
    v52 = 1;
    *(_QWORD *)v45 = 0LL;
    ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(this - 8);
    v8 = ViewForSwitchInternal;
    v21 = *(_QWORD *)v45;
    if ( ViewForSwitchInternal < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x387,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)ViewForSwitchInternal);
LABEL_58:
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      ((void (__fastcall *)(IUnknown *, __int64))this[8]->lpVtbl[7].QueryInterface)(this[8], v41);
      goto LABEL_61;
    }
    v22 = CApplicationManagerUtility::g_pIAMGlobals;
    v40 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 384LL))(v21);
    if ( !v24 )
    {
      v8 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x390,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)0x8000FFFFLL);
      if ( v22 )
        ReleaseSRWLockExclusive(v22);
      goto LABEL_58;
    }
    LOBYTE(v23) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 552LL))(v41, v23);
    if ( v22 )
      ReleaseSRWLockExclusive(v22);
    v43 = 0LL;
    string = 0LL;
    v25 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v25 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
      __debugbreak();
    }
    v26 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            string,
            &v43);
    v8 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x39C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v26);
LABEL_56:
      v33 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      goto LABEL_58;
    }
    v42 = v43;
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
    v27 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v42,
            v24,
            0);
    v8 = v27;
    if ( v27 < 0 )
    {
      v28 = 927LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v27);
LABEL_54:
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      goto LABEL_56;
    }
    v27 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64))this[8]->lpVtbl[6].QueryInterface)(this[8], v41, v43);
    v8 = v27;
    if ( v27 < 0 )
    {
      v28 = 931LL;
      goto LABEL_46;
    }
    v40 = 0LL;
    v29 = (**(__int64 (__fastcall ***)(__int64, GUID *, PSRWLOCK *))v41)(
            v41,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            &v40);
    v8 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3A8,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v29);
LABEL_52:
      v32 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v32->Ptr + 2))(v32);
      }
      goto LABEL_54;
    }
    v30 = CApplicationManagerUtility::g_pIAMGlobals;
    *(_QWORD *)&v48.Data1 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(struct _GUID *)&hstringHeader.Reserved.Reserved1 = *a2;
    v31 = ((__int64 (__fastcall *)(IUnknown *, HSTRING_HEADER *, PSRWLOCK))this[16]->lpVtbl[1].AddRef)(
            this[16],
            &hstringHeader,
            v40);
    v8 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3AA,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v31);
      if ( v30 )
        ReleaseSRWLockExclusive(v30);
      goto LABEL_52;
    }
    if ( v30 )
      ReleaseSRWLockExclusive(v30);
    v35 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*((void (__fastcall **)(PSRWLOCK))v35->Ptr + 2))(v35);
    }
    v52 = 0;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    v36 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v37 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
LABEL_73:
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v55, 0);
    v8 = 0;
    goto LABEL_74;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x376,
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
  v17 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*((void (__fastcall **)(PSRWLOCK))v17->Ptr + 2))(v17);
  }
LABEL_61:
  v34 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
LABEL_74:
  v38 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v55[0] = &CAppViewManagerTelemetry::DragEnter::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v55);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v55);
  return v8;
}

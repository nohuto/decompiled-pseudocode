/*
 * XREFs of ?DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x18003E970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     wil::details::ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___::_ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___ @ 0x1800436FC (wil--details--ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___--_ScopeExitFn__lambda_beb7.c)
 *     ??$Start@AEAU_GUID@@AEAUtagPOINT@@@DragComplete@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@AEAUtagPOINT@@@Z @ 0x1800441C4 (--$Start@AEAU_GUID@@AEAUtagPOINT@@@DragComplete@CAppViewManagerTelemetry@@SA-AV01@AEAU_GUID@@AEA.c)
 *     wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x180044290 (wil--ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::ShellPositionerCallback__lambda_3e8e46518012e8fc4170372149fee511_____lambda_3e8e46518012e8fc4170372149fee511__const_&___ptr64_ @ 0x1800458B4 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--ShellPositionerCallback__lambda_3e8e465180.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18017F788 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAppViewManager::DragComplete(CAppViewManager *this, struct _GUID *a2, struct tagPOINT a3)
{
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IUnknown *v11; // rcx
  struct IApplicationView **v12; // r9
  int ViewForApplication; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  IUnknown *v18; // rbx
  __int64 *v19; // rax
  HRESULT Service; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  PSRWLOCK *v24; // rax
  PSRWLOCK v25; // rbx
  PSRWLOCK v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct IUnknown *v31; // rcx
  RTL_SRWLOCK *v32; // rbx
  __int64 v33; // rcx
  struct IUnknown *v34; // rcx
  __int64 v35; // rcx
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v43; // [rsp+70h] [rbp-90h]
  PSRWLOCK v44; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v45; // [rsp+88h] [rbp-78h] BYREF
  PSRWLOCK v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  _BYTE v48[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v49[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v47 = -2LL;
  v45 = a3;
  CAppViewManagerTelemetry::DragComplete::Start<_GUID &,tagPOINT &>(
    (CAppViewManagerTelemetry::DragComplete *)v49,
    a2,
    &v45);
  v40 = 0LL;
  *(_QWORD *)&v42.Data1 = (char *)this - 48;
  *(_QWORD *)v42.Data4 = a2;
  v43 = &v40;
  wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___(v48, &v42);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  v44 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v42 = *a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, __int64 *))(**((_QWORD **)this + 16) + 24LL))(
         *((_QWORD *)this + 16),
         &v42,
         &v37);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3DB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    goto LABEL_50;
  }
  if ( (_DWORD)v37 )
  {
    v38 = 0LL;
    v8 = *((_QWORD *)this + 16);
    v42 = *a2;
    (*(void (__fastcall **)(__int64, struct _GUID *, struct IUnknown **))(*(_QWORD *)v8 + 56LL))(v8, &v42, &v38);
    v9 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v38->lpVtbl->QueryInterface)(
      v38,
      &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
      &v40);
    v10 = *((_QWORD *)this + 16);
    v42 = *a2;
    (*(void (__fastcall **)(__int64, struct _GUID *, __int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, &v42, 1LL, 1LL);
    v11 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
    }
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( !v40 )
    goto LABEL_49;
  v38 = 0LL;
  (**(void (__fastcall ***)(__int64, GUID *, struct IUnknown **))v40)(
    v40,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v38);
  v41 = 0LL;
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *((IUnknown **)this + 8),
                         v38,
                         (struct IImmersiveApplication *)&v41,
                         v12);
  v7 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    v16 = v41;
    v17 = v41;
    *(_QWORD *)&v42.Data1 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
      v16 = v41;
    }
    *(struct tagPOINT *)v42.Data4 = v45;
    v18 = (IUnknown *)*((_QWORD *)this + 8);
    v37 = 0LL;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v37);
    Service = IUnknown_QueryService(
                v18,
                &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                (void **)v19);
    v7 = Service;
    if ( Service >= 0 )
    {
      v39 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, v16, &v39);
      v7 = v22;
      if ( v22 >= 0 )
      {
        v24 = (PSRWLOCK *)Microsoft::WRL::Details::Make_ShellPositionerHelpers::ShellPositionerCallback__lambda_3e8e46518012e8fc4170372149fee511_____lambda_3e8e46518012e8fc4170372149fee511__const_____ptr64_(
                            &v44,
                            &v42);
        v25 = *v24;
        v46 = *v24;
        *v24 = 0LL;
        v26 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*((void (__fastcall **)(PSRWLOCK))v26->Ptr + 2))(v26);
        }
        if ( v25 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, PSRWLOCK))(*(_QWORD *)v39 + 24LL))(v39, v25);
          v7 = v27;
          if ( v27 >= 0 )
          {
            (*((void (__fastcall **)(PSRWLOCK))v25->Ptr + 2))(v25);
            v28 = v39;
            if ( v39 )
            {
              v39 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            v29 = v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
            v7 = 0;
            goto LABEL_35;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x5D,
            (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
            (const char *)(unsigned int)v27);
          (*((void (__fastcall **)(PSRWLOCK))v25->Ptr + 2))(v25);
        }
        else
        {
          v7 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5A,
            (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x56,
          (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)(unsigned int)v22);
      }
      v23 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x52,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)Service);
    }
    v21 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
LABEL_35:
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v7 < 0 )
    {
      v14 = (unsigned int)v7;
      v15 = 1019LL;
      goto LABEL_39;
    }
    v32 = CApplicationManagerUtility::g_pIAMGlobals;
    v46 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 552LL))(v40, 0LL);
    if ( v32 )
      ReleaseSRWLockExclusive(v32);
    v33 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v34->lpVtbl->Release)(v34);
    }
LABEL_49:
    v48[24] = 0;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v49, 0);
    v7 = 0;
    goto LABEL_50;
  }
  v14 = (unsigned int)ViewForApplication;
  v15 = 1007LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)v14);
  v30 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
  }
LABEL_50:
  wil::details::ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___::_ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___(v48);
  v35 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v49[0] = &CAppViewManagerTelemetry::DragComplete::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v49);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v49);
  return (unsigned int)v7;
}

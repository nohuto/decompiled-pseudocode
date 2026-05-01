/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007A7E4 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::ShellPositionerCallback__lambda_c9be53302e1e2bc6130e2ee5b2941598_____lambda_c9be53302e1e2bc6130e2ee5b2941598__const_&___ptr64_ @ 0x18007E6F8 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--ShellPositionerCallback__lambda_c9be53302e.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  __int64 *Iam; // rax
  IUnknown *v7; // rbx
  __int64 *v8; // rax
  HRESULT Service; // eax
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  CWin32ApplicationView *v22; // [rsp+30h] [rbp-20h] BYREF
  __int128 v23; // [rsp+38h] [rbp-18h]
  void **v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  Iam = ApplicationViewManagement::CGlobals::GetIam(&v29);
  v22 = this;
  v23 = (__int128)*a2;
  v24 = a3;
  v7 = (IUnknown *)*Iam;
  v26 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v26);
  Service = IUnknown_QueryService(
              v7,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v8);
  v10 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)Service);
LABEL_3:
    v11 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_20;
  }
  v27 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, CWin32ApplicationView *, __int64 *))(*(_QWORD *)v26 + 48LL))(
          v26,
          this,
          &v27);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x56,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v12);
    goto LABEL_7;
  }
  v14 = (__int64 *)Microsoft::WRL::Details::Make_ShellPositionerHelpers::ShellPositionerCallback__lambda_c9be53302e1e2bc6130e2ee5b2941598_____lambda_c9be53302e1e2bc6130e2ee5b2941598__const_____ptr64_(
                     &v28,
                     &v22);
  v15 = *v14;
  *v14 = 0LL;
  v16 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( !v15 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_7;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL))(v27, v15);
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_7:
    v13 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v18 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v10 = 0;
LABEL_20:
  v20 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x197,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}

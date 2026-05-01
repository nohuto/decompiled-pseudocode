/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180073C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::ShellPositionerCallback__lambda_a33b1cc935c047b1cdf49062be7e119b_____lambda_a33b1cc935c047b1cdf49062be7e119b__const_&___ptr64_ @ 0x180075CE8 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--ShellPositionerCallback__lambda_a33b1cc935.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  __int64 v2; // r8
  IUnknown **GITSitePtr; // rax
  IUnknown *v4; // rbx
  struct IApplicationView *v5; // rsi
  __int64 *v6; // rax
  HRESULT Service; // eax
  int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v22; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-18h] BYREF
  char v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationView **v27; // [rsp+80h] [rbp+30h] BYREF
  struct IApplicationView *v28; // [rsp+88h] [rbp+38h] BYREF
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+98h] [rbp+48h] BYREF

  v28 = a2;
  v23[1] = -2LL;
  v27 = &v28;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___(&v24, &v27, this);
  GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr(v2 - 96, &v22);
  v23[0] = &v28;
  v4 = *GITSitePtr;
  v5 = v28;
  v27 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v27);
  Service = IUnknown_QueryService(
              v4,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v6);
  v8 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)Service);
LABEL_3:
    v9 = (__int64)v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_20;
  }
  v29 = 0LL;
  v10 = (*((__int64 (__fastcall **)(struct IApplicationView **, struct IApplicationView *, __int64 *))*v27 + 6))(
          v27,
          v5,
          &v29);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x56,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v10);
    goto LABEL_7;
  }
  v12 = (__int64 *)Microsoft::WRL::Details::Make_ShellPositionerHelpers::ShellPositionerCallback__lambda_a33b1cc935c047b1cdf49062be7e119b_____lambda_a33b1cc935c047b1cdf49062be7e119b__const_____ptr64_(
                     &v30,
                     v23);
  v13 = *v12;
  v23[0] = *v12;
  *v12 = 0LL;
  v14 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !v13 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_7;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, v13);
  v8 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_7:
    v11 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v16 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (__int64)v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v8 = 0;
LABEL_20:
  v18 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v8 >= 0 )
  {
    v19 = 0;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x295,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
    v19 = v25;
  }
  if ( v19 )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 32LL))(*v24);
    if ( v20 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28B,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v20);
  }
  return (unsigned int)v8;
}

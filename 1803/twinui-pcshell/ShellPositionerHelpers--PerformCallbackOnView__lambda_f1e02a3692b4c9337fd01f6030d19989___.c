/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___ @ 0x18009D438
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18011F150 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     ?InternalRelease@?$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955B8 (-InternalRelease@-$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f1e02a3692b4c9337fd01f6030d19989_____lambda_f1e02a3692b4c9337fd01f6030d19989___ @ 0x18009D22C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___(
        IUnknown *punk,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v6; // rax
  HRESULT Service; // eax
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  volatile int *v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v18[1] = -2LL;
  v17 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(&v17);
  Service = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v6);
  v8 = Service;
  if ( Service >= 0 )
  {
    v20 = 0LL;
    v9 = v17;
    Microsoft::WRL::ComPtr<IShellPositionerProxy>::InternalRelease(&v20);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, a2, &v20);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v10);
LABEL_13:
      Microsoft::WRL::ComPtr<IShellPositionerProxy>::InternalRelease(&v20);
      goto LABEL_14;
    }
    Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f1e02a3692b4c9337fd01f6030d19989_____lambda_f1e02a3692b4c9337fd01f6030d19989___(
      v18,
      a3);
    v11 = v18[0];
    if ( v18[0] )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, v18[0]);
      v8 = v14;
      if ( v14 >= 0 )
      {
        v8 = 0;
LABEL_11:
        if ( v11 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(
            v11,
            v15);
        goto LABEL_13;
      }
      v12 = (unsigned int)v14;
      v13 = 92LL;
    }
    else
    {
      v8 = -2147024882;
      v12 = 2147942414LL;
      v13 = 89LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)v12);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
    (const char *)(unsigned int)Service);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v8;
}

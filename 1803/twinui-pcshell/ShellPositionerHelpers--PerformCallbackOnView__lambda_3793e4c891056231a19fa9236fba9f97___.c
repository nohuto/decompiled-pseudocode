/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BD5C
 * Callers:
 *     ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AB60 (-GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97_____lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BE78 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ?GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerProxy@@@Z @ 0x180024430 (-GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPr.c)
 *     ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800254C0 (-PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955B8 (-InternalRelease@-$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___(
        IUnknown *punk,
        struct IApplicationView *a2,
        __int64 a3)
{
  HRESULT v6; // eax
  unsigned int v7; // edi
  ShellPositionerManager *v8; // rbx
  __int64 (__fastcall *v9)(ShellPositionerManager *__hidden, struct IApplicationView *, struct IShellPositionerProxy **); // rax
  int PositionerProxy; // eax
  struct IShellPositionerCallback *v11; // rbx
  __int64 (__fastcall *v12)(ShellPositionerProxy *__hidden, struct IShellPositionerCallback *); // rax
  int v13; // eax
  __int64 v15; // rdx
  void *ppvOut; // [rsp+20h] [rbp-20h] BYREF
  struct IShellPositionerCallback *v17[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IShellPositionerProxy *v19; // [rsp+78h] [rbp+38h] BYREF

  v17[1] = (struct IShellPositionerCallback *)-2LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v6,
      (int)ppvOut);
    goto LABEL_13;
  }
  v19 = 0LL;
  v8 = (ShellPositionerManager *)ppvOut;
  Microsoft::WRL::ComPtr<IShellPositionerProxy>::InternalRelease(&v19);
  v9 = *(__int64 (__fastcall **)(ShellPositionerManager *__hidden, struct IApplicationView *, struct IShellPositionerProxy **))(*(_QWORD *)v8 + 48LL);
  if ( v9 == ShellPositionerManager::GetPositionerProxy )
    PositionerProxy = ShellPositionerManager::GetPositionerProxy(v8, a2, &v19);
  else
    PositionerProxy = v9(v8, a2, &v19);
  v7 = PositionerProxy;
  if ( PositionerProxy >= 0 )
  {
    Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97_____lambda_3793e4c891056231a19fa9236fba9f97___(
      v17,
      a3);
    v11 = v17[0];
    if ( v17[0] )
    {
      v12 = *(__int64 (__fastcall **)(ShellPositionerProxy *__hidden, struct IShellPositionerCallback *))(*(_QWORD *)v19 + 24LL);
      if ( v12 == ShellPositionerProxy::PerformSyncCallback )
        v13 = ShellPositionerProxy::PerformSyncCallback(v19, v17[0]);
      else
        v13 = v12(v19, v17[0]);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v7 = 0;
        goto LABEL_10;
      }
      v15 = 92LL;
    }
    else
    {
      v7 = -2147024882;
      v15 = 89LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)v7,
      (int)ppvOut);
LABEL_10:
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55,
    (unsigned int)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
    (const char *)(unsigned int)PositionerProxy,
    (int)ppvOut);
LABEL_12:
  Microsoft::WRL::ComPtr<IShellPositionerProxy>::InternalRelease(&v19);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v7;
}

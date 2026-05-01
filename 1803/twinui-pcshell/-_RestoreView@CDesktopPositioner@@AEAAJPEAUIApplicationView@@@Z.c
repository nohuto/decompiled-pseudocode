/*
 * XREFs of ?_RestoreView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C1A70
 * Callers:
 *     ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1802C0340 (-SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DES.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_RestoreView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDesktopPositioner *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>((__int64 *)&v10);
  v3 = (__int64)v10;
  if ( !v10 )
  {
    v4 = -2147024882;
    v5 = 2147942414LL;
    v6 = 2108LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v5);
    goto LABEL_7;
  }
  *((_DWORD *)v10 + 20) = 2;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v3);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = (unsigned int)v7;
    v6 = 2110LL;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_7:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v3);
  return v4;
}

/*
 * XREFs of ??$MakeOrThrow@VApplicationViewWrapper@@AEAPEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@AEAPEAUIApplicationView@@@Z @ 0x180233C50
 * Callers:
 *     ?UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180238300 (-UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180149930 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ApplicationViewWrapper@@QEAA@PEAUIApplicationView@@@Z @ 0x180234A7C (--0ApplicationViewWrapper@@QEAA@PEAUIApplicationView@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180237690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_180237690.c)
 */

// Hidden C++ exception states: #wind=1
ApplicationViewWrapper **__fastcall wil::MakeOrThrow<ApplicationViewWrapper,IApplicationView * &>(
        ApplicationViewWrapper **a1,
        struct IApplicationView **a2)
{
  ApplicationViewWrapper *v4; // rax
  const char *v5; // r9
  ApplicationViewWrapper *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ApplicationViewWrapper *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ApplicationViewWrapper::ApplicationViewWrapper(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(*a1);
    *a1 = v6;
  }
  else
  {
    v6 = *a1;
  }
  if ( !v6 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 56LL, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v5);
    __debugbreak();
  }
  return a1;
}

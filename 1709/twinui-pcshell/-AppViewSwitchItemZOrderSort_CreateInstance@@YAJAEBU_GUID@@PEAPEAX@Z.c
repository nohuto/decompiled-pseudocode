/*
 * XREFs of ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180194A8C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x1801912A8 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIAppl.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180194C50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchIte.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180194DC0 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewSwitchItemZOrderSort_CreateInstance(const struct _GUID *a1, void **a2)
{
  int Interface; // eax
  const char *v4; // r9
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct _GUID *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  try
  {
    *a2 = 0LL;
    wil::MakeAndInitializeOrThrow<AppViewSwitchItemZOrderSort,>(&v8);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::QueryInterface(
                  v8,
                  &GUID_3ea18911_63f7_4926_87cc_9bd8a30403db,
                  a2);
    if ( Interface < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)Interface);
    v5 = (volatile signed __int64 *)v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v5);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
                           v4);
  }
  return result;
}

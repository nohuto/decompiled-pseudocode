/*
 * XREFs of ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180239A80
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@44@Z @ 0x1802378E8 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIAppl.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801596C0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801596C0.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E5C98 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180238C60 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewSwitchItemZOrderSort_CreateInstance(const struct _GUID *a1, const struct _GUID **a2)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _DWORD *v6; // rdx
  int CanCastTo; // edi
  const struct _GUID *v8; // rcx
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct _GUID *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  try
  {
    *a2 = 0LL;
    wil::MakeAndInitializeOrThrow<AppViewSwitchItemZOrderSort,>((__int64 *)&v12);
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_3ea18911_63f7_4926_87cc_9bd8a30403db, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v8 = v12;
      *a2 = v12;
      (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v8->Data1 + 8LL))(v8);
      CanCastTo = 0;
      goto LABEL_9;
    }
    if ( InlineIsEqualGUID(v4, v5) )
    {
      *a2 = v12;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v12->Data4,
                    v6);
      if ( CanCastTo < 0 )
      {
LABEL_9:
        if ( CanCastTo < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            95LL,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
            (const char *)(unsigned int)CanCastTo);
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((__int64 *)&v12);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&(*a2)->Data1 + 8LL))(*a2);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
                           v9);
  }
  return result;
}

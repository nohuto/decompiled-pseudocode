/*
 * XREFs of ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180235A54
 * Callers:
 *     ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180237F60 (-UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F5AB0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800F5AB0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802339D4 (--$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180236950 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewIconFactory::CreateInstance(
        struct IApplicationView *a1,
        struct IApplicationViewIconLoader *a2,
        const struct _GUID *a3,
        void **a4)
{
  _DWORD *v5; // rcx
  void *v6; // r8
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rdx
  void *v10; // r8
  int CanCastTo; // edi
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v15; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationViewIconLoader *v16; // [rsp+48h] [rbp+10h] BYREF
  AppViewIconFactory *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = (AppViewIconFactory *)a3;
  v16 = a2;
  v15 = a1;
  try
  {
    *a4 = 0LL;
    wil::MakeAndInitializeOrThrow<AppViewIconFactory,IApplicationView * &,IApplicationViewIconLoader * &>(
      &v17,
      (__int64 *)&v15,
      (__int64 *)&v16);
    *a4 = 0LL;
    if ( InlineIsEqualGUID(&GUID_2ddda005_932b_45bd_bdba_e25598ba2204, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a4 = v6;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
      goto LABEL_9;
    }
    if ( InlineIsEqualGUID(v7, v8) )
    {
      *a4 = v10;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                    (__int64)v10 + 8,
                    v9);
      if ( CanCastTo < 0 )
      {
LABEL_9:
        if ( CanCastTo < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            108LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
            (const char *)(unsigned int)CanCastTo);
        Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(&v17);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
                           v12);
  }
  return result;
}

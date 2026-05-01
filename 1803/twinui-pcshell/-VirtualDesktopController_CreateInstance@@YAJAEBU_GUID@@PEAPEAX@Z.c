/*
 * XREFs of ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180261574
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x18025B818 (-RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x1802600D8 (--$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18026029C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18026029C.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x180260A2C (-InternalRelease@-$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall VirtualDesktopController_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int CanCastTo; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  VirtualDesktopController *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VirtualDesktopController *v13; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease((__int64 *)&v13);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopController,VirtualDesktopController,>(&v13);
  CanCastTo = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 62LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v5);
    goto LABEL_13;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_0e5cbed4_2860_48f0_a7bb_38614ac683ad, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v10 = v13;
    *a2 = v13;
    (*(void (__fastcall **)(VirtualDesktopController *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v8, &_uuidof__AUIVirtualDesktopController_Multitasking_ComposableShell_Internal_Windows__) )
    {
      CanCastTo = 0;
      *a2 = v13;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v13 + 8,
                    v9);
      if ( CanCastTo < 0 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
LABEL_10:
  if ( CanCastTo < 0 )
  {
    v5 = (unsigned int)CanCastTo;
    v6 = 63LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease((__int64 *)&v13);
  return (unsigned int)CanCastTo;
}

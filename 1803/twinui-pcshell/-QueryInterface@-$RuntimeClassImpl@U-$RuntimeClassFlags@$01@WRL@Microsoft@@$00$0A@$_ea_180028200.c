/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028200
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A36D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A36D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A36E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A36E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A36F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A36F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3700 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A3700.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@U?$ChainInterfaces@UIAppViewManagerInternal@@UIAppViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIProjectionViewHelper@@UIImmersiveApplicationNotification@@UIDragViewEventHandler@@UIAppSwitcherNotification@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3710 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A3710.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,Microsoft::WRL::ChainInterfaces<IAppViewManagerInternal,IAppViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IProjectionViewHelper,IImmersiveApplicationNotification,IDragViewEventHandler,IAppSwitcherNotification>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // ebx
  _DWORD *v4; // rcx
  __int64 **v5; // r8
  __int64 *v6; // r10
  _DWORD *v7; // rcx
  __int64 **v8; // r8
  __int64 *v9; // r10
  int *v10; // r9
  __int64 *v11; // r10
  int v12; // ecx
  __int64 v13; // rax
  _DWORD *v15; // rcx
  __int64 *v16; // r10
  __int64 v17; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    v13 = *v6;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v4, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v8 = v9;
LABEL_13:
    v13 = **v8;
LABEL_14:
    (*(void (**)(void))(v13 + 8))();
    return (unsigned int)v3;
  }
  if ( InlineIsEqualGUID(v7, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v8 = v11;
  }
  else
  {
    v12 = *v10;
    if ( *v10 == -124057211
      && v10[1] == *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data2
      && v10[2] == *(_DWORD *)GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4
      && v10[3] == *(_DWORD *)&GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee.Data4[4]
      || v12 == -132485016
      && v10[1] == *(_DWORD *)&GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data2
      && v10[2] == *(_DWORD *)GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data4
      && v10[3] == *(_DWORD *)&GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086.Data4[4] )
    {
      *v8 = v11 + 4;
    }
    else if ( v12 == 179198059
           && v10[1] == *(_DWORD *)&GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data2
           && v10[2] == *(_DWORD *)GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data4
           && v10[3] == *(_DWORD *)&GUID_0aae586b_12be_4521_9e84_624c4833ff79.Data4[4] )
    {
      *v8 = v11 + 5;
    }
    else if ( v12 == -499699522
           && v10[1] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data2
           && v10[2] == *(_DWORD *)GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4
           && v10[3] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4[4] )
    {
      *v8 = v11 + 6;
    }
    else if ( InlineIsEqualGUID(v10, &GUID_cdc15432_c344_4d81_a416_b5fdeec8cb04) )
    {
      *v8 = v16;
    }
    else if ( InlineIsEqualGUID(v15, &GUID_61b9faae_6abc_4c4b_9bdf_77c52e795bf6) )
    {
      *v8 = (__int64 *)(v17 + 8);
    }
    else
    {
      v3 = -2147467262;
    }
  }
  if ( v3 >= 0 )
    goto LABEL_13;
  return (unsigned int)v3;
}

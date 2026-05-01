/*
 * XREFs of ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A120
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001E80 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ??$AsIID@V?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$0N@@Details@WRL@Microsoft@@KAJPEAV?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@23@AEBU_GUID@@PEAPEAX@Z @ 0x18000A388 (--$AsIID@V-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIMemoryManage.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18000B13C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageL.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000C0B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000C0B0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000C140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000C140.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::CanCastTo(Microsoft::WRL::FtmBase *this, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  BOOL IsEqualGUID; // eax
  _QWORD *v8; // r8
  __int64 v9; // r9

  if ( InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v5;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(v3, &GUID_00000003_0000_0000_c000_000000000046);
    if ( IsEqualGUID )
      *v8 = v9;
    return !IsEqualGUID ? 0x80004002 : 0;
  }
}

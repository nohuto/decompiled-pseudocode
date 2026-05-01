/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802C49B4
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802C48B8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_1802C48B8.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellTargetingChangeNotification,IFullScreenPositionerPrivateNotification,ITransitionNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( InlineIsEqualGUID(a2, &GUID_2c1448e1_7540_41b2_9b0d_188c012da2f1) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_3a2d9243_f596_4510_885e_5bf2e01fc0ae) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}

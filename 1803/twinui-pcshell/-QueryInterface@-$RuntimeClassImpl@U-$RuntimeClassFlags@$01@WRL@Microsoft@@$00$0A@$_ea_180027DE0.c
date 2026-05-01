/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027DE0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4730 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4730.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4740 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4740.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4750 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4750.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4760 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4760.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4770 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4770.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4780 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4780.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4790 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A4790.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18014FB78 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenManagerPriv.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10
  _DWORD *v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r11
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
    {
      *v7 = v9;
      CanCastTo = 0;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
    {
      *v7 = v11;
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
      {
        CanCastTo = 0;
        *v7 = v12 + 8;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      if ( *v8 == -267831919
        && v8[1] == *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data2
        && v8[2] == *(_DWORD *)GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4
        && v8[3] == *(_DWORD *)&GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d.Data4[4] )
      {
        *v7 = v9 + 88;
        CanCastTo = 0;
LABEL_14:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
        return (unsigned int)CanCastTo;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification>::CanCastTo(
                    v9 + 96,
                    v8);
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_14;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}

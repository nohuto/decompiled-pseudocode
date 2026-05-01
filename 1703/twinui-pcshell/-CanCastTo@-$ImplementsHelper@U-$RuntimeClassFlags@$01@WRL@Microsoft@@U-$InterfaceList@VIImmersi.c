/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VIImmersiveSystemModeNotificationServicePrivate@@U?$InterfaceList@VIActiveZBandNotificationServicePrivate@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180032AD0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIActiveZBand@@U?$InterfaceList@UIImmersiveSystemMode@@U?$InterfaceList@UIImmersiveSystemModeInternal@@U?$InterfaceList@UIActiveZBand@@U?$InterfaceList@VIImmersiveSystemModeNotificationServicePrivate@@U?$InterfaceList@VIActiveZBandNotificationServicePrivate@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800329B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@VCWRLObje.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // r9d
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // rcx

  v4 = 1;
  if ( *a2 == -1406469880
    && a2[1] == *(_DWORD *)&GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data4[4] )
  {
    v5 = 1;
    *a3 = a1;
  }
  else
  {
    v5 = 0;
  }
  result = v5 == 0 ? 0x80004002 : 0;
  if ( !v5 )
  {
    if ( *a2 == 2088470755
      && a2[1] == *(_DWORD *)&GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data2
      && a2[2] == *(_DWORD *)GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data4
      && a2[3] == *(_DWORD *)&GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data4[4] )
    {
      *a3 = a1 + 8;
    }
    else
    {
      v4 = 0;
    }
    result = v4 == 0 ? 0x80004002 : 0;
    if ( !v4 )
    {
      v7 = a1 + 16;
      if ( *a2 == -1811144131
        && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
        || (v7 = a1 + 24, *a2 == 720388634)
        && a2[1] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data2
        && a2[2] == *(_DWORD *)GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4
        && a2[3] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4[4] )
      {
        *a3 = v7;
        return 0LL;
      }
      if ( *a2 == -62834430
        && a2[1] == *(_DWORD *)&GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data2
        && a2[2] == *(_DWORD *)GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data4
        && a2[3] == *(_DWORD *)&GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data4[4] )
      {
        *a3 = a1 + 32;
        return 0LL;
      }
      return 2147500034LL;
    }
  }
  return result;
}

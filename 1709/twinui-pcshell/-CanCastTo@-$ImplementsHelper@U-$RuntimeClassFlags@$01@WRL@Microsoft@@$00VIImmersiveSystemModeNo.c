/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180034514
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180034404 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VFtmBase@23@VCWRLObjec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  int v5; // eax

  if ( *a2 == -1406469880
    && a2[1] == *(_DWORD *)&GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_ac2af908_82b1_40b3_a94d_18c2c0ffee84.Data4[4]
    || (a1 += 16LL, *a2 == 2088470755)
    && a2[1] == *(_DWORD *)&GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_7c7b88e3_43d0_4574_a0bd_8f8bc0ffee84.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v4 = a1 + 16;
  if ( *a2 == -1811144131
    && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (v4 += 8LL, *a2 == 720388634)
    && a2[1] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84.Data4[4] )
  {
    *a3 = v4;
  }
  else
  {
    if ( *a2 != -62834430
      || a2[1] != *(_DWORD *)&GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data2
      || a2[2] != *(_DWORD *)GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data4
      || a2[3] != *(_DWORD *)&GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84.Data4[4] )
    {
      v5 = -2147467262;
      return (v5 >> 31) & 0x80004002;
    }
    *a3 = v4 + 8;
  }
  v5 = 0;
  return (v5 >> 31) & 0x80004002;
}

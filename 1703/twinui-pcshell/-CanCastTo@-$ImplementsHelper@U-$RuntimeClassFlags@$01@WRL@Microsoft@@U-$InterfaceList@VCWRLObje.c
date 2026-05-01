/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIActiveZBand@@U?$InterfaceList@UIImmersiveSystemMode@@U?$InterfaceList@UIImmersiveSystemModeInternal@@U?$InterfaceList@UIActiveZBand@@U?$InterfaceList@VIImmersiveSystemModeNotificationServicePrivate@@U?$InterfaceList@VIActiveZBandNotificationServicePrivate@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800329B4
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIActiveZBand@@U?$InterfaceList@UIImmersiveSystemMode@@U?$InterfaceList@UIImmersiveSystemModeInternal@@U?$InterfaceList@UIActiveZBand@@U?$InterfaceList@VIImmersiveSystemModeNotificationServicePrivate@@U?$InterfaceList@VIActiveZBandNotificationServicePrivate@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032770 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@VCWRLOb.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VIImmersiveSystemModeNotificationServicePrivate@@U?$InterfaceList@VIActiveZBandNotificationServicePrivate@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180032AD0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@VIImmersi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IActiveZBand,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemMode,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeInternal,Microsoft::WRL::Details::InterfaceList<IActiveZBand,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>>>>>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rcx

  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v4 = 1;
    *a3 = a1;
  }
  else
  {
    v4 = 0;
  }
  result = v4 == 0 ? 0x80004002 : 0;
  if ( !v4 )
  {
    v6 = a1 + 32;
    if ( *a2 == -646306375
      && a2[1] == *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data2
      && a2[2] == *(_DWORD *)GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4
      && a2[3] == *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4]
      || (v6 += 8LL, *a2 == -358962051)
      && a2[1] == *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data2
      && a2[2] == *(_DWORD *)GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4
      && a2[3] == *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4[4] )
    {
      *a3 = v6;
    }
    else
    {
      v7 = v6 + 8;
      if ( *a2 != 1688863789
        || a2[1] != *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data2
        || a2[2] != *(_DWORD *)GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4
        || a2[3] != *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4[4] )
      {
        v7 = v6 + 16;
        if ( *a2 != -646306375
          || a2[1] != *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data2
          || a2[2] != *(_DWORD *)GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4
          || a2[3] != *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4] )
        {
          return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,1,1>::CanCastTo(v6 + 24);
        }
      }
      *a3 = v7;
    }
    return 0LL;
  }
  return result;
}

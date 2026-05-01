/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180034404
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180034120 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180034120.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180034514 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00VIImmersiveSystemModeNo.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
        Microsoft::WRL::FtmBase *a1,
        const struct _GUID *a2,
        void **a3)
{
  int CanCastTo; // eax
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx

  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(a1, a2, a3);
  v7 = 0;
  if ( CanCastTo < 0 )
  {
    v8 = v5 + 40;
    if ( *v4 == -62389853
      && v4[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && v4[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && v4[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
      || (v8 += 40LL, *v4 == -646306375)
      && v4[1] == *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data2
      && v4[2] == *(_DWORD *)GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4
      && v4[3] == *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4]
      || (v8 += 8LL, *v4 == -358962051)
      && v4[1] == *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data2
      && v4[2] == *(_DWORD *)GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4
      && v4[3] == *(_DWORD *)&GUID_ea9aac7d_0cac_4ceb_981c_4545a28bada2.Data4[4]
      || (v8 += 8LL, *v4 == 1688863789)
      && v4[1] == *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data2
      && v4[2] == *(_DWORD *)GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4
      && v4[3] == *(_DWORD *)&GUID_64aa042d_4144_4c88_afb9_aed881c0ffee.Data4[4]
      || (v8 += 8LL, *v4 == -646306375)
      && v4[1] == *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data2
      && v4[2] == *(_DWORD *)GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4
      && v4[3] == *(_DWORD *)&GUID_d97a25b9_e3df_444c_afc6_2d12c0ffee84.Data4[4] )
    {
      *v6 = v8;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::CanCastTo(
                             v8 + 8,
                             v4,
                             v6,
                             0LL);
    }
  }
  return v7;
}

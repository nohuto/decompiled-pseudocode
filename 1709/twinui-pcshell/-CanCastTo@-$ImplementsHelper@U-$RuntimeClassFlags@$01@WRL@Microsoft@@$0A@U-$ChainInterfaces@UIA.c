/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007CE24
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C8E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18007C8E0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::CanCastTo(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // r9d
  char v4; // r10
  char v5; // al
  char *v6; // rcx
  int CanCastTo; // eax
  unsigned int v8; // r9d
  unsigned int v9; // ecx

  v3 = 0;
  v4 = 1;
  if ( *(_DWORD *)a2 == 2071323060
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87.Data4[4] )
  {
    *a3 = a1;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
  {
    if ( *(_DWORD *)a2 == -1351685073
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      v4 = 0;
    }
    if ( !v4 )
    {
      v6 = a1 + 8;
      if ( *(_DWORD *)a2 == 1920966295
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4]
        || (v6 += 8, *(_DWORD *)a2 == 738766320)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_2c08adf0_a386_4b35_9250_0fe183476fcc.Data4[4]
        || (v6 += 8, *(_DWORD *)a2 == 184376270)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4[4] )
      {
        *a3 = v6;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v6 + 8),
                      (const struct _GUID *)a2,
                      a3);
        v9 = -2147467262;
        if ( CanCastTo >= 0 )
          return v8;
        return v9;
      }
    }
  }
  return v3;
}

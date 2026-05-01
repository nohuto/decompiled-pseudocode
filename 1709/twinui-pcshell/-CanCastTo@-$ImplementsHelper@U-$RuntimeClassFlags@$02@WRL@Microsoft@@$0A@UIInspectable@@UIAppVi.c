/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIAppViewDataSourceAdapter@@UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180193AF0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDataSourceAdapter@@UIApplicationViewChangeListener@@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180192A10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAppViewDa.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,IAppViewDataSourceAdapter,IWeakReferenceSource,IApplicationViewChangeListener,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v5; // ecx

  if ( *(_DWORD *)a2 == -1350114592
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 899883927)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_35a32397_d8f8_45d0_bb99_9bc1684c0223.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 56)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1920966295)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1260763374)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    v5 = -2147467262;
    if ( CanCastTo >= 0 )
      return 0;
    return v5;
  }
}

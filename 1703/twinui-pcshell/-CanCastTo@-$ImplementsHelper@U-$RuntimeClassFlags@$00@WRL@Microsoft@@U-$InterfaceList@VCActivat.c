/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@VCActivatedEventArgsWithViewIdBase@@U?$InterfaceList@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@U?$InterfaceList@U?$CloakedIid@UIInitializePrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18018F948
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@U?$InterfaceList@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@U?$InterfaceList@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018F4A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializePrelaunchActivatedEventArgs>,Microsoft::WRL::Details::Nil>>>,1,1>::CanCastTo(
        char *a1,
        __int64 a2,
        void **a3)
{
  char *v3; // r9
  unsigned int v4; // r10d
  __int64 result; // rax
  char *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v3 = a1;
  v4 = -2147467262;
  if ( *(_DWORD *)a2 == -815458541
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    v6 = a1 + 8;
    if ( *(_DWORD *)a2 == 485530526
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4[4]
      || (v6 += 8, *(_DWORD *)a2 == -432202956)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data4[4]
      || (v6 += 8, *(_DWORD *)a2 == 1276687894)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data4[4]
      || (v6 += 8, *(_DWORD *)a2 == -244138313)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data4[4] )
    {
      *a3 = v6;
      result = 0LL;
    }
    else
    {
      result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v6 + 8), (const struct _GUID *)a2, a3);
    }
    if ( (int)result >= 0 )
      return result;
    v7 = v3 + 112;
    if ( *(_DWORD *)a2 == -1827868853
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4[4] )
    {
LABEL_50:
      *a3 = v7;
      return 0LL;
    }
    v8 = v3 + 120;
    if ( *(_DWORD *)a2 == 871532710
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4[4]
      || (v8 = v3 + 128, *(_DWORD *)a2 == 1392539546)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data4[4] )
    {
      *a3 = v8;
    }
    else
    {
      if ( *(_DWORD *)a2 != 2091404550
        || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data2
        || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4
        || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4[4] )
      {
        result = v4;
        goto LABEL_45;
      }
      *a3 = v3 + 136;
    }
  }
  result = 0LL;
LABEL_45:
  if ( (int)result >= 0 )
    return result;
  v7 = v3 + 184;
  if ( *(_DWORD *)a2 == 205812091
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4[4] )
  {
    goto LABEL_50;
  }
  if ( *(_DWORD *)a2 == 928102546
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data4[4] )
  {
    *a3 = v3 + 192;
    return 0LL;
  }
  return v4;
}

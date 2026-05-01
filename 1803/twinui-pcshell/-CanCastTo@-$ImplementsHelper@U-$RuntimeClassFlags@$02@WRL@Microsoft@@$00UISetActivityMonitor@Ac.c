/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISetActivityMonitor@Activities@Data@Internal@Windows@@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180028F10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800294D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r8
  _DWORD *v5; // r9
  _QWORD *v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 result; // rax
  __int64 v11; // r8

  if ( *a2 == 438378839
    && a2[1] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data2
    && a2[2] == *(_DWORD *)GUID_1a212157_be49_4892_afc4_1a168e546329.Data4
    && a2[3] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( InlineIsEqualGUID(a2, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *v6 = v4;
    result = 0LL;
  }
  else if ( InlineIsEqualGUID(v3, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
  {
    *v6 = v8;
    result = 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
    {
      *v6 = v9 + 8;
      result = 0LL;
    }
    else
    {
      result = 2147500034LL;
    }
    if ( (_DWORD)result != -2147467262 )
      return result;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( *v5 == 355594254
      && v5[1] == *(_DWORD *)&GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data2
      && v5[2] == *(_DWORD *)GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data4
      && v5[3] == *(_DWORD *)&GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea.Data4[4] )
    {
      *v6 = v4 + 104;
      return 0LL;
    }
    else
    {
      v11 = v4 + 112;
      if ( *v5 == -1796592748
        && v5[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        && v5[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
        && v5[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
        || InlineIsEqualGUID(v5, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v6 = v11;
        return 0LL;
      }
      else
      {
        return 2147500034LL;
      }
    }
  }
  return result;
}

/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@VNil@Details@23@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@V4523@V4523@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800254F8
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001B8F0 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022330 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameLis_ea_180022330.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,Microsoft::WRL::Details::Nil,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rax

  if ( *a2 == 53
    && a2[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    v4 = a1 + 8;
    v3 = 0;
    if ( *a2 == -1796592748
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v4;
    }
    else
    {
      if ( *a2 == 3
        && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
      {
        v5 = 1;
        *a3 = v4;
      }
      else
      {
        v5 = 0;
      }
      if ( !v5 )
      {
        if ( *a2 == 769462127
          && a2[1] == *(_DWORD *)&GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data2
          && a2[2] == *(_DWORD *)GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data4
          && a2[3] == *(_DWORD *)&GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c.Data4[4] )
        {
          v6 = v4 + 40;
        }
        else
        {
          if ( *a2 != 962535576
            || a2[1] != *(_DWORD *)&GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data2
            || a2[2] != *(_DWORD *)GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data4
            || a2[3] != *(_DWORD *)&GUID_395f2098_ea1a_45aa_9268_a83905686f27.Data4[4] )
          {
            return (unsigned int)-2147467262;
          }
          v6 = v4 + 56;
        }
        *a3 = v6;
      }
    }
  }
  return v3;
}

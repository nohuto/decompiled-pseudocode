/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGameListEntry2@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000F3C8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F4C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18000F4C0.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFastRundown@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F338 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFast.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  signed int v3; // ecx
  int CanCastTo; // eax
  _DWORD *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9

  if ( *a2 == -666202229
    && a2[1] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data2
    && a2[2] == *(_DWORD *)GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4
    && a2[3] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4[4]
    || (a1 += 8LL, *a2 == 1426958011)
    && a2[1] == *(_DWORD *)&GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3.Data2
    && a2[2] == *(_DWORD *)GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3.Data4
    && a2[3] == *(_DWORD *)&GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMarshal,IAgileObject,IFastRundown>::CanCastTo(
                  a1 + 8,
                  a2,
                  a3);
    v3 = 0;
    if ( CanCastTo < 0 )
    {
      v8 = v7 + 64;
      if ( *v5 == -1796592748
        && v5[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        && v5[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
        && v5[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
      {
        *v6 = v8;
      }
      else
      {
        if ( *v5 == 3
          && v5[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
          && v5[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
          && v5[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
        {
          v3 = 1;
          *v6 = v8;
        }
        v3 = v3 == 0 ? 0x80004002 : 0;
      }
      return (v3 >> 31) & 0x80004002;
    }
  }
  return (unsigned int)v3;
}

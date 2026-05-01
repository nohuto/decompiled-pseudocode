/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800099C8
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009AC0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Pr_ea_180009AC0.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFastRundown@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009938 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFast.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,0,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  int CanCastTo; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // r9

  if ( *a2 == 1935221971
    && a2[1] == *(_DWORD *)&GUID_735924d3_811f_4494_b69c_c641a0c61543.Data2
    && a2[2] == *(_DWORD *)GUID_735924d3_811f_4494_b69c_c641a0c61543.Data4
    && a2[3] == *(_DWORD *)&GUID_735924d3_811f_4494_b69c_c641a0c61543.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = a1 + 8;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v4;
      return 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMarshal,IAgileObject,IFastRundown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    v4 + 8,
                    a2,
                    a3);
      v10 = 0;
      if ( CanCastTo < 0 )
      {
        v11 = v9 + 48;
        if ( *v7 == -1796592748
          && v7[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          && v7[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
          && v7[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
        {
          *v8 = v11;
          return 0;
        }
        else
        {
          if ( *v7 == 3
            && v7[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
            && v7[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
            && v7[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
          {
            v10 = 1;
            *v8 = v11;
          }
          return v10 == 0 ? 0x80004002 : 0;
        }
      }
      return (unsigned int)CanCastTo;
    }
  }
}

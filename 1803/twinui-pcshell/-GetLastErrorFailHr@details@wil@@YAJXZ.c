/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180093D10
 * Callers:
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x180009150 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 *     ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x18000B7F0 (-QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800FC314 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800FC48C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x18017D3E0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180182258 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z @ 0x1801A0B48 (-SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180093D44 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

signed int __fastcall wil::details::GetLastErrorFailHr(wil::details *this)
{
  signed int result; // eax
  void *v2; // [rsp+30h] [rbp-8h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  result = wil::details::GetLastErrorFail(0LL, 0LL, 0, 0LL, 0LL, retaddr, v2);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}

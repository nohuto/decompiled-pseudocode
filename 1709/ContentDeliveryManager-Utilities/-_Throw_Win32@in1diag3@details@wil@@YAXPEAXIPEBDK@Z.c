/*
 * XREFs of ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18007932C
 * Callers:
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180074844 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_180074844.c)
 *     ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x180079350 (-SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@Applicat.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180079A48 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x18007E62C (-PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180026010 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_Win32(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, (unsigned int)a2, a3, (__int64)a4, v4, retaddr, 0, (int)a4);
}

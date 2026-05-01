/*
 * XREFs of ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800305C4
 * Callers:
 *     ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B490 (-SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCa.c)
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B840 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002BC90 (-SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__.c)
 *     ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180039800 (-SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsy.c)
 *     ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180039FC0 (-SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003572C (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64))
{
  void (__fastcall ***v4)(_QWORD, __int64); // rsi
  signed int v7; // ebx
  void *v8; // rax
  __int64 v9; // rdi

  v4 = a4;
  *a2 = 0LL;
  v7 = a4 == 0LL ? 0x8007000E : 0;
  if ( a4 )
  {
    v8 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = 0LL;
    if ( v8 )
      v9 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>(
             v8,
             a1,
             L"Windows.Foundation.IAsyncAction",
             0LL,
             -2LL);
    v7 = v9 == 0 ? 0x8007000E : 0;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 256) = v4;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 104LL))(v9 + 8);
      v4 = 0LL;
    }
    if ( v7 >= 0 )
    {
      *a2 = (v9 + 176) & -(__int64)(v9 != 0);
      v9 = 0LL;
    }
    if ( v4 )
      (**v4)(v4, 1LL);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 16LL))(v9 + 8);
  }
  return (unsigned int)v7;
}

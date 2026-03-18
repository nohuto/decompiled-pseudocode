/*
 * XREFs of ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134D64
 * Callers:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18007A824 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18011FF7C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 *     Flush @ 0x180151308 (Flush.c)
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@CAJPEAXPEBXH@Z @ 0x1801951E0 (-s_OnReceiveInputThreadMessage@CInputManager@@CAJPEAXPEBXH@Z.c)
 *     ?PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9094 (-PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     ?PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9230 (-PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18011F768 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Unexpected(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 3, 0x8000FFFF);
}

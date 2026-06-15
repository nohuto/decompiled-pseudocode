/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180019BC4
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch$68 @ 0x180036D9F (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--catch$68.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::catch$13 @ 0x180037640 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--catch$13.c)
 *     _QueueGenericWorkItem_::_1_::catch$108 @ 0x180037900 (_QueueGenericWorkItem_--_1_--catch$108.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$104 @ 0x180037CF8 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--catch$104.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::catch$20 @ 0x180037E95 (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--catch$20.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch$2 @ 0x180037ED4 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--catch$2.c)
 *     _ApplicationSpecificEndpointInfo::RemoveRelatedProcess_::_1_::catch$45 @ 0x180037F07 (_ApplicationSpecificEndpointInfo--RemoveRelatedProcess_--_1_--catch$45.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch$16 @ 0x180037F82 (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--catch$16.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180019AAC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}

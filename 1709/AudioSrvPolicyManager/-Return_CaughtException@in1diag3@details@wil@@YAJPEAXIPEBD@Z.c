/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001AA3C
 * Callers:
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::catch$14 @ 0x180028AB2 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--catch$14.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$112 @ 0x180029183 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--catch$112.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18001A924 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
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

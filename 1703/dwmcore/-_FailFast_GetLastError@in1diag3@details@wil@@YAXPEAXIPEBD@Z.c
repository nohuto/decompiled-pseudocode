/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180138328
 * Callers:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180136768 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18013786C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180137994 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(this, a2, a3, a4, v4, retaddr);
}

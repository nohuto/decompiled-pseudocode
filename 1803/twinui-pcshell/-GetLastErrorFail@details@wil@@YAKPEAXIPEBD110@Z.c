/*
 * XREFs of ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180093D44
 * Callers:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180093D10 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1800FEACC (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800FEB6C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180082EA8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

DWORD __fastcall wil::details::GetLastErrorFail(
        wil::details *this,
        void *a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        const char *a6)
{
  unsigned int v8; // esi
  DWORD result; // eax

  v8 = (unsigned int)a2;
  result = GetLastError();
  if ( !result )
  {
    wil::details::ReportFailure_Hr((__int64)this, v8, a3, (__int64)a4, (__int64)a5, (__int64)a6);
    return 668;
  }
  return result;
}

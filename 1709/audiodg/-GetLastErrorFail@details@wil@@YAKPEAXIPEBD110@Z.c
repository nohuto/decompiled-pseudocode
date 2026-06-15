/*
 * XREFs of ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x140032674
 * Callers:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1400326DC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x14003345C (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x140033510 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1400335B4 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

DWORD __fastcall wil::details::GetLastErrorFail(
        wil::details *this,
        void *a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        const char *a6)
{
  unsigned int v7; // edi
  DWORD result; // eax

  v7 = (unsigned int)a2;
  result = GetLastError();
  if ( !result )
  {
    wil::details::ReportFailure_Hr(this, v7, a3, 0LL, 0LL, a6, 2, -2147024228);
    return 668;
  }
  return result;
}

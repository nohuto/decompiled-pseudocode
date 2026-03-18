/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400072AC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400047E8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007180 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x140007304 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  int v3; // r9d
  HRESULT result; // eax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  result = v3;
  if ( a2 )
    *a1 = 0;
  return result;
}

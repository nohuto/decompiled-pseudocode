/*
 * XREFs of RtlStringCbPrintfA @ 0x1C00083C0
 * Callers:
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C00082A8 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 * Callees:
 *     _vsnprintf @ 0x1C00A73A8 (_vsnprintf.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cbDest - 1;
    v3 = 0;
    v6 = vsnprintf(pszDest, cbDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}

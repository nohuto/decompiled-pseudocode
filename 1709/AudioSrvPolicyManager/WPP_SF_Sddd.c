/*
 * XREFs of WPP_SF_Sddd @ 0x180011D44
 * Callers:
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180015AC0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sddd(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v12; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = L"NULL";
  v8 = 2 * v6;
  if ( a4 )
    v7 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
           0x36u,
           v7,
           v8,
           va,
           4LL,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}

/*
 * XREFs of WPP_SF_ZLqL @ 0x1C00655F0
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZLqL(__int64 a1, __int64 a2, const wchar_t *a3, int a4, ...)
{
  __int64 v4; // rax
  const wchar_t *v5; // rcx
  int v6; // [rsp+98h] [rbp+20h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v7 = va_arg(va1, _QWORD);
  v6 = a4;
  if ( a3 )
    v4 = *a3;
  else
    v4 = 8LL;
  if ( a3 && *a3 )
    v5 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v5 = L"NULL";
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids,
    0x11u,
    a3,
    2LL,
    v5,
    v4,
    &v6,
    4LL,
    va,
    8LL,
    va1,
    4LL,
    0LL);
}

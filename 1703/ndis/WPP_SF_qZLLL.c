/*
 * XREFs of WPP_SF_qZLLL @ 0x1C0064F1C
 * Callers:
 *     ndisQuerySetMiniportDeviceState @ 0x1C00A77E0 (ndisQuerySetMiniportDeviceState.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZLLL(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  const wchar_t *v5; // rcx
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v7; // [rsp+B0h] [rbp+28h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h]
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va1; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  v6 = a3;
  if ( a4 )
    v4 = *a4;
  else
    v4 = 8LL;
  if ( a4 )
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v5 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids,
    0x36u,
    &v6,
    8LL,
    a4,
    2LL,
    v5,
    v4,
    va,
    4LL,
    va1,
    4LL,
    va2,
    4LL,
    0LL);
}

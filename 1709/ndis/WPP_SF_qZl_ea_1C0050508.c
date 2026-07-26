/*
 * XREFs of WPP_SF_qZl @ 0x1C0050508
 * Callers:
 *     ndisCreateAdapterInstanceName @ 0x1C00C1C68 (ndisCreateAdapterInstanceName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZl(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  const wchar_t *v5; // rcx
  __int64 v6; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
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
    &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids,
    0x15u,
    &v6,
    8LL,
    a4,
    2LL,
    v5,
    v4,
    va,
    4LL,
    0LL);
}

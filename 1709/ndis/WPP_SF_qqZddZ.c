/*
 * XREFs of WPP_SF_qqZddZ @ 0x1C005EBA4
 * Callers:
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZddZ(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rdx
  __int64 v3; // rax
  const wchar_t *v4; // r9
  const wchar_t *v5; // r10
  const wchar_t *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  __int64 v10; // [rsp+C8h] [rbp+20h] BYREF
  va_list va1; // [rsp+C8h] [rbp+20h]
  unsigned __int16 *v12; // [rsp+D0h] [rbp+28h]
  __int64 v13; // [rsp+D8h] [rbp+30h] BYREF
  va_list va2; // [rsp+D8h] [rbp+30h]
  __int64 v15; // [rsp+E0h] [rbp+38h] BYREF
  va_list va3; // [rsp+E0h] [rbp+38h]
  unsigned __int16 *v17; // [rsp+E8h] [rbp+40h]
  va_list va4; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, unsigned __int16 *);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  v17 = va_arg(va4, unsigned __int16 *);
  v2 = v17;
  if ( v17 )
    v3 = *v17;
  else
    v3 = 8LL;
  v4 = L"NULL";
  if ( v17 )
    v5 = (const wchar_t *)*((_QWORD *)v17 + 1);
  else
    v5 = L"NULL";
  v6 = v12;
  if ( !v17 )
    v2 = L"\b";
  if ( v12 )
    v7 = *v12;
  else
    v7 = 8LL;
  if ( v12 )
    v4 = (const wchar_t *)*((_QWORD *)v12 + 1);
  else
    v6 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_89f39f5878d93d725c4978a535989123_Traceguids,
    0x27u,
    va,
    8LL,
    va1,
    8LL,
    v6,
    2LL,
    v4,
    v7,
    va2,
    4LL,
    va3,
    4LL,
    v2,
    2LL,
    v5,
    v3,
    0LL);
}

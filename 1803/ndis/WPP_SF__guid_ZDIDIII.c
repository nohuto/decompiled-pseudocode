/*
 * XREFs of WPP_SF__guid_ZDIDIII @ 0x1C00703C0
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C0072308 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF__guid_ZDIDIII(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  const wchar_t *v5; // rcx
  __int64 v6; // [rsp+E0h] [rbp+28h] BYREF
  va_list va; // [rsp+E0h] [rbp+28h]
  __int64 v8; // [rsp+E8h] [rbp+30h] BYREF
  va_list va1; // [rsp+E8h] [rbp+30h]
  __int64 v10; // [rsp+F0h] [rbp+38h] BYREF
  va_list va2; // [rsp+F0h] [rbp+38h]
  __int64 v12; // [rsp+F8h] [rbp+40h] BYREF
  va_list va3; // [rsp+F8h] [rbp+40h]
  __int64 v14; // [rsp+100h] [rbp+48h] BYREF
  va_list va4; // [rsp+100h] [rbp+48h]
  va_list va5; // [rsp+108h] [rbp+50h] BYREF

  va_start(va5, a4);
  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v10 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v12 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v14 = va_arg(va5, _QWORD);
  if ( a4 )
    v4 = *a4;
  else
    v4 = 8LL;
  if ( a4 && *a4 )
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v5 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_250ba6082b573e143e643b46f787ca55_Traceguids,
    0x2Au,
    a3,
    16LL,
    a4,
    2LL,
    v5,
    v4,
    va,
    4LL,
    va1,
    8LL,
    va2,
    4LL,
    va3,
    8LL,
    va4,
    8LL,
    va5,
    8LL,
    0LL);
}

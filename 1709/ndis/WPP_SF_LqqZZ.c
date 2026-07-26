/*
 * XREFs of WPP_SF_LqqZZ @ 0x1C0064998
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C0102070 (ndisPnPNotifyBinding.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_LqqZZ(__int64 a1, __int64 a2, int a3, ...)
{
  const wchar_t *v3; // rdx
  __int64 v4; // rax
  const wchar_t *v5; // r9
  const wchar_t *v6; // r10
  const wchar_t *v7; // r8
  __int64 v8; // rcx
  int v9; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v12; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  unsigned __int16 *v14; // [rsp+C8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+D0h] [rbp+38h]
  va_list va2; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, unsigned __int16 *);
  v15 = va_arg(va2, unsigned __int16 *);
  v9 = a3;
  v3 = v15;
  if ( v15 )
    v4 = *v15;
  else
    v4 = 8LL;
  v5 = L"NULL";
  if ( v15 )
    v6 = (const wchar_t *)*((_QWORD *)v15 + 1);
  else
    v6 = L"NULL";
  v7 = v14;
  if ( !v15 )
    v3 = L"\b";
  if ( v14 )
    v8 = *v14;
  else
    v8 = 8LL;
  if ( v14 )
    v5 = (const wchar_t *)*((_QWORD *)v14 + 1);
  else
    v7 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids,
    0x1Bu,
    &v9,
    4LL,
    va,
    8LL,
    va1,
    8LL,
    v7,
    2LL,
    v5,
    v8,
    v3,
    2LL,
    v6,
    v4,
    0LL);
}

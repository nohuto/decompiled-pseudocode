/*
 * XREFs of WPP_SF_DqqZZ @ 0x1C0073D24
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00F7440 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_DqqZZ(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rax
  __int64 v4; // r8
  const wchar_t *v5; // rdx
  const wchar_t *v6; // r9
  const wchar_t *v7; // rcx
  __int64 v8; // r10
  int v9[6]; // [rsp+90h] [rbp-18h] BYREF
  __int64 v10; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v12; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  unsigned __int16 *v14; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+E0h] [rbp+38h]
  va_list va2; // [rsp+E8h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, unsigned __int16 *);
  v15 = va_arg(va2, unsigned __int16 *);
  v9[0] = 1;
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
    &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids,
    0xBu,
    v9,
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

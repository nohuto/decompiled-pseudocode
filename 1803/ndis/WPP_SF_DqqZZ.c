/*
 * XREFs of WPP_SF_DqqZZ @ 0x1C007600C
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01028C8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_DqqZZ(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rdx
  __int64 v4; // rax
  const wchar_t *v5; // r9
  const wchar_t *v6; // r10
  const wchar_t *v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  int v10[6]; // [rsp+90h] [rbp-18h] BYREF
  __int64 v11; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v13; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  unsigned __int16 *v15; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v16; // [rsp+E0h] [rbp+38h]
  va_list va2; // [rsp+E8h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, unsigned __int16 *);
  v16 = va_arg(va2, unsigned __int16 *);
  v3 = v16;
  v10[0] = 1;
  if ( v16 )
    v4 = *v16;
  else
    v4 = 8LL;
  v5 = L"NULL";
  if ( v16 && *v16 )
    v6 = (const wchar_t *)*((_QWORD *)v16 + 1);
  else
    v6 = L"NULL";
  v7 = v15;
  if ( !v16 )
    v3 = L"\b";
  if ( v15 )
    v8 = *v15;
  else
    v8 = 8LL;
  v9 = v15 == 0LL;
  if ( v15 )
  {
    if ( *v15 )
      v5 = (const wchar_t *)*((_QWORD *)v15 + 1);
    v9 = v15 == 0LL;
  }
  if ( v9 )
    v7 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_bee287f1cada383e7b1ca74881464cf2_Traceguids,
    0xBu,
    v10,
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

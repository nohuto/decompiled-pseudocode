/*
 * XREFs of WPP_SF_qqZddZD @ 0x1C0073ED4
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZddZD(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rax
  __int64 v3; // r8
  const wchar_t *v4; // rdx
  const wchar_t *v5; // r9
  const wchar_t *v6; // rcx
  __int64 v7; // r10
  __int64 v8; // [rsp+D0h] [rbp+18h] BYREF
  va_list va; // [rsp+D0h] [rbp+18h]
  __int64 v10; // [rsp+D8h] [rbp+20h] BYREF
  va_list va1; // [rsp+D8h] [rbp+20h]
  unsigned __int16 *v12; // [rsp+E0h] [rbp+28h]
  __int64 v13; // [rsp+E8h] [rbp+30h] BYREF
  va_list va2; // [rsp+E8h] [rbp+30h]
  __int64 v15; // [rsp+F0h] [rbp+38h] BYREF
  va_list va3; // [rsp+F0h] [rbp+38h]
  unsigned __int16 *v17; // [rsp+F8h] [rbp+40h]
  va_list va4; // [rsp+100h] [rbp+48h] BYREF

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
    &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids,
    0x19u,
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
    va4,
    4LL,
    0LL);
}

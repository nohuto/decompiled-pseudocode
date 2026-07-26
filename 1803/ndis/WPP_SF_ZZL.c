/*
 * XREFs of WPP_SF_ZZL @ 0x1C0075C6C
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZZL(unsigned __int16 a1, __int64 a2, const wchar_t *a3, const wchar_t *a4, ...)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r11
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = 8;
  if ( a4 )
    v5 = *a4;
  else
    v5 = 8LL;
  v6 = L"NULL";
  if ( a4 && *a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  if ( a3 )
  {
    v4 = *a3;
    if ( *a3 )
      v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
  }
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
    a1,
    a3,
    2LL,
    v6,
    v4,
    a4,
    2LL,
    v7,
    v5,
    va,
    4LL,
    0LL);
}

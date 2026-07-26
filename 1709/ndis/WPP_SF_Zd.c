/*
 * XREFs of WPP_SF_Zd @ 0x1C0040C38
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E380 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00C7300 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00FB3C8 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Zd(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3, int a4)
{
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = a4;
  if ( a3 )
    v6 = *a3;
  else
    v6 = 8LL;
  if ( a3 )
    v7 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v7 = L"NULL";
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v7, v6, &v8, 4LL, 0LL);
}

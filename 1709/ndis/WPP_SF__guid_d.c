/*
 * XREFs of WPP_SF__guid_d @ 0x1C0040DB4
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AF660 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00DA988 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00DAFA0 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_d(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  ndisWppFastTraceMessage(&WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a3, 16LL, &v4, 4LL, 0LL);
}

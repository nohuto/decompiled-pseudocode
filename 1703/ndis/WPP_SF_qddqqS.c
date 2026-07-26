/*
 * XREFs of WPP_SF_qddqqS @ 0x1C0075C9C
 * Callers:
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C00ED300 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qddqqS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // [rsp+A0h] [rbp+18h] BYREF
  int v10; // [rsp+A8h] [rbp+20h]

  v10 = a4;
  v9 = a3;
  if ( a8 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a8 + 2 * v8) );
  }
  ndisWppFastTraceMessage(&WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, 0x30u, &v9);
}

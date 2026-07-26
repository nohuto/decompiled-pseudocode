/*
 * XREFs of WPP_SF_dqd @ 0x1C0076590
 * Callers:
 *     ?NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00EFAB0 (-NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dqd(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  __int64 v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9918afbc946533ae20284988996b87b5_Traceguids, 0xFu, &v4);
}

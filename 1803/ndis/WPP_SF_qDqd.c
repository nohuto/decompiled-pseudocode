/*
 * XREFs of WPP_SF_qDqd @ 0x1C00595B4
 * Callers:
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C0059E78 (ndisFInvokeSynchronousOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, 0x8Cu, &v4);
}

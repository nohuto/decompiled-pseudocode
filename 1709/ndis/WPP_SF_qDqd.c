/*
 * XREFs of WPP_SF_qDqd @ 0x1C0058EB4
 * Callers:
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00596D0 (ndisFInvokeSynchronousOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, 0x8Cu, &v4);
}

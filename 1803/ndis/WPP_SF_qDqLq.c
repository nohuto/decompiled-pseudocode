/*
 * XREFs of WPP_SF_qDqLq @ 0x1C0043CE8
 * Callers:
 *     ndisValidateQosParameters @ 0x1C0048E9C (ndisValidateQosParameters.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqLq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0x84u, &v4);
}

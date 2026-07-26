/*
 * XREFs of WPP_SF_LLLLLLq @ 0x1C0043BF4
 * Callers:
 *     ndisValidateQosParameters @ 0x1C0048E9C (ndisValidateQosParameters.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LLLLLLq(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+C0h] [rbp+18h] BYREF
  int v5; // [rsp+C8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0x90u, &v4);
}

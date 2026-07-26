/*
 * XREFs of WPP_SF_qDDLq @ 0x1C005201C
 * Callers:
 *     ndisReferenceVcPtr @ 0x1C01128A4 (ndisReferenceVcPtr.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDDLq(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, a1, &v4);
}

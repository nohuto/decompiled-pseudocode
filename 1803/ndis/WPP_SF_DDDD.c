/*
 * XREFs of WPP_SF_DDDD @ 0x1C0043A88
 * Callers:
 *     ndisValidateQosParameters @ 0x1C0048E9C (ndisValidateQosParameters.c)
 *     ndisMSetQosAttributes @ 0x1C00EA34C (ndisMSetQosAttributes.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDDD(unsigned __int16 a1, const struct _GUID *a2, int a3, int a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}

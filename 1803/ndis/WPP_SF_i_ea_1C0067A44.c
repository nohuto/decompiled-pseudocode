/*
 * XREFs of WPP_SF_i @ 0x1C0067A44
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011C20C (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_i(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_7c95a1dd04db386f3493309f33220046_Traceguids, 0xEu, &v3, 8LL, 0LL);
}

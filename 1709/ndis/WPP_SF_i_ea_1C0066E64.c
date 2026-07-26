/*
 * XREFs of WPP_SF_i @ 0x1C0066E64
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011D38C (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_i(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, 0xEu, &v3, 8LL, 0LL);
}

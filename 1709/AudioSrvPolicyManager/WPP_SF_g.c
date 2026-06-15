/*
 * XREFs of WPP_SF_g @ 0x18000AFD4
 * Callers:
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000B018 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_g(TRACEHANDLE a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_bbe117ae349a374c0d7a887928398a58_Traceguids, 0xDu, &v5, 8LL, 0LL);
}

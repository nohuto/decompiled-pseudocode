/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01605AC
 * Callers:
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0160038 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C016427C (-CitpResetTracking@@YAJXZ.c)
 *     CitDisplayPowerChange @ 0x1C0164BB4 (CitDisplayPowerChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C0040BD8 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2)
{
  struct tagPROCESSINFO *v2; // rdi

  v2 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
  if ( v2 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, a2, v2, 0LL, 0LL, 0LL);
  }
  CitpInteractionSummariesFlush(a1, 0);
  return 0LL;
}

/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC
 * Callers:
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081E28 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDisplayPowerChange @ 0x1C00A3738 (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01559B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C001B4FC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
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

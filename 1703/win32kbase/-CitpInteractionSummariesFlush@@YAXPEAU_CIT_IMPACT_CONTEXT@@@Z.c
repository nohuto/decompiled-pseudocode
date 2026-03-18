/*
 * XREFs of ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0052258
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008501C (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C00522F8 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 */

void __fastcall CitpInteractionSummariesFlush(struct _CIT_IMPACT_CONTEXT *a1)
{
  struct _CIT_INTERACTION_SUMMARY **v2; // r14
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  int v5; // esi

  v2 = (struct _CIT_INTERACTION_SUMMARY **)((char *)a1 + 960);
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = 0;
  while ( *v2 != (struct _CIT_INTERACTION_SUMMARY *)v2 )
  {
    CitpInteractionSummaryStopTracking(*v2, v4);
    ++v5;
  }
  if ( v5 )
    ++*((_DWORD *)a1 + 247);
  *((_DWORD *)a1 + 246) = v4;
  *((_QWORD *)a1 + 122) = v3;
}

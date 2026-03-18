/*
 * XREFs of ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0052034
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00536A0 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008519C (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C015453C (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C0154D8C (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C00522F8 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 */

void __fastcall CitpInteractionSummaryDelete(struct _CIT_INTERACTION_SUMMARY **a1)
{
  struct _CIT_INTERACTION_SUMMARY *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(struct _CIT_INTERACTION_SUMMARY **)v1 != v1 )
      CitpInteractionSummaryStopTracking(
        *a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    Win32FreePool((__int64)v1);
    *a1 = 0LL;
  }
}

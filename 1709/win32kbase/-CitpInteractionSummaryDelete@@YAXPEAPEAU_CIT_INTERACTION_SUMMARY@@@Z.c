/*
 * XREFs of ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC
 * Callers:
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C001C878 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082070 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0154FF0 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01557CC (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C001B764 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CitpInteractionSummaryDelete(struct _CIT_INTERACTION_SUMMARY **a1, __int64 a2, __int64 a3)
{
  struct _CIT_INTERACTION_SUMMARY *v3; // rbx

  v3 = *a1;
  if ( *a1 )
  {
    if ( *(struct _CIT_INTERACTION_SUMMARY **)v3 != v3 )
      CitpInteractionSummaryStopTracking(
        *a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    Win32FreePool(v3, a2, a3);
    *a1 = 0LL;
  }
}

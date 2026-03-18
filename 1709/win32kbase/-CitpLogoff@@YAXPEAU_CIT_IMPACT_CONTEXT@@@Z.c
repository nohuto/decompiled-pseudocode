/*
 * XREFs of ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081E28
 * Callers:
 *     CitUserChange @ 0x1C0081DF0 (CitUserChange.c)
 *     CitModerncoreShutdown @ 0x1C0155D60 (CitModerncoreShutdown.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EB4 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0083540 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084B40 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpLogoff(struct _CIT_IMPACT_CONTEXT *a1)
{
  struct _CIT_IMPACT_CONTEXT *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  CitpPostUpdateUseInfoLog(a1, 1u);
  CitpDPDataSave(a1);
  CitpContextFlush(v2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  CitpCleanupGlobalImpactContext(&v2);
}

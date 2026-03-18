/*
 * XREFs of ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01620C8
 * Callers:
 *     CitModerncoreShutdown @ 0x1C0164E30 (CitModerncoreShutdown.c)
 *     CitUserChange @ 0x1C0164FA0 (CitUserChange.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603B0 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01605AC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0161834 (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0162E30 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
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

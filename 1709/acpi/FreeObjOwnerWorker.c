/*
 * XREFs of FreeObjOwnerWorker @ 0x1C005D3E0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C005B8E0 (AMLIRestartContext.c)
 *     FreeObjOwner @ 0x1C005D298 (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}

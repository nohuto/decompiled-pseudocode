/*
 * XREFs of FreeObjOwnerWorker @ 0x1C005D5E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeObjOwner @ 0x1C005D4A4 (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}

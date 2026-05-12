/*
 * XREFs of RaidUnitSavePowerCycleCountWorker @ 0x1C0010F60
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0014ED8 (RaidUnitSavePowerCycleCount.c)
 */

void __fastcall RaidUnitSavePowerCycleCountWorker(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  RaidUnitSavePowerCycleCount(Context);
  Context[40] &= ~2u;
  RaUnitReleaseRemoveLock((__int64)Context);
  IoFreeWorkItem(IoWorkItem);
}

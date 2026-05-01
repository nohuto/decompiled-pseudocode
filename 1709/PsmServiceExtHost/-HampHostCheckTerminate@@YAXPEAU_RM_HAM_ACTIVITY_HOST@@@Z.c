/*
 * XREFs of ?HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004346C
 * Callers:
 *     ?HampTerminateHostWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180044140 (-HampTerminateHostWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemTerminatePsmHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180041678 (-RmpSystemTerminatePsmHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  if ( (*((_BYTE *)a1 + 628) & 3) == 3 )
    RmpActivityHostActOnProcesses(
      (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
      0,
      1,
      (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpLogTerminationForWerCallback,
      0LL);
  RmpSystemTerminatePsmHost(a1);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_DWORD *)a1 + 157) &= 0xFFFFF7FC;
  ++*((_DWORD *)a1 + 178);
  HampHostNotifyZeroProcess(a1);
  RtlWakeAddressAll((char *)a1 + 712);
}

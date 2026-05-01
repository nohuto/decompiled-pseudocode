/*
 * XREFs of ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18005D988
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003C0C0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpMemoryMonitorCheckEvent(void *a1)
{
  return WaitForSingleObjectEx(a1, 0, 0) == 0;
}

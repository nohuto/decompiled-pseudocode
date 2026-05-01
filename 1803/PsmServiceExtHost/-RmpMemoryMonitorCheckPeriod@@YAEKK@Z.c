/*
 * XREFs of ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x18005D9A4
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003C0C0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpMemoryMonitorCheckPeriod(DWORD a1, int a2)
{
  return GetTickCount() - a2 >= a1;
}

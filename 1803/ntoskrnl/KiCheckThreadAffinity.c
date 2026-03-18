/*
 * XREFs of KiCheckThreadAffinity @ 0x1400A7380
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}

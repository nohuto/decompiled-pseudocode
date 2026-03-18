/*
 * XREFs of KiCheckThreadAffinity @ 0x1400A8D9C
 * Callers:
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}

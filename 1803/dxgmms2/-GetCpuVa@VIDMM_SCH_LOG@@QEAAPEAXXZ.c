/*
 * XREFs of ?GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ @ 0x1C0035870
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x1C00BEF5C (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_SCH_LOG::GetCpuVa(VIDMM_SCH_LOG *this)
{
  return (void *)*((_QWORD *)this + 4);
}

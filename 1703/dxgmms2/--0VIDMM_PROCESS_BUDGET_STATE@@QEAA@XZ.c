/*
 * XREFs of ??0VIDMM_PROCESS_BUDGET_STATE@@QEAA@XZ @ 0x1C0001AF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_PROCESS_BUDGET_STATE *__fastcall VIDMM_PROCESS_BUDGET_STATE::VIDMM_PROCESS_BUDGET_STATE(
        VIDMM_PROCESS_BUDGET_STATE *this)
{
  memset((char *)this + 24, 0, 0xF0uLL);
  return this;
}

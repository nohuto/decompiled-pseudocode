/*
 * XREFs of ??0VIDMM_PROCESS_BUDGET_STATE@@QEAA@XZ @ 0x1C0001870
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

VIDMM_PROCESS_BUDGET_STATE *__fastcall VIDMM_PROCESS_BUDGET_STATE::VIDMM_PROCESS_BUDGET_STATE(
        VIDMM_PROCESS_BUDGET_STATE *this)
{
  memset((char *)this + 24, 0, 0xC8uLL);
  memset((char *)this + 256, 0, 0x28uLL);
  return this;
}

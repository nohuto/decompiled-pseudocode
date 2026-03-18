/*
 * XREFs of ??0VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@QEAA@XZ @ 0x1C0012E70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *__fastcall VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE::VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE(
        VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *this)
{
  memset((char *)this + 16, 0, 0x102uLL);
  *((_WORD *)this + 137) = 0;
  return this;
}

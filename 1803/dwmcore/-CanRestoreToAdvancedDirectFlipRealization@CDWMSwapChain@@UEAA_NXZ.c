/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CDWMSwapChain@@UEAA_NXZ @ 0x1801EA300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::CanRestoreToAdvancedDirectFlipRealization(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 66) != *((_QWORD *)this + 65);
}

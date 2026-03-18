/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CDWMSwapChain@@UEAA_NXZ @ 0x18019CED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::CanRestoreToAdvancedDirectFlipRealization(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 52) != *((_QWORD *)this + 51);
}

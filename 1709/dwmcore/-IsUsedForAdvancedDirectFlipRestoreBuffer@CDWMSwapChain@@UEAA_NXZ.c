/*
 * XREFs of ?IsUsedForAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAA_NXZ @ 0x1801B0710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsUsedForAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 64) != 0LL;
}

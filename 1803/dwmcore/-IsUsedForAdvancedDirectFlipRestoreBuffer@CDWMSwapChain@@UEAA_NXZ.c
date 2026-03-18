/*
 * XREFs of ?IsUsedForAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAA_NXZ @ 0x1800D86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsUsedForAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 65) != 0LL;
}

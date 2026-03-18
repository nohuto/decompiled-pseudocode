/*
 * XREFs of ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0014498
 * Callers:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0015728 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?AddCompositionFrame@CConnection@DirectComposition@@AEAAXPEAVCCompositionFrame@2@@Z @ 0x1C00157C4 (-AddCompositionFrame@CConnection@DirectComposition@@AEAAXPEAVCCompositionFrame@2@@Z.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C0015D4C (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPushLockCriticalSection::Release(DirectComposition::CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}

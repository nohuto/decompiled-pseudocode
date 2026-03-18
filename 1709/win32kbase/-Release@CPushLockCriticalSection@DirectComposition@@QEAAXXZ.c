/*
 * XREFs of ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00374D0
 * Callers:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0033F80 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C00345CC (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
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

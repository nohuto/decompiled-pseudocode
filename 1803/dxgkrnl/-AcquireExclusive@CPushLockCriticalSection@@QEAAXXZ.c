/*
 * XREFs of ?AcquireExclusive@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0025044
 * Callers:
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C004AC30 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::AcquireExclusive(CPushLockCriticalSection *this)
{
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_BYTE *)this + 8) = 1;
}

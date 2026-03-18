/*
 * XREFs of ??_GCThreadContext@@AEAAPEAXI@Z @ 0x18018ED6C
 * Callers:
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800BFF58 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B2130 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x18018EDF0 (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

CThreadContext *__fastcall CThreadContext::`scalar deleting destructor'(CThreadContext *this)
{
  CObjectCache::Destroy((CThreadContext *)((char *)this + 152));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 136));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 120));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 104));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 88));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 72));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 56));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 40));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 24));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 8));
  CPtrArrayBase::Clear(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}

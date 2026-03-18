/*
 * XREFs of ??_GCProcessAttributionManager@@AEAAPEAXI@Z @ 0x180124050
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CProcessAttributionManager *__fastcall CProcessAttributionManager::`scalar deleting destructor'(void ***this)
{
  void **v1; // rbx
  void **v3; // rsi
  void **v4; // rcx

  v1 = *this;
  v3 = this[1];
  while ( v1 != v3 )
    WPF::ProcessHeapImpl::Free(*v1++);
  v4 = this[3];
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    this[3] = 0LL;
    this[4] = 0LL;
    this[5] = 0LL;
  }
  if ( *this )
  {
    WPF::ProcessHeapImpl::Free(*this);
    *this = 0LL;
    this[1] = 0LL;
    this[2] = 0LL;
  }
  WPF::ProcessHeapImpl::Free(this);
  return (CProcessAttributionManager *)this;
}

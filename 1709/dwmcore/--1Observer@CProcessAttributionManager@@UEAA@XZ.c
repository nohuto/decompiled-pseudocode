/*
 * XREFs of ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180123FAC
 * Callers:
 *     ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x1801240D0 (--_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x1801242C4 (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 */

void __fastcall CProcessAttributionManager::Observer::~Observer(CProcessAttributionManager **this)
{
  void **v2; // rbx
  void **v3; // rsi
  CProcessAttributionManager *v4; // rcx

  *this = (CProcessAttributionManager *)&CProcessAttributionManager::Observer::`vftable';
  CProcessAttributionManager::NotifyOnDeadObserver(this[1], (struct CProcessAttributionObserver *)this);
  v2 = (void **)this[2];
  v3 = (void **)this[3];
  while ( v2 != v3 )
    WPF::ProcessHeapImpl::Free(*v2++);
  v4 = this[2];
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
  *this = (CProcessAttributionManager *)&CProcessAttributionObserver::`vftable';
}

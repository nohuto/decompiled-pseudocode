/*
 * XREFs of ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BACA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindingsWorkItem(Ndis::BindEngine *this)
{
  KPushLock *p_m_lock; // rbx
  KWaitEvent *m_removeReadyEvent; // rbx
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  p_m_lock = &this->m_lock;
  this->m_bindThread = KeGetCurrentThread();
  v4.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  v4.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v4.m_State = Exclusive;
  Ndis::BindEngine::UpdateBindings(this, (struct KLockThisExclusive *)&v4);
  m_removeReadyEvent = this->m_removeReadyEvent;
  ExReleasePushLockExclusiveEx(v4.m_Lock, 0LL);
  v4.m_State = Unlocked;
  v4.m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
  if ( m_removeReadyEvent )
    KeSetEvent(&this->m_removeReadyEvent->m_event, 0, 0);
  KLockHolder::~KLockHolder(&v4);
}

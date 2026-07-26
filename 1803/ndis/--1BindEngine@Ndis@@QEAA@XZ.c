/*
 * XREFs of ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00B2C20
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EE788 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::~BindEngine(Ndis::BindEngine *this)
{
  KWaitEvent *m_removeReadyEvent; // rcx
  KLockHolder v3; // [rsp+20h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v3.m_State = Unlocked;
  v3.m_Lock = &this->m_lock;
  v3.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v3);
  if ( this->m_bindThread )
    this->m_removeReadyEvent = (KWaitEvent *)&Event;
  KLockHolder::ReleaseExclusive(&v3);
  m_removeReadyEvent = this->m_removeReadyEvent;
  if ( m_removeReadyEvent )
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(m_removeReadyEvent);
  KLockHolder::~KLockHolder(&v3);
}

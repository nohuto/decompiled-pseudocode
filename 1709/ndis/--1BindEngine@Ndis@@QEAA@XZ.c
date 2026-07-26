/*
 * XREFs of ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00AB460
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EBBD4 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::~BindEngine(Ndis::BindEngine *this)
{
  KLockHolder v2; // [rsp+20h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2.m_State = Unlocked;
  v2.m_Lock = &this->m_lock;
  v2.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v2);
  if ( this->m_bindThread )
    this->m_removeReadyEvent = (KWaitEvent *)&Event;
  KLockHolder::ReleaseExclusive(&v2);
  if ( this->m_removeReadyEvent )
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait();
  KLockHolder::~KLockHolder(&v2);
}

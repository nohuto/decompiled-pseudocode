/*
 * XREFs of ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C003B2A4
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000EA94 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0096214 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0096274 (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00962E4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxLockedCallback::CallbackStart(FxLockedCallback *this, unsigned __int8 *PreviousIrql)
{
  FxCallbackLock *m_CallbackLock; // rcx

  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
    m_CallbackLock->Lock(m_CallbackLock, PreviousIrql);
}

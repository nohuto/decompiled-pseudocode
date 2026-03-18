/*
 * XREFs of ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0078168
 * Callers:
 *     imp_WdfRequestIsCanceled @ 0x1C0078AA0 (imp_WdfRequestIsCanceled.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00969D4 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxRequest::IsCancelled(FxRequest *this)
{
  char v1; // dl

  v1 = 0;
  if ( this->m_Irp.m_Irp->Cancel || this->m_Canceled )
    return 1;
  return v1;
}

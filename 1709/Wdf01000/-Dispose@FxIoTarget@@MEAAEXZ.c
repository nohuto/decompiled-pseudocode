/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C00235B0
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C008DE70 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C0091620 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0081EC4 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  this->Remove(this);
  return 0;
}

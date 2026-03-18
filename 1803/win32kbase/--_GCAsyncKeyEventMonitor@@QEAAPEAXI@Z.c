/*
 * XREFs of ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00AADFC
 * Callers:
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00AB500 (EtwInitializeAsyncKeyMonitor.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

CAsyncKeyEventMonitor *__fastcall CAsyncKeyEventMonitor::`scalar deleting destructor'(CAsyncKeyEventMonitor *this)
{
  if ( this )
    Win32FreePool((__int64)this);
  return this;
}

/*
 * XREFs of ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00DF5C4
 * Callers:
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00DFB54 (EtwInitializeAsyncKeyMonitor.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CAsyncKeyEventMonitor *__fastcall CAsyncKeyEventMonitor::`scalar deleting destructor'(CAsyncKeyEventMonitor *this)
{
  if ( this )
    Win32FreePool((__int64)this);
  return this;
}

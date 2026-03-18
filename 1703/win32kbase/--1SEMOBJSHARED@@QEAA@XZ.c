/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C000D230
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C000D194 (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C00EFAD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(PERESOURCE *this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion();
  }
}

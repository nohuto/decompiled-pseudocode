/*
 * XREFs of ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0033524
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEXORSHARED::~SEMOBJEXORSHARED(PERESOURCE *this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion();
  }
}

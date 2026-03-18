/*
 * XREFs of ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C00379E0
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEXORSHARED::~SEMOBJEXORSHARED(PERESOURCE *this)
{
  __int64 v2; // rcx

  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion(v2);
  }
}

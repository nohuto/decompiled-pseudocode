/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00E8AC4
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0058284 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  __int64 v2; // rcx
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache");
  v3 = *(struct _ERESOURCE **)(*(_QWORD *)this + 528LL);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v4);
  }
}

/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00EDC58
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C006BBA8 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this, __int64 a2, int a3)
{
  __int64 v4; // rcx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( v4 )
  {
    Win32FreePool(v4);
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL), a3);
  v5 = *(struct _ERESOURCE **)(*(_QWORD *)this + 528LL);
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    PsLeavePriorityRegion(v6);
  }
}

/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x14003C5BC
 * Callers:
 *     NtSetTimerResolution @ 0x140561E44 (NtSetTimerResolution.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // di
  _QWORD *v5; // rbx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = v2;
  v5 = (_QWORD *)(a1 + 1648);
  if ( *(__int64 **)(ExpTimerResolutionListHead + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  *v5 = ExpTimerResolutionListHead;
  v5[1] = &ExpTimerResolutionListHead;
  *(_QWORD *)(v3 + 8) = v5;
  ExpTimerResolutionListHead = (__int64)v5;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  result = v4;
  __writecr8(v4);
  return result;
}

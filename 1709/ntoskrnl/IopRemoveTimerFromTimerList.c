/*
 * XREFs of IopRemoveTimerFromTimerList @ 0x1401FA1E8
 * Callers:
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopRemoveTimerFromTimerList(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // r9
  _QWORD *v4; // rdx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (v4 = *(_QWORD **)(a1 + 16), *v4 != a1 + 8) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( *(_WORD *)(a1 + 2) )
    --IopTimerCount;
  KxReleaseSpinLock(&IopTimerLock);
  result = v2;
  __writecr8(v2);
  return result;
}

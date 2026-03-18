/*
 * XREFs of IopRemoveTimerFromTimerList @ 0x14023730C
 * Callers:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
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

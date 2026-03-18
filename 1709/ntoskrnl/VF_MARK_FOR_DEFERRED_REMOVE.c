/*
 * XREFs of VF_MARK_FOR_DEFERRED_REMOVE @ 0x1407AA5DC
 * Callers:
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall VF_MARK_FOR_DEFERRED_REMOVE(__int64 a1)
{
  KIRQL v2; // al
  ULONG_PTR v3; // rdx
  KIRQL v4; // bl
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&Lock);
  v3 = ViAdapterList;
  v4 = v2;
  while ( &ViAdapterList != (ULONG_PTR *)v3 )
  {
    if ( *(_QWORD *)(v3 + 24) == a1 )
      *(_BYTE *)(v3 + 32) = 1;
    v3 = *(_QWORD *)v3;
  }
  KxReleaseSpinLock(&Lock);
  result = v4;
  __writecr8(v4);
  return result;
}

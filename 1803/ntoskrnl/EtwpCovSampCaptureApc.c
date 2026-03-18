/*
 * XREFs of EtwpCovSampCaptureApc @ 0x1402B4740
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1402B52D0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1402B58E8 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1407B3D28 (EtwpCovSampCaptureUserAddresses.c)
 */

struct _KTHREAD *__fastcall EtwpCovSampCaptureApc(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  KIRQL v7; // al
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  struct _KTHREAD *result; // rax
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a3;
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v12, 0);
  if ( *(_DWORD *)(*(a1 - 1) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 264));
    a1[1] = 0LL;
    v8 = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 264));
    __writecr8(v8);
  }
  v9 = qword_1403A1CE8;
  memset(a1, 0, 0x58uLL);
  v10 = *(a1 - 1);
  *((_DWORD *)a1 + 22) = 0;
  EtwpCovSampCaptureReleaseToLookaside(v9, v10, a1 - 7);
  if ( (int)EtwpCovSampSafeForUserAddressCapture(1LL, &v13) >= 0 && !v13 )
    EtwpCovSampCaptureUserAddresses(v4, v6);
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)&result[1].SwapListEntry + 2, 0xFF7FFFFF);
  return result;
}

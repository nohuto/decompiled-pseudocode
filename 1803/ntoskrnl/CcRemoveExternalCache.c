/*
 * XREFs of CcRemoveExternalCache @ 0x14021FD70
 * Callers:
 *     CcUnregisterExternalCache @ 0x14021FE10 (CcUnregisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcRemoveExternalCache(__int64 a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // di
  __int64 v3; // r8
  _QWORD *v4; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 32);
  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( CcNumberOfExternalCaches - 1 >= (unsigned int)CcNumberOfExternalCaches )
    KeBugCheckEx(0x34u, 0x131EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  --CcNumberOfExternalCaches;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = v2;
  __writecr8(v2);
  return result;
}

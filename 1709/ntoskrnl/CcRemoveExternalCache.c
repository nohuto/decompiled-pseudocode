/*
 * XREFs of CcRemoveExternalCache @ 0x1401E0768
 * Callers:
 *     CcUnregisterExternalCache @ 0x1401E0810 (CcUnregisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
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
    KeBugCheckEx(0x34u, 0x130BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  --CcNumberOfExternalCaches;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = v2;
  __writecr8(v2);
  return result;
}

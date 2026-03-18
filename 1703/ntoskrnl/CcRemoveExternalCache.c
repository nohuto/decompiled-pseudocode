/*
 * XREFs of CcRemoveExternalCache @ 0x1401DD7F8
 * Callers:
 *     CcUnregisterExternalCache @ 0x1401DD8A0 (CcUnregisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcRemoveExternalCache(__int64 a1)
{
  KIRQL v2; // al
  __int64 **v3; // rdx
  __int64 *v4; // rbx
  KIRQL v5; // di
  __int64 *v6; // r8
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = *(__int64 ***)(a1 + 40);
  v4 = (__int64 *)(a1 + 32);
  v5 = v2;
  v6 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || *v3 != v4 )
    __fastfail(3u);
  *v3 = v6;
  v6[1] = (__int64)v3;
  if ( CcNumberOfExternalCaches - 1 >= (unsigned int)CcNumberOfExternalCaches )
    KeBugCheckEx(0x34u, 0x11A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  --CcNumberOfExternalCaches;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = v5;
  __writecr8(v5);
  return result;
}

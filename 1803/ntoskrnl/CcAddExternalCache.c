/*
 * XREFs of CcAddExternalCache @ 0x14015F214
 * Callers:
 *     CcRegisterExternalCache @ 0x14015F190 (CcRegisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcAddExternalCache(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  _QWORD *v5; // rbx
  unsigned int v6; // eax
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = (_QWORD *)qword_1403CAA58;
  v4 = v2;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_1403CAA58 != &CcExternalCacheList )
    __fastfail(3u);
  *v5 = &CcExternalCacheList;
  v6 = CcNumberOfExternalCaches;
  v5[1] = v3;
  *v3 = v5;
  qword_1403CAA58 = (__int64)v5;
  if ( v6 + 1 < v6 )
    KeBugCheckEx(0x34u, 0x130FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v6 + 1;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = v4;
  __writecr8(v4);
  return result;
}

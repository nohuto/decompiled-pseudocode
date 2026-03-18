/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x14057C76C
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int32 *v1; // rdi
  _KLOCK_ENTRY *v3; // rax
  signed __int64 BugCheckParameter4; // rax

  v1 = (volatile signed __int32 *)(BugCheckParameter2 - 16);
  v3 = (_KLOCK_ENTRY *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 1);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)v1, v3);
    return 0;
  }
  else
  {
    if ( v3 )
      v3->AcquiredByte |= 1u;
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}

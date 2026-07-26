/*
 * XREFs of ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C007A880
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1C007A518 (-IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z.c)
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007A550 (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1C007AA28 (-ndisVerifyValidRWLockFlags@@YAXE@Z.c)
 *     NdisTryAcquireRWLockRead @ 0x1C007AAE0 (NdisTryAcquireRWLockRead.c)
 */

unsigned __int8 __fastcall ndisVerifyNdisTryAcquireRWLockRead(
        struct _NDIS_RW_LOCK_EX *a1,
        struct _LOCK_STATE_EX *a2,
        unsigned __int8 a3)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rbp
  __int64 v7; // r8

  RWLockVerifierContext = ndisGetRWLockVerifierContext(a1);
  ndisVerifyValidRWLockFlags(a3);
  LOBYTE(v7) = a3;
  if ( (unsigned __int8)NdisTryAcquireRWLockRead(a1, a2, v7) )
  {
    if ( RWLockVerifierContext )
    {
      _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 7);
      IncrementReadConcurrency(RWLockVerifierContext);
    }
    return 1;
  }
  else
  {
    if ( RWLockVerifierContext )
      _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 8);
    return 0;
  }
}

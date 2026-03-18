/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140576718
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x1404DB6F0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404DB880 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(
        __int64 a1,
        signed __int64 *a2,
        signed __int64 *a3)
{
  ULONG_PTR v3; // rbx

  v3 = a1 - 16;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 - 16));
  KeAbPostRelease(v3);
  if ( _InterlockedCompareExchange64(a2 + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 44);
  KeAbPostRelease((ULONG_PTR)(a2 + 44));
  if ( a3 != a2 )
  {
    if ( _InterlockedCompareExchange64(a3 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a3 + 44);
    KeAbPostRelease((ULONG_PTR)(a3 + 44));
  }
  ObfDereferenceObject(a2);
  return ObfDereferenceObject(a3);
}

/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x140276760
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140275BA8 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x140276EA8 (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

__int64 __fastcall PopFxSetDripsBlockedByDeviceActivity(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( byte_1403AB901 && PopFxGlobalDeviceAccountingInfo != a1 )
  {
    if ( a1 )
      qword_1403AB908 = MEMORY[0xFFFFF78000000008];
    else
      PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0LL);
  }
  PopFxGlobalDeviceAccountingInfo = a1;
  KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
  result = v2;
  __writecr8(v2);
  return result;
}

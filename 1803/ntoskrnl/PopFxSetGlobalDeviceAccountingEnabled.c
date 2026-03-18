/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1402767D8
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x14027593C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140276378 (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x140276EA8 (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

__int64 __fastcall PopFxSetGlobalDeviceAccountingEnabled(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( a1 )
  {
    if ( PopFxGlobalDeviceAccountingInfo )
      qword_1403AB908 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_1403AB918 = xmmword_1403AB918 + 1;
  }
  else if ( PopFxGlobalDeviceAccountingInfo )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  byte_1403AB901 = a1;
  KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
  result = v2;
  __writecr8(v2);
  return result;
}

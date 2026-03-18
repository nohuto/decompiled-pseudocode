/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x140236ED4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404C1A44 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x1406D4B54 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1406D4BCC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleChooseDozeS4Time @ 0x140236FA8 (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x1404C592C (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1406CEE74 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

__int64 PopIdleArmAoAcDozeS4Timer()
{
  char v0; // bl
  __int64 result; // rax
  KIRQL v2; // si
  unsigned int v3; // edi
  _BYTE v4[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v5; // [rsp+80h] [rbp+8h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  PopFilterCapabilities(&PopCapabilities, v4);
  v0 = 0;
  result = PopIsDozeSupported(v4);
  if ( (_BYTE)result )
  {
    result = PopIdleChooseDozeS4Time(&v6, &v5);
    if ( (_BYTE)result )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
      v3 = v5;
      if ( !byte_14034B0E4 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v6, 0LL, 0LL);
        v0 = 1;
        dword_14034B0E8 = v3;
        byte_14034B0E4 = 1;
      }
      KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
      result = v2;
      __writecr8(v2);
      if ( v0 )
        return PopTraceSystemIdleS0LowPowerDozeTimerArmed(v3, v6);
    }
  }
  return result;
}

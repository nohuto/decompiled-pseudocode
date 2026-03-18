/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14027FF14
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140518B54 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x14076C2B4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14076C37C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleChooseDozeS4Time @ 0x14027FFE8 (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x14051CC74 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14076A414 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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
      if ( !byte_1403A9FC4 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v6, 0LL, 0LL);
        v0 = 1;
        dword_1403A9FC8 = v3;
        byte_1403A9FC4 = 1;
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

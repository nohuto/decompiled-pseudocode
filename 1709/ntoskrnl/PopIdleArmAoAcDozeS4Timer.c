/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14024C0E4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404DF408 (PopUmpoProcessPowerMessage.c)
 *     PopIdleCsStateChanged @ 0x14070A3E4 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14070A4AC (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopIdleChooseDozeS4Time @ 0x14024C1B8 (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x1404E86D8 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1407064E8 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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
      if ( !byte_140365744 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v6, 0LL, 0LL);
        v0 = 1;
        dword_140365748 = v3;
        byte_140365744 = 1;
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

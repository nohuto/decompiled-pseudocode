/*
 * XREFs of PopPowerButtonWorkCallback @ 0x140249C30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PopRecordPoBlackboxInformation @ 0x140249DD0 (PopRecordPoBlackboxInformation.c)
 *     PopRecordPhysicalPowerButton @ 0x1406F55C8 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140704A58 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x140707E14 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140707E7C (PopQueryPowerButtonBugcheckEnabled.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  KIRQL v0; // si
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 result; // rax
  int v5; // [rsp+68h] [rbp+10h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h]

  v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_1403646F8;
    v6 = qword_1403646F8;
    KxReleaseSpinLock(&PopPowerButtonHold);
    __writecr8(v0);
    v3 = HIDWORD(v6);
    if ( (dword_140364700 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v6) != dword_140364704) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140364700 = 0;
      PopPublishPowerButtonState(&dword_140364700);
      KeDisableTimer2((__int64)&unk_140364648, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (dword_140364700 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_140364704 = v3;
        dword_140364708 = PopQueryPowerButtonBugcheckEnabled();
        v5 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140364648,
          (__int64)PopPowerButtonTimerCallback,
          v3,
          (unsigned __int8 *)&v5,
          2);
        KeSetTimer2((__int64)&unk_140364648, -10000000LL, 10000000LL, 0LL);
      }
      dword_140364700 = v1;
      PopPublishPowerButtonState(&dword_140364700);
      if ( v1 >> 1 >= 0x1B58 )
      {
        PopDiagTracePowerButtonBugcheck();
        if ( dword_140364708 )
        {
          PopRecordPoBlackboxInformation();
          KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, 0LL, 0LL, 0LL);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v3, v1) != qword_1403646F8 );
  _InterlockedExchange(&dword_1403646F0, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = v0;
  __writecr8(v0);
  return result;
}

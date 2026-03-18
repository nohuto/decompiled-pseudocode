/*
 * XREFs of PopPowerButtonWorkCallback @ 0x14027FBD0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 *     KeInitializeIRTimer @ 0x14016CF68 (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PopRecordPhysicalPowerButton @ 0x14075D3A8 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x140768B74 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x14076BC94 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x14076BCFC (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x14077049C (PopRecordPoBlackboxInformation.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  KIRQL v0; // di
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 result; // rax
  int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h]

  v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_1403A7F38;
    v6 = qword_1403A7F38;
    KxReleaseSpinLock(&PopPowerButtonHold);
    __writecr8(v0);
    v3 = HIDWORD(v6);
    if ( (qword_1403A7F40 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v6) != HIDWORD(qword_1403A7F40)) )
    {
      PopRecordPhysicalPowerButton(0LL);
      LODWORD(qword_1403A7F40) = 0;
      byte_1403A7E48 = 0;
      PopPublishPowerButtonState(&qword_1403A7F40);
      KeDisableTimer2((__int64)&unk_1403A7E88, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (qword_1403A7F40 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        HIDWORD(qword_1403A7F40) = v3;
        dword_1403A7F48 = PopQueryPowerButtonBugcheckEnabled();
        v5 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_1403A7E88,
          (__int64)PopPowerButtonTimerCallback,
          v3,
          (unsigned __int8 *)&v5,
          2);
        KeSetTimer2((__int64)&unk_1403A7E88, -10000000LL, 10000000LL, 0LL);
      }
      LODWORD(qword_1403A7F40) = v1;
      PopPublishPowerButtonState(&qword_1403A7F40);
      if ( v1 >> 1 >= 0x1B58 )
      {
        qword_1403A7E38 = qword_1403A7F38;
        qword_1403A7E40 = qword_1403A7F40;
        PopDiagTracePowerButtonBugcheck();
        PopRecordPoBlackboxInformation();
        if ( dword_1403A7F48 )
          KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v3, v1) != qword_1403A7F38 );
  _InterlockedExchange(&dword_1403A7F30, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = v0;
  __writecr8(v0);
  return result;
}

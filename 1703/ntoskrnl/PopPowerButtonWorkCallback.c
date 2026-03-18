/*
 * XREFs of PopPowerButtonWorkCallback @ 0x1402346D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PopRecordPhysicalPowerButton @ 0x1406C547C (PopRecordPhysicalPowerButton.c)
 *     PopPublishPowerButtonState @ 0x1406CFF9C (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1406D0004 (PopQueryPowerButtonBugcheckEnabled.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  KIRQL v0; // si
  unsigned int v1; // ebx
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // rbp
  __int64 result; // rax
  int v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h]

  v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_14034A078;
    v7 = qword_14034A078;
    KxReleaseSpinLock(&PopPowerButtonHold);
    __writecr8(v0);
    v3 = dword_14034A080;
    v4 = HIDWORD(v7);
    if ( (dword_14034A080 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v7) != dword_14034A084) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_14034A080 = 0;
      PopPublishPowerButtonState(&dword_14034A080);
      KeDisableTimer2((__int64)&unk_140349FC8, 1, 1, 0LL);
      v3 = dword_14034A080;
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (v3 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_14034A084 = v4;
        dword_14034A088 = PopQueryPowerButtonBugcheckEnabled();
        v6 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140349FC8,
          (__int64)PopPowerButtonTimerCallback,
          v4,
          (unsigned __int8 *)&v6,
          2);
        KeSetTimer2((__int64)&unk_140349FC8, -10000000LL, 10000000LL, 0LL);
      }
      dword_14034A080 = v1;
      PopPublishPowerButtonState(&dword_14034A080);
      if ( dword_14034A088 && (v1 & 0xFFFFFFFE) >= 0x36B0 )
        KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, 0LL, 0LL, 0LL);
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v4, v1) != qword_14034A078 );
  _InterlockedExchange(&dword_14034A070, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = v0;
  __writecr8(v0);
  return result;
}

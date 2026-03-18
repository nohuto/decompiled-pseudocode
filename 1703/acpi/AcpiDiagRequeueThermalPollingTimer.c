/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C0002550
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C002BED0 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C0041200 (AcpiDiagThermalPollingTraceControlCallback.c)
 *     AcpiDiagInitialize @ 0x1C00ABBD8 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // al
  __int64 Reserved; // rdx
  KIRQL v2; // bl
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  Reserved = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v2 = v0;
  if ( !*((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
    || WPP_MAIN_CB.Reserved && (__int64)WPP_MAIN_CB.Reserved < *((__int64 *)&WPP_MAIN_CB.Reserved + 1) )
  {
    Reserved = (__int64)WPP_MAIN_CB.Reserved;
  }
  if ( Reserved )
  {
    v3[1] = -1LL;
    v3[0] = 0LL;
    ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD *))KeSetTimer2)(
      &AcpiDiagThermalPollingTimer,
      -Reserved,
      0LL,
      v3);
  }
  else
  {
    KeCancelTimer2(&AcpiDiagThermalPollingTimer);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}

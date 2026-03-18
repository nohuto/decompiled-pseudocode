/*
 * XREFs of CmpInitializeLazyWriters @ 0x1405A8DA0
 * Callers:
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v0 = &unk_14033B828;
  dword_14033B840 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_14033B900 = CmpLazyReconcileIntervalInSeconds;
  do
  {
    KeInitializeTimerEx(&CmpLazyWriterData + 3 * v1, NotificationTimer);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v1 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v1 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v1);
    *v0 = 0LL;
    if ( (int)PsCreateSystemThreadEx(
                (__int64)&Handle,
                0x1FFFFF,
                0LL,
                0LL,
                0LL,
                (__int64)CmpLazyWriteWorker,
                (__int64)(&CmpLazyWriterData + 3 * v1),
                0LL,
                0LL) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v1, 0LL, 0LL);
    NtClose(Handle);
    v1 = (unsigned int)(v1 + 1);
    v0 += 24;
  }
  while ( (unsigned int)v1 < 2 );
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}

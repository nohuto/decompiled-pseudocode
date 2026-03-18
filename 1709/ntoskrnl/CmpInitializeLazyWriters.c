/*
 * XREFs of CmpInitializeLazyWriters @ 0x1405CC658
 * Callers:
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v0 = &unk_140353858;
  dword_140353870 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_140353930 = CmpLazyReconcileIntervalInSeconds;
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

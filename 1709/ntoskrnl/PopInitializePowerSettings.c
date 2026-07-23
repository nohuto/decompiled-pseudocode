/*
 * XREFs of PopInitializePowerSettings @ 0x140855F84
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

const WNF_STATE_NAME *PopInitializePowerSettings()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  const WNF_STATE_NAME *result; // rax

  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  PopSettingLock.Count = 1;
  PopPendingPowerSettingUpdateLock = 0LL;
  PopSettingLock.Owner = 0LL;
  PopSettingLock.Contention = 0;
  PopSettingLock.Event.Header.SignalState = 0;
  PopSettingLock.Event.Header.WaitListHead.Blink = &PopSettingLock.Event.Header.WaitListHead;
  PopSettingLock.Event.Header.WaitListHead.Flink = &PopSettingLock.Event.Header.WaitListHead;
  qword_140365588 = (__int64)&PopRegisteredPowerSettingCallbacks;
  PopRegisteredPowerSettingCallbacks = (__int64)&PopRegisteredPowerSettingCallbacks;
  qword_140365568 = (__int64)&PopPowerSettings;
  PopPowerSettings = &PopPowerSettings;
  LOWORD(PopSettingLock.Event.Header.Lock) = 1;
  PopSettingLock.Event.Header.Size = 6;
  memset(&PopPrimaryDisplayVisibleStateErratum, 0, 0x20uLL);
  result = &WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  PopPrimaryDisplayVisibleStateErratum = (__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  return result;
}

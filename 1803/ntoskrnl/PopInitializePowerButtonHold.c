/*
 * XREFs of PopInitializePowerButtonHold @ 0x1408A8DD4
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopOpenKey @ 0x14016EC30 (PopOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopInitializeWorkItem @ 0x140627684 (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140627920 (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 && (int)PopOpenKey(&KeyHandle, L"Control\\Power", 0x11u) >= 0 )
    {
      *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
      qword_1403A7F70 = (__int64)PopPowerButtonBugcheckWatchCallback;
      qword_1403A7F78 = (__int64)KeyHandle;
      PopPowerButtonBugcheckConfigure(KeyHandle);
    }
  }
  else
  {
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&PopPowerButtonHold, 0, 0xD0uLL);
    memset(&PopPowerButtonTriageBlock, 0, 0x60uLL);
    dword_1403A7E50 = 0;
    dword_1403A7E54 = 0;
    PopPowerButtonHold = 0LL;
    LODWORD(PopPowerButtonTriageBlock) = 1;
    PopInitializeWorkItem((__int64)&unk_1403A7F10, (__int64)PopPowerButtonWorkCallback, 0LL);
  }
}

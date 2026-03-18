/*
 * XREFs of PopInitializePowerButtonHold @ 0x140832928
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PopOpenKey @ 0x14013A294 (PopOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopInitializeWorkItem @ 0x1405B8080 (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1405B83C0 (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 && (int)PopOpenKey(&KeyHandle, L"Control\\Power", 0x11u) >= 0 )
    {
      *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
      qword_140364630 = (__int64)PopPowerButtonBugcheckWatchCallback;
      qword_140364638 = (__int64)KeyHandle;
      PopPowerButtonBugcheckConfigure(KeyHandle);
    }
  }
  else
  {
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&PopPowerButtonHold, 0, 0xD0uLL);
    PopPowerButtonHold = 0LL;
    PopInitializeWorkItem((__int64)&unk_1403646D0, (__int64)PopPowerButtonWorkCallback, 0LL);
  }
}

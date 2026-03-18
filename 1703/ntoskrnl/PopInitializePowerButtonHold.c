/*
 * XREFs of PopInitializePowerButtonHold @ 0x14080C4FC
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PopOpenKey @ 0x14014CFC0 (PopOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1405A83C0 (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 && (int)PopOpenKey(&Handle, L"Control\\Power", 0x11u) >= 0 )
    {
      *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
      qword_14034A0B0 = (__int64)PopPowerButtonBugcheckWatchCallback;
      qword_14034A0B8 = (__int64)Handle;
      PopPowerButtonBugcheckConfigure(Handle);
    }
  }
  else
  {
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset(&PopPowerButtonHold, 0, 0xD0uLL);
    PopPowerButtonHold = 0LL;
    PopInitializeWorkItem((__int64)&unk_14034A050, (__int64)PopPowerButtonWorkCallback, 0LL);
  }
}

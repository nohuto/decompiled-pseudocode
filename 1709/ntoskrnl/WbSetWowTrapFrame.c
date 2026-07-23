/*
 * XREFs of WbSetWowTrapFrame @ 0x14076D908
 * Callers:
 *     WbSetTrapFrame @ 0x1405023C0 (WbSetTrapFrame.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(_DWORD *a1, _DWORD *a2)
{
  __int16 ProcessMachine; // si
  int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG *v7; // r15
  int ContextThread; // ebx

  ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessMachine == 332 )
  {
    v5 = 716;
  }
  else
  {
    if ( ProcessMachine != 452 )
      return (unsigned int)-1073741637;
    v5 = 416;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = a1 + 12;
  if ( ProcessMachine == 332 )
    a1[12] = 65537;
  else
    a1[12] = 2097153;
  ContextThread = PspWow64GetContextThread((__int64)KeGetCurrentThread(), v7, v5, 0);
  if ( ContextThread >= 0 )
  {
    if ( ProcessMachine == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread(), v7, v5, 0);
  }
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)ContextThread;
}

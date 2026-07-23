/*
 * XREFs of WbGetWowTrapFrame @ 0x14076D81C
 * Callers:
 *     WbGetTrapFrame @ 0x140502860 (WbGetTrapFrame.c)
 * Callees:
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbGetWowTrapFrame(_DWORD *a1, __int64 a2)
{
  __int16 ProcessMachine; // si
  ULONG *v5; // rdx
  int v6; // r8d
  int ContextThread; // edx

  ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessMachine == 332 )
  {
    v5 = a1 + 12;
    v6 = 716;
    a1[12] = 65537;
  }
  else
  {
    if ( ProcessMachine != 452 )
      return (unsigned int)-1073741637;
    v5 = a1 + 12;
    v6 = 416;
    a1[12] = 2097153;
  }
  ContextThread = PspWow64GetContextThread((__int64)KeGetCurrentThread(), v5, v6, 0);
  if ( ContextThread >= 0 )
  {
    if ( ProcessMachine == 332 )
    {
      *(_QWORD *)(a2 + 8) = (unsigned int)a1[58];
      *(_QWORD *)a2 = (unsigned int)a1[61];
      *(_DWORD *)(a2 + 16) = a1[60];
    }
    else
    {
      *(_QWORD *)(a2 + 8) = (unsigned int)a1[28];
      *(_QWORD *)a2 = (unsigned int)a1[26];
      *(_DWORD *)(a2 + 16) = a1[29];
    }
  }
  return (unsigned int)ContextThread;
}

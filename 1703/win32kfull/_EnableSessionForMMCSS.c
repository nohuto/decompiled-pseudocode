/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C00079B0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  __int64 v2; // rbx
  __int64 CurrentProcess; // rax

  GreLockDwmState();
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      *gpsi |= 0x1000u;
    else
      *gpsi &= ~0x1000u;
    WakeRIT(16LL);
    v2 = 1LL;
  }
  GreUnlockDwmState();
  return v2;
}

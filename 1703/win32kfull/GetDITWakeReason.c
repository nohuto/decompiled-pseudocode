/*
 * XREFs of GetDITWakeReason @ 0x1C00FF668
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDITWakeReason(int *a1)
{
  unsigned int v1; // edx
  int v3; // ecx

  v1 = 0;
  if ( a1 )
  {
    v3 = gdwDITWakeReason & ~(gdwDITWakeReason - 1);
    if ( v3 )
    {
      _InterlockedAnd(&gdwDITWakeReason, ~v3);
      *a1 = v3;
      return 1;
    }
  }
  else
  {
    LOBYTE(v1) = gdwDITWakeReason != 0;
  }
  return v1;
}

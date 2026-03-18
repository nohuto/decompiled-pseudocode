/*
 * XREFs of GetDITWakeReason @ 0x1C01BADB4
 * Callers:
 *     WaitForRitToCompleteLastCommand @ 0x1C00FD870 (WaitForRitToCompleteLastCommand.c)
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

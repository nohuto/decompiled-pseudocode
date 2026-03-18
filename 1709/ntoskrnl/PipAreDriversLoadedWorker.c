/*
 * XREFs of PipAreDriversLoadedWorker @ 0x1400DF79C
 * Callers:
 *     PipAreDriversLoaded @ 0x1400DF77C (PipAreDriversLoaded.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140158A08 (PipRestoreDevNodeState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  int v3; // ecx

  while ( a1 <= 785 )
  {
    if ( a1 >= 783 )
      return 1LL;
    if ( a1 <= 770 )
      return 0LL;
    if ( a1 <= 781 )
      return 1LL;
    a1 = a2;
    a2 = 768;
  }
  v3 = a1 - 786;
  return v3 && v3 == 1;
}

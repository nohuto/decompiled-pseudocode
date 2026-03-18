/*
 * XREFs of HasMaximizedState @ 0x1C006138C
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0 (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasMaximizedState(_BYTE *a1)
{
  unsigned int v1; // edx

  v1 = 1;
  if ( (a1[305] & 3) == 0 && (a1[71] & 1) == 0 )
    return (a1[60] & 0x40) != 0;
  return v1;
}

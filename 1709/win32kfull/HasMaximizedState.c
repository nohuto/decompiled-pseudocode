/*
 * XREFs of HasMaximizedState @ 0x1C00C83A0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     DetectNewMonitor @ 0x1C01C3688 (DetectNewMonitor.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C444C (xxxAppAdjustDpiCandidateRect.c)
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

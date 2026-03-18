/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140025088
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 */

__int64 ExpApplyPrewaitBoost()
{
  __int64 v0; // r8
  int v1; // r10d
  __int64 v2; // r11
  int v3; // r9d
  __int64 result; // rax
  int v5; // edx

  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) > 1 && ((unsigned __int8)(v1 + 4) & *(_BYTE *)(v2 + 26)) == 0 )
    v1 += 4;
  v3 = v1 | 2;
  result = *(unsigned __int8 *)(v2 + 27);
  if ( (*(_BYTE *)(v2 + 26) & 2) != 0 )
    v3 = v1;
  v5 = v3 | 0xFF00;
  if ( *(char *)(v0 + 195) <= (int)result )
    v5 = v3;
  if ( v5 )
    return ExpApplyPriorityBoost(v2);
  return result;
}

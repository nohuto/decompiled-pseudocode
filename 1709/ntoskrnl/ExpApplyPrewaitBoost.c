/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140117340
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 */

volatile signed __int64 *ExpApplyPrewaitBoost()
{
  __int64 v0; // r8
  int v1; // r10d
  __int64 v2; // r11
  int v3; // r9d
  volatile signed __int64 *result; // rax
  int v5; // edx

  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 1
    && ((unsigned __int8)(v1 + 4) & *(_BYTE *)(v2 + 26)) == 0 )
  {
    v1 += 4;
  }
  v3 = v1 | 2;
  result = (volatile signed __int64 *)*(unsigned __int8 *)(v2 + 27);
  if ( (*(_BYTE *)(v2 + 26) & 2) != 0 )
    v3 = v1;
  v5 = v3 | 0xFF00;
  if ( *(char *)(v0 + 195) <= (int)result )
    v5 = v3;
  if ( v5 )
    return ExpApplyPriorityBoost(v2, v5, v0);
  return result;
}

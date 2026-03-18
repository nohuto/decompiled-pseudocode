/*
 * XREFs of ExpApplyPrewaitBoost @ 0x1400EEEB0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyPrewaitBoost(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r11
  int v2; // r10d
  unsigned int v4; // eax
  __int16 v5; // cx
  int v6; // r9d
  __int64 result; // rax
  int v8; // edx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v4 = 0;
  if ( (v4 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart || v4 > 1)
    && (*(_BYTE *)(a1 + 26) & 4) == 0 )
  {
    v2 = 4;
  }
  v5 = *(_WORD *)(a1 + 26);
  v6 = v2 | 2;
  result = (unsigned int)CurrentThread->Priority;
  if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
    v6 = v2;
  v8 = v6 | 0xFF00;
  if ( (int)result <= HIBYTE(v5) )
    v8 = v6;
  if ( v8 )
    return ExpApplyPriorityBoost(a1, v8, (__int64)CurrentThread);
  return result;
}

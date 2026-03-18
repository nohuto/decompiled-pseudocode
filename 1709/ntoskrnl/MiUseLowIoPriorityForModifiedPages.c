/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x140008688
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x1400F04F8 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1400F4ED4 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int StandbyRepurposed; // eax
  unsigned int v6; // r10d
  unsigned __int64 v7; // r11
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 768) && !*(_DWORD *)(a1 + 1136) )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
    v4 = *(_QWORD *)(v3 + 5776) >> 2;
    if ( *(_QWORD *)(v2 + 6448) < 3 * v4 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v4) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(v2, 1LL);
      if ( (v6 < StandbyRepurposed ? StandbyRepurposed - v6 : 0) < v7 >> 2 )
        return 1;
    }
  }
  return result;
}

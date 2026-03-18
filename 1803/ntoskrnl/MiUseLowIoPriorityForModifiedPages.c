/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x14008158C
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140080BEC (MiAdjustModifiedPageLoad.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1400819A0 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v3; // rdx
  unsigned int StandbyRepurposed; // eax
  unsigned int v5; // r10d
  unsigned __int64 v6; // r11
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 768) && !*(_DWORD *)(a1 + 1136) )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
    v3 = *(_QWORD *)(a1 + 6864) >> 2;
    if ( *(_QWORD *)(a1 + 7536) < 3 * v3 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v3) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL);
      if ( (v5 < StandbyRepurposed ? StandbyRepurposed - v5 : 0) < v6 >> 2 )
        return 1;
    }
  }
  return result;
}

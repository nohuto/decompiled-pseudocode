/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x14002A0CC
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x1400840D0 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x140083AB0 (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v4; // rdi
  unsigned int StandbyRepurposed; // eax
  unsigned int v6; // r10d
  unsigned __int64 v7; // r11
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 816) && !*(_DWORD *)(a1 + 1184) )
  {
    v2 = *(_QWORD *)(a1 + 5584);
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
    v4 = v2 >> 2;
    if ( *(_QWORD *)(a1 + 6256) < 3 * v4 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v4) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL);
      if ( (v6 < StandbyRepurposed ? StandbyRepurposed - v6 : 0) < v7 >> 2 )
        return 1;
    }
  }
  return result;
}

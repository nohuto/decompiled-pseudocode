/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x14009D568
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x1401511E8 (SmSetThreadSystemPagePriority.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1752) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1752) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1752) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}

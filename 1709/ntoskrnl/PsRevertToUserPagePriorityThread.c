/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x1400B6F44
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x1402762D8 (SmSetThreadSystemPagePriority.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
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

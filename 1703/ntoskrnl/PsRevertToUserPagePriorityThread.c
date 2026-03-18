/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x14006065C
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x14005DEC8 (SmSetThreadSystemPagePriority.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1744) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1744) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1744) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}

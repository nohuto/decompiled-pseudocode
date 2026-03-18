/*
 * XREFs of MiAssignInitialPageAttribute @ 0x140181FB4
 * Callers:
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 *     MiMapContiguousMemoryLarge @ 0x140177CFC (MiMapContiguousMemoryLarge.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 result; // al

  if ( (struct _KTHREAD *)qword_1403CBDE8 == KeGetCurrentThread() )
    result = 17;
  else
    result = MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 34) & 0xC0) == 0xC0 )
    *(_BYTE *)(a1 + 34) = (a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  if ( result != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(result);
  }
  return result;
}

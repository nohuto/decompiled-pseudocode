/*
 * XREFs of MiAssignInitialPageAttribute @ 0x140154D24
 * Callers:
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiMapContiguousMemoryLarge @ 0x14014F27C (MiMapContiguousMemoryLarge.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 result; // al

  if ( (struct _KTHREAD *)qword_140388B50 == KeGetCurrentThread() )
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

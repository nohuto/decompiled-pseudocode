/*
 * XREFs of MiAssignInitialPageAttribute @ 0x140163838
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 result; // al

  if ( (struct _KTHREAD *)qword_14036C958 == KeGetCurrentThread() )
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

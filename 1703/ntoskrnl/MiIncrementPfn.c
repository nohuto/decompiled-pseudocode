/*
 * XREFs of MiIncrementPfn @ 0x14014B564
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MxRelocatePageTables @ 0x1408000CC (MxRelocatePageTables.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 */

__int64 __fastcall MiIncrementPfn(__int64 a1)
{
  __int64 result; // rax

  LOBYTE(result) = MiLockPageInline(a1);
  ++*(_WORD *)(a1 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}

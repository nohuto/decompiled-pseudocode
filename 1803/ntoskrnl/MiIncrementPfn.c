/*
 * XREFs of MiIncrementPfn @ 0x14016E2F4
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140153D40 (MiDeleteSessionAddressSpace.c)
 *     MxRelocatePageTables @ 0x1408998F4 (MxRelocatePageTables.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
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

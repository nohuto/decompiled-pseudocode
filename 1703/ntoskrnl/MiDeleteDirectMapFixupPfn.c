/*
 * XREFs of MiDeleteDirectMapFixupPfn @ 0x140220B00
 * Callers:
 *     MiFreeRelocations @ 0x140581FD0 (MiFreeRelocations.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiDeleteDirectMapFixupPfn(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int8 v3; // si
  char v4; // dl
  __int64 result; // rax

  v2 = (volatile signed __int64 *)(a1 + 24);
  v3 = MiLockPageInline(a1);
  v4 = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v4;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
  _InterlockedAnd64(v2, 0x7FFFFFFFFFFFFFFFuLL);
  result = v3;
  __writecr8(v3);
  return result;
}

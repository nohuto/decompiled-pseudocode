/*
 * XREFs of MiAddSystemPageTableToList @ 0x1400B971C
 * Callers:
 *     MiDeleteSystemPageTable @ 0x1400B9530 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx

  while ( 1 )
  {
    MiLockPageAtDpcInline(a2);
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)a2 = *a1;
  *a1 = a2;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  if ( result != 0xFFFFFFFFFLL )
  {
    v5 = 48 * result - 0x58000000000LL;
    MiLockPageAtDpcInline(v5);
    result = MiDecrementShareCount(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}

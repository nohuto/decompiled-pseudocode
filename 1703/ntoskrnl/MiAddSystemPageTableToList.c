/*
 * XREFs of MiAddSystemPageTableToList @ 0x140082B74
 * Callers:
 *     MiDeleteSystemPageTables @ 0x14008283C (MiDeleteSystemPageTables.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rbx

  MiLockPageAtDpcInline(a2);
  v4 = *(_QWORD *)(a2 + 24);
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    *(_QWORD *)a2 = a1;
    v5 = *(_BYTE *)(a2 + 34) & 0xFD;
    *(_QWORD *)(a2 + 24) = v4 | 0x4000000000000000LL;
    *(_BYTE *)(a2 + 34) = v5 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
    if ( v6 != 0xFFFFFFFFFLL )
    {
      v7 = 48 * v6 - 0x58000000000LL;
      MiLockPageAtDpcInline(v7);
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 1LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
}

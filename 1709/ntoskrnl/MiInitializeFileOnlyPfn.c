/*
 * XREFs of MiInitializeFileOnlyPfn @ 0x140223308
 * Callers:
 *     MiBuildFileOnlyProtos @ 0x140222428 (MiBuildFileOnlyProtos.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiReferenceControlAreaPfn @ 0x140066278 (MiReferenceControlAreaPfn.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInitializeFileOnlyPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  int v6; // esi
  __int64 ContainingPageTable; // rbx
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  v6 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  v9 = 48 * ContainingPageTable - 0x58000000000LL;
  v10 = 48 * a3 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiMakeSubsectionPte(a1);
  *(_QWORD *)(v10 + 40) |= 0x200000000000000uLL;
  MiLockPageAtDpcInline(v10);
  v11 = *(_QWORD *)(v10 + 40);
  *(_BYTE *)(v10 + 35) &= 0xF8u;
  *(_QWORD *)(v10 + 8) = a2;
  *(_QWORD *)(v10 + 40) ^= (ContainingPageTable ^ v11) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 2;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0x3F | 0x40;
  *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *a2 = MiMakeTransitionPte(a3, v6);
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  MiReferenceControlAreaPfn(v4, a1, 1u);
  MiLockPageAtDpcInline(v9);
  result = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

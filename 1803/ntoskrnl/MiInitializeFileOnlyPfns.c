/*
 * XREFs of MiInitializeFileOnlyPfns @ 0x14025DF18
 * Callers:
 *     MiBuildFileOnlyProtos @ 0x14025D034 (MiBuildFileOnlyProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiReferenceControlAreaPfn @ 0x1400579A8 (MiReferenceControlAreaPfn.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakeSubsectionPte @ 0x1401A666C (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInitializeFileOnlyPfns(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // edi
  int v8; // r13d
  __int64 SubsectionPte; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 ContainingPageTable; // r12
  __int64 v12; // rsi
  int v13; // r9d
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = a4;
  v21 = *(_QWORD *)a1;
  v7 = a4;
  v8 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  SubsectionPte = MiMakeSubsectionPte(a1);
  ContainingPageTable = MiGetContainingPageTable(v10);
  v12 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v13 )
  {
    v14 = ContainingPageTable & 0xFFFFFFFFFLL;
    v15 = 48 * a3 - 0x57FFFFFFFDDLL;
    do
    {
      MiLockPageAtDpcInline(v15 - 35);
      v16 = *(_QWORD *)(v15 + 5);
      *(_BYTE *)v15 &= 0xF8u;
      *(_QWORD *)(v15 - 19) = SubsectionPte;
      *(_QWORD *)(v15 - 27) = a2;
      *(_QWORD *)(v15 + 5) = v14 | v16 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
      *(_BYTE *)(v15 - 1) = *(_BYTE *)(v15 - 1) & 0xF8 | 2;
      *(_BYTE *)(v15 - 1) = *(_BYTE *)(v15 - 1) & 0x3F | 0x40;
      *(_QWORD *)(v15 - 11) &= 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v15 - 11), 0x7FFFFFFFFFFFFFFFuLL);
      *a2 = MiMakeTransitionPte(a3, v8);
      if ( MiPteInShadowRange((unsigned __int64)a2) )
        MiWritePteShadow(v18, v17, v19);
      ++a3;
      v15 += 48LL;
      ++a2;
      --v4;
    }
    while ( v4 );
    v7 = a4;
  }
  MiReferenceControlAreaPfn(v21, a1, v7);
  MiLockPageAtDpcInline(v12);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + v7)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

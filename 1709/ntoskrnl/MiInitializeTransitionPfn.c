/*
 * XREFs of MiInitializeTransitionPfn @ 0x140025E00
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x1400B72A4 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 ContainingPageTable; // rax
  __int64 v6; // r14
  __int64 PteShadow; // rax
  __int64 v8; // rcx
  char v9; // al
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 TransitionPte; // rax
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v4 = 0LL;
  v6 = ContainingPageTable;
  PteShadow = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *a2);
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = PteShadow;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  v9 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 40) = v6 & 0xFFFFFFFFFLL | v8 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v9 & 0x10) != 0 )
    v10 = v9 & 0xF8 | 3;
  else
    v10 = v9 & 0xF8 | 2;
  *(_BYTE *)(v4 + 34) = v10;
  v11 = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    v11 = MiReadPteShadow(a2, *a2);
  v17 = v11;
  v12 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v17);
  v13 = MiProtectionToCacheAttribute(v12);
  MiFinalizePageAttribute(v4, v13, 1LL);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  TransitionPte = MiMakeTransitionPte(a1, (unsigned int)v12);
  v17 = TransitionPte;
  *a2 = TransitionPte;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(a2, TransitionPte);
  v15 = 48 * v6 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v15);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

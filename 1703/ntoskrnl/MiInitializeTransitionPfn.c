/*
 * XREFs of MiInitializeTransitionPfn @ 0x140105864
 * Callers:
 *     MiSectionCreated @ 0x14005E604 (MiSectionCreated.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  char v10; // al
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 TransitionPte; // [rsp+40h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v4 = 0LL;
  v6 = ContainingPageTable;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v7;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  v9 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 40) = v6 & 0xFFFFFFFFFLL | v8 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v9 & 0x10) != 0 )
    v10 = v9 & 0xF8 | 3;
  else
    v10 = v9 & 0xF8 | 2;
  *(_BYTE *)(v4 + 34) = v10;
  TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
  v11 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&TransitionPte);
  v12 = MiProtectionToCacheAttribute(v11);
  MiFinalizePageAttribute(v4, v12, 1LL);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  TransitionPte = MiMakeTransitionPte(a1, v11);
  *a2 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(v13);
  v14 = 48 * v6 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v14);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

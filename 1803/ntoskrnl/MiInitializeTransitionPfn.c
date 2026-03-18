/*
 * XREFs of MiInitializeTransitionPfn @ 0x14004EEF0
 * Callers:
 *     MiSectionCreated @ 0x14004D194 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 TransitionPte; // [rsp+40h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v4 = 0LL;
  v6 = ContainingPageTable;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
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
  TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v11 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&TransitionPte);
  v12 = MiProtectionToCacheAttribute(v11);
  MiFinalizePageAttribute(v4, v12, 1LL);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  TransitionPte = MiMakeTransitionPte(a1, v11);
  *a2 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow(v14, v13);
  v15 = 48 * v6 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v15);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

/*
 * XREFs of MiUnlockPagedAddress @ 0x14012BF78
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x1401203C0 (MiInsertNewCombineBlocks.c)
 *     MiFreeClonePool @ 0x14012BE94 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x14012BF10 (MiFreeCombinePool.c)
 *     MiBuildNewCloneDescriptor @ 0x14057AB18 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140594950 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v4;
  v6 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    v6 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v4, *v4);
  }
  v10 = PteShadow;
  v7 = MI_GET_PFN_FROM_PTE(&v10, v6, a3, a4);
  v8 = (unsigned __int8)MiLockPageInline(v7);
  MiRemoveLockedPageChargeAndDecRef(v7);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  return result;
}

/*
 * XREFs of MiUnlockPagedAddress @ 0x1400CEA8C
 * Callers:
 *     MiFreeCombinePool @ 0x1400CE9B0 (MiFreeCombinePool.c)
 *     MiFreeClonePool @ 0x1400CEA18 (MiFreeClonePool.c)
 *     MiInsertNewCombineBlocks @ 0x14014B324 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x1407563A0 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  ULONG_PTR v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v2 = (unsigned __int8)MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1, v3, v4, v5);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}

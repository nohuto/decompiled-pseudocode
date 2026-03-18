/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140754540
 * Callers:
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C674 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C874 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     SeSetImageBaseAddress @ 0x14078C364 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = a1[12];
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4);
  LODWORD(v5) = SeSetImageBaseAddress(v5, *(_QWORD *)(*a1 + 32LL));
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4, v6, v7);
  return (unsigned int)v5;
}

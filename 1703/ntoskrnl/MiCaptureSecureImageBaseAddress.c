/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x1406BD988
 * Callers:
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EBD4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EC2C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     SeSetImageBaseAddress @ 0x1406F04F4 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1)
{
  __int64 *v1; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx

  v1 = (__int64 *)a1[12];
  CurrentThread = KeGetCurrentThread();
  v4 = *v1;
  v5 = *v1;
  v6 = v1[1] & 0xFFFFFFFFFFFFFFF8uLL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  LODWORD(v6) = SeSetImageBaseAddress(v6, *(_QWORD *)(*a1 + 32LL));
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4);
  return (unsigned int)v6;
}

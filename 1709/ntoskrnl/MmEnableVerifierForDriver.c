/*
 * XREFs of MmEnableVerifierForDriver @ 0x1407A59C4
 * Callers:
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 */

__int64 __fastcall MmEnableVerifierForDriver(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  struct _KTHREAD *Lock; // rdi

  *a2 = 0;
  v2 = a2;
  Lock = MmAcquireLoadLock();
  LODWORD(v2) = VfDriverEnableVerifier(a1, 0LL, v2);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}

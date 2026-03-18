/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x14023B27C
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14023B108 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140726D00 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140726E58 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14023B184 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x14023B2BC (IopFindPassiveInterruptBlockLocked.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rbx
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  IopAcquireGlobalPassiveInterruptListLock(&v4);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v4);
  return PassiveInterruptBlockLocked;
}

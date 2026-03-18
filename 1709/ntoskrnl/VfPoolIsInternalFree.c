/*
 * XREFs of VfPoolIsInternalFree @ 0x140277D78
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x1407B4868 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x1407BEC48 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_14038DB28;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&PcwpSynchCounterSet )
      return 0LL;
  }
  return 1LL;
}

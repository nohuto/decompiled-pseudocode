/*
 * XREFs of VfPoolIsInternalFree @ 0x1402AAE88
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140821A38 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x14082C0A8 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x14082CFFC (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_1403E59D8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&EtwpSplitIoNotifyRoutines )
      return 0LL;
  }
  return 1LL;
}

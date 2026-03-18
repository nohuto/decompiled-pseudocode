/*
 * XREFs of VfPoolIsInternalFree @ 0x140251508
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140772AA8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x14077CD08 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x14077DB38 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_1403864E8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&ViAvlNodeLookaside.L.Tag )
      return 0LL;
  }
  return 1LL;
}

/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140821A38
 * Callers:
 *     VfDriverUnloadImage @ 0x14080EDCC (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140813B18 (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x140824840 (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x1402AAE88 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140821B24 (ViRemLockDeleteFirstTreeNode.c)
 */

char __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  int IsInternalFree; // eax
  PVOID v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(IsInternalFree) = ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    LOBYTE(IsInternalFree) = qword_140842330;
    if ( qword_140842330 )
    {
      IsInternalFree = VfPoolIsInternalFree();
      if ( !IsInternalFree )
      {
        VfAvlInitializeLockContext((__int64)v7, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v7, a1, a2);
        LOBYTE(IsInternalFree) = VfAvlCleanupLockContext((__int64)v7);
        if ( v5 )
        {
          do
            IsInternalFree = ViRemLockDeleteFirstTreeNode(a1, a2);
          while ( IsInternalFree );
        }
      }
    }
  }
  return IsInternalFree;
}

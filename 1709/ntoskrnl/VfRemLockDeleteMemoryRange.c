/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x1407B4868
 * Callers:
 *     VfDriverUnloadImage @ 0x1407A209C (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x1407A6994 (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x1407B7624 (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x140277D78 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407B4954 (ViRemLockDeleteFirstTreeNode.c)
 */

__int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    result = qword_1407D5308;
    if ( qword_1407D5308 )
    {
      result = VfPoolIsInternalFree();
      if ( !(_DWORD)result )
      {
        VfAvlInitializeLockContext((__int64)v6, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v6, a1, a2);
        result = VfAvlCleanupLockContext((__int64)v6);
        if ( v5 )
        {
          do
            result = ViRemLockDeleteFirstTreeNode(a1, a2);
          while ( (_DWORD)result );
        }
      }
    }
  }
  return result;
}

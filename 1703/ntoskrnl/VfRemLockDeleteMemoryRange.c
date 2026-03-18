/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140772AA8
 * Callers:
 *     VfDriverUnloadImage @ 0x1407621FC (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140764C70 (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x140775864 (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x140251508 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140772B94 (ViRemLockDeleteFirstTreeNode.c)
 */

__int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    result = qword_140790308;
    if ( qword_140790308 )
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

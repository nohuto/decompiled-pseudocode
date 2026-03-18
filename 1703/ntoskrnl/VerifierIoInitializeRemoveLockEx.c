/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x140772880
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140772B94 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140772C38 (ViRemLockFindSurrogate.c)
 */

unsigned __int64 __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  int v10; // r14d
  char *v11; // rax
  unsigned __int64 *v12; // rbp
  void *v13; // rcx
  unsigned __int64 result; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( !ViRemLockInitialized )
    return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD, unsigned int))pXdvIoInitializeRemoveLockEx)(
             a1,
             a2,
             a3,
             a4,
             a5);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0xD7uLL, Surrogate + 16, a1, 0LL);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    ViRemLockDeleteFirstTreeNode(a1, a5);
  }
  v10 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD, unsigned int))pXdvIoInitializeRemoveLockEx)(
             a1,
             a2,
             a3,
             a4,
             a5);
  v11 = VfAvlReserveNode(&ViRemLockAvl, a1, a5);
  v12 = (unsigned __int64 *)v11;
  if ( !v11 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))pXdvIoInitializeRemoveLockEx)(
             a1,
             a2,
             a3,
             a4,
             a5);
  }
  v13 = v11 + 16;
  if ( a5 == 120 )
  {
    memset(v13, 0, 0x78uLL);
  }
  else
  {
    ((void (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, int))pXdvIoInitializeRemoveLockEx)(v13, a2, a3, a4, 120);
    v10 = 1;
  }
  VfAvlInitializeLockContext((__int64)v15, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)v15, v12);
  result = VfAvlCleanupLockContext((__int64)v15);
  if ( !v10 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))pXdvIoInitializeRemoveLockEx)(
             a1,
             a2,
             a3,
             a4,
             a5);
  return result;
}

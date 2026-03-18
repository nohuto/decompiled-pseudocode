/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x1408217F0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140161558 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1401616BC (VfAvlReserveNode.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140821B24 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140821BC8 (ViRemLockFindSurrogate.c)
 */

char __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  __int64 v10; // rbp
  int v11; // r14d
  char *v12; // rax
  char *v13; // rbp
  void *v14; // rcx
  char result; // al
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( !ViRemLockInitialized )
    return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD, unsigned int))pXdvIoInitializeRemoveLockEx)(
             BugCheckParameter3,
             a2,
             a3,
             a4,
             a5);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    if ( (MmVerifierData & 0x10) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xD7uLL, Surrogate + 16, BugCheckParameter3, 0LL);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    v10 = a5;
    ViRemLockDeleteFirstTreeNode(BugCheckParameter3, a5);
  }
  else
  {
    v10 = a5;
  }
  v11 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD, unsigned int))pXdvIoInitializeRemoveLockEx)(
             BugCheckParameter3,
             a2,
             a3,
             a4,
             a5);
  v12 = VfAvlReserveNode(&ViRemLockAvl, BugCheckParameter3, v10);
  v13 = v12;
  if ( !v12 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))pXdvIoInitializeRemoveLockEx)(
             BugCheckParameter3,
             a2,
             a3,
             a4,
             a5);
  }
  v14 = v12 + 16;
  if ( a5 == 120 )
  {
    memset(v14, 0, 0x78uLL);
  }
  else
  {
    ((void (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, int))pXdvIoInitializeRemoveLockEx)(v14, a2, a3, a4, 120);
    v11 = 1;
  }
  VfAvlInitializeLockContext((__int64)v16, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)v16, v13);
  result = VfAvlCleanupLockContext((__int64)v16);
  if ( !v11 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))pXdvIoInitializeRemoveLockEx)(
             BugCheckParameter3,
             a2,
             a3,
             a4,
             a5);
  return result;
}

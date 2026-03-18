/*
 * XREFs of GetNameSpaceObject @ 0x1C004A1E0
 * Callers:
 *     Simulator_EvaluateNode @ 0x1C0044744 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C00449D8 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0044E08 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0045B94 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0045BFC (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0045F78 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C004767C (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C0048694 (DebugExpr.c)
 *     DebugNotify @ 0x1C0048970 (DebugNotify.c)
 *     BankField @ 0x1C004A930 (BankField.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 *     Alias @ 0x1C004F180 (Alias.c)
 *     Scope @ 0x1C004F2C0 (Scope.c)
 *     Load @ 0x1C004F530 (Load.c)
 *     LoadTable @ 0x1C00510D0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 *     ParseAndGetNameSpaceObject @ 0x1C0054530 (ParseAndGetNameSpaceObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004A2E0 (GetNameSpaceObjectNoLock.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NameSpaceObjectNoLock;
}

/*
 * XREFs of GetNameSpaceObject @ 0x1C00171C0
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C00140C4 (ParseAndGetNameSpaceObject.c)
 *     Field @ 0x1C001C180 (Field.c)
 *     Scope @ 0x1C001C2B0 (Scope.c)
 *     AMLIApplyNamespaceOverride @ 0x1C001D95C (AMLIApplyNamespaceOverride.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0029030 (Alias.c)
 *     Load @ 0x1C00296F0 (Load.c)
 *     IndexField @ 0x1C0029CC0 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C005B1E4 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C005B474 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C005B900 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005BA04 (AMLICreateNativeNamespaceObject.c)
 *     DebugExpr @ 0x1C005BFDC (DebugExpr.c)
 *     DebugNotify @ 0x1C005C2C0 (DebugNotify.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CEE0 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D260 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C005DAE8 (ParseDLMObjectInternal.c)
 *     BankField @ 0x1C005E380 (BankField.c)
 *     LoadTable @ 0x1C00603E0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C0060F20 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src)
{
  size_t v2; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v4; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = -1LL;
  do
    ++v2;
  while ( Src[v2] );
  if ( v2 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v2);
  PoolWithTag[v2] = 0;
  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NameSpaceObjectNoLock;
}

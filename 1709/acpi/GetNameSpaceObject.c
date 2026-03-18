/*
 * XREFs of GetNameSpaceObject @ 0x1C001B6A4
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     Load @ 0x1C0012BC0 (Load.c)
 *     AMLIApplyNamespaceOverride @ 0x1C001358C (AMLIApplyNamespaceOverride.c)
 *     Field @ 0x1C001A430 (Field.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001B624 (ParseAndGetNameSpaceObject.c)
 *     Scope @ 0x1C0020BA0 (Scope.c)
 *     Alias @ 0x1C0029CD0 (Alias.c)
 *     IndexField @ 0x1C002ABB0 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C005BD54 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C005BFE8 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C005C418 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CCD0 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D050 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C005D8E4 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C005DD84 (DebugExpr.c)
 *     DebugNotify @ 0x1C005E060 (DebugNotify.c)
 *     BankField @ 0x1C005EF20 (BankField.c)
 *     LoadTable @ 0x1C00615E0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C0062100 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C000BEE0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 a3, int a4)
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

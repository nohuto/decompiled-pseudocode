/*
 * XREFs of ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x18001AF30
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x18001ADA0 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallbackThunk::Release(ResourceSetCallbackThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}

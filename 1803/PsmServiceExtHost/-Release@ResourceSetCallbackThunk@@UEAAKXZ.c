/*
 * XREFs of ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x180027560
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800273D0 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallbackThunk::Release(ResourceSetCallbackThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}

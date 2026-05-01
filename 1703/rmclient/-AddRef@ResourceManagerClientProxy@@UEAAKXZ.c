/*
 * XREFs of ?AddRef@ResourceManagerClientProxy@@UEAAKXZ @ 0x1800063A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::AddRef(ResourceManagerClientProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}

/*
 * XREFs of ?AddRef@ResourceSetClientProxy@@UEAAKXZ @ 0x1800063C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetClientProxy::AddRef(ResourceSetClientProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 105);
}

/*
 * XREFs of ?AddRef@ResourceSetCallbackThunk@@UEAAKXZ @ 0x180034530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetCallbackThunk::AddRef(ResourceSetCallbackThunk *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}

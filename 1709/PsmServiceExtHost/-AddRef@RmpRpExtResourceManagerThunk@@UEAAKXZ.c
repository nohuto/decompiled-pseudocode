/*
 * XREFs of ?AddRef@RmpRpExtResourceManagerThunk@@UEAAKXZ @ 0x1800203E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpExtResourceManagerThunk::AddRef(RmpRpExtResourceManagerThunk *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}

/*
 * XREFs of ?AddRef@RmpRpExtResourceManagerThunk@@UEAAKXZ @ 0x180034540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpExtResourceManagerThunk::AddRef(RmpRpExtResourceManagerThunk *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}

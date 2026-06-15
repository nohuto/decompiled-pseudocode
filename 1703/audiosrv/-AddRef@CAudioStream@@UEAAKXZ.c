/*
 * XREFs of ?AddRef@CAudioStream@@UEAAKXZ @ 0x18002F8B0
 * Callers:
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x1800582E0 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 *     ?AddRef@CAudioStream@@WBA@EAAKXZ @ 0x1800582F0 (-AddRef@CAudioStream@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(CAudioStream *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

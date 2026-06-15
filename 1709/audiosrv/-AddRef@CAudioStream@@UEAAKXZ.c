/*
 * XREFs of ?AddRef@CAudioStream@@UEAAKXZ @ 0x180031CD0
 * Callers:
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180036E30 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 *     ?AddRef@CAudioStream@@WBA@EAAKXZ @ 0x180036E40 (-AddRef@CAudioStream@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(CAudioStream *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

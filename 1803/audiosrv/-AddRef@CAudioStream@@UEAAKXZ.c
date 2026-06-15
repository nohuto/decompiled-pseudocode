/*
 * XREFs of ?AddRef@CAudioStream@@UEAAKXZ @ 0x18002F7A0
 * Callers:
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180065A30 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 *     ?AddRef@CAudioStream@@WBA@EAAKXZ @ 0x180065A40 (-AddRef@CAudioStream@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioStream@@WBI@EAAKXZ @ 0x180065A50 (-AddRef@CAudioStream@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(CAudioStream *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}

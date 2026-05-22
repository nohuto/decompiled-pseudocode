/*
 * XREFs of ?AddRef@DWMInputTarget@@UEAAKXZ @ 0x180020E00
 * Callers:
 *     ?AddRef@DWMInputTarget@@WCA@EAAKXZ @ 0x180022540 (-AddRef@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@W7EAAKXZ @ 0x180022580 (-AddRef@DWMInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WCI@EAAKXZ @ 0x180022590 (-AddRef@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBA@EAAKXZ @ 0x1800225E0 (-AddRef@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WDA@EAAKXZ @ 0x1800225F0 (-AddRef@DWMInputTarget@@WDA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBI@EAAKXZ @ 0x180022640 (-AddRef@DWMInputTarget@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::AddRef(DWMInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 14);
}

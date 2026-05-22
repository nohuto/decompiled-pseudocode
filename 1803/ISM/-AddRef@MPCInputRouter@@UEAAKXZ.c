/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x18007B0B0
 * Callers:
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x180082250 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x180082260 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x1800822E0 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x1800822F0 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x180082350 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x180082360 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x1800823C0 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x1800823D0 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEI@EAAKXZ @ 0x1800823E0 (-AddRef@MPCInputRouter@@WEI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCNA@EAAKXZ @ 0x1800870C0 (-AddRef@MPCInputRouter@@WCNA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCMI@EAAKXZ @ 0x180087180 (-AddRef@MPCInputRouter@@WCMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}

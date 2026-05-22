/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x180016D10
 * Callers:
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x180020430 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x180020450 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x1800204B0 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x1800204E0 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x180020540 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x180020570 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x1800205D0 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x1800205E0 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCNA@EAAKXZ @ 0x1800AAEB0 (-AddRef@MPCInputRouter@@WCNA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCNI@EAAKXZ @ 0x1800AAEF0 (-AddRef@MPCInputRouter@@WCNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 18);
}

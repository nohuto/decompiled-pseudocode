/*
 * XREFs of ?AddRef@CSpringForce@@UEAAKXZ @ 0x1800CCC20
 * Callers:
 *     ?AddRef@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800D5EB0 (-AddRef@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800D6660 (-AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpringForce::AddRef(CSpringForce *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}

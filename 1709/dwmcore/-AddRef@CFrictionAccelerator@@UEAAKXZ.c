/*
 * XREFs of ?AddRef@CFrictionAccelerator@@UEAAKXZ @ 0x1800C1BF0
 * Callers:
 *     ?AddRef@CSpringAccelerator@@W7EAAKXZ @ 0x1800C6660 (-AddRef@CSpringAccelerator@@W7EAAKXZ.c)
 *     ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800C6EA0 (-AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrictionAccelerator::AddRef(CFrictionAccelerator *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}

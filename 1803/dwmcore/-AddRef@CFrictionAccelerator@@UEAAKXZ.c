/*
 * XREFs of ?AddRef@CFrictionAccelerator@@UEAAKXZ @ 0x1800D6F70
 * Callers:
 *     ?AddRef@CDwm3DRECallbackRenderer@@W7EAAKXZ @ 0x1800DDC90 (-AddRef@CDwm3DRECallbackRenderer@@W7EAAKXZ.c)
 *     ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800DE5D0 (-AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrictionAccelerator::AddRef(CFrictionAccelerator *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}

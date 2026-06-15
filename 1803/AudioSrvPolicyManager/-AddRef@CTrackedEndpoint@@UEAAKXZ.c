/*
 * XREFs of ?AddRef@CTrackedEndpoint@@UEAAKXZ @ 0x18002C8A0
 * Callers:
 *     ?AddRef@CTrackedEndpoint@@W7EAAKXZ @ 0x18002D480 (-AddRef@CTrackedEndpoint@@W7EAAKXZ.c)
 *     ?AddRef@CTrackedEndpoint@@WBA@EAAKXZ @ 0x18002D490 (-AddRef@CTrackedEndpoint@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTrackedEndpoint::AddRef(CTrackedEndpoint *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

/*
 * XREFs of ?AddRef@CWindowsPolicyManager@@UEAAKXZ @ 0x180006A80
 * Callers:
 *     ?AddRef@CWindowsPolicyManager@@W7EAAKXZ @ 0x180006830 (-AddRef@CWindowsPolicyManager@@W7EAAKXZ.c)
 *     ?AddRef@CTrackedEndpoint@@WBA@EAAKXZ @ 0x180006840 (-AddRef@CTrackedEndpoint@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::AddRef(CWindowsPolicyManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

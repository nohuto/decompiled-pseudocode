/*
 * XREFs of ?AddRef@ModernResourceEnforcer@@UEAAKXZ @ 0x1800203C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceEnforcer::AddRef(ModernResourceEnforcer *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}

/*
 * XREFs of ?EnsureCompositionPassWithinTimeInterval@CIndependentRefreshRateScheduler@@UEAAXK@Z @ 0x18013CC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIndependentRefreshRateScheduler::EnsureCompositionPassWithinTimeInterval(
        CIndependentRefreshRateScheduler *this,
        unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *((_DWORD *)this + 6369);
  if ( !v2 || a2 < v2 )
    *((_DWORD *)this + 6369) = a2;
}

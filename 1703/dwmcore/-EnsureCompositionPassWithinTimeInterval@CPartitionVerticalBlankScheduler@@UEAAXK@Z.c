/*
 * XREFs of ?EnsureCompositionPassWithinTimeInterval@CPartitionVerticalBlankScheduler@@UEAAXK@Z @ 0x1800658A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::EnsureCompositionPassWithinTimeInterval(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *((_DWORD *)this + 6369);
  if ( !v2 || a2 < v2 )
    *((_DWORD *)this + 6369) = a2;
}

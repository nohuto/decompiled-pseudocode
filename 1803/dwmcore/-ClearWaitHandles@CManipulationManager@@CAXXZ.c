/*
 * XREFs of ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x1801CE904
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180025FA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x1801D09BC (-ShutDownManipulationThread@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::ClearWaitHandles(void)
{
  HANDLE *v0; // rbx
  __int64 v1; // rdi

  v0 = &CManipulationManager::s_rghWaitEvents;
  v1 = 4LL;
  do
  {
    if ( *v0 )
    {
      CloseHandle(*v0);
      *v0 = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
}

/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180029510
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x1800275F8 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&CriticalSection);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_18003AED8 = 0LL;
}

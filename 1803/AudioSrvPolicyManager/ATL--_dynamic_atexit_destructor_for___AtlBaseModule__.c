/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x1800385B0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180035AD8 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_18004F148);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  qword_18004F178 = 0LL;
}

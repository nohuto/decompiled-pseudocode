/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180029550
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x1800275F8 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_18003AF18 )
    {
      free(qword_18003AF18);
      qword_18003AF18 = 0LL;
    }
    qword_18003AF20 = 0LL;
    DeleteCriticalSection(&stru_18003AEE8);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_18003AF18 )
  {
    free(qword_18003AF18);
    qword_18003AF18 = 0LL;
  }
  qword_18003AF20 = 0LL;
}

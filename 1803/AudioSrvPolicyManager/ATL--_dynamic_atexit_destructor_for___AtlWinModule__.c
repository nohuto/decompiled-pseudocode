/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x1800385F0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180035AD8 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_18004F1B8 )
    {
      free(qword_18004F1B8);
      qword_18004F1B8 = 0LL;
    }
    qword_18004F1C0 = 0LL;
    DeleteCriticalSection(&stru_18004F188);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_18004F1B8 )
  {
    free(qword_18004F1B8);
    qword_18004F1B8 = 0LL;
  }
  qword_18004F1C0 = 0LL;
}

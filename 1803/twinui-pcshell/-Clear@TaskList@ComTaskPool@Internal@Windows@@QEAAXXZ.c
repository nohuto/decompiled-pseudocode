/*
 * XREFs of ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x18008E570
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18003AF78 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::TaskList::Clear(Windows::Internal::ComTaskPool::TaskData **this)
{
  Windows::Internal::ComTaskPool::TaskData *i; // rcx

  for ( i = *this; i; i = *this )
  {
    *this = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)i + 3);
    *((_QWORD *)i + 3) = 0LL;
    if ( this[1] == i )
      this[1] = 0LL;
    Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(i);
  }
}

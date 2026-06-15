/*
 * XREFs of ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800D56E8
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800D7B44 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800D8428 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x1800D53F4 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1800D6AA8 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::TaskList::Clear(Windows::Internal::ComTaskPool::TaskList *this)
{
  Windows::Internal::ComTaskPool::TaskList *i; // rbx
  Windows::Internal::ComTaskPool::TaskData *v2; // rax

  for ( i = this; ; this = i )
  {
    v2 = Windows::Internal::ComTaskPool::TaskList::PopFront(this);
    if ( !v2 )
      break;
    Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v2);
  }
}

/*
 * XREFs of ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1800D6AA8
 * Callers:
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800D56E8 (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800D80F0 (-s_CheckForDeadlockTimerCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTA.c)
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x1800D8150 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800D85E0 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     <none>
 */

struct Windows::Internal::ComTaskPool::TaskData *__fastcall Windows::Internal::ComTaskPool::TaskList::PopFront(
        Windows::Internal::ComTaskPool::TaskList *this)
{
  struct Windows::Internal::ComTaskPool::TaskData *result; // rax

  result = *(struct Windows::Internal::ComTaskPool::TaskData **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = *((_QWORD *)result + 3);
    *((_QWORD *)result + 3) = 0LL;
    if ( *((struct Windows::Internal::ComTaskPool::TaskData **)this + 1) == result )
      *((_QWORD *)this + 1) = 0LL;
  }
  return result;
}

/*
 * XREFs of ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x18008E560
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
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

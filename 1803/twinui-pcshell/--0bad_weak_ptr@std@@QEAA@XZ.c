/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@XZ @ 0x1801E16E8
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     <none>
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(std::bad_weak_ptr *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}

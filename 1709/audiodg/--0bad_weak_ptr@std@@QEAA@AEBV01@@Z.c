/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x14005E084
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x14001D910 (_o___std_exception_copy_0.c)
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(
        std::bad_weak_ptr *this,
        const struct std::bad_weak_ptr *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}

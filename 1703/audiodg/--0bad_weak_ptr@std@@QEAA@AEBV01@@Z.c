/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x14005B238
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(
        std::bad_weak_ptr *this,
        const struct std::bad_weak_ptr *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  _o___std_exception_copy((char *)a2 + 8);
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}

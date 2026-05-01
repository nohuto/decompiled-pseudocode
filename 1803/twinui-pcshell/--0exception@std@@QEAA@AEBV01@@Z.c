/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800FBB30
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1800FBA08 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1801E16C4 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18009912E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8);
  return this;
}

/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x14003190C
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x14001D910 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0();
  return this;
}
